#pragma once
#include "customerdata.h"
#include "HotelOccupyRoom.h"

namespace HotelManagementSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for CustBookRoom
	/// </summary>
	public ref class CustBookRoom : public System::Windows::Forms::Form
	{
	public: CustomerData^ custdata1 = nullptr;
	public:
		CustBookRoom(CustomerData^ custdata)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			custdata1 = custdata;
			dateTimePicker1->MinDate = DateTime::Now;
			dateTimePicker2->MinDate = DateTime::Now;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustBookRoom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustBookRoom::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(27, 23);
			this->button4->TabIndex = 24;
			this->button4->Text = L"<-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CustBookRoom::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(363, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(386, 80);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Book Room";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(530, 261);
			this->dateTimePicker2->MinDate = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(115, 22);
			this->dateTimePicker2->TabIndex = 83;
			this->dateTimePicker2->Value = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &CustBookRoom::dateTimePicker2_ValueChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(530, 204);
			this->dateTimePicker1->MinDate = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(115, 22);
			this->dateTimePicker1->TabIndex = 82;
			this->dateTimePicker1->Value = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(493, 486);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 29);
			this->button1->TabIndex = 81;
			this->button1->Text = L"Book Room";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CustBookRoom::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(530, 151);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(115, 22);
			this->textBox1->TabIndex = 80;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(440, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 16);
			this->label4->TabIndex = 79;
			this->label4->Text = L"To Date :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(440, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 78;
			this->label3->Text = L"From Date :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(440, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 16);
			this->label2->TabIndex = 77;
			this->label2->Text = L"Room No :";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(490, 366);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 29);
			this->button2->TabIndex = 86;
			this->button2->Text = L"Calculate";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CustBookRoom::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(440, 322);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 16);
			this->label5->TabIndex = 84;
			this->label5->Text = L"Total Rent :";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(530, 319);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(115, 22);
			this->textBox2->TabIndex = 85;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(436, 422);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 16);
			this->label6->TabIndex = 87;
			this->label6->Text = L"Payment Mode :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Cash", L"UPI", L"NEFT", L"RTGS" });
			this->comboBox1->Location = System::Drawing::Point(554, 419);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 89;
			this->comboBox1->Text = L"Select";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CustBookRoom::comboBox1_SelectedIndexChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(554, 449);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(110, 22);
			this->textBox3->TabIndex = 91;
			this->textBox3->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(449, 452);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 16);
			this->label7->TabIndex = 90;
			this->label7->Text = L"Reference Id :";
			this->label7->Visible = false;
			// 
			// CustBookRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cyan;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
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
			this->Name = L"CustBookRoom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Customer Book Room";
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
		if (dateTimePicker1->Value > dateTimePicker2->Value)
		{
			MessageBox::Show("End Date Cannot be before Start Date");
			dateTimePicker2->Value = dateTimePicker1->Value;
		}
		else {
			try {
				int roomid, rent, hotelid;
				String^ occupied;
				int roomno = Int32::Parse(textBox1->Text);
				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `roomdetails` WHERE `roomNo` = " + roomno + "", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				if (dr->Read())
				{
					roomid = Int32::Parse(dr->GetString(0));
					rent = Int32::Parse(dr->GetString(4));
					hotelid = Int32::Parse(dr->GetString(5));
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
						MessageBox::Show("Room no." + roomno + " not available for date " + fromD.ToString() + "!");
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
							MessageBox::Show("Room no." + roomno + " not available for date " + (toD - diff).ToString() + "!");
							throw occupiedException();
						}
						arr += "+" + (toD - diff).ToString();
						toD = toD.AddDays(1);
					}

					if (comboBox1->Text == "Select")
					{
						MessageBox::Show("Please select payment mode");
					}
					else if (comboBox1->Text == "Cash")
					{
						con->Open();
						MySqlCommand^ cmd2 = gcnew MySqlCommand("UPDATE `roomdetails` SET `occupiedDates`='" + arr + "' WHERE `roomNo` = " + roomno + "", con);
						MySqlDataReader^ dr2;
						dr2 = cmd2->ExecuteReader();
						con->Close();
						
						con->Open();
						MySqlCommand^ cmd1 = gcnew MySqlCommand("INSERT INTO `reserveroom` (`roomId`, `hotelId`, `userId`, `fromDate`, `toDate`, `rent`, `payment`) VALUES (" + roomid + "," + hotelid + "," + custdata1->userId + ", STR_TO_DATE('" + fromDS + "','%Y-%m-%d'),STR_TO_DATE('" + toDS + "','%Y-%m-%d')," + rent + ", '"+comboBox1->Text+"')", con);
						MySqlDataReader^ dr1;
						dr1 = cmd1->ExecuteReader();
						MessageBox::Show("Room booked successfully!");
						con->Close();
					}
					else
					{
						con->Open();
						MySqlCommand^ cmd2 = gcnew MySqlCommand("UPDATE `roomdetails` SET `occupiedDates`='" + arr + "' WHERE `roomNo` = " + roomno + "", con);
						MySqlDataReader^ dr2;
						dr2 = cmd2->ExecuteReader();
						con->Close();

						con->Open();
						MySqlCommand^ cmd1 = gcnew MySqlCommand("INSERT INTO `reserveroom` (`roomId`, `hotelId`, `userId`, `fromDate`, `toDate`, `rent`, `payment`) VALUES (" + roomid + "," + hotelid + "," + custdata1->userId + ", STR_TO_DATE('" + fromDS + "','%Y-%m-%d'),STR_TO_DATE('" + toDS + "','%Y-%m-%d')," + rent + ", '" + (comboBox1->Text+":"+textBox3->Text) + "')", con);
						MySqlDataReader^ dr1;
						dr1 = cmd1->ExecuteReader();
						MessageBox::Show("Room booked successfully!");
						con->Close();
					}
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
	private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (dateTimePicker1->Value > dateTimePicker2->Value)
		{
			MessageBox::Show("End Date Cannot be before Start Date");
			dateTimePicker2->Value = dateTimePicker1->Value;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dateTimePicker1->Value > dateTimePicker2->Value)
		{
			MessageBox::Show("End Date Cannot be before Start Date");
			dateTimePicker2->Value = dateTimePicker1->Value;
			button1->Enabled = false;
		}
		else {
			try {
				int roomid, rent, hotelid;
				String^ occupied;
				int roomno = Int32::Parse(textBox1->Text);
				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `roomdetails` WHERE `roomNo` = " + roomno + "", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				if (dr->Read())
				{
					roomid = Int32::Parse(dr->GetString(0));
					rent = Int32::Parse(dr->GetString(4));
					hotelid = Int32::Parse(dr->GetString(5));
					occupied = dr->GetString(6);
					//MessageBox::Show(occupied);
					con->Close();

					DateTime fromD = dateTimePicker1->Value.Date;
					DateTime toD = dateTimePicker2->Value.Date;
					TimeSpan diff = toD - fromD;
					int intDiff = diff.TotalDays;
					if (occupied->Contains(fromD.ToString()))
					{
						MessageBox::Show("Room no." + roomno + " not available for date " + fromD.ToString() + "!");
						throw occupiedException();
					}
					toD = toD.AddDays(1);
					for (int i = intDiff; i > 0; i--)
					{
						if (occupied->Contains((toD - diff).ToString()))
						{
							MessageBox::Show("Room no." + roomno + " not available for date " + (toD - diff).ToString() + "!");
							throw occupiedException();
						}
						toD = toD.AddDays(1);
					}
					textBox2->Text = (rent * (intDiff + 1)).ToString();
					button1->Enabled = true;
				}
				else
				{
					button1->Enabled = false;
					MessageBox::Show("Room does not exist!");
					con->Close();
				}
			}
			catch (occupiedException oe) {
				button1->Enabled = false;
				//MessageBox::Show("Booking Failed!");
			}
			catch (Exception^ ex)
			{
				button1->Enabled = false;
				MessageBox::Show(ex->Message);
				con->Close();
			}
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->Text != "Cash")
		{
			label7->Visible = true;
			textBox3->Visible = true;
		}
		else
		{
			label7->Visible = false;
			textBox3->Visible = false;
		}
	}
};
}
