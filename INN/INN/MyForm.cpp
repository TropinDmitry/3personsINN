
#include"MyForm.h"
#include<iostream>
#include<fstream>
#include<thread> // для многопоточности
#include<random>
#include<time.h>
#include<Windows.h>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::Drawing;

int* M_ra;
int** Matrix;
int N, M;
int ee;
bool Q = 0, Q2 = 0;

struct Neuron
{
	double value;
	double error;
	void act()
	{
		value = (1 / (1 + pow(2.71828, -value))); //функция активации
	}
};

struct data_one
{
	double info[35];
	char r_res;
};

class network
{
public:
	int layers; // количество слоев нейросети
	Neuron** neurons; // двухмерный массив нейронов
	double*** weights; // трехмерный массив, содержащий веса |1-я * - расположение нейрона в слое, 2-я * - номер нейрона, 
	//                    3-я * - номер связи нейрона со следующим нейроном|

	int* size; // число нейронов в каждом слою
	int threadsNum = 1;
	double Pr_sigm(double x/*значение сигмоидной функции*/) { // производная от сигмоидной функции
		if ((fabs(x - 1) < 1e-9) || (fabs(x) < 1e-9)) return 0.0;
		double res = x * (1.0 - x);
		return res;
	}
	
	void SetLayers(int n/*количество слоев*/, int* p/*массив size*/) {
		srand(time(0));
		layers = n;
		neurons = new Neuron * [n];
		weights = new double** [n - 1];
		size = new int[n];
		for (int i = 0; i < n; i++) {
			size[i] = p[i];
			neurons[i] = new Neuron[p[i]];
			if (i < n - 1) {
				weights[i] = new double* [p[i]];
				for (int j = 0; j < p[i]; j++) {
					weights[i][j] = new double[p[i + 1]];
					for (int k = 0; k < p[i + 1]; k++) {
						weights[i][j][k] = ((rand() % 100)) * 0.01 / size[i]; // генерация случайных весов
					}
				}
			}
		}
	}

	void Set_Input(double p[]/*входные значения для нейросети*/)
	{
		for (int i = 0; i < size[0]; i++) 
		{
			neurons[0][i].value = p[i];
		}
	}

	void LayersCleaner(int LayerNumber, int start, int stop)
	{ // для очистки слоев
		srand(time(0));
		for (int i = start; i < stop; i++)
		{
			neurons[LayerNumber][i].value = 0;
		}
	}

	void ForwardFeeder(int LayerNumber, int start, int stop) // для быстродействия программы
	{
		for (int j = start; j < stop; j++) {
			for (int k = 0; k < size[LayerNumber - 1]; k++) {
				neurons[LayerNumber][j].value += neurons[LayerNumber - 1][k].value * weights[LayerNumber - 1][k][j];
			}
			neurons[LayerNumber][j].act();
		}
	}

	double ForwardFeed()
	{
		setlocale(LC_ALL, "ru");
		for (int i = 1; i < layers; i++) {
			if (threadsNum == 1)
			{
				thread th1([&]() {
					LayersCleaner(i, 0, size[i]);
					});
				th1.join();
			}

			if (threadsNum == 1) {
				thread th1([&]() {
					ForwardFeeder(i, 0, size[i]);
					});
				th1.join();
			}

		}
		double max = 0;
		double prediction = 0;
		for (int i = 0; i < size[layers - 1]; i++) {

			if (neurons[layers - 1][i].value > max) {
				max = neurons[layers - 1][i].value;
				prediction = i;
			}
		}
		return prediction;
	}
	double ForwardFeed(string param)
	{
		setlocale(LC_ALL, "ru");
		for (int i = 1; i < layers; i++) {
			if (threadsNum == 1) {
				thread th1([&]() {
					LayersCleaner(i, 0, size[i]);
					});
				th1.join();
			}

			if (threadsNum == 1) {
				thread th1([&]() {
					ForwardFeeder(i, 0, size[i]);
					});
				th1.join();
			}
		}
		double max = 0;
		double prediction = 0;
		for (int i = 0; i < size[layers - 1]; i++)
		{
			cout << char(i + 48) << " : " << neurons[layers - 1][i].value << endl;
			if (neurons[layers - 1][i].value > max) {
				max = neurons[layers - 1][i].value;
				prediction = i;
			}
		}
		return prediction;
	}

