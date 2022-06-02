#pragma once
#include "customerdata.h"

namespace HotelManagementSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for CustBHistory
	/// </summary>
	public ref class CustBHistory : public System::Windows::Forms::Form
	{
	public: CustomerData^ custdata1 = nullptr;
	public:
		CustBHistory(CustomerData^ custdata)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			custdata1 = custdata;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustBHistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustBHistory::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(27, 23);
			this->button4->TabIndex = 26;
			this->button4->Text = L"<-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CustBHistory::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(424, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 80);
			this->label1->TabIndex = 25;
			this->label1->Text = L"History";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(451, 156);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(586, 260);
			this->dataGridView1->TabIndex = 27;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(726, 443);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Fetch All";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CustBHistory::button1_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(187, 438);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(220, 22);
			this->textBox10->TabIndex = 107;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(85, 441);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 16);
			this->label12->TabIndex = 106;
			this->label12->Text = L"Payment :";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(186, 388);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(221, 22);
			this->textBox8->TabIndex = 105;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(85, 391);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 16);
			this->label10->TabIndex = 104;
			this->label10->Text = L"Booking Date :";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(187, 340);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(220, 22);
			this->textBox7->TabIndex = 103;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(85, 343);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 16);
			this->label9->TabIndex = 102;
			this->label9->Text = L"Rent :";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(187, 293);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(220, 22);
			this->textBox6->TabIndex = 101;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(85, 296);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 16);
			this->label8->TabIndex = 100;
			this->label8->Text = L"To Date :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(187, 250);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(220, 22);
			this->textBox5->TabIndex = 99;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(85, 253);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 16);
			this->label7->TabIndex = 98;
			this->label7->Text = L"From Date :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(187, 204);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(144, 22);
			this->textBox4->TabIndex = 97;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(85, 207);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 16);
			this->label6->TabIndex = 96;
			this->label6->Text = L"Room No :";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(350, 152);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(57, 37);
			this->button5->TabIndex = 95;
			this->button5->Text = L"Go";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &CustBHistory::button5_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(337, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 30);
			this->button2->TabIndex = 94;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CustBHistory::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(187, 159);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(157, 22);
			this->textBox3->TabIndex = 93;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(85, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 16);
			this->label3->TabIndex = 92;
			this->label3->Text = L"Booking Id :";
			// 
			// CustBHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cyan;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CustBHistory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Customer History";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int custsel = 0;
	public:String^ connstr = "Server=127.0.0.1;Uid=root;Pwd=;Database=hms";
	public:MySqlConnection^ con = gcnew MySqlConnection(connstr);

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		custsel = -1;
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT `bookingId`, `fromDate`, `toDate`, `bookingDate` FROM `reserveroom` WHERE `userId`=" + custdata1->userId + "", con);
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
	public: int roomno, roomid;
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int bid = Int32::Parse(textBox3->Text);
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `reserveroom` WHERE `bookingId`=" + bid + " AND `userId`=" + custdata1->userId + "", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			if (dr->Read())
			{
				roomid = Int32::Parse(dr->GetString(1));
				textBox5->Text = dr->GetString(4);
				textBox6->Text = dr->GetString(5);
				textBox7->Text = dr->GetString(6);
				textBox8->Text = dr->GetString(7);
				textBox10->Text = dr->GetString(8);
				if (Int32::Parse(dr->GetString(3)) == custdata1->userId)
				{
					button2->Enabled = true;
				}
				con->Close();
				
				MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT `roomNo` FROM `roomdetails` WHERE `roomId`="+roomid+"", con);
				MySqlDataReader^ dr1;
				con->Open();
				dr1 = cmd1->ExecuteReader();
				if (dr1->Read())
				{
					roomno = Int32::Parse(dr1->GetString(0));
					textBox4->Text = roomno.ToString();
				}
				con->Close();
			}
			else
			{
				MessageBox::Show("No booking found for booking id " + bid);
				con->Close();
			}
		}
		catch (Exception^ ex)
		{
			con->Close();
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int bid = Int32::Parse(textBox3->Text);
			DateTime fromD, toD;
			String^ arr;
			String^ occupied;

			fromD = DateTime::Parse(textBox5->Text);
			toD = DateTime::Parse(textBox6->Text);
			TimeSpan diff = toD - fromD;
			int intDiff = diff.TotalDays;

			arr = fromD.ToString();
			toD = toD.AddDays(1);
			for (int i = intDiff; i > 0; i--)
			{
				arr += "+" + (toD - diff).ToString();
				toD = toD.AddDays(1);
			}

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `roomdetails` WHERE `roomNo` = " + roomno + "", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			if (dr->Read())
			{
				occupied = dr->GetString(6);
			}
			con->Close();

			occupied = occupied->Replace(arr, "canceled");

			MySqlCommand^ cmd1 = gcnew MySqlCommand(" UPDATE `roomdetails` SET `occupiedDates`='" + occupied + "' WHERE `roomId`=" + roomid + " ", con);
			MySqlDataReader^ dr1;
			con->Open();
			dr1 = cmd1->ExecuteReader();
			con->Close();

			MySqlCommand^ cmd2 = gcnew MySqlCommand("DELETE FROM `reserveroom` WHERE `bookingId` =" + bid + "", con);
			MySqlDataReader^ dr2;
			con->Open();
			dr2 = cmd2->ExecuteReader();
			con->Close();

			MessageBox::Show("Booking Canceled successfully");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
