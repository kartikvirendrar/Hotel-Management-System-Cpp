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
	/// Summary for AdmMngUser
	/// </summary>
	public ref class AdmMngUser : public System::Windows::Forms::Form
	{
	public:
		AdmMngUser(void)
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
		~AdmMngUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ button6;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdmMngUser::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(342, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(436, 52);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Manage Hotel Owner";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Id :";
			this->label2->Click += gcnew System::EventHandler(this, &AdmMngUser::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(81, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Username :";
			this->label3->Click += gcnew System::EventHandler(this, &AdmMngUser::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(81, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Hotel Name :";
			this->label4->Click += gcnew System::EventHandler(this, &AdmMngUser::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(81, 285);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"City :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(81, 333);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Pincode :";
			this->label6->Click += gcnew System::EventHandler(this, &AdmMngUser::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(81, 379);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Contact No :";
			this->label7->Click += gcnew System::EventHandler(this, &AdmMngUser::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(81, 430);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Password :";
			this->label8->Click += gcnew System::EventHandler(this, &AdmMngUser::label8_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(173, 147);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 22);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AdmMngUser::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(173, 189);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(151, 22);
			this->textBox2->TabIndex = 15;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &AdmMngUser::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(173, 235);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(151, 22);
			this->textBox3->TabIndex = 16;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &AdmMngUser::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(173, 282);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(151, 22);
			this->textBox4->TabIndex = 17;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &AdmMngUser::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(173, 330);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(151, 22);
			this->textBox5->TabIndex = 18;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &AdmMngUser::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(173, 376);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(151, 22);
			this->textBox6->TabIndex = 19;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &AdmMngUser::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(173, 427);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(151, 22);
			this->textBox7->TabIndex = 20;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &AdmMngUser::textBox7_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(545, 438);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdmMngUser::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(689, 438);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdmMngUser::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(831, 438);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdmMngUser::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(545, 128);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Fetch";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdmMngUser::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(831, 128);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 25;
			this->button5->Text = L"Fetch All";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdmMngUser::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(393, 178);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(638, 211);
			this->dataGridView1->TabIndex = 26;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdmMngUser::dataGridView1_CellContentClick);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(27, 23);
			this->button6->TabIndex = 27;
			this->button6->Text = L"<-";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdmMngUser::button6_Click);
			// 
			// AdmMngUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Yellow;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AdmMngUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Admin : Manage Hotel Owner";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int admmngusersel = 0;
	public:String^ connstr = "Server=127.0.0.1;Uid=root;Pwd=;Database=hms";
	public:MySqlConnection^ con = gcnew MySqlConnection(connstr);

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = textBox2->Text;
		String^ name = textBox3->Text;
		String^ city = textBox4->Text;
		String^ pincode = textBox5->Text;
		String^ phone = textBox6->Text;
		String^ password = textBox7->Text;
		city = city->ToLower();
		try
		{	
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO `hotelowner`(`hotelUsername`, `hotelName`, `hotelCity`, `hotelPincode`, `hotelPhone`, `hotelPassword`) VALUES('"+username+"', '"+name+"', '"+city+"', '"+pincode+"', '"+phone+"', '"+password+"')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Hotel owner account created successfully");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//int id = Int32::Parse(textBox1->Text);
			String^ username = textBox2->Text;
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `hotelowner` WHERE `hotelUsername` = '"+username+"'", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				textBox1->Text = dr->GetString(0);
				textBox2->Text = dr->GetString(1);
				textBox3->Text = dr->GetString(2);
				textBox4->Text = dr->GetString(3);
				textBox5->Text = dr->GetString(4);
				textBox6->Text = dr->GetString(5);
				textBox7->Text = dr->GetString(6);
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
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT * FROM `hotelowner`", con);
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
		String^ city = textBox4->Text;
		String^ pincode = textBox5->Text;
		String^ phone = textBox6->Text;
		String^ password = textBox7->Text;
		city = city->ToLower();
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand(" UPDATE `hotelowner` SET `hotelName`='"+name+"',`hotelCity`='"+city+"',`hotelPincode`='"+pincode+"',`hotelPhone`='"+phone+"',`hotelPassword`='"+password+"' WHERE `hotelUsername` = '" + username + "' ", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Hotel owner account updated sucsessfully");
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
			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM `hotelowner` WHERE `hotelUsername` = '" + username + "'", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Hotel owner data deleted successfully");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		admmngusersel = -1;
		this->Close();
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
