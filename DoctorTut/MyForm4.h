#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <vcclr.h>

namespace DoctorTut {
	using namespace System::Data::SQLite;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		void SetPatientID(int id)
		{
			PatientID = id;
		}


	public:
	private:
		int PatientID;

	public:
		MyForm4(void)
		{
			InitializeComponent();
			LoadChatMessages();
		}

	protected:
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtMessage;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::TextBox^ txtChat;
	protected:

	private:
		System::ComponentModel::Container^ components;

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->txtMessage = (gcnew System::Windows::Forms::TextBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->txtChat = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtMessage
			// 
			this->txtMessage->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMessage->Location = System::Drawing::Point(140, 542);
			this->txtMessage->Multiline = true;
			this->txtMessage->Name = L"txtMessage";
			this->txtMessage->Size = System::Drawing::Size(906, 51);
			this->txtMessage->TabIndex = 0;
			// 
			// btnSend
			// 
			this->btnSend->BackColor = System::Drawing::Color::Transparent;
			this->btnSend->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSend.BackgroundImage")));
			this->btnSend->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSend->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSend->FlatAppearance->BorderSize = 0;
			this->btnSend->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnSend->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnSend->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSend->Font = (gcnew System::Drawing::Font(L"Montserrat", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSend->ForeColor = System::Drawing::Color::CadetBlue;
			this->btnSend->Location = System::Drawing::Point(1052, 542);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(55, 51);
			this->btnSend->TabIndex = 1;
			this->btnSend->UseVisualStyleBackColor = false;
			this->btnSend->Click += gcnew System::EventHandler(this, &MyForm4::btnSend_Click);
			// 
			// txtChat
			// 
			this->txtChat->BackColor = System::Drawing::Color::White;
			this->txtChat->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtChat->Location = System::Drawing::Point(140, 50);
			this->txtChat->Multiline = true;
			this->txtChat->Name = L"txtChat";
			this->txtChat->ReadOnly = true;
			this->txtChat->Size = System::Drawing::Size(967, 486);
			this->txtChat->TabIndex = 2;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->txtChat);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->txtMessage);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chat";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
		void SaveChatMessage(String^ sender, String^ recipient, String^ message, int PatientID)
		{
			try
			{
				String^ connectionString = "Data Source=D:\\Projects\\DoctorTut\\DoctorTut\\mydatabase.db;Version=3;New=False;Compress=True;";

				SQLiteConnection^ connection = gcnew SQLiteConnection(connectionString);
				connection->Open();

				SQLiteCommand^ command = connection->CreateCommand();
				command->CommandText = "INSERT INTO ChatMessages (Sender, Recipient, Message, Timestamp, PatientID) VALUES (@Sender, @Recipient, @Message, datetime('now'), @PatientID)";

				command->Parameters->Add("@Sender", DbType::String)->Value = sender;
				command->Parameters->Add("@Recipient", DbType::String)->Value = recipient;
				command->Parameters->Add("@Message", DbType::String)->Value = message;
				command->Parameters->Add("@PatientID", DbType::Int32)->Value = PatientID;

				command->ExecuteNonQuery();

				connection->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error: " + ex->Message);
			}
		}

		int GetPatientID(int patientID)
		{

			try
			{
				String^ connectionString = "Data Source=D:\\Projects\\DoctorTut\\DoctorTut\\mydatabase.db;Version=3;New=False;Compress=True;";

				SQLiteConnection^ connection = gcnew SQLiteConnection(connectionString);
				connection->Open();

				SQLiteCommand^ command = connection->CreateCommand();
				command->CommandText = "SELECT PatientID FROM Users WHERE PatientID = @PatientID";
				command->Parameters->Add("@PatientID", DbType::Int32)->Value = patientID;

				SQLiteDataReader^ reader = command->ExecuteReader();

				if (reader->Read())
				{
					int patientID = Convert::ToInt32(reader["PatientID"]);

				}

				connection->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error: " + ex->Message);
				
			}

			return PatientID;
		}






		void LoadChatMessages()
		{
			try
			{
				String^ connectionString = "Data Source=D:\\Projects\\DoctorTut\\DoctorTut\\mydatabase.db;Version=3;New=False;Compress=True;";

				SQLiteConnection^ connection = gcnew SQLiteConnection(connectionString);
				connection->Open();

				SQLiteCommand^ command = connection->CreateCommand();
				command->CommandText = "SELECT * FROM ChatMessages";
				SQLiteDataReader^ reader = command->ExecuteReader();

				txtChat->Text = "";

				while (reader->Read())
				{
					String^ sender = reader["Sender"]->ToString();
					String^ recipient = reader["Recipient"]->ToString();
					String^ message = reader["Message"]->ToString();
					String^ timestamp = reader["Timestamp"]->ToString();

					String^ chatMessage = String::Format("[{0}] From: {1}, To: {2} - {3}\r\n", timestamp, sender, recipient, message);

					txtChat->AppendText(chatMessage);
				}

				connection->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error: " + ex->Message);
			}
		}

		

	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ senderName = "Patient";
		String^ recipientName = "Psychologist";
		String^ message = txtMessage->Text;
		int patientID = GetPatientID(patientID);

		SaveChatMessage(senderName, recipientName, message, patientID);

		String^ chatMessage = String::Format("[{0}] From: {1}, To: {2} - {3}\r\n", DateTime::Now.ToString(), senderName, recipientName, message);
		txtChat->AppendText(chatMessage);
		txtMessage->Clear();
	}
	
};
}
