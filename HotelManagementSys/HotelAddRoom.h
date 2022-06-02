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
	/// Summary for HotelAddRoom
	/// </summary>
	public ref class HotelAddRoom : public System::Windows::Forms::Form
	{
	public: UserData^ userdata1 = nullptr;
	public:
		HotelAddRoom(UserData^ userdata)
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
		~HotelAddRoom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox3;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HotelAddRoom::typeid));
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(549, 295);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(151, 22);
			this->textBox3->TabIndex = 43;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(549, 249);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(151, 22);
			this->textBox2->TabIndex = 42;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(549, 207);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 22);
			this->textBox1->TabIndex = 41;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(457, 298);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 16);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Ac / NonAC :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(457, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 16);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Room Type :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(457, 210);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 16);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Room No :";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(27, 23);
			this->button4->TabIndex = 45;
			this->button4->Text = L"<-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &HotelAddRoom::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(406, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(356, 80);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Add Room";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(516, 445);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 29);
			this->button1->TabIndex = 46;
			this->button1->Text = L"Add Room";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HotelAddRoom::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(457, 341);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 16);
			this->label5->TabIndex = 47;
			this->label5->Text = L"Room Rent :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(549, 338);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(151, 22);
			this->textBox4->TabIndex = 48;
			// 
			// HotelAddRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Chartreuse;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"HotelAddRoom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Add Room";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int usersel = 0;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		usersel = -1;
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstr = "Server=127.0.0.1;Uid=root;Pwd=;Database=hms";
		MySqlConnection^ con = gcnew MySqlConnection(connstr);
		int roomno = Int32::Parse(textBox1->Text);
		String^ type = textBox2->Text;
		String^ acnonac = textBox3->Text;
		int rent = Int32::Parse(textBox4->Text);
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO `roomdetails` (`roomNo`, `roomType`, `acornonac`, `roomRent`, `hotelId`, `occupiedDates`) VALUES ("+((userdata1->hotelId*pow(10,((trunc(log10(roomno)))+1)))+roomno)+",'" + type + "','" + acnonac + "'," + rent + "," + userdata1->hotelId + ", '[]')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Room created successfully");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
