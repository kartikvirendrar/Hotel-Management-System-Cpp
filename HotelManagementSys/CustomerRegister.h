#pragma once

namespace HotelManagementSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for CustomerRegister
	/// </summary>
	public ref class CustomerRegister : public System::Windows::Forms::Form
	{
	public:
		CustomerRegister(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomerRegister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerRegister::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(496, 497);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 41);
			this->button3->TabIndex = 31;
			this->button3->Text = L"Login";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CustomerRegister::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(485, 482);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 16);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Already have an account\?";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(27, 23);
			this->button2->TabIndex = 29;
			this->button2->Text = L"<-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CustomerRegister::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(497, 402);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 41);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CustomerRegister::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(381, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(368, 50);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Customer Register";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(531, 317);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(151, 22);
			this->textBox7->TabIndex = 51;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(531, 266);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(151, 22);
			this->textBox6->TabIndex = 50;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(531, 220);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(151, 22);
			this->textBox5->TabIndex = 49;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(531, 174);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(151, 22);
			this->textBox3->TabIndex = 48;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(531, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(151, 22);
			this->textBox2->TabIndex = 47;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(439, 320);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 16);
			this->label8->TabIndex = 46;
			this->label8->Text = L"Password :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(439, 269);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 16);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Contact No :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(439, 223);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 16);
			this->label6->TabIndex = 44;
			this->label6->Text = L"Email Id :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(439, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(439, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Username :";
			// 
			// CustomerRegister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cyan;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CustomerRegister";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Customer Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int custregsel = 0;

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		custregsel = -1;
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		custregsel = 2;
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstr = "Server=127.0.0.1;Uid=root;Pwd=;Database=hms";
		MySqlConnection^ con = gcnew MySqlConnection(connstr);
		String^ username = textBox2->Text;
		String^ name = textBox3->Text;
		String^ emailid = textBox5->Text;
		String^ phone = textBox6->Text;
		String^ password = textBox7->Text;
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO `user` (`username`, `fullName`, `emailId`, `phone`, `password`) VALUES('" + username + "', '" + name + "', '" + emailid + "', '" + phone + "', '" + password + "')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Customer account created successfully");
			con->Close();
			custregsel = 2;
			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
