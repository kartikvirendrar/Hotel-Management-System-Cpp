#pragma once
#include "userdata.h"
#include <cmath>

namespace HotelManagementSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for HotelBookings
	/// </summary>
	public ref class HotelBookings : public System::Windows::Forms::Form
	{
	public: UserData^ userdata1 = nullptr;
	public:
		HotelBookings(UserData^ userdata)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			userdata1 = userdata;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HotelBookings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label12;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HotelBookings::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(27, 23);
			this->button4->TabIndex = 58;
			this->button4->Text = L"<-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &HotelBookings::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(394, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 80);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Bookings";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(368, 116);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(57, 37);
			this->button3->TabIndex = 70;
			this->button3->Text = L"Go";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &HotelBookings::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(103, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 16);
			this->label5->TabIndex = 68;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(205, 123);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 22);
			this->textBox1->TabIndex = 65;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(455, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 16);
			this->label4->TabIndex = 64;
			this->label4->Text = L"Booked Dates :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(103, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 16);
			this->label2->TabIndex = 62;
			this->label2->Text = L"Room No :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(473, 184);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(582, 293);
			this->dataGridView1->TabIndex = 71;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(730, 492);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 30);
			this->button1->TabIndex = 72;
			this->button1->Text = L"Fetch All";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HotelBookings::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(557, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(498, 22);
			this->textBox2->TabIndex = 73;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(355, 232);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 30);
			this->button2->TabIndex = 76;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &HotelBookings::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(205, 191);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(157, 22);
			this->textBox3->TabIndex = 75;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(103, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 16);
			this->label3->TabIndex = 74;
			this->label3->Text = L"Booking Id :";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(368, 184);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(57, 37);
			this->button5->TabIndex = 77;
			this->button5->Text = L"Go";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &HotelBookings::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(205, 236);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(144, 22);
			this->textBox4->TabIndex = 79;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(103, 239);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 16);
			this->label6->TabIndex = 78;
			this->label6->Text = L"Room No :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(205, 282);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(220, 22);
			this->textBox5->TabIndex = 81;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(103, 285);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 16);
			this->label7->TabIndex = 80;
			this->label7->Text = L"From Date :";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(205, 325);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(220, 22);
			this->textBox6->TabIndex = 83;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(103, 328);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 16);
			this->label8->TabIndex = 82;
			this->label8->Text = L"To Date :";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(205, 370);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(220, 22);
			this->textBox7->TabIndex = 85;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(103, 373);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 16);
			this->label9->TabIndex = 84;
			this->label9->Text = L"Rent :";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(204, 414);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(221, 22);
			this->textBox8->TabIndex = 87;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(103, 417);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 16);
			this->label10->TabIndex = 86;
			this->label10->Text = L"Booking Date :";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(205, 458);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(220, 22);
			this->textBox9->TabIndex = 89;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(103, 461);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 16);
			this->label11->TabIndex = 88;
			this->label11->Text = L"User :";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(205, 503);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(220, 22);
			this->textBox10->TabIndex = 91;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(103, 506);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 16);
			this->label12->TabIndex = 90;
			this->label12->Text = L"Payment :";
			// 
			// HotelBookings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Chartreuse;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label11);
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
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"HotelBookings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Hotel Bookings";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int usersel = 0;
	public:String^ connstr = "Server=127.0.0.1;Uid=root;Pwd=;Database=hms";
	public:MySqlConnection^ con = gcnew MySqlConnection(connstr);

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		usersel = -1;
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
		int roomno = Int32::Parse(textBox1->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `roomdetails` WHERE `roomNo` = " + ((userdata1->hotelId * pow(10, ((trunc(log10(roomno))) + 1))) + roomno) + "", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		if (dr->Read())
		{
			textBox2->Text = dr->GetString(6);
			con->Close();
		}
		else
		{
			MessageBox::Show("Room does not exist!");
			con->Close();
		}
		}
		catch (Exception^ ex)
		{
		   MessageBox::Show(ex->Message);
   	    }
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT `bookingId`, `fromDate`, `toDate`, `bookingDate` FROM `reserveroom` WHERE `hotelId`="+userdata1->hotelId+"", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);

			/*
			dt->Columns->Add();
			DataColumn^  roomNoCol = gcnew DataColumn;
			roomNoCol->ColumnName = "Room No.";
			roomNoCol->DataType = System::Type::GetType("Sysmtem.String");
			MySqlDataAdapter^ roomNoSda = gcnew MySqlDataAdapter("SELECT `roomId` FROM `reserveroom` WHERE `hotelId`=" + userdata1->hotelId + "", con);
			*/

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
			int userid;
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `reserveroom` WHERE `bookingId`="+bid+" AND `hotelId`=" + userdata1->hotelId + "", con);
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
				if (Int32::Parse(dr->GetString(3)) == 0)
				{
					userid = 0;
					button2->Enabled = true;
					textBox9->Text = "Hotel owner self";
				}
				else
				{
					userid = Int32::Parse(dr->GetString(3));
					textBox9->Text = dr->GetString(3);
				}
				con->Close();

				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT `roomNo` FROM `roomdetails` WHERE `roomId`=" +roomid+ "", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				if (dr->Read())
				{
					roomno = Int32::Parse(dr->GetString(0));
					roomno -= userdata1->hotelId * pow(10, ((trunc(log10(roomno)))));
					textBox4->Text = roomno.ToString();
				}
				con->Close();

				if (userid!=0)
				{
					MySqlCommand^ cmd = gcnew MySqlCommand("SELECT `fullName` FROM `user` WHERE `userId`=" + userid + "", con);
					MySqlDataReader^ dr;
					con->Open();
					dr = cmd->ExecuteReader();
					if (dr->Read())
					{
						textBox9->Text = dr->GetString(0);
					}
					con->Close();
				}
			}
			else
			{
				MessageBox::Show("No booking found for booking id "+bid);
				con->Close();
			}
		}
		catch (Exception^ ex)
		{
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
			
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `roomdetails` WHERE `roomNo` = " + ((userdata1->hotelId * pow(10, ((trunc(log10(roomno))) + 1))) + roomno) + "", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			if (dr->Read())
			{
				occupied = dr->GetString(6);
			}
			con->Close();

			occupied = occupied->Replace(arr, "canceled");

			MySqlCommand^ cmd1 = gcnew MySqlCommand(" UPDATE `roomdetails` SET `occupiedDates`='"+occupied+"' WHERE `roomId`="+roomid+" ", con);
			MySqlDataReader^ dr1;
			con->Open();
			dr1 = cmd1->ExecuteReader();
			con->Close();

			MySqlCommand^ cmd2 = gcnew MySqlCommand("DELETE FROM `reserveroom` WHERE `bookingId` ="+bid+"", con);
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
