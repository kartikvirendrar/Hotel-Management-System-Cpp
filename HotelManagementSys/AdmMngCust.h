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
	/// Summary for AdmMngCust
	/// </summary>
	public ref class AdmMngCust : public System::Windows::Forms::Form
	{
	public:
		AdmMngCust(void)
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
		~AdmMngCust()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdmMngCust::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(430, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(278, 52);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Manage User";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(27, 23);
			this->button6->TabIndex = 28;
			this->button6->Text = L"<-";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdmMngCust::button6_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(411, 177);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(638, 211);
			this->dataGridView1->TabIndex = 47;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(849, 127);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 46;
			this->button5->Text = L"Fetch All";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdmMngCust::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(563, 127);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 45;
			this->button4->Text = L"Fetch";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdmMngCust::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(849, 437);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 44;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdmMngCust::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(707, 437);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 43;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdmMngCust::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(563, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 42;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdmMngCust::button1_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(191, 391);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(151, 22);
			this->textBox7->TabIndex = 41;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(191, 340);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(151, 22);
			this->textBox6->TabIndex = 40;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(191, 294);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(151, 22);
			this->textBox5->TabIndex = 39;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(191, 248);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(151, 22);
			this->textBox3->TabIndex = 37;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(191, 202);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(151, 22);
			this->textBox2->TabIndex = 36;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(191, 160);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 22);
			this->textBox1->TabIndex = 35;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(99, 394);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 16);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Password :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(99, 343);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 16);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Contact No :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(99, 297);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 16);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Email Id :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(99, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(99, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Username :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(99, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 16);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Id :";
			// 
			// AdmMngCust
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Yellow;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AdmMngCust";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Admin : Manage User";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int admmngcustsel = 0;
	public:String^ connstr = "Server=127.0.0.1;Uid=root;Pwd=;Database=hms";
	public:MySqlConnection^ con = gcnew MySqlConnection(connstr);

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		admmngcustsel = -1;
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = textBox2->Text;
		String^ name = textBox3->Text;
		String^ emailid = textBox5->Text;
		String^ phone = textBox6->Text;
		String^ password = textBox7->Text;
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO `user` (`username`, `fullName`, `emailId`, `phone`, `password`) VALUES('" + username + "', '" + name + "', '" +emailid+ "', '" + phone + "', '" + password + "')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Customer account created successfully");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ username = textBox2->Text;
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `user` WHERE `username` = '" + username + "'", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				textBox1->Text = dr->GetString(0);
				textBox2->Text = dr->GetString(1);
				textBox3->Text = dr->GetString(2);
				textBox5->Text = dr->GetString(3);
				textBox6->Text = dr->GetString(4);
				textBox7->Text = dr->GetString(5);
			}
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT * FROM `user`", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = textBox2->Text;
		String^ name = textBox3->Text;
		String^ emailid = textBox5->Text;
		String^ phone = textBox6->Text;
		String^ password = textBox7->Text;
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE `user` SET `fullName`='"+name+"',`emailId`='"+emailid+"',`phone`='"+phone+"',`password`='"+password+"' WHERE `username` = '" + username + "' ", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Customer account updated sucsessfully");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ username = textBox2->Text;
			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM `user` WHERE `username` = '" + username + "'", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Customer data deleted successfully");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
