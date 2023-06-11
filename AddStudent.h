#pragma once
//#include "StudentDetails.h"

//namespace Project4 {
//	ref class StudentDetails;
//}

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;
	/// <summary>
	/// Summary for AddStudent
	/// </summary>
	public ref class AddStudent : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		AddStudent(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::TextBox^ registration;
	public:
		OracleConnection^ orcc1 = gcnew OracleConnection(str1);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ AddStudentPanel;

	private: System::Windows::Forms::TextBox^ firstName;
	private: System::Windows::Forms::TextBox^ secondName;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ gender;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ number;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ bloodGroup;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ feeStatus;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ address;

	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ email;


	private: System::Windows::Forms::Label^ emailLabel;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::Button^ addButton;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStudent::typeid));
			this->AddStudentPanel = (gcnew System::Windows::Forms::Panel());
			this->registration = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->feeStatus = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->bloodGroup = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->number = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->gender = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->secondName = (gcnew System::Windows::Forms::TextBox());
			this->firstName = (gcnew System::Windows::Forms::TextBox());
			this->AddStudentPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// AddStudentPanel
			// 
			this->AddStudentPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->AddStudentPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->AddStudentPanel->Controls->Add(this->registration);
			this->AddStudentPanel->Controls->Add(this->label11);
			this->AddStudentPanel->Controls->Add(this->password);
			this->AddStudentPanel->Controls->Add(this->email);
			this->AddStudentPanel->Controls->Add(this->emailLabel);
			this->AddStudentPanel->Controls->Add(this->label10);
			this->AddStudentPanel->Controls->Add(this->username);
			this->AddStudentPanel->Controls->Add(this->cancelButton);
			this->AddStudentPanel->Controls->Add(this->addButton);
			this->AddStudentPanel->Controls->Add(this->address);
			this->AddStudentPanel->Controls->Add(this->label8);
			this->AddStudentPanel->Controls->Add(this->feeStatus);
			this->AddStudentPanel->Controls->Add(this->label7);
			this->AddStudentPanel->Controls->Add(this->bloodGroup);
			this->AddStudentPanel->Controls->Add(this->label6);
			this->AddStudentPanel->Controls->Add(this->number);
			this->AddStudentPanel->Controls->Add(this->label5);
			this->AddStudentPanel->Controls->Add(this->label4);
			this->AddStudentPanel->Controls->Add(this->gender);
			this->AddStudentPanel->Controls->Add(this->label3);
			this->AddStudentPanel->Controls->Add(this->label2);
			this->AddStudentPanel->Controls->Add(this->label1);
			this->AddStudentPanel->Controls->Add(this->panel2);
			this->AddStudentPanel->Controls->Add(this->secondName);
			this->AddStudentPanel->Controls->Add(this->firstName);
			this->AddStudentPanel->Cursor = System::Windows::Forms::Cursors::Default;
			this->AddStudentPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddStudentPanel->ForeColor = System::Drawing::SystemColors::Control;
			this->AddStudentPanel->Location = System::Drawing::Point(0, 0);
			this->AddStudentPanel->Name = L"AddStudentPanel";
			this->AddStudentPanel->Size = System::Drawing::Size(689, 608);
			this->AddStudentPanel->TabIndex = 0;
			// 
			// registration
			// 
			this->registration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->registration->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->registration->ForeColor = System::Drawing::SystemColors::Control;
			this->registration->Location = System::Drawing::Point(151, 384);
			this->registration->Multiline = true;
			this->registration->Name = L"registration";
			this->registration->Size = System::Drawing::Size(147, 25);
			this->registration->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(7, 448);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 20);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Contact No :";
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->password->ForeColor = System::Drawing::SystemColors::Control;
			this->password->Location = System::Drawing::Point(152, 267);
			this->password->Multiline = true;
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(147, 25);
			this->password->TabIndex = 22;
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->email->ForeColor = System::Drawing::SystemColors::Control;
			this->email->Location = System::Drawing::Point(527, 389);
			this->email->Multiline = true;
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(147, 25);
			this->email->TabIndex = 21;
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLabel->Location = System::Drawing::Point(358, 389);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(56, 20);
			this->emailLabel->TabIndex = 20;
			this->emailLabel->Text = L"Email :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(6, 204);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 20);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Username :";
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->username->ForeColor = System::Drawing::SystemColors::Control;
			this->username->Location = System::Drawing::Point(152, 204);
			this->username->Multiline = true;
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(147, 25);
			this->username->TabIndex = 18;
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::Color::Brown;
			this->cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cancelButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancelButton.Image")));
			this->cancelButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->cancelButton->Location = System::Drawing::Point(371, 524);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(103, 46);
			this->cancelButton->TabIndex = 17;
			this->cancelButton->Text = L"     Cancel";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &AddStudent::cancelButton_Click);
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addButton.Image")));
			this->addButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->Location = System::Drawing::Point(217, 524);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(103, 46);
			this->addButton->TabIndex = 1;
			this->addButton->Text = L"  Add";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &AddStudent::addButton_Click);
			// 
			// address
			// 
			this->address->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->address->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->address->ForeColor = System::Drawing::SystemColors::Control;
			this->address->Location = System::Drawing::Point(527, 325);
			this->address->Multiline = true;
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(147, 25);
			this->address->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(358, 325);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Address :";
			// 
			// feeStatus
			// 
			this->feeStatus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->feeStatus->ForeColor = System::Drawing::SystemColors::Control;
			this->feeStatus->FormattingEnabled = true;
			this->feeStatus->ItemHeight = 13;
			this->feeStatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"True", L"False" });
			this->feeStatus->Location = System::Drawing::Point(152, 324);
			this->feeStatus->Name = L"feeStatus";
			this->feeStatus->Size = System::Drawing::Size(147, 21);
			this->feeStatus->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 325);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Fee Status :";
			// 
			// bloodGroup
			// 
			this->bloodGroup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->bloodGroup->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->bloodGroup->ForeColor = System::Drawing::SystemColors::Control;
			this->bloodGroup->Location = System::Drawing::Point(527, 262);
			this->bloodGroup->Multiline = true;
			this->bloodGroup->Name = L"bloodGroup";
			this->bloodGroup->Size = System::Drawing::Size(147, 25);
			this->bloodGroup->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(358, 267);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Blood Group :";
			// 
			// number
			// 
			this->number->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->number->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->number->ForeColor = System::Drawing::SystemColors::Control;
			this->number->Location = System::Drawing::Point(152, 444);
			this->number->Multiline = true;
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(147, 25);
			this->number->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 267);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Password :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(358, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Gender :";
			// 
			// gender
			// 
			this->gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->gender->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->gender->ForeColor = System::Drawing::SystemColors::Control;
			this->gender->Location = System::Drawing::Point(527, 203);
			this->gender->Multiline = true;
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(147, 25);
			this->gender->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 389);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Registration :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(358, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Second name :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"First name :";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->panel2->Controls->Add(this->label9);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(685, 100);
			this->panel2->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MV Boli", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(142, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(368, 49);
			this->label9->TabIndex = 0;
			this->label9->Text = L"STUDENT DETAILS";
			// 
			// secondName
			// 
			this->secondName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->secondName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->secondName->ForeColor = System::Drawing::SystemColors::Control;
			this->secondName->Location = System::Drawing::Point(527, 141);
			this->secondName->Multiline = true;
			this->secondName->Name = L"secondName";
			this->secondName->Size = System::Drawing::Size(147, 25);
			this->secondName->TabIndex = 1;
			// 
			// firstName
			// 
			this->firstName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->firstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->firstName->ForeColor = System::Drawing::SystemColors::Control;
			this->firstName->Location = System::Drawing::Point(152, 141);
			this->firstName->Multiline = true;
			this->firstName->Name = L"firstName";
			this->firstName->Size = System::Drawing::Size(147, 25);
			this->firstName->TabIndex = 0;
			// 
			// AddStudent
			// 
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(689, 608);
			this->Controls->Add(this->AddStudentPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AddStudent";
			this->AddStudentPanel->ResumeLayout(false);
			this->AddStudentPanel->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		orcc1->Open();
		if (firstName->Text->Length > 0 && secondName->Text->Length > 0 && registration->Text->Length > 0 &&
			gender->Text->Length > 0 && number->Text->Length > 0 && bloodGroup->Text->Length > 0 &&
			address->Text->Length > 0 && feeStatus->Text->Length > 0 && username->Text->Length > 0) 
		{
			// All required fields are filled, submit the form
			OracleCommand^ orcm4 = gcnew OracleCommand("INSERT INTO LOGIN_INFO VALUES('" + username->Text + "','" + password->Text + "', '" + password->Text + "')", orcc1);
			orcm4->ExecuteNonQuery();

			OracleCommand^ orcm5 = gcnew OracleCommand("INSERT INTO Login_info_dsg VALUES('" + username->Text + "', 'Student')", orcc1);
			orcm5->ExecuteNonQuery();

			OracleCommand^ orcm1 = gcnew OracleCommand("INSERT INTO STUDENTS (s_id, f_name, l_name, username, reg_date, gender, blood_grp, address, paid_status) VALUES(STUDENTS_SEQ.NEXTVAL , '" + firstName->Text + "','" + secondName->Text + "', '" + username->Text + "', TO_DATE('" + registration->Text + "', 'DD Month YYYY'), '" + gender->Text + "', '"+bloodGroup->Text+"', '" + address->Text + "' , '" + feeStatus->Text + "')", orcc1);

			orcm1->ExecuteNonQuery();

			OracleCommand^ orcm2 = gcnew OracleCommand("INSERT INTO STUDENT_EMAIL VALUES('" + username->Text + "','" + email->Text + "')", orcc1);
			orcm2->ExecuteNonQuery();

			OracleCommand^ orcm3 = gcnew OracleCommand("INSERT INTO STUDENT_PHONE VALUES(Students_seq.CURRVAL,'" + number->Text + "')", orcc1);
			orcm3->ExecuteNonQuery();

			//update the data grid view of student in student details form
			
				/*StudentDetails^ studentDetailsForm = dynamic_cast<StudentDetails^>(this->Owner);
				if (studentDetailsForm != nullptr )
					studentDetailsForm->UpdateDataGrid();*/
			//

			MessageBox::Show("Student added successfully!");
			orcc1->Close();
			this->Close();
		}
		else 
		{
			// Error: Missing required fields
			MessageBox::Show("Please fill all the required fields!");
		}

		
	}
	private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
};
}