	void BackPropogation(double prediction, double rresult, double lr)  // Метод обратного распространения ошибки
	{
		for (int i = layers - 1; i > 0; i--) {
			if (threadsNum == 1) {
				if (i == layers - 1) {
					for (int j = 0; j < size[i]; j++) {
						if (j != int(rresult)) {
							neurons[i][j].error = -pow((neurons[i][j].value), 2);
						}
						else {
							neurons[i][j].error = pow(1.0 - neurons[i][j].value, 2);
						}

					}
				}
				else {
					for (int j = 0; j < size[i]; j++) {
						double error = 0.0;
						for (int k = 0; k < size[i + 1]; k++) {
							error += neurons[i + 1][k].error * weights[i][j][k];
						}
						neurons[i][j].error = error;
					}
				}
			}

		}
		for (int i = 0; i < layers - 1; i++) {
			if (threadsNum == 1) {
				for (int j = 0; j < size[i]; j++) {
					for (int k = 0; k < size[i + 1]; k++) {
						weights[i][j][k] += lr * neurons[i + 1][k].error * Pr_sigm(neurons[i + 1][k].value) * neurons[i][j].value;
					}
				}
			}
		}
	}

};

network Elem;
const int l = 2;
const int input_l = 35;
double input[input_l];

void INN::MyForm::Click(int i, int j, PictureBox^ button)
{
	if (Q2)
	{
		if (button->BackColor != System::Drawing::Color::Black)
		{
			button->BackColor = System::Drawing::Color::Black;
			Matrix[i][j] = 1;
		}
		else
		{
			button->BackColor = System::Drawing::Color::White;
			Matrix[i][j] = 0;
		}
	}
	else
		MessageBox::Show("Нажмите <<Сформировать матрицу>>", "Внимание!");
}
void INN::MyForm::Clear(PictureBox^ button)
{
	if (button->BackColor == System::Drawing::Color::Black)
	{
		button->BackColor = System::Drawing::Color::White;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			Matrix[i][j] = 0;
	}
}

System::Void INN::MyForm::pictureBox00_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(0, 0, pictureBox00);
}
System::Void INN::MyForm::pictureBox01_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(0, 1, pictureBox01);
}
System::Void INN::MyForm::pictureBox02_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(0, 2, pictureBox02);
}
System::Void INN::MyForm::pictureBox03_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(0, 3, pictureBox03);
}
System::Void INN::MyForm::pictureBox04_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(0, 4, pictureBox04);
}
System::Void INN::MyForm::pictureBox10_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(1, 0, pictureBox10);
}
System::Void INN::MyForm::pictureBox11_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(1, 1, pictureBox11);
}
System::Void INN::MyForm::pictureBox12_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(1, 2, pictureBox12);
}
System::Void INN::MyForm::pictureBox13_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(1, 3, pictureBox13);
}
System::Void INN::MyForm::pictureBox14_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(1, 4, pictureBox14);
}
System::Void INN::MyForm::pictureBox20_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(2, 0, pictureBox20);
}
System::Void INN::MyForm::pictureBox21_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(2, 1, pictureBox21);
}
System::Void INN::MyForm::pictureBox22_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(2, 2, pictureBox22);
}
System::Void INN::MyForm::pictureBox23_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(2, 3, pictureBox23);
}
System::Void INN::MyForm::pictureBox24_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(2, 4, pictureBox24);
}
System::Void INN::MyForm::pictureBox30_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(3, 0, pictureBox30);
}
System::Void INN::MyForm::pictureBox31_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(3, 1, pictureBox31);
}
System::Void INN::MyForm::pictureBox32_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(3, 2, pictureBox32);
}
System::Void INN::MyForm::pictureBox33_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(3, 3, pictureBox33);
}
System::Void INN::MyForm::pictureBox34_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(3, 4, pictureBox34);
}
System::Void INN::MyForm::pictureBox40_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(4, 0, pictureBox40);
}
System::Void INN::MyForm::pictureBox41_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(4, 1, pictureBox41);
}
System::Void INN::MyForm::pictureBox42_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(4, 2, pictureBox42);
}
System::Void INN::MyForm::pictureBox43_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(4, 3, pictureBox43);
}
System::Void INN::MyForm::pictureBox44_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(4, 4, pictureBox44);
}
System::Void INN::MyForm::pictureBox50_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(5, 0, pictureBox50);
}
System::Void INN::MyForm::pictureBox51_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(5, 1, pictureBox51);
}
System::Void INN::MyForm::pictureBox52_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(5, 2, pictureBox52);
}
System::Void INN::MyForm::pictureBox53_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(5, 3, pictureBox53);
}
System::Void INN::MyForm::pictureBox54_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(5, 4, pictureBox54);
}
System::Void INN::MyForm::pictureBox60_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(6, 0, pictureBox60);
}
System::Void INN::MyForm::pictureBox61_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(6, 1, pictureBox61);
}
System::Void INN::MyForm::pictureBox62_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(6, 2, pictureBox62);
}
System::Void INN::MyForm::pictureBox63_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(6, 3, pictureBox63);
}
System::Void INN::MyForm::pictureBox64_Click(System::Object^ sender, System::EventArgs^ e)
{
	Click(6, 4, pictureBox64);
}

