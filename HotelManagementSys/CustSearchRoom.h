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
	/// Summary for CustSearchRoom
	/// </summary>
	public ref class CustSearchRoom : public System::Windows::Forms::Form
	{
	public:
		CustSearchRoom(CustomerData^ custdata)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			dateTimePicker1->MinDate = DateTime::Now;
			dateTimePicker2->MinDate = DateTime::Now;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustSearchRoom()
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustSearchRoom::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(27, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"<-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CustSearchRoom::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(341, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(432, 80);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Search Room";
			this->label1->Click += gcnew System::EventHandler(this, &CustSearchRoom::label1_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(671, 125);
			this->dateTimePicker2->MinDate = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(115, 22);
			this->dateTimePicker2->TabIndex = 76;
			this->dateTimePicker2->Value = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &CustSearchRoom::dateTimePicker2_ValueChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(456, 125);
			this->dateTimePicker1->MinDate = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(115, 22);
			this->dateTimePicker1->TabIndex = 75;
			this->dateTimePicker1->Value = System::DateTime(2022, 5, 23, 10, 49, 47, 0);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(904, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 29);
			this->button1->TabIndex = 74;
			this->button1->Text = L"Search Room";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CustSearchRoom::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(185, 125);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 22);
			this->textBox1->TabIndex = 73;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(603, 128);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 16);
			this->label4->TabIndex = 72;
			this->label4->Text = L"To Date :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(366, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 71;
			this->label3->Text = L"From Date :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(132, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 16);
			this->label2->TabIndex = 70;
			this->label2->Text = L"City :";
			this->label2->Click += gcnew System::EventHandler(this, &CustSearchRoom::label2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(135, 197);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(881, 255);
			this->dataGridView1->TabIndex = 77;
			// 
			// CustSearchRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cyan;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->dataGridView1);
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
			this->Name = L"CustSearchRoom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Customer Search Room";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int custsel = 0;
	public:String^ connstr = "Server=127.0.0.1;Uid=root;Pwd=;Database=hms";
	public:MySqlConnection^ con = gcnew MySqlConnection(connstr);
	public:MySqlConnection^ con1 = gcnew MySqlConnection(connstr);

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
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
				int hotelid[10]{ 0 };
				int i = 0;
				String^ city = textBox1->Text;
				city = city->ToLower();
				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT `hotelId` FROM `hotelowner` WHERE `hotelCity` = '" + city + "'", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					hotelid[i] = Int32::Parse(dr->GetString(0));
					++i;
				}
				con->Close();
				if (!hotelid[0])
				{
					MessageBox::Show("No room avaliable in selected city");
				}
				else
				{
					DateTime fromD = dateTimePicker1->Value.Date;
					DateTime toD = dateTimePicker2->Value.Date;
					DateTime tooD = dateTimePicker2->Value.Date;
					TimeSpan diff = toD - fromD;
					int intDiff = diff.TotalDays;

					DataTable^ dt = gcnew DataTable();
					dt->Columns->Add("Hotel");
					dt->Columns->Add("Room No");
					dt->Columns->Add("Type");
					dt->Columns->Add("AC or NON-AC");
					dt->Columns->Add("Rent");

					MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT `roomNo`, `roomType`, `acornonac`, `roomRent`, `hotelId`,`occupiedDates` FROM `roomdetails` WHERE `hotelId` IN (" + hotelid[0] + ", " + hotelid[1] + ", " + hotelid[2] + ", " + hotelid[3] + ", " + hotelid[4] + ", " + hotelid[5] + ", " + hotelid[6] + ", " + hotelid[7] + ", " + hotelid[8] + ", " + hotelid[9] + ")", con);
					MySqlDataReader^ dr1;
					con->Open();
					dr1 = cmd1->ExecuteReader();
					while (dr1->Read())
					{
						toD = tooD;
						String^ occupied = dr1->GetString(5);
						if (!occupied->Contains(fromD.ToString()))
						{
							toD = toD.AddDays(1);
							int c = intDiff;
							for (int i = intDiff; i > 0; i--)
							{
								if (!occupied->Contains((toD - diff).ToString()))
								{
									c--;
								}
								toD = toD.AddDays(1);
							}
							if (c == 0)
							{
								DataRow^ dx = dt->NewRow();

								MySqlCommand^ cmd2 = gcnew MySqlCommand("SELECT `hotelName` FROM `hotelowner` WHERE `hotelId` = " + dr1->GetString(4) + " ", con1);
								MySqlDataReader^ dr2;
								con1->Open();
								dr2 = cmd2->ExecuteReader();
								while (dr2->Read())
								{
									dx["Hotel"] = dr2->GetString(0);
								}
								con1->Close();

								dx["Room No"] = dr1->GetString(0);
								dx["Type"] = dr1->GetString(1);
								dx["AC or NON-AC"] = dr1->GetString(2);
								dx["Rent"] = dr1->GetString(3);
								dt->Rows->Add(dx);
							}
						}
					}
					con->Close();

					bindingSource1->DataSource = dt;
					dataGridView1->DataSource = bindingSource1;
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
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
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
