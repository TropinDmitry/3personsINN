#pragma once
//#include "GGWP.h"



namespace INN 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:


	private: System::Windows::Forms::Button^ button2;

		   double x1, x2, y1, y2;
		   int xx1, xx2, yy1, yy2;


	private: System::Windows::Forms::PictureBox^ pictureBox00;
	private: System::Windows::Forms::PictureBox^ pictureBox01;
	private: System::Windows::Forms::PictureBox^ pictureBox02;
	private: System::Windows::Forms::PictureBox^ pictureBox03;
	private: System::Windows::Forms::PictureBox^ pictureBox04;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox40;
	private: System::Windows::Forms::PictureBox^ pictureBox50;
	private: System::Windows::Forms::PictureBox^ pictureBox60;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
	private: System::Windows::Forms::PictureBox^ pictureBox41;
	private: System::Windows::Forms::PictureBox^ pictureBox42;
	private: System::Windows::Forms::PictureBox^ pictureBox43;
	private: System::Windows::Forms::PictureBox^ pictureBox44;
	private: System::Windows::Forms::PictureBox^ pictureBox51;
	private: System::Windows::Forms::PictureBox^ pictureBox52;
	private: System::Windows::Forms::PictureBox^ pictureBox53;
	private: System::Windows::Forms::PictureBox^ pictureBox54;
	private: System::Windows::Forms::PictureBox^ pictureBox61;
	private: System::Windows::Forms::PictureBox^ pictureBox62;
	private: System::Windows::Forms::PictureBox^ pictureBox63;
	private: System::Windows::Forms::PictureBox^ pictureBox64;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;


	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	int ZoomX(double x);
	int ZoomY(double y);

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>


		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox00 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox01 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox02 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox03 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox04 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox00))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Elephant", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(238, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 42);
			this->button2->TabIndex = 43;
			this->button2->Text = L"Обучить нейросеть";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox00
			// 
			this->pictureBox00->BackColor = System::Drawing::Color::White;
			this->pictureBox00->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox00->Location = System::Drawing::Point(6, 24);
			this->pictureBox00->Name = L"pictureBox00";
			this->pictureBox00->Size = System::Drawing::Size(30, 30);
			this->pictureBox00->TabIndex = 0;
			this->pictureBox00->TabStop = false;
			this->pictureBox00->Click += gcnew System::EventHandler(this, &MyForm::pictureBox00_Click);
			// 
			// pictureBox01
			// 
			this->pictureBox01->BackColor = System::Drawing::Color::White;
			this->pictureBox01->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox01->Location = System::Drawing::Point(36, 24);
			this->pictureBox01->Name = L"pictureBox01";
			this->pictureBox01->Size = System::Drawing::Size(30, 30);
			this->pictureBox01->TabIndex = 1;
			this->pictureBox01->TabStop = false;
			this->pictureBox01->Click += gcnew System::EventHandler(this, &MyForm::pictureBox01_Click);
			// 
			// pictureBox02
			// 
			this->pictureBox02->BackColor = System::Drawing::Color::White;
			this->pictureBox02->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox02->Location = System::Drawing::Point(66, 24);
			this->pictureBox02->Name = L"pictureBox02";
			this->pictureBox02->Size = System::Drawing::Size(30, 30);
			this->pictureBox02->TabIndex = 7;
			this->pictureBox02->TabStop = false;
			this->pictureBox02->Click += gcnew System::EventHandler(this, &MyForm::pictureBox02_Click);
			// 
			// pictureBox03
			// 
			this->pictureBox03->BackColor = System::Drawing::Color::White;
			this->pictureBox03->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox03->Location = System::Drawing::Point(96, 24);
			this->pictureBox03->Name = L"pictureBox03";
			this->pictureBox03->Size = System::Drawing::Size(30, 30);
			this->pictureBox03->TabIndex = 8;
			this->pictureBox03->TabStop = false;
			this->pictureBox03->Click += gcnew System::EventHandler(this, &MyForm::pictureBox03_Click);
			// 
			// pictureBox04
			// 
			this->pictureBox04->BackColor = System::Drawing::Color::White;
			this->pictureBox04->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox04->Location = System::Drawing::Point(126, 24);
			this->pictureBox04->Name = L"pictureBox04";
			this->pictureBox04->Size = System::Drawing::Size(30, 30);
			this->pictureBox04->TabIndex = 11;
			this->pictureBox04->TabStop = false;
			this->pictureBox04->Click += gcnew System::EventHandler(this, &MyForm::pictureBox04_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::White;
			this->pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox10->Location = System::Drawing::Point(6, 54);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(30, 30);
			this->pictureBox10->TabIndex = 12;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::White;
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox11->Location = System::Drawing::Point(36, 54);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(30, 30);
			this->pictureBox11->TabIndex = 13;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::White;
			this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox12->Location = System::Drawing::Point(66, 54);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(30, 30);
			this->pictureBox12->TabIndex = 14;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::White;
			this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox13->Location = System::Drawing::Point(96, 54);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(30, 30);
			this->pictureBox13->TabIndex = 15;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::White;
			this->pictureBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox14->Location = System::Drawing::Point(126, 54);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(30, 30);
			this->pictureBox14->TabIndex = 16;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::White;
			this->pictureBox20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox20->Location = System::Drawing::Point(6, 84);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(30, 30);
			this->pictureBox20->TabIndex = 17;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &MyForm::pictureBox20_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::White;
			this->pictureBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox21->Location = System::Drawing::Point(36, 84);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(30, 30);
			this->pictureBox21->TabIndex = 18;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &MyForm::pictureBox21_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::White;
			this->pictureBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox22->Location = System::Drawing::Point(66, 84);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(30, 30);
			this->pictureBox22->TabIndex = 19;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &MyForm::pictureBox22_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::White;
			this->pictureBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox23->Location = System::Drawing::Point(96, 84);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(30, 30);
			this->pictureBox23->TabIndex = 20;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &MyForm::pictureBox23_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::White;
			this->pictureBox24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox24->Location = System::Drawing::Point(126, 84);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(30, 30);
			this->pictureBox24->TabIndex = 21;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &MyForm::pictureBox24_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::White;
			this->pictureBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox30->Location = System::Drawing::Point(6, 114);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(30, 30);
			this->pictureBox30->TabIndex = 22;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &MyForm::pictureBox30_Click);
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::White;
			this->pictureBox40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox40->Location = System::Drawing::Point(6, 144);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(30, 30);
			this->pictureBox40->TabIndex = 23;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Click += gcnew System::EventHandler(this, &MyForm::pictureBox40_Click);
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::White;
			this->pictureBox50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox50->Location = System::Drawing::Point(6, 174);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(30, 30);
			this->pictureBox50->TabIndex = 24;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Click += gcnew System::EventHandler(this, &MyForm::pictureBox50_Click);
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackColor = System::Drawing::Color::White;
			this->pictureBox60->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox60->Location = System::Drawing::Point(6, 204);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(30, 30);
			this->pictureBox60->TabIndex = 25;
			this->pictureBox60->TabStop = false;
			this->pictureBox60->Click += gcnew System::EventHandler(this, &MyForm::pictureBox60_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::White;
			this->pictureBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox31->Location = System::Drawing::Point(36, 114);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(30, 30);
			this->pictureBox31->TabIndex = 26;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &MyForm::pictureBox31_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::White;
			this->pictureBox32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox32->Location = System::Drawing::Point(66, 114);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(30, 30);
			this->pictureBox32->TabIndex = 27;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &MyForm::pictureBox32_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::White;
			this->pictureBox33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox33->Location = System::Drawing::Point(96, 114);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(30, 30);
			this->pictureBox33->TabIndex = 28;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Click += gcnew System::EventHandler(this, &MyForm::pictureBox33_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::White;
			this->pictureBox34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox34->Location = System::Drawing::Point(126, 114);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(30, 30);
			this->pictureBox34->TabIndex = 29;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &MyForm::pictureBox34_Click);
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackColor = System::Drawing::Color::White;
			this->pictureBox41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox41->Location = System::Drawing::Point(36, 144);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(30, 30);
			this->pictureBox41->TabIndex = 30;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Click += gcnew System::EventHandler(this, &MyForm::pictureBox41_Click);
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::White;
			this->pictureBox42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox42->Location = System::Drawing::Point(66, 144);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(30, 30);
			this->pictureBox42->TabIndex = 31;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Click += gcnew System::EventHandler(this, &MyForm::pictureBox42_Click);
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::White;
			this->pictureBox43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox43->Location = System::Drawing::Point(96, 144);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(30, 30);
			this->pictureBox43->TabIndex = 32;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Click += gcnew System::EventHandler(this, &MyForm::pictureBox43_Click);
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::White;
			this->pictureBox44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox44->Location = System::Drawing::Point(126, 144);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(30, 30);
			this->pictureBox44->TabIndex = 33;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Click += gcnew System::EventHandler(this, &MyForm::pictureBox44_Click);
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackColor = System::Drawing::Color::White;
			this->pictureBox51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox51->Location = System::Drawing::Point(36, 174);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(30, 30);
			this->pictureBox51->TabIndex = 34;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Click += gcnew System::EventHandler(this, &MyForm::pictureBox51_Click);
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackColor = System::Drawing::Color::White;
			this->pictureBox52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox52->Location = System::Drawing::Point(66, 174);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(30, 30);
			this->pictureBox52->TabIndex = 35;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Click += gcnew System::EventHandler(this, &MyForm::pictureBox52_Click);
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackColor = System::Drawing::Color::White;
			this->pictureBox53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox53->Location = System::Drawing::Point(96, 174);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(30, 30);
			this->pictureBox53->TabIndex = 36;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Click += gcnew System::EventHandler(this, &MyForm::pictureBox53_Click);
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackColor = System::Drawing::Color::White;
			this->pictureBox54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox54->Location = System::Drawing::Point(126, 174);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(30, 30);
			this->pictureBox54->TabIndex = 37;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Click += gcnew System::EventHandler(this, &MyForm::pictureBox54_Click);
			// 
			// pictureBox61
			// 
			this->pictureBox61->BackColor = System::Drawing::Color::White;
			this->pictureBox61->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox61->Location = System::Drawing::Point(36, 204);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(30, 30);
			this->pictureBox61->TabIndex = 38;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Click += gcnew System::EventHandler(this, &MyForm::pictureBox61_Click);
			// 
			// pictureBox62
			// 
			this->pictureBox62->BackColor = System::Drawing::Color::White;
			this->pictureBox62->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox62->Location = System::Drawing::Point(66, 204);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(30, 30);
			this->pictureBox62->TabIndex = 39;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Click += gcnew System::EventHandler(this, &MyForm::pictureBox62_Click);
			// 
			// pictureBox63
			// 
			this->pictureBox63->BackColor = System::Drawing::Color::White;
			this->pictureBox63->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox63->Location = System::Drawing::Point(96, 204);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(30, 30);
			this->pictureBox63->TabIndex = 40;
			this->pictureBox63->TabStop = false;
			this->pictureBox63->Click += gcnew System::EventHandler(this, &MyForm::pictureBox63_Click);
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackColor = System::Drawing::Color::White;
			this->pictureBox64->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox64->Location = System::Drawing::Point(126, 204);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(30, 30);
			this->pictureBox64->TabIndex = 41;
			this->pictureBox64->TabStop = false;
			this->pictureBox64->Click += gcnew System::EventHandler(this, &MyForm::pictureBox64_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Brown;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(36, 252);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 23);
			this->button1->TabIndex = 42;
			this->button1->Text = L"Очистить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBox00);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->pictureBox24);
			this->groupBox2->Controls->Add(this->pictureBox30);
			this->groupBox2->Controls->Add(this->pictureBox64);
			this->groupBox2->Controls->Add(this->pictureBox23);
			this->groupBox2->Controls->Add(this->pictureBox40);
			this->groupBox2->Controls->Add(this->pictureBox63);
			this->groupBox2->Controls->Add(this->pictureBox22);
			this->groupBox2->Controls->Add(this->pictureBox50);
			this->groupBox2->Controls->Add(this->pictureBox62);
			this->groupBox2->Controls->Add(this->pictureBox21);
			this->groupBox2->Controls->Add(this->pictureBox60);
			this->groupBox2->Controls->Add(this->pictureBox61);
			this->groupBox2->Controls->Add(this->pictureBox20);
			this->groupBox2->Controls->Add(this->pictureBox31);
			this->groupBox2->Controls->Add(this->pictureBox54);
			this->groupBox2->Controls->Add(this->pictureBox14);
			this->groupBox2->Controls->Add(this->pictureBox53);
			this->groupBox2->Controls->Add(this->pictureBox32);
			this->groupBox2->Controls->Add(this->pictureBox13);
			this->groupBox2->Controls->Add(this->pictureBox52);
			this->groupBox2->Controls->Add(this->pictureBox33);
			this->groupBox2->Controls->Add(this->pictureBox01);
			this->groupBox2->Controls->Add(this->pictureBox12);
			this->groupBox2->Controls->Add(this->pictureBox51);
			this->groupBox2->Controls->Add(this->pictureBox34);
			this->groupBox2->Controls->Add(this->pictureBox02);
			this->groupBox2->Controls->Add(this->pictureBox11);
			this->groupBox2->Controls->Add(this->pictureBox44);
			this->groupBox2->Controls->Add(this->pictureBox41);
			this->groupBox2->Controls->Add(this->pictureBox03);
			this->groupBox2->Controls->Add(this->pictureBox10);
			this->groupBox2->Controls->Add(this->pictureBox43);
			this->groupBox2->Controls->Add(this->pictureBox42);
			this->groupBox2->Controls->Add(this->pictureBox04);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(35, 25);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(163, 300);
			this->groupBox2->TabIndex = 48;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Матрица";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(327, 353);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 31);
			this->label1->TabIndex = 51;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Elephant", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(238, 229);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 36);
			this->button3->TabIndex = 52;
			this->button3->Text = L"Начать тест";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Info;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Elephant", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(41, 353);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 42);
			this->button5->TabIndex = 50;
			this->button5->Text = L"Сформировать матрицу";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(261, 309);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 16);
			this->label2->TabIndex = 53;
			this->label2->Text = L"Угадал цифру:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(261, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 16);
			this->label3->TabIndex = 54;
			this->label3->Text = L"Сеть не обучена!";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Location = System::Drawing::Point(437, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(350, 350);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Info;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(530, 401);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 23);
			this->button4->TabIndex = 56;
			this->button4->Text = L"Нарисовать график";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->ClientSize = System::Drawing::Size(819, 444);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ИНС";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox00))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void Click(int i, int j, PictureBox^ button);

	private: void Clear(PictureBox^ button);


	private: System::Void pictureBox00_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox01_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox02_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox03_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox04_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox20_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox21_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox22_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox24_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox30_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox31_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox32_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox33_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox34_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox40_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox41_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox42_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox43_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox44_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox50_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox51_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox52_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox53_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox54_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox60_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox61_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox62_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox63_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox64_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
};
}
