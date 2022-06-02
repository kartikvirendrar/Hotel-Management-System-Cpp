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
	/// Summary for HRcrudItem
	/// </summary>
	public ref class HRcrudItem : public System::Windows::Forms::Form
	{
	public: UserData^ userdata1;
	public:
		HRcrudItem(UserData^ userdata)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			userdata1=userdata;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HRcrudItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HRcrudItem::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->button4->TabIndex = 26;
			this->button4->Text = L"<-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &HRcrudItem::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(362, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(364, 80);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Restaurant";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(249, 224);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(151, 22);
			this->textBox2->TabIndex = 40;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(188, 227);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Price :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(188, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 16);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Item :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(557, 147);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(396, 250);
			this->dataGridView1->TabIndex = 41;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(259, 299);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 42;
			this->button1->Text = L"Add Item";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HRcrudItem::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(303, 353);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 23);
			this->button2->TabIndex = 43;
			this->button2->Text = L"Update Item";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &HRcrudItem::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(204, 353);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 44;
			this->button3->Text = L"Fetch";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &HRcrudItem::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(248, 414);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(95, 23);
			this->button5->TabIndex = 45;
			this->button5->Text = L"Delete Item";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &HRcrudItem::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(714, 428);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 46;
			this->button6->Text = L"Fetch All";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &HRcrudItem::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(249, 158);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 22);
			this->textBox1->TabIndex = 39;
			// 
			// HRcrudItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Chartreuse;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"HRcrudItem";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Restaurant Add / Edit Items";
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ item = textBox1->Text;
		int price = Int32::Parse(textBox2->Text);
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO `restaurant`(`hotelId`, `itemName`, `itemPrice`) VALUES ("+userdata1->hotelId+",'"+item+"',"+price+")", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Item added successfully");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ item = textBox1->Text;
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `restaurant` WHERE `itemName` = '" + item + "' AND `hotelId` = "+userdata1->hotelId+"", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				textBox1->Text = dr->GetString(2);
				textBox2->Text = dr->GetString(3);
			}
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ item = textBox1->Text;
		int price = Int32::Parse(textBox2->Text);
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE `restaurant` SET `itemPrice`=" + price + " WHERE `itemName` = '" + item + "' AND `hotelId` = " + userdata1->hotelId + "", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Item price updated sucsessfully");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ item = textBox1->Text;
			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM `restaurant` WHERE `itemName` = '" + item + "' AND `hotelId` = " + userdata1->hotelId + "", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Item deleted successfully");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT `itemName`, `itemPrice` FROM `restaurant` WHERE `hotelId` = " + userdata1->hotelId + "", con);
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
};
}