System::Void INN::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Clear(pictureBox00);
	Clear(pictureBox01);
	Clear(pictureBox02);
	Clear(pictureBox03);
	Clear(pictureBox04);
	Clear(pictureBox10);
	Clear(pictureBox11);
	Clear(pictureBox12);
	Clear(pictureBox13);
	Clear(pictureBox14);
	Clear(pictureBox20);
	Clear(pictureBox21);
	Clear(pictureBox22);
	Clear(pictureBox23);
	Clear(pictureBox24);
	Clear(pictureBox30);
	Clear(pictureBox31);
	Clear(pictureBox32);
	Clear(pictureBox33);
	Clear(pictureBox34);
	Clear(pictureBox40);
	Clear(pictureBox41);
	Clear(pictureBox42);
	Clear(pictureBox43);
	Clear(pictureBox44);
	Clear(pictureBox50);
	Clear(pictureBox51);
	Clear(pictureBox52);
	Clear(pictureBox53);
	Clear(pictureBox54);
	Clear(pictureBox60);
	Clear(pictureBox61);
	Clear(pictureBox62);
	Clear(pictureBox63);
	Clear(pictureBox64);
}// clear

int INN::MyForm::ZoomX(double x)
{
	int ret;
	ret = xx1 + (int)((x - x1) * (xx2 - xx1) / (x2 - x1));
	return ret;
}

int INN::MyForm::ZoomY(double y)
{
	int ret;
	ret = yy2 + (int)((y - y1) * (yy1 - yy2) / (y2 - y1));
	return ret;
}

System::Void INN::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream fin;
	ofstream fout; ofstream fout2;
	fout.open("log.txt");
	network nw; 
	int S[l] = { input_l, 10 };
	char r_res; //правильный результат
	double result; // номер нейрона с макс значением
	double r_answ = 0; // количество правильных ответов
	int maxr_answ = 0, i;
	int maxraepoch = 0;
	const int n = 12;
	double time = 0;
	M_ra = new int[30];
	data_one* data = new data_one[n];

	fin.open("lib.txt");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < input_l; j++)
		{
			fin >> data[i].info[j];
		}
		fin >> data[i].r_res;
		data[i].r_res -= 48;
	}

	nw.SetLayers(l, S);
	fout2.open("RA.txt");
	for (int e = 0; r_answ / n * 100 < 100; e++)
	{
		fout << "Эпоха № " << e << endl;
		ee = e;
		double epoch_start = clock();
		r_answ = 0;
		double w_delta = 0;

		for (i = 0; i < n; i++)
		{
			for (int j = 0; j < 35; j++)
			{
				input[j] = data[i].info[j];
			}
			r_res = data[i].r_res;
			nw.Set_Input(input);
			double FF_start = clock();

			result = nw.ForwardFeed();

			double FF_stop = clock();
			if (result == r_res)
			{
				fout2 << "Угадал цифру " << char(r_res + 48) << endl;
				r_answ++;
			}
			else
			{
				double BP_start = clock();
				nw.BackPropogation(result, r_res, 0.5);
				double BP_stop = clock();
			}
		}

		double epoch_stop = clock();
		fout2 << "Правильные ответы: " << r_answ / n * 100 << "% \t Max RA: " << double(maxr_answ) / n * 100 << " ( Эпоха " << maxraepoch << " )" << endl;
		time = 0; 
		if (r_answ > maxr_answ)
		{
			maxr_answ = r_answ;
			maxraepoch = e;
		}
		if (maxraepoch < e - 250)
		{
			maxr_answ = 0;
		}
		M_ra[e] = int((double)maxr_answ / n * 100);
	}
	//Сеть обучена
	fout2.close();
	fin.close();
	label3->Text = System::Convert::ToString("Сеть обучена.");
	Elem = nw;
	Q = 1;
}

