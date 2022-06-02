#pragma once
#include "userdata.h"
#include <cmath>
#include <time.h>
#include <iostream>
#include <string>

class occupiedException {};

namespace HotelManagementSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for HotelOccupyRoom
	/// </summary>
	public ref class HotelOccupyRoom : public System::Windows::Forms::Form
	{
	public: UserData^ userdata1 = nullptr;
	public:
		HotelOccupyRoom(UserData^ userdata)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			userdata1 = userdata;
			dateTimePicker1->MinDate = DateTime::Now;
			dateTimePicker2->MinDate = DateTime::Now;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HotelOccupyRoom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HotelOccupyRoom::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->button4->Click += gcnew System::EventHandler(this, &HotelOccupyRoom::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(333, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(455, 80);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Occupy Room";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(515, 215);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 22);
			this->textBox1->TabIndex = 63;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(423, 306);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 16);
			this->label4->TabIndex = 61;
			this->label4->Text = L"To Date :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(423, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 60;
			this->label3->Text = L"From Date :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(423, 218);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 16);
			this->label2->TabIndex = 59;
			this->label2->Text = L"Room No :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(510, 419);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 29);
			this->button1->TabIndex = 67;
			this->button1->Text = L"Occupy Room";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HotelOccupyRoom::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(515, 255);
			this->dateTimePicker1->MinDate = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 68;
			this->dateTimePicker1->Value = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &HotelOccupyRoom::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(515, 301);
			this->dateTimePicker2->MinDate = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker2->TabIndex = 69;
			this->dateTimePicker2->Value = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &HotelOccupyRoom::dateTimePicker2_ValueChanged);
			// 
			// HotelOccupyRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Chartreuse;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"HotelOccupyRoom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Occupy Room";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:int usersel = 0;
	public:String^ connstr = "Server=127.0.0.1;Uid=root;Pwd=;Database=hms";
	public:MySqlConnection^ con = gcnew MySqlConnection(connstr);

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		usersel = -1;
		this->Close();
	}

	private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (dateTimePicker1->Value > dateTimePicker2->Value)
		{
			MessageBox::Show("End Date Cannot be before Start Date");
			dateTimePicker2->Value = dateTimePicker1->Value;
		}
	}

	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dateTimePicker1->Value > dateTimePicker2->Value)
		{
			MessageBox::Show("End Date Cannot be before Start Date");
			dateTimePicker2->Value = dateTimePicker1->Value;
		}
		else {
			try {
				int roomid, rent;
				String^ occupied;
				int roomno = Int32::Parse(textBox1->Text);
				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `roomdetails` WHERE `roomNo` = " + ((userdata1->hotelId * pow(10, ((trunc(log10(roomno))) + 1))) + roomno) + "", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				if (dr->Read())
				{
					roomid = Int32::Parse(dr->GetString(0));
					rent = Int32::Parse(dr->GetString(4));
					occupied = dr->GetString(6);
					//MessageBox::Show(occupied);
					con->Close();



					DateTime fromD = dateTimePicker1->Value.Date;
					String^ fromDS = fromD.Year.ToString() + "-" + fromD.Month.ToString() + "-" + fromD.Day.ToString();
					DateTime tooD = dateTimePicker2->Value.Date;
					String^ tooDS = tooD.Year.ToString() + "-" + tooD.Month.ToString() + "-" + tooD.Day.ToString();
					DateTime toD = dateTimePicker2->Value.Date;
					String^ toDS = toD.Year.ToString() + "-" + toD.Month.ToString() + "-" + toD.Day.ToString();
					TimeSpan diff = toD - fromD;
					int intDiff = diff.TotalDays;
					String^ arr;
					if (occupied->Contains(fromD.ToString()))
					{
						MessageBox::Show("Room no." + roomno + " not available for date "+ fromD.ToString()+"!");
						throw occupiedException();
					}
					else if (occupied->Contains("[]"))
					{
						arr = fromD.ToString();
					}
					else
					{
						arr = occupied + "+" + fromD.ToString();
					}
					toD = toD.AddDays(1);
					for (int i = intDiff; i > 0; i--)
					{
						if (occupied->Contains((toD - diff).ToString()))
						{
							MessageBox::Show("Room no." + roomno + " not available for date "+ (toD - diff).ToString() + "!");
							throw occupiedException();
						}
						arr += "+" + (toD - diff).ToString();
						toD = toD.AddDays(1);
					}
					con->Open();
					MySqlCommand^ cmd2 = gcnew MySqlCommand("UPDATE `roomdetails` SET `occupiedDates`='" + arr + "' WHERE `roomNo` = " + ((userdata1->hotelId * pow(10, ((trunc(log10(roomno))) + 1))) + roomno) + "", con);
					MySqlDataReader^ dr2;
					dr2 = cmd2->ExecuteReader();
					con->Close();

					con->Open();
					MySqlCommand^ cmd1 = gcnew MySqlCommand("INSERT INTO `reserveroom` (`roomId`, `hotelId`, `userId`, `fromDate`, `toDate`, `rent`, `payment`) VALUES (" + roomid + "," + userdata1->hotelId + "," + 0 + ", STR_TO_DATE('" + fromDS + "','%Y-%m-%d'),STR_TO_DATE('" + toDS + "','%Y-%m-%d')," + rent+ ", '"+0+"')", con);
					MySqlDataReader^ dr1;
					dr1 = cmd1->ExecuteReader();
					MessageBox::Show("Room booked successfully");
					con->Close();
				}
				else
				{
					MessageBox::Show("Room does not exist!");
					con->Close();
				}
			}
			catch (occupiedException oe) {
				//MessageBox::Show("Booking Failed!");
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
				con->Close();
			}
		}
	}
};
}