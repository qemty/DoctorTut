#pragma once

#include <string>
#include "MyForm4.h"
#include "MyForm5.h"

namespace DoctorTut {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SQLite;

    public ref class MyForm7 : public System::Windows::Forms::Form
    {
    public:

        MyForm7(void)
{
    InitializeComponent();
    // Создание объекта подключения к базе данных
    String^ connectionString = "Data Source=D:\\Projects\\DoctorTut\\DoctorTut\\mydatabase.db;Version=3;";
    connection = gcnew SQLiteConnection(connectionString);
    // Инициализация переменной "username"
    String^ username = "username"; 
    int patientID = GetPatientID(connection, username);

    // Заполнение комбинированного списка пациентами
    FillPatientComboBox(connection);

    // Обработчик события выбора пациента
    comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm7::comboBox1_SelectedIndexChanged);
}



    protected:
        ~MyForm7()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::ComboBox^ comboBox1;


           SQLiteConnection^ connection; // Добавлено объявление объекта подключения

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm7::typeid));
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
            this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(27, 46);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowHeadersVisible = false;
            this->dataGridView1->Size = System::Drawing::Size(1207, 614);
            this->dataGridView1->TabIndex = 1;
            // 
            // comboBox1
            // 
            this->comboBox1->BackColor = System::Drawing::Color::Lavender;
            this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(27, 12);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(200, 28);
            this->comboBox1->TabIndex = 2;
            // 
            // MyForm7
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1264, 681);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->dataGridView1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm7";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Messages";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

        void FillPatientComboBox(SQLiteConnection^ connection)
        {
            // Проверка наличия столбца "Username" в таблице "Users"
            String^ columnCheckQuery = "PRAGMA table_info(Users)";
            SQLiteCommand^ columnCheckCommand = gcnew SQLiteCommand(columnCheckQuery, connection);

            connection->Open();
            SQLiteDataReader^ columnCheckReader = columnCheckCommand->ExecuteReader();
            bool hasUsernameColumn = false;

            while (columnCheckReader->Read())
            {
                String^ columnName = columnCheckReader->GetString(columnCheckReader->GetOrdinal("name"));
                if (columnName == "Username")
                {
                    hasUsernameColumn = true;
                    break;
                }
            }

            columnCheckReader->Close();

            if (!hasUsernameColumn)
            {
                MessageBox::Show("Missing column: Username in Users table");
                connection->Close();
                return;
            }

            // Заполнение комбинированного списка пациентами
            String^ query = "SELECT Username, PatientID FROM Users WHERE Username != '12'";

            SQLiteCommand^ command = gcnew SQLiteCommand(query, connection);

            SQLiteDataReader^ reader = command->ExecuteReader();

            while (reader->Read())
            {
                String^ Username = reader->GetString(reader->GetOrdinal("Username"));
                comboBox1->Items->Add(Username);
            }

            reader->Close();
            connection->Close();
        }

        int GetPatientID(SQLiteConnection^ connection, String^ Username)
        {
            if (connection == nullptr)
            {
                // Обработка случая, когда объект "connection" является NULL
                throw gcnew ArgumentNullException("connection");
            }

            if (Username == nullptr)
            {
                // Обработка случая, когда объект "Username" является NULL
                throw gcnew ArgumentNullException("Username");
            }

            String^ query = "SELECT PatientID FROM Users WHERE Username = @Username";

            SQLiteCommand^ command = gcnew SQLiteCommand(query, connection);
            command->Parameters->AddWithValue("@Username", Username);

            connection->Open();
            int patientID = Convert::ToInt32(command->ExecuteScalar());
            connection->Close();

            return patientID;
        }


        void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
        {
            String^ selectedPatient = comboBox1->SelectedItem->ToString();
            int patientID = GetPatientID(connection, selectedPatient);

            ShowChatWithPatient(connection, patientID);
        }


        void ShowChatWithPatient(SQLiteConnection^ connection, int patientID)
        {
            String^ query = "SELECT cm.* FROM ChatMessages cm INNER JOIN Users u ON cm.PatientID = u.PatientID WHERE u.PatientID = @PatientID";

            SQLiteCommand^ command = gcnew SQLiteCommand(query, connection);
            command->Parameters->AddWithValue("@PatientID", patientID);

            SQLiteDataAdapter^ adapter = gcnew SQLiteDataAdapter(command);
            DataTable^ table = gcnew DataTable();

            connection->Open();
            adapter->Fill(table);
            connection->Close();

            dataGridView1->DataSource = table;
            dataGridView1->Refresh(); // Обновление DataGridView
        }


};
}
