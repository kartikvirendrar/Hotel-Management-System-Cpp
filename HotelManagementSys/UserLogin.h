#pragma once
#include "userdata.h"

namespace HotelManagementSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for UserLogin
	/// </summary>
	public ref class UserLogin : public System::Windows::Forms::Form
	{
	public:
		UserLogin(void)
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
		~UserLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserLogin::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(27, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"<-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UserLogin::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(497, 402);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 41);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserLogin::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(520, 299);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(245, 22);
			this->textBox2->TabIndex = 15;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &UserLogin::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(520, 220);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(245, 22);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &UserLogin::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(339, 294);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 30);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Password  :";
			this->label3->Click += gcnew System::EventHandler(this, &UserLogin::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(339, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 30);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Username :";
			this->label2->Click += gcnew System::EventHandler(this, &UserLogin::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(267, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(604, 80);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Hotel Owner Login";
			this->label1->Click += gcnew System::EventHandler(this, &UserLogin::label1_Click);
			// 
			// UserLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Chartreuse;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"UserLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Hotel Owner Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int userlogsel = 0;
	public: UserData^ userdata = nullptr;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstr = "Server=127.0.0.1;Uid=root;Pwd=;Database=hms";
		MySqlConnection^ con = gcnew MySqlConnection(connstr);
		String^ username = textBox1->Text;
		String^ password = textBox2->Text;
		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter username and password",
				"Email or Password Empty", MessageBoxButtons::OK);
			return;
		}
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from hotelowner WHERE hotelUsername='" + username + "' and hotelPassword='" + password + "'", con);
		MySqlDataReader^ dr;
		try {
			con->Open();
			dr = cmd->ExecuteReader();
			if (dr->Read())
			{
				userdata = gcnew UserData;
				userdata->hotelId = dr->GetInt32(0);
				userdata->hotelUsername = dr->GetString(1);
				userdata->hotelName = dr->GetString(2);
				userdata->hotelCity = dr->GetString(3);
				userdata->hotelPincode = dr->GetString(4);
				userdata->hotelPhone = dr->GetString(5);
				userdata->hotelPassword = dr->GetString(6);
				MessageBox::Show("User login successfull!",
					"Email or Password Error", MessageBoxButtons::OK);
				con->Close();
				userlogsel = 1;
				this->Close();
			}
			else
			{
				MessageBox::Show("Email or password is incorrect",
					"Email or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		userlogsel = -1;
		this->Close();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