System::Void INN::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete[] Matrix;
	N = 7;
	M = 5;
	Matrix = new int* [N];
	for (int i = 0; i < N; i++)
	{
		Matrix[i] = new int[M];
		for (int j = 0; j < M; j++)
			Matrix[i][j] = 0;
	}
	Q2 = 1;
}

System::Void INN::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Q)
	{
		ifstream fin;
		char right_res;
		remove("test.txt");
		ofstream fout1;
		fout1.open("test.txt");
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
				fout1 << Matrix[i][j] << ' ';
			fout1 << endl;
		}
		fout1.close();
		fin.open("test.txt");
		for (int i = 0; i < input_l; i++)
		{
			fin >> input[i];
		}
		Elem.Set_Input(input);
		/*int k = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				input[k] = Matrix[i][j]; k++;
			}
		}*/

		label1->Text = System::Convert::ToString(char(Elem.ForwardFeed()));
		fin.close();
	}
	else
		MessageBox::Show("ИНС всё ещё не обучена!", "Внимание!");
}

System::Void INN::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	pictureBox1->Refresh();
	Graphics^ Графика = pictureBox1->CreateGraphics();
	Графика->Clear(SystemColors::Control);
	int tx, ty, rx, ry;
	int i;
	double x, y;
	//int n = 100;
	x1 = -1;
	x2 = ee;
	y1 = -10;
	y2 = 100;


	// Установка границ экранных координат
	xx1 = 0;
	yy1 = 0;
	xx2 = pictureBox1->Width;
	yy2 = pictureBox1->Height;

	// Рисование графика

	Brush^ Заливка = gcnew SolidBrush(Color::White);

	Pen^ Перо = gcnew Pen(Color::Black);
	Графика->DrawRectangle(Перо, 0, 0, pictureBox1->Width, pictureBox1->Height);

	// Рисование осей координат
	// Взять экранную точку начала координат X
	rx = ZoomX(0);
	ry = ZoomY(y1);
	// провести линию оси координат X
	tx = ZoomX(0);
	ty = ZoomY(y2);
	Графика->DrawLine(System::Drawing::Pens::Black, rx, ry, tx, ty);

	// Точка начала координат Y
	rx = ZoomX(x1);
	ry = ZoomY(0);
	// нарисовать ось Y
	tx = ZoomX(x2);
	ty = ZoomY(0);
	Графика->DrawLine(System::Drawing::Pens::Black, rx, ry, tx, ty);

	// Рисование графика функции

	x = 0;
	y = 100-(double)M_ra[0]; 
	rx = ZoomX(x);
	ry = ZoomY(y);

	for (i = 1; i <= ee; i++)
	{
		tx = ZoomX(i);
		ty = ZoomY(100-M_ra[i]); 
		Графика->DrawLine(System::Drawing::Pens::Black, xx1+30, ry, xx1+50, ry);
		Графика->DrawLine(System::Drawing::Pens::Black, rx, yy2 - 20, rx, yy2 - 40);
		Графика->DrawLine(System::Drawing::Pens::Blue, rx, ry, tx, ty);
		rx = tx;
		ry = ty;
	}
}