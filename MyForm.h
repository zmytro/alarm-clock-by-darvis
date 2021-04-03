#pragma once
#include <iostream>
#include<ctime>
#include <windows.h>
#include <mmsystem.h>
namespace AttestationFiodorovDmitri {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ HoursBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ DateBox;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::ComboBox^ CheckHour1;
	private: System::Windows::Forms::ComboBox^ CheckMin1;
	private: System::Windows::Forms::TextBox^ MinBox;
	private: System::Windows::Forms::TextBox^ SecBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;







	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->HoursBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DateBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->CheckHour1 = (gcnew System::Windows::Forms::ComboBox());
			this->CheckMin1 = (gcnew System::Windows::Forms::ComboBox());
			this->MinBox = (gcnew System::Windows::Forms::TextBox());
			this->SecBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(111, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Включить будильник";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// HoursBox
			// 
			this->HoursBox->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->HoursBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->HoursBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->HoursBox->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HoursBox->Location = System::Drawing::Point(94, 42);
			this->HoursBox->Multiline = true;
			this->HoursBox->Name = L"HoursBox";
			this->HoursBox->Size = System::Drawing::Size(40, 27);
			this->HoursBox->TabIndex = 2;
			this->HoursBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(141, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Текущее время";
			// 
			// DateBox
			// 
			this->DateBox->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->DateBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DateBox->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DateBox->Location = System::Drawing::Point(128, 90);
			this->DateBox->Multiline = true;
			this->DateBox->Name = L"DateBox";
			this->DateBox->Size = System::Drawing::Size(100, 20);
			this->DateBox->TabIndex = 4;
			this->DateBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(-12, 304);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(357, 266);
			this->textBox3->TabIndex = 5;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(75, 189);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(29, 186);
			this->maskedTextBox1->Mask = L"90:00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(33, 20);
			this->maskedTextBox1->TabIndex = 8;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// CheckHour1
			// 
			this->CheckHour1->FormattingEnabled = true;
			this->CheckHour1->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24"
			});
			this->CheckHour1->Location = System::Drawing::Point(29, 223);
			this->CheckHour1->Name = L"CheckHour1";
			this->CheckHour1->Size = System::Drawing::Size(41, 21);
			this->CheckHour1->TabIndex = 9;
			this->CheckHour1->Text = L"13";
			// 
			// CheckMin1
			// 
			this->CheckMin1->FormattingEnabled = true;
			this->CheckMin1->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42",
					L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->CheckMin1->Location = System::Drawing::Point(76, 223);
			this->CheckMin1->Name = L"CheckMin1";
			this->CheckMin1->Size = System::Drawing::Size(41, 21);
			this->CheckMin1->TabIndex = 10;
			// 
			// MinBox
			// 
			this->MinBox->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MinBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MinBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->MinBox->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MinBox->Location = System::Drawing::Point(164, 42);
			this->MinBox->Multiline = true;
			this->MinBox->Name = L"MinBox";
			this->MinBox->Size = System::Drawing::Size(40, 27);
			this->MinBox->TabIndex = 11;
			this->MinBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// SecBox
			// 
			this->SecBox->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->SecBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SecBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->SecBox->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SecBox->Location = System::Drawing::Point(228, 43);
			this->SecBox->Multiline = true;
			this->SecBox->Name = L"SecBox";
			this->SecBox->Size = System::Drawing::Size(40, 26);
			this->SecBox->TabIndex = 12;
			this->SecBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(140, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 19);
			this->label2->TabIndex = 13;
			this->label2->Text = L":";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(209, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 19);
			this->label3->TabIndex = 14;
			this->label3->Text = L":";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(381, 456);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->SecBox);
			this->Controls->Add(this->MinBox);
			this->Controls->Add(this->CheckMin1);
			this->Controls->Add(this->CheckHour1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->DateBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->HoursBox);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		bool button_clk = true;


		if (checkBox1->Checked == true)
			MessageBox::Show(this, "Будильник установлен");

			
		if (checkBox1->Checked == false)
			MessageBox::Show(this, "Ни один будильник не установлен");


	}


	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		HoursBox->Text = DateTime::Now.ToString("HH");
		MinBox->Text = DateTime::Now.ToString("mm");
		SecBox->Text = DateTime::Now.ToString("ss");
		DateBox->Text = DateTime::Now.ToString("dd/MM/yyyy");

		
		
			if (CheckHour1->Text == HoursBox->Text && CheckMin1->Text == MinBox->Text && SecBox->Text=="00" && checkBox1->Checked == true)
			{
				MessageBox::Show(this, "Вставай,будильник звенит");

			}


		
	}

};
}
