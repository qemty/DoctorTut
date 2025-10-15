# 🧠 DoctorTUT - Online Psychologist Software

> ⚠️ **Note**: This is a very old project created when I was just starting my journey in application development. The code and architecture reflect my beginner level of programming experience.

A desktop application for organizing the work of online psychologists, developed as a course project for the "Fundamentals of Algorithmization and Programming" discipline.

## 📋 Overview

DoctorTUT is a Windows desktop application designed to facilitate online psychological consultations. It provides a platform for communication between patients and psychologists, material management, and psychological support organization.

## ✨ Key Features

### 👤 For Patients
- **🔐 User Registration & Authentication** - Secure account creation and login system
- **🌐 Multi-language Interface** - Support for English, Russian, and Belarusian languages
- **🎨 Customizable Theme** - Choice of 3 color schemes for the application background
- **💬 Chat with Psychologist** - Real-time messaging system
- **📚 Educational Materials** - Access to psychological resources and disease information
- **🔍 Disease Search** - Search functionality for illnesses and treatments

### 👨‍⚕️ For Psychologists
- **📊 Patient Management** - View and manage patient conversations
- **📝 Material Management** - Create, edit, and organize educational content
- **📈 Reporting** - Generate work reports for selected time periods
- **💬 Multi-patient Chat** - Communicate with multiple patients simultaneously

## 🛠️ Technology Stack

| Component | Technology | Details |
|-----------|------------|---------|
| **Programming Language** | C++/CLI | Main development language |
| **Framework** | Windows Forms | GUI framework for Windows |
| **Database** | SQLite | Lightweight embedded database |
| **IDE** | Microsoft Visual Studio | Development environment |
| **OS** | Windows 10/11 | Target platform |
| **Documentation Tool** | Dr.Explain | Professional documentation creation |

## 📁 Project Structure
DoctorTUT/
├── MyForm.cpp/h # Main application form
├── MyForm1.cpp/h # Authorization form
├── MyForm2.cpp/h # Registration form
├── MyForm3.cpp/h # Patient chat interface
├── MyForm6.cpp/h # Psychologist admin panel
├── MyForm7.cpp/h # Message management
├── MyForm8.cpp/h # Disease information
└── mydatabase.db # SQLite database file


## 🔧 Core Functionality

### 🔐 Authentication System
- Secure user registration and login
- Role-based access (Patient/Psychologist)
- Input validation and error handling
- Password protection with character masking

### 💬 Chat System
- Real-time message exchange between patients and psychologists
- Message history storage in SQLite database
- Separate chat interfaces for different user roles
- Timestamp tracking for all messages

### 📊 Data Management
- Patient information storage
- Message history persistence
- Educational material organization
- Report generation capabilities

## 🗃️ Database Schema

The application uses SQLite with the following main tables:

- **Users** - User accounts and credentials
- **ChatMessages** - Message history and metadata
- **User-specific tables** - Individual chat tables for each user

## 🚀 System Requirements

### Minimum Hardware
- **OS**: Windows 10/11
- **Processor**: Intel Core I7-4790k or equivalent
- **RAM**: 8 GB or more
- **Graphics**: GeForce GTX 770 or equivalent
- **Storage**: Sufficient space for application and database

### Software Dependencies
- **Visual Studio** (for development/deployment)
- **SQLite precompiled libraries**
- **.NET Framework** (for Windows Forms)

## 📦 Installation & Setup

1. **Prerequisites**: Ensure Visual Studio and SQLite libraries are installed
2. **Database Setup**: Place `mydatabase.db` in the correct directory path
3. **Path Configuration**: Update database connection string in the code if necessary
4. **Build & Run**: Compile the project in Visual Studio and run the application

## 🧪 Testing

The project includes functional testing for:
- User registration with various input scenarios
- File reading operations for educational materials
- Input validation and error handling
- Multi-language interface functionality

## 📝 Note on Code Quality

As this was one of my first programming projects, please note:
- Code structure follows beginner patterns
- Limited use of advanced programming concepts
- Basic error handling implementation
- Simple architectural design

## 🔮 Future Improvements

Given more experience, this project could benefit from:
- Modern C++ standards and best practices
- Improved security measures
- Enhanced UI/UX design
- Better separation of concerns
- Unit testing implementation
- Cloud database integration

## 📄 License

This project was developed as an academic course project at "College of Business and Law".

---

*This project represents my early steps in software development and showcases the learning process of a beginning programmer.*