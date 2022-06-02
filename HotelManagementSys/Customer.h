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
	/// Summary for Customer
	/// </summary>
	public ref class Customer : public System::Windows::Forms::Form
	{
	public:
		Customer(CustomerData^ custdata)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			label2->Text = "Welcome " + custdata->fullName;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Customer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Customer::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(782, 244);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 74);
			this->button3->TabIndex = 23;
			this->button3->Text = L"History";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Customer::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(498, 244);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 74);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Book Room";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Customer::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(202, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 74);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Search Room";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Customer::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(27, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"<-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Customer::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 525);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Welcome";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(397, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(326, 80);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Customer";
			// 
			// Customer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cyan;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Customer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Customer Dashboard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int custsel = 0;

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		custsel = -1;
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		custsel = 1;
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		custsel = 2;
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		custsel = 3;
		this->Close();
	}
};
}
