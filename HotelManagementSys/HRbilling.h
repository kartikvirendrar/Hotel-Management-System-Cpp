#pragma once
#include "userdata.h"
#include <math.h>

namespace HotelManagementSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for HRbilling
	/// </summary>
	public ref class HRbilling : public System::Windows::Forms::Form
	{
	public: UserData^ userdata1;
	public:
		HRbilling(UserData^ userdata)
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
		~HRbilling()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ Hlabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button3;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HRbilling::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Hlabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(27, 23);
			this->button4->TabIndex = 27;
			this->button4->Text = L"<-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &HRbilling::button4_Click);
			// 
			// Hlabel
			// 
			this->Hlabel->AutoSize = true;
			this->Hlabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hlabel->Location = System::Drawing::Point(377, 9);
			this->Hlabel->Name = L"Hlabel";
			this->Hlabel->Size = System::Drawing::Size(361, 52);
			this->Hlabel->TabIndex = 28;
			this->Hlabel->Text = L"Restaurant Billing";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Enabled = false;
			this->label1->ForeColor = System::Drawing::Color::LimeGreen;
			this->label1->Location = System::Drawing::Point(86, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 29;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(176, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 30;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Location = System::Drawing::Point(242, 88);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 31;
			this->numericUpDown1->Visible = false;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &HRbilling::numericUpDown1_ValueChanged);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(386, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 32;
			this->textBox1->Text = L"0";
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(386, 132);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 36;
			this->textBox2->Text = L"0";
			this->textBox2->Visible = false;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Enabled = false;
			this->numericUpDown2->Location = System::Drawing::Point(242, 133);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 22);
			this->numericUpDown2->TabIndex = 35;
			this->numericUpDown2->Visible = false;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &HRbilling::numericUpDown2_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Enabled = false;
			this->label3->ForeColor = System::Drawing::Color::LimeGreen;
			this->label3->Location = System::Drawing::Point(86, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 34;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Enabled = false;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(176, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 33;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(386, 179);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 40;
			this->textBox3->Text = L"0";
			this->textBox3->Visible = false;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Enabled = false;
			this->numericUpDown3->Location = System::Drawing::Point(242, 180);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 22);
			this->numericUpDown3->TabIndex = 39;
			this->numericUpDown3->Visible = false;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &HRbilling::numericUpDown3_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Enabled = false;
			this->label5->ForeColor = System::Drawing::Color::LimeGreen;
			this->label5->Location = System::Drawing::Point(86, 182);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 38;
			this->label5->Text = L"label5";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Enabled = false;
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(176, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 37;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(386, 228);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 44;
			this->textBox4->Text = L"0";
			this->textBox4->Visible = false;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Enabled = false;
			this->numericUpDown4->Location = System::Drawing::Point(242, 229);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 22);
			this->numericUpDown4->TabIndex = 43;
			this->numericUpDown4->Visible = false;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &HRbilling::numericUpDown4_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Enabled = false;
			this->label7->ForeColor = System::Drawing::Color::LimeGreen;
			this->label7->Location = System::Drawing::Point(86, 231);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 42;
			this->label7->Text = L"label7";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Enabled = false;
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(176, 231);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 41;
			this->label8->Text = L"label8";
			this->label8->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(386, 277);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 48;
			this->textBox5->Text = L"0";
			this->textBox5->Visible = false;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Enabled = false;
			this->numericUpDown5->Location = System::Drawing::Point(242, 278);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 22);
			this->numericUpDown5->TabIndex = 47;
			this->numericUpDown5->Visible = false;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &HRbilling::numericUpDown5_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Enabled = false;
			this->label9->ForeColor = System::Drawing::Color::LimeGreen;
			this->label9->Location = System::Drawing::Point(86, 280);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 46;
			this->label9->Text = L"label9";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Enabled = false;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(176, 280);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 16);
			this->label10->TabIndex = 45;
			this->label10->Text = L"label10";
			this->label10->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(386, 323);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 52;
			this->textBox6->Text = L"0";
			this->textBox6->Visible = false;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Enabled = false;
			this->numericUpDown6->Location = System::Drawing::Point(242, 324);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 22);
			this->numericUpDown6->TabIndex = 51;
			this->numericUpDown6->Visible = false;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &HRbilling::numericUpDown6_ValueChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Enabled = false;
			this->label11->ForeColor = System::Drawing::Color::LimeGreen;
			this->label11->Location = System::Drawing::Point(86, 326);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 16);
			this->label11->TabIndex = 50;
			this->label11->Text = L"label11";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Enabled = false;
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(176, 326);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 16);
			this->label12->TabIndex = 49;
			this->label12->Text = L"label12";
			this->label12->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(386, 371);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 56;
			this->textBox7->Text = L"0";
			this->textBox7->Visible = false;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Enabled = false;
			this->numericUpDown7->Location = System::Drawing::Point(242, 372);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(120, 22);
			this->numericUpDown7->TabIndex = 55;
			this->numericUpDown7->Visible = false;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &HRbilling::numericUpDown7_ValueChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Enabled = false;
			this->label13->ForeColor = System::Drawing::Color::LimeGreen;
			this->label13->Location = System::Drawing::Point(86, 374);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 16);
			this->label13->TabIndex = 54;
			this->label13->Text = L"label13";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Enabled = false;
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(176, 374);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 16);
			this->label14->TabIndex = 53;
			this->label14->Text = L"label14";
			this->label14->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(386, 419);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 60;
			this->textBox8->Text = L"0";
			this->textBox8->Visible = false;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Enabled = false;
			this->numericUpDown8->Location = System::Drawing::Point(242, 420);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(120, 22);
			this->numericUpDown8->TabIndex = 59;
			this->numericUpDown8->Visible = false;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &HRbilling::numericUpDown8_ValueChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Enabled = false;
			this->label15->ForeColor = System::Drawing::Color::LimeGreen;
			this->label15->Location = System::Drawing::Point(86, 422);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(51, 16);
			this->label15->TabIndex = 58;
			this->label15->Text = L"label15";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Enabled = false;
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(176, 422);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(51, 16);
			this->label16->TabIndex = 57;
			this->label16->Text = L"label16";
			this->label16->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(386, 468);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 64;
			this->textBox9->Text = L"0";
			this->textBox9->Visible = false;
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Enabled = false;
			this->numericUpDown9->Location = System::Drawing::Point(242, 469);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(120, 22);
			this->numericUpDown9->TabIndex = 63;
			this->numericUpDown9->Visible = false;
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &HRbilling::numericUpDown9_ValueChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Enabled = false;
			this->label17->ForeColor = System::Drawing::Color::LimeGreen;
			this->label17->Location = System::Drawing::Point(86, 471);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(51, 16);
			this->label17->TabIndex = 62;
			this->label17->Text = L"label17";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Enabled = false;
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(176, 471);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 16);
			this->label18->TabIndex = 61;
			this->label18->Text = L"label18";
			this->label18->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(386, 515);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 68;
			this->textBox10->Text = L"0";
			this->textBox10->Visible = false;
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Enabled = false;
			this->numericUpDown10->Location = System::Drawing::Point(242, 516);
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(120, 22);
			this->numericUpDown10->TabIndex = 67;
			this->numericUpDown10->Visible = false;
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &HRbilling::numericUpDown10_ValueChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Enabled = false;
			this->label19->ForeColor = System::Drawing::Color::LimeGreen;
			this->label19->Location = System::Drawing::Point(86, 518);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(51, 16);
			this->label19->TabIndex = 66;
			this->label19->Text = L"label19";
			this->label19->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Enabled = false;
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Location = System::Drawing::Point(176, 518);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(51, 16);
			this->label20->TabIndex = 65;
			this->label20->Text = L"label20";
			this->label20->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(676, 90);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(44, 16);
			this->label21->TabIndex = 70;
			this->label21->Text = L"Total :";
			this->label21->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(728, 88);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 71;
			this->textBox11->Text = L"0";
			this->textBox11->Visible = false;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(834, 88);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 72;
			this->textBox12->Text = L"0";
			this->textBox12->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(725, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 73;
			this->button1->Text = L"Save Bill";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &HRbilling::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(773, 495);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 74;
			this->button2->Text = L"START";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &HRbilling::button2_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Enabled = false;
			this->label22->ForeColor = System::Drawing::Color::LimeGreen;
			this->label22->Location = System::Drawing::Point(98, 64);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(32, 16);
			this->label22->TabIndex = 75;
			this->label22->Text = L"Item";
			this->label22->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Enabled = false;
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Location = System::Drawing::Point(182, 64);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(38, 16);
			this->label23->TabIndex = 76;
			this->label23->Text = L"Price";
			this->label23->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Enabled = false;
			this->label24->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label24->Location = System::Drawing::Point(276, 64);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(55, 16);
			this->label24->TabIndex = 77;
			this->label24->Text = L"Quantity";
			this->label24->Visible = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Enabled = false;
			this->label25->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label25->Location = System::Drawing::Point(421, 64);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(34, 16);
			this->label25->TabIndex = 78;
			this->label25->Text = L"Cost";
			this->label25->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->richTextBox1->Location = System::Drawing::Point(679, 180);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(255, 269);
			this->richTextBox1->TabIndex = 79;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(811, 135);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 80;
			this->button3->Text = L"Reciept";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &HRbilling::button3_Click);
			// 
			// HRbilling
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Chartreuse;
			this->ClientSize = System::Drawing::Size(1146, 554);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Hlabel);
			this->Controls->Add(this->button4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"HRbilling";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Management System - Restaurant Billing System";
			this->Load += gcnew System::EventHandler(this, &HRbilling::HRbilling_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
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

	public: System::Void init(int a, String^ item, String^ price) {
		if (a == 1)
		{
			label1->Visible = true;
			label1->Enabled = true;
			label1->Text = item;
			label2->Text = price;
			label2->Visible = true;
			label2->Enabled = true;
			numericUpDown1->Enabled = true;
			numericUpDown1->Visible = true;
			textBox1->Enabled = true;
			textBox1->Visible = true;
		}
		else if (a == 2)
		{
			label3->Visible = true;
			label3->Enabled = true;
			label3->Text = item;
			label4->Text = price;
			label4->Visible = true;
			label4->Enabled = true;
			numericUpDown2->Enabled = true;
			numericUpDown2->Visible = true;
			textBox2->Enabled = true;
			textBox2->Visible = true;
		}
		else if (a == 3)
		{
			label5->Visible = true;
			label5->Enabled = true;
			label5->Text = item;
			label6->Text = price;
			label6->Visible = true;
			label6->Enabled = true;
			numericUpDown3->Enabled = true;
			numericUpDown3->Visible = true;
			textBox3->Enabled = true;
			textBox3->Visible = true;
		}
		else if (a == 4)
		{
			label7->Visible = true;
			label7->Enabled = true;
			label7->Text = item;
			label8->Text = price;
			label8->Visible = true;
			label8->Enabled = true;
			numericUpDown4->Enabled = true;
			numericUpDown4->Visible = true;
			textBox4->Enabled = true;
			textBox4->Visible = true;
		}
		else if (a == 5)
		{
			label9->Visible = true;
			label9->Enabled = true;
			label9->Text = item;
			label10->Text = price;
			label10->Visible = true;
			label10->Enabled = true;
			numericUpDown5->Enabled = true;
			numericUpDown5->Visible = true;
			textBox5->Enabled = true;
			textBox5->Visible = true;
		}
		else if (a == 6)
		{
			label11->Visible = true;
			label11->Enabled = true;
			label11->Text = item;
			label12->Text = price;
			label12->Visible = true;
			label12->Enabled = true;
			numericUpDown6->Enabled = true;
			numericUpDown6->Visible = true;
			textBox6->Enabled = true;
			textBox6->Visible = true;
		}
		else if (a == 7)
		{
			label13->Visible = true;
			label13->Enabled = true;
			label13->Text = item;
			label14->Text = price;
			label14->Visible = true;
			label14->Enabled = true;
			numericUpDown7->Enabled = true;
			numericUpDown7->Visible = true;
			textBox7->Enabled = true;
			textBox7->Visible = true;
		}
		else if (a == 8)
		{
			label15->Visible = true;
			label15->Enabled = true;
			label15->Text = item;
			label16->Text = price;
			label16->Visible = true;
			label16->Enabled = true;
			numericUpDown8->Enabled = true;
			numericUpDown8->Visible = true;
			textBox8->Enabled = true;
			textBox8->Visible = true;
		}
		else if (a == 9)
		{
			label17->Visible = true;
			label17->Enabled = true;
			label17->Text = item;
			label18->Text = price;
			label18->Visible = true;
			label18->Enabled = true;
			numericUpDown9->Enabled = true;
			numericUpDown9->Visible = true;
			textBox9->Enabled = true;
			textBox9->Visible = true;
		}
		else if (a == 10)
		{
			label19->Visible = true;
			label19->Enabled = true;
			label19->Text = item;
			label20->Text = price;
			label20->Visible = true;
			label20->Enabled = true;
			numericUpDown10->Enabled = true;
			numericUpDown10->Visible = true;
			textBox10->Enabled = true;
			textBox10->Visible = true;
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `restaurant` WHERE `hotelId` = " + userdata1->hotelId + "", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			int i = 1;
			while (dr->Read())
			{
				label21->Visible = true;
				button3->Visible = true;
				richTextBox1->Visible = true;
				textBox11->Visible = true;
				textBox12->Visible = true;
				button1->Visible = true;
				label22->Visible = true;
				label23->Visible = true;
				label24->Visible = true;
				label25->Visible = true;
				init(i, dr->GetString(2), dr->GetString(3));
				i++;
			}
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = (numericUpDown1->Value * Int32::Parse(label2->Text)).ToString();
		textBox11->Text = (Convert::ToInt32(numericUpDown1->Value) + Convert::ToInt32(numericUpDown2->Value) + Convert::ToInt32(numericUpDown3->Value) + Convert::ToInt32(numericUpDown4->Value) + Convert::ToInt32(numericUpDown5->Value) + Convert::ToInt32(numericUpDown6->Value) + Convert::ToInt32(numericUpDown7->Value) + Convert::ToInt32(numericUpDown8->Value) + Convert::ToInt32(numericUpDown9->Value) + Convert::ToInt32(numericUpDown10->Value)).ToString();
		textBox12->Text = (Int32::Parse(textBox1->Text)+ Int32::Parse(textBox2->Text) + Int32::Parse(textBox3->Text) + Int32::Parse(textBox4->Text) + Int32::Parse(textBox5->Text) + Int32::Parse(textBox6->Text) + Int32::Parse(textBox7->Text) + Int32::Parse(textBox8->Text) + Int32::Parse(textBox9->Text) + Int32::Parse(textBox10->Text)).ToString();
	}
	private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = (numericUpDown2->Value * Int32::Parse(label4->Text)).ToString();
		textBox11->Text = (Convert::ToInt32(numericUpDown1->Value) + Convert::ToInt32(numericUpDown2->Value) + Convert::ToInt32(numericUpDown3->Value) + Convert::ToInt32(numericUpDown4->Value) + Convert::ToInt32(numericUpDown5->Value) + Convert::ToInt32(numericUpDown6->Value) + Convert::ToInt32(numericUpDown7->Value) + Convert::ToInt32(numericUpDown8->Value) + Convert::ToInt32(numericUpDown9->Value) + Convert::ToInt32(numericUpDown10->Value)).ToString();
		textBox12->Text = (Int32::Parse(textBox1->Text) + Int32::Parse(textBox2->Text) + Int32::Parse(textBox3->Text) + Int32::Parse(textBox4->Text) + Int32::Parse(textBox5->Text) + Int32::Parse(textBox6->Text) + Int32::Parse(textBox7->Text) + Int32::Parse(textBox8->Text) + Int32::Parse(textBox9->Text) + Int32::Parse(textBox10->Text)).ToString();
	}
	private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = (numericUpDown3->Value * Int32::Parse(label6->Text)).ToString();
		textBox11->Text = (Convert::ToInt32(numericUpDown1->Value) + Convert::ToInt32(numericUpDown2->Value) + Convert::ToInt32(numericUpDown3->Value) + Convert::ToInt32(numericUpDown4->Value) + Convert::ToInt32(numericUpDown5->Value) + Convert::ToInt32(numericUpDown6->Value) + Convert::ToInt32(numericUpDown7->Value) + Convert::ToInt32(numericUpDown8->Value) + Convert::ToInt32(numericUpDown9->Value) + Convert::ToInt32(numericUpDown10->Value)).ToString();
		textBox12->Text = (Int32::Parse(textBox1->Text) + Int32::Parse(textBox2->Text) + Int32::Parse(textBox3->Text) + Int32::Parse(textBox4->Text) + Int32::Parse(textBox5->Text) + Int32::Parse(textBox6->Text) + Int32::Parse(textBox7->Text) + Int32::Parse(textBox8->Text) + Int32::Parse(textBox9->Text) + Int32::Parse(textBox10->Text)).ToString();
	}
	private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox4->Text = (numericUpDown4->Value * Int32::Parse(label8->Text)).ToString();
		textBox11->Text = (Convert::ToInt32(numericUpDown1->Value) + Convert::ToInt32(numericUpDown2->Value) + Convert::ToInt32(numericUpDown3->Value) + Convert::ToInt32(numericUpDown4->Value) + Convert::ToInt32(numericUpDown5->Value) + Convert::ToInt32(numericUpDown6->Value) + Convert::ToInt32(numericUpDown7->Value) + Convert::ToInt32(numericUpDown8->Value) + Convert::ToInt32(numericUpDown9->Value) + Convert::ToInt32(numericUpDown10->Value)).ToString();
		textBox12->Text = (Int32::Parse(textBox1->Text) + Int32::Parse(textBox2->Text) + Int32::Parse(textBox3->Text) + Int32::Parse(textBox4->Text) + Int32::Parse(textBox5->Text) + Int32::Parse(textBox6->Text) + Int32::Parse(textBox7->Text) + Int32::Parse(textBox8->Text) + Int32::Parse(textBox9->Text) + Int32::Parse(textBox10->Text)).ToString();
	}
	private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox5->Text = (numericUpDown5->Value * Int32::Parse(label10->Text)).ToString();
		textBox11->Text = (Convert::ToInt32(numericUpDown1->Value) + Convert::ToInt32(numericUpDown2->Value) + Convert::ToInt32(numericUpDown3->Value) + Convert::ToInt32(numericUpDown4->Value) + Convert::ToInt32(numericUpDown5->Value) + Convert::ToInt32(numericUpDown6->Value) + Convert::ToInt32(numericUpDown7->Value) + Convert::ToInt32(numericUpDown8->Value) + Convert::ToInt32(numericUpDown9->Value) + Convert::ToInt32(numericUpDown10->Value)).ToString();
		textBox12->Text = (Int32::Parse(textBox1->Text) + Int32::Parse(textBox2->Text) + Int32::Parse(textBox3->Text) + Int32::Parse(textBox4->Text) + Int32::Parse(textBox5->Text) + Int32::Parse(textBox6->Text) + Int32::Parse(textBox7->Text) + Int32::Parse(textBox8->Text) + Int32::Parse(textBox9->Text) + Int32::Parse(textBox10->Text)).ToString();
	}
	private: System::Void numericUpDown6_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox6->Text = (numericUpDown6->Value * Int32::Parse(label12->Text)).ToString();
		textBox11->Text = (Convert::ToInt32(numericUpDown1->Value) + Convert::ToInt32(numericUpDown2->Value) + Convert::ToInt32(numericUpDown3->Value) + Convert::ToInt32(numericUpDown4->Value) + Convert::ToInt32(numericUpDown5->Value) + Convert::ToInt32(numericUpDown6->Value) + Convert::ToInt32(numericUpDown7->Value) + Convert::ToInt32(numericUpDown8->Value) + Convert::ToInt32(numericUpDown9->Value) + Convert::ToInt32(numericUpDown10->Value)).ToString();
		textBox12->Text = (Int32::Parse(textBox1->Text) + Int32::Parse(textBox2->Text) + Int32::Parse(textBox3->Text) + Int32::Parse(textBox4->Text) + Int32::Parse(textBox5->Text) + Int32::Parse(textBox6->Text) + Int32::Parse(textBox7->Text) + Int32::Parse(textBox8->Text) + Int32::Parse(textBox9->Text) + Int32::Parse(textBox10->Text)).ToString();
	}
	private: System::Void numericUpDown7_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox7->Text = (numericUpDown7->Value * Int32::Parse(label14->Text)).ToString();
		textBox11->Text = (Convert::ToInt32(numericUpDown1->Value) + Convert::ToInt32(numericUpDown2->Value) + Convert::ToInt32(numericUpDown3->Value) + Convert::ToInt32(numericUpDown4->Value) + Convert::ToInt32(numericUpDown5->Value) + Convert::ToInt32(numericUpDown6->Value) + Convert::ToInt32(numericUpDown7->Value) + Convert::ToInt32(numericUpDown8->Value) + Convert::ToInt32(numericUpDown9->Value) + Convert::ToInt32(numericUpDown10->Value)).ToString();
		textBox12->Text = (Int32::Parse(textBox1->Text) + Int32::Parse(textBox2->Text) + Int32::Parse(textBox3->Text) + Int32::Parse(textBox4->Text) + Int32::Parse(textBox5->Text) + Int32::Parse(textBox6->Text) + Int32::Parse(textBox7->Text) + Int32::Parse(textBox8->Text) + Int32::Parse(textBox9->Text) + Int32::Parse(textBox10->Text)).ToString();
	}
	private: System::Void numericUpDown8_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox8->Text = (numericUpDown8->Value * Int32::Parse(label16->Text)).ToString();
		textBox11->Text = (Convert::ToInt32(numericUpDown1->Value) + Convert::ToInt32(numericUpDown2->Value) + Convert::ToInt32(numericUpDown3->Value) + Convert::ToInt32(numericUpDown4->Value) + Convert::ToInt32(numericUpDown5->Value) + Convert::ToInt32(numericUpDown6->Value) + Convert::ToInt32(numericUpDown7->Value) + Convert::ToInt32(numericUpDown8->Value) + Convert::ToInt32(numericUpDown9->Value) + Convert::ToInt32(numericUpDown10->Value)).ToString();
		textBox12->Text = (Int32::Parse(textBox1->Text) + Int32::Parse(textBox2->Text) + Int32::Parse(textBox3->Text) + Int32::Parse(textBox4->Text) + Int32::Parse(textBox5->Text) + Int32::Parse(textBox6->Text) + Int32::Parse(textBox7->Text) + Int32::Parse(textBox8->Text) + Int32::Parse(textBox9->Text) + Int32::Parse(textBox10->Text)).ToString();
	}
	private: System::Void numericUpDown9_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox9->Text = (numericUpDown9->Value * Int32::Parse(label18->Text)).ToString();
		textBox11->Text = (Convert::ToInt32(numericUpDown1->Value) + Convert::ToInt32(numericUpDown2->Value) + Convert::ToInt32(numericUpDown3->Value) + Convert::ToInt32(numericUpDown4->Value) + Convert::ToInt32(numericUpDown5->Value) + Convert::ToInt32(numericUpDown6->Value) + Convert::ToInt32(numericUpDown7->Value) + Convert::ToInt32(numericUpDown8->Value) + Convert::ToInt32(numericUpDown9->Value) + Convert::ToInt32(numericUpDown10->Value)).ToString();
		textBox12->Text = (Int32::Parse(textBox1->Text) + Int32::Parse(textBox2->Text) + Int32::Parse(textBox3->Text) + Int32::Parse(textBox4->Text) + Int32::Parse(textBox5->Text) + Int32::Parse(textBox6->Text) + Int32::Parse(textBox7->Text) + Int32::Parse(textBox8->Text) + Int32::Parse(textBox9->Text) + Int32::Parse(textBox10->Text)).ToString();
	}
	private: System::Void numericUpDown10_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox10->Text = (numericUpDown10->Value * Int32::Parse(label20->Text)).ToString();
		textBox11->Text = (Convert::ToInt32(numericUpDown1->Value) + Convert::ToInt32(numericUpDown2->Value) + Convert::ToInt32(numericUpDown3->Value) + Convert::ToInt32(numericUpDown4->Value) + Convert::ToInt32(numericUpDown5->Value) + Convert::ToInt32(numericUpDown6->Value) + Convert::ToInt32(numericUpDown7->Value) + Convert::ToInt32(numericUpDown8->Value) + Convert::ToInt32(numericUpDown9->Value) + Convert::ToInt32(numericUpDown10->Value)).ToString();
		textBox12->Text = (Int32::Parse(textBox1->Text) + Int32::Parse(textBox2->Text) + Int32::Parse(textBox3->Text) + Int32::Parse(textBox4->Text) + Int32::Parse(textBox5->Text) + Int32::Parse(textBox6->Text) + Int32::Parse(textBox7->Text) + Int32::Parse(textBox8->Text) + Int32::Parse(textBox9->Text) + Int32::Parse(textBox10->Text)).ToString();
	}
	private: System::Void HRbilling_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
		richTextBox1->AppendText("\t   " + userdata1->hotelName + "\n");
		richTextBox1->AppendText("             "+DateTime::Now + "\n\n");
		richTextBox1->AppendText(label22->Text + "\t" + label23->Text + "\t" + label24->Text + "\t" + label25->Text + "\n\n");
		if (numericUpDown1->Value > 0) {
			richTextBox1->AppendText(label1->Text + "\t" + label2->Text + "\t" + numericUpDown1->Value + "\t" + textBox1->Text + "\n");
		}
		if (numericUpDown2->Value > 0) {
			richTextBox1->AppendText(label3->Text + "\t" + label4->Text + "\t" + numericUpDown2->Value + "\t" + textBox2->Text + "\n");
		}
		if (numericUpDown3->Value > 0) {
			richTextBox1->AppendText(label5->Text + "\t" + label6->Text + "\t" + numericUpDown3->Value + "\t" + textBox3->Text + "\n");
		}
		if (numericUpDown4->Value > 0) {
			richTextBox1->AppendText(label7->Text + "\t" + label8->Text + "\t" + numericUpDown4->Value + "\t" + textBox4->Text + "\n");
		}
		if (numericUpDown5->Value > 0) {
			richTextBox1->AppendText(label9->Text + "\t" + label10->Text + "\t" + numericUpDown5->Value + "\t" + textBox5->Text + "\n");
		}
		if (numericUpDown6->Value > 0) {
			richTextBox1->AppendText(label11->Text + "\t" + label12->Text + "\t" + numericUpDown6->Value + "\t" + textBox6->Text + "\n");
		}
		if (numericUpDown7->Value > 0) {
			richTextBox1->AppendText(label13->Text + "\t" + label14->Text + "\t" + numericUpDown7->Value + "\t" + textBox7->Text + "\n");
		}
		if (numericUpDown8->Value > 0) {
			richTextBox1->AppendText(label15->Text + "\t" + label16->Text + "\t" + numericUpDown8->Value + "\t" + textBox8->Text + "\n");
		}
		if (numericUpDown9->Value > 0) {
			richTextBox1->AppendText(label17->Text + "\t" + label18->Text + "\t" + numericUpDown9->Value + "\t" + textBox9->Text + "\n");
		}
		if (numericUpDown10->Value > 0) {
			richTextBox1->AppendText(label19->Text + "\t" + label20->Text + "\t" + numericUpDown10->Value + "\t" + textBox10->Text + "\n");
		}
		richTextBox1->AppendText("\n\t" + label21->Text + "\t" + textBox11->Text + "\t" + textBox12->Text);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int noItems = Int32::Parse(textBox11->Text);
		int price = Int32::Parse(textBox12->Text);
		try
		{
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO `rbill`(`hotelId`, `noItems`, `totPrice`) VALUES ("+userdata1->hotelId+","+noItems+","+price+")", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Bill saved successfully");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
