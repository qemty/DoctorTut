#pragma once

#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm6.h" 
#include "MyForm7.h" 

#include <Windows.h>
#include <string>

namespace DoctorTut {
	using namespace System::Data::SQLite;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:

		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(196, 423);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(376, 41);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Silver;
			this->textBox1->Location = System::Drawing::Point(211, 274);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(341, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"USERNAME";
			this->textBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm1::textBox1_DoubleClick);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Silver;
			this->textBox2->Location = System::Drawing::Point(211, 341);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(341, 20);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"PASSWORD";
			this->textBox2->DoubleClick += gcnew System::EventHandler(this, &MyForm1::textBox2_DoubleClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Teal;
			this->button2->Location = System::Drawing::Point(423, 505);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 26);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Authorization";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private:
			int GetPatientID(String^ username)
			{
				int patientID = 0;

				String^ connectionString = "Data Source=D:\\Projects\\DoctorTut\\DoctorTut\\mydatabase.db;Version=3;";
				SQLiteConnection^ connection = gcnew SQLiteConnection(connectionString);

				try
				{
					connection->Open();

					String^ query = "SELECT PatientID FROM Users WHERE Username = @Username";
					SQLiteCommand^ command = gcnew SQLiteCommand(query, connection);
					command->Parameters->AddWithValue("@Username", username);

					SQLiteDataReader^ reader = command->ExecuteReader();

					if (reader->Read())
					{
						patientID = reader->GetInt32(0);
					}

					reader->Close();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Error: " + ex->Message);
				}
				finally
				{
					connection->Close();
				}

				return patientID;
			}


	private:

		void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ Username = textBox1->Text;
			String^ password = textBox2->Text;

			String^ connectionString = "Data Source=D:\\Projects\\DoctorTut\\DoctorTut\\mydatabase.db;Version=3;";
			SQLiteConnection^ connection = gcnew SQLiteConnection(connectionString);

			try
			{
				connection->Open();

				String^ query = "SELECT COUNT(*) FROM Users WHERE Username = @Username AND Password = @Password";
				SQLiteCommand^ command = gcnew SQLiteCommand(query, connection);
				command->Parameters->AddWithValue("@Username", Username);
				command->Parameters->AddWithValue("@Password", password);

				int result = Convert::ToInt32(command->ExecuteScalar());

				if (Username == "12" && password == "12")
				{
					MyForm6^ f = gcnew MyForm6();
					f->Show();
				}
				else 
				{
					if (result > 0)
					{
						int patientID = GetPatientID(Username);
						if (patientID > 0)
						{
							MyForm3^ f = gcnew MyForm3();
							f->setPatientID(patientID);
							f->Show();
						}

					}
					else						
					{
						MessageBox::Show("Ќеверный логин или пароль!");
					}
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error: " + ex->Message);
			}
			finally
			{
				connection->Close();
			}
		}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ f = gcnew MyForm2();
		f->Show();
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
