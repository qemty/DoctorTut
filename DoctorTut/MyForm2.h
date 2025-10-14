#pragma once

#include <string>
#include "MyForm3.h"
#include "MyForm4.h"

namespace DoctorTut {
	using namespace System::Data::SQLite;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Silver;
			this->textBox1->Location = System::Drawing::Point(211, 274);
			this->textBox1->MaxLength = 40;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(348, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"USERNAME";
			this->textBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm2::textBox1_DoubleClick);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Silver;
			this->textBox2->Location = System::Drawing::Point(211, 342);
			this->textBox2->MaxLength = 40;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(348, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"PASSWORD";
			this->textBox2->WordWrap = false;
			this->textBox2->DoubleClick += gcnew System::EventHandler(this, &MyForm2::textBox2_DoubleClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(196, 425);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(374, 38);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Обработчик события нажатия кнопки "Войти"
		void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ username = textBox1->Text;
			String^ password = textBox2->Text;

			// Подключение к базе данных
			String^ connectionString = "Data Source=D:\\Projects\\DoctorTut\\DoctorTut\\mydatabase.db;Version=3;";
			SQLiteConnection^ connection = gcnew SQLiteConnection(connectionString);
			connection->Open();

			// Проверка наличия пользователя в базе данных
			String^ query = "SELECT COUNT(*) FROM Users WHERE Username = @Username AND Password = @Password";
			SQLiteCommand^ command = gcnew SQLiteCommand(query, connection);
			command->Parameters->AddWithValue("@Username", username);
			command->Parameters->AddWithValue("@Password", password);

			int result = Convert::ToInt32(command->ExecuteScalar());

			if (result > 0) {
				MessageBox::Show("Пользователь с этими данными уже зарегистрирован.\r\nПожалуйста, воспользуйтесь авторизацией");
			}
			else {
				// Пользователя с такими данными нет в базе

				// Выполнение операции вставки нового пользователя
				String^ insertQuery = "INSERT INTO Users (Username, Password) VALUES (@Username, @Password)";
				command = gcnew SQLiteCommand(insertQuery, connection);
				command->Parameters->AddWithValue("@Username", username);
				command->Parameters->AddWithValue("@Password", password);
				command->ExecuteNonQuery();

				// Получение автоматически сгенерированного значения PatientID
				String^ getPatientIDQuery = "SELECT last_insert_rowid()";
				command = gcnew SQLiteCommand(getPatientIDQuery, connection);
				int patientID = Convert::ToInt32(command->ExecuteScalar());

				// Создание уникального чата для пользователя
				String^ tableName = "user_" + patientID;
				String^ createTableQuery = "CREATE TABLE IF NOT EXISTS " + tableName + " (MessageID INTEGER PRIMARY KEY AUTOINCREMENT, MessageText TEXT)";
				command = gcnew SQLiteCommand(createTableQuery, connection);
				command->ExecuteNonQuery();

				MyForm3^ chatForm = gcnew MyForm3();
				chatForm->Show();
				this->Hide();
			}

			connection->Close();
		}


	private: System::Void textBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Clear();
	}
	private: System::Void textBox2_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Clear();
	this->textBox2->PasswordChar = '*';
	}
};
}
