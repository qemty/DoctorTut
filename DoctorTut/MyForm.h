#pragma once

#include <string>

#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm9.h"
#include "MyForm10.h"
#include "MyForm11.h"
#include "MyForm12.h"
#include "MyForm13.h"



namespace DoctorTut {
	using namespace System::Data::SQLite;

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



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(851, 460);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(310, 41);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton1.BackgroundImage")));
			this->radioButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->radioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton1->FlatAppearance->BorderSize = 0;
			this->radioButton1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->radioButton1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->radioButton1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(12, 12);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(104, 40);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"RuBlue";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton2.BackgroundImage")));
			this->radioButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton2->FlatAppearance->BorderSize = 0;
			this->radioButton2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->radioButton2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->radioButton2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(222, 12);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(101, 40);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"ByBlue";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton3.BackgroundImage")));
			this->radioButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->radioButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton3->FlatAppearance->BorderSize = 0;
			this->radioButton3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->radioButton3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->radioButton3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->radioButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(118, 12);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(102, 40);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"EnBlue";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Transparent;
			this->radioButton4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton4.BackgroundImage")));
			this->radioButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->radioButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton4->FlatAppearance->BorderSize = 0;
			this->radioButton4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->radioButton4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->radioButton4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->radioButton4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(434, 12);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(128, 40);
			this->radioButton4->TabIndex = 7;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"RuGreen";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton5
			// 
			this->radioButton5->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Transparent;
			this->radioButton5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton5.BackgroundImage")));
			this->radioButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->radioButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton5->FlatAppearance->BorderSize = 0;
			this->radioButton5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->radioButton5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->radioButton5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->radioButton5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(692, 12);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(125, 40);
			this->radioButton5->TabIndex = 8;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"ByGreen";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton6
			// 
			this->radioButton6->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton6->AutoSize = true;
			this->radioButton6->BackColor = System::Drawing::Color::Transparent;
			this->radioButton6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton6.BackgroundImage")));
			this->radioButton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->radioButton6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton6->FlatAppearance->BorderSize = 0;
			this->radioButton6->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->radioButton6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->radioButton6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->radioButton6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->ForeColor = System::Drawing::Color::White;
			this->radioButton6->Location = System::Drawing::Point(564, 12);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(126, 40);
			this->radioButton6->TabIndex = 9;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"EnGreen";
			this->radioButton6->UseVisualStyleBackColor = false;
			// 
			// radioButton7
			// 
			this->radioButton7->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton7->AutoSize = true;
			this->radioButton7->BackColor = System::Drawing::Color::Transparent;
			this->radioButton7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton7.BackgroundImage")));
			this->radioButton7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->radioButton7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton7->FlatAppearance->BorderSize = 0;
			this->radioButton7->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->radioButton7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->radioButton7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->radioButton7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton7->ForeColor = System::Drawing::Color::White;
			this->radioButton7->Location = System::Drawing::Point(877, 12);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(127, 40);
			this->radioButton7->TabIndex = 10;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"RuPurple";
			this->radioButton7->UseVisualStyleBackColor = false;
			// 
			// radioButton8
			// 
			this->radioButton8->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton8->AutoSize = true;
			this->radioButton8->BackColor = System::Drawing::Color::Transparent;
			this->radioButton8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton8.BackgroundImage")));
			this->radioButton8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->radioButton8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton8->FlatAppearance->BorderSize = 0;
			this->radioButton8->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->radioButton8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->radioButton8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->radioButton8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton8->ForeColor = System::Drawing::Color::White;
			this->radioButton8->Location = System::Drawing::Point(1133, 12);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(124, 40);
			this->radioButton8->TabIndex = 11;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"ByPurple";
			this->radioButton8->UseVisualStyleBackColor = false;
			// 
			// radioButton9
			// 
			this->radioButton9->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton9->AutoSize = true;
			this->radioButton9->BackColor = System::Drawing::Color::Transparent;
			this->radioButton9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton9.BackgroundImage")));
			this->radioButton9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->radioButton9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton9->FlatAppearance->BorderSize = 0;
			this->radioButton9->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->radioButton9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->radioButton9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->radioButton9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton9->ForeColor = System::Drawing::Color::White;
			this->radioButton9->Location = System::Drawing::Point(1006, 12);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(125, 40);
			this->radioButton9->TabIndex = 12;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"EnPurple";
			this->radioButton9->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(120, 140);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(53, 222);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(279, 238);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 50);
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(53, 361);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 50);
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(303, 305);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 50);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(336, 361);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(100, 50);
			this->pictureBox6->TabIndex = 18;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(303, 499);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 50);
			this->pictureBox7->TabIndex = 19;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(62, 477);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(100, 50);
			this->pictureBox8->TabIndex = 20;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(177, 499);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(100, 50);
			this->pictureBox9->TabIndex = 21;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(560, 384);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(100, 50);
			this->pictureBox10->TabIndex = 25;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(445, 362);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(100, 50);
			this->pictureBox11->TabIndex = 24;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(686, 384);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(100, 50);
			this->pictureBox12->TabIndex = 23;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(719, 246);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(100, 50);
			this->pictureBox13->TabIndex = 22;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Location = System::Drawing::Point(582, 315);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(100, 50);
			this->pictureBox14->TabIndex = 26;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Location = System::Drawing::Point(590, 323);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(100, 50);
			this->pictureBox15->TabIndex = 27;
			this->pictureBox15->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->radioButton9);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ d = gcnew MyForm1();
		this->Hide();
		d->Show();
	}

		   private:
				// Обработчик события изменения выбранного RadioButton на MyForm
			   void OnRadioButtonCheckedChanged(Object^ sender, EventArgs^ e)
			   {
				   RadioButton^ radioButton = dynamic_cast<RadioButton^>(sender);
				   if (radioButton == nullptr)
					   return;

				   // Очищаем текущее фоновое изображение на каждой форме
				   pictureBox1->BackgroundImage = nullptr;
				   pictureBox2->BackgroundImage = nullptr;
				   pictureBox3->BackgroundImage = nullptr;
				   pictureBox4->BackgroundImage = nullptr;
				   pictureBox5->BackgroundImage = nullptr;
				   pictureBox6->BackgroundImage = nullptr;
				   pictureBox7->BackgroundImage = nullptr;
				   pictureBox8->BackgroundImage = nullptr;
				   pictureBox9->BackgroundImage = nullptr;
				   pictureBox10->BackgroundImage = nullptr;
				   pictureBox11->BackgroundImage = nullptr;
				   pictureBox12->BackgroundImage = nullptr;
				   pictureBox13->BackgroundImage = nullptr;
				   pictureBox14->BackgroundImage = nullptr;
				   // ...

				   // В зависимости от выбранного RadioButton, устанавливаем фоновое изображение на соответствующих формах
				   if (radioButton == radioButton1)
				   {
					   pictureBox1->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F
					   pictureBox2->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Авторизация\\Русский\\blue.jpg"); // F1
					   pictureBox3->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Регистрация\\Русский\\blue.jpg"); // F2
					   pictureBox4->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F3
					   pictureBox5->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F4
					   pictureBox6->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F5
					   pictureBox7->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F6
					   pictureBox8->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F7
					   pictureBox9->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F8
					   pictureBox10->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F9
					   pictureBox11->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F10
					   pictureBox12->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F11
					   pictureBox13->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F12
					   pictureBox14->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F13
					   pictureBox15->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F14


					   // ...
				   }
				   else if (radioButton == radioButton2)
				   {
					   pictureBox1->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F
					   pictureBox2->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Авторизация\\Русский\\blue.jpg"); // F1
					   pictureBox3->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Регистрация\\Русский\\blue.jpg"); // F2
					   pictureBox4->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F3
					   pictureBox5->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F4
					   pictureBox6->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F5
					   pictureBox7->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F6
					   pictureBox8->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F7
					   pictureBox9->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F8
					   pictureBox10->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F9
					   pictureBox11->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F10
					   pictureBox12->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F11
					   pictureBox13->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F12
					   pictureBox14->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F13
					   pictureBox15->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F14
				   }
				   else if (radioButton == radioButton3)
				   {
					   pictureBox1->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F
					   pictureBox2->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Авторизация\\Русский\\blue.jpg"); // F1
					   pictureBox3->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Регистрация\\Русский\\blue.jpg"); // F2
					   pictureBox4->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F3
					   pictureBox5->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F4
					   pictureBox6->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F5
					   pictureBox7->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F6
					   pictureBox8->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F7
					   pictureBox9->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F8
					   pictureBox10->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F9
					   pictureBox11->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F10
					   pictureBox12->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F11
					   pictureBox13->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F12
					   pictureBox14->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F13
					   pictureBox15->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F14
				   }
				   else if (radioButton == radioButton4)
				   {
					   pictureBox1->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F
					   pictureBox2->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Авторизация\\Русский\\blue.jpg"); // F1
					   pictureBox3->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Регистрация\\Русский\\blue.jpg"); // F2
					   pictureBox4->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F3
					   pictureBox5->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F4
					   pictureBox6->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F5
					   pictureBox7->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F6
					   pictureBox8->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F7
					   pictureBox9->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F8
					   pictureBox10->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F9
					   pictureBox11->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F10
					   pictureBox12->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F11
					   pictureBox13->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F12
					   pictureBox14->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F13
					   pictureBox15->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F14
				   }
				   else if (radioButton == radioButton5)
				   {
					   pictureBox1->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F
					   pictureBox2->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Авторизация\\Русский\\blue.jpg"); // F1
					   pictureBox3->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Регистрация\\Русский\\blue.jpg"); // F2
					   pictureBox4->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F3
					   pictureBox5->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F4
					   pictureBox6->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F5
					   pictureBox7->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F6
					   pictureBox8->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F7
					   pictureBox9->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F8
					   pictureBox10->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F9
					   pictureBox11->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F10
					   pictureBox12->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F11
					   pictureBox13->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F12
					   pictureBox14->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F13
					   pictureBox15->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F14
				   }
				   else if (radioButton == radioButton6)
				   {
					   pictureBox1->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F
					   pictureBox2->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Авторизация\\Русский\\blue.jpg"); // F1
					   pictureBox3->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Регистрация\\Русский\\blue.jpg"); // F2
					   pictureBox4->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F3
					   pictureBox5->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F4
					   pictureBox6->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F5
					   pictureBox7->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F6
					   pictureBox8->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F7
					   pictureBox9->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F8
					   pictureBox10->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F9
					   pictureBox11->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F10
					   pictureBox12->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F11
					   pictureBox13->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F12
					   pictureBox14->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F13
					   pictureBox15->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F14
				   }
				   else if (radioButton == radioButton7)
				   {
					   pictureBox1->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F
					   pictureBox2->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Авторизация\\Русский\\blue.jpg"); // F1
					   pictureBox3->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Регистрация\\Русский\\blue.jpg"); // F2
					   pictureBox4->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F3
					   pictureBox5->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F4
					   pictureBox6->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F5
					   pictureBox7->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F6
					   pictureBox8->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F7
					   pictureBox9->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F8
					   pictureBox10->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F9
					   pictureBox11->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F10
					   pictureBox12->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F11
					   pictureBox13->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F12
					   pictureBox14->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F13
					   pictureBox15->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F14
				   }
				   else if (radioButton == radioButton8)
				   {
					   pictureBox1->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F
					   pictureBox2->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Авторизация\\Русский\\blue.jpg"); // F1
					   pictureBox3->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Регистрация\\Русский\\blue.jpg"); // F2
					   pictureBox4->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F3
					   pictureBox5->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F4
					   pictureBox6->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F5
					   pictureBox7->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F6
					   pictureBox8->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F7
					   pictureBox9->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F8
					   pictureBox10->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F9
					   pictureBox11->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F10
					   pictureBox12->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F11
					   pictureBox13->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F12
					   pictureBox14->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F13
					   pictureBox15->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F14
				   }
				   else if (radioButton == radioButton9)
				   {
					   pictureBox1->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F
					   pictureBox2->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Авторизация\\Русский\\blue.jpg"); // F1
					   pictureBox3->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Регистрация\\Русский\\blue.jpg"); // F2
					   pictureBox4->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F3
					   pictureBox5->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F4
					   pictureBox6->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F5
					   pictureBox7->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F6
					   pictureBox8->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F7
					   pictureBox9->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F8
					   pictureBox10->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F9
					   pictureBox11->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F10
					   pictureBox12->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F11
					   pictureBox13->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F12
					   pictureBox14->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F13
					   pictureBox15->BackgroundImage = Image::FromFile("D:\\Projects\\DoctorTut\\Материалы\\! Фоны\\Старт окно\\Русский\\blue.jpg");  // F14
				   }
			   }
			 
			  

	};
}
