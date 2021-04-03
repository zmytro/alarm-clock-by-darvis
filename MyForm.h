#pragma once
#include <iostream>
#include <Windows.h>
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

	private: System::Windows::Forms::ComboBox^ CheckHour1;
	private: System::Windows::Forms::ComboBox^ CheckMin1;
	private: System::Windows::Forms::TextBox^ MinBox;
	private: System::Windows::Forms::TextBox^ SecBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ CheckMin2;
	private: System::Windows::Forms::ComboBox^ CheckHour2;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ CheckMin3;
	private: System::Windows::Forms::ComboBox^ CheckHour3;
	private: System::Windows::Forms::CheckBox^ checkBox3;







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
			this->CheckHour1 = (gcnew System::Windows::Forms::ComboBox());
			this->CheckMin1 = (gcnew System::Windows::Forms::ComboBox());
			this->MinBox = (gcnew System::Windows::Forms::TextBox());
			this->SecBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->CheckMin2 = (gcnew System::Windows::Forms::ComboBox());
			this->CheckHour2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->CheckMin3 = (gcnew System::Windows::Forms::ComboBox());
			this->CheckHour3 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(111, 135);
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
			this->textBox3->Location = System::Drawing::Point(12, 178);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(357, 222);
			this->textBox3->TabIndex = 5;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(143, 222);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// CheckHour1
			// 
			this->CheckHour1->FormattingEnabled = true;
			this->CheckHour1->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->CheckHour1->Location = System::Drawing::Point(29, 219);
			this->CheckHour1->Name = L"CheckHour1";
			this->CheckHour1->Size = System::Drawing::Size(41, 21);
			this->CheckHour1->TabIndex = 9;
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
			this->CheckMin1->Location = System::Drawing::Point(76, 219);
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(144, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 15);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Будильник 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(144, 254);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 15);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Будильник 2";
			// 
			// CheckMin2
			// 
			this->CheckMin2->FormattingEnabled = true;
			this->CheckMin2->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42",
					L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->CheckMin2->Location = System::Drawing::Point(76, 281);
			this->CheckMin2->Name = L"CheckMin2";
			this->CheckMin2->Size = System::Drawing::Size(41, 21);
			this->CheckMin2->TabIndex = 18;
			// 
			// CheckHour2
			// 
			this->CheckHour2->FormattingEnabled = true;
			this->CheckHour2->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24"
			});
			this->CheckHour2->Location = System::Drawing::Point(29, 281);
			this->CheckHour2->Name = L"CheckHour2";
			this->CheckHour2->Size = System::Drawing::Size(41, 21);
			this->CheckHour2->TabIndex = 17;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(143, 284);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 16;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(144, 317);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 15);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Будильник 3";
			// 
			// CheckMin3
			// 
			this->CheckMin3->FormattingEnabled = true;
			this->CheckMin3->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42",
					L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->CheckMin3->Location = System::Drawing::Point(76, 344);
			this->CheckMin3->Name = L"CheckMin3";
			this->CheckMin3->Size = System::Drawing::Size(41, 21);
			this->CheckMin3->TabIndex = 22;
			// 
			// CheckHour3
			// 
			this->CheckHour3->FormattingEnabled = true;
			this->CheckHour3->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24"
			});
			this->CheckHour3->Location = System::Drawing::Point(29, 344);
			this->CheckHour3->Name = L"CheckHour3";
			this->CheckHour3->Size = System::Drawing::Size(41, 21);
			this->CheckHour3->TabIndex = 21;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(143, 347);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 20;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(381, 409);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->CheckMin3);
			this->Controls->Add(this->CheckHour3);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->CheckMin2);
			this->Controls->Add(this->CheckHour2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->SecBox);
			this->Controls->Add(this->MinBox);
			this->Controls->Add(this->CheckMin1);
			this->Controls->Add(this->CheckHour1);
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
			MessageBox::Show(this, "Alarm Installed");

			
		if (checkBox1->Checked == false)
			MessageBox::Show(this, "No one alarm is installed");


	}


	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		HoursBox->Text = DateTime::Now.ToString("HH");
		MinBox->Text = DateTime::Now.ToString("mm");
		SecBox->Text = DateTime::Now.ToString("ss");
		DateBox->Text = DateTime::Now.ToString("dd/MM/yyyy");

		//проверка первого будильника 
		
			if (CheckHour1->Text == HoursBox->Text && CheckMin1->Text == MinBox->Text && SecBox->Text=="00" && checkBox1->Checked == true)
			{
				PlaySound(TEXT("sound1.wav"), NULL, SND_ASYNC);
				MessageBox::Show(this, "Wake up,it's not time to sleep");
				
				System::Windows::Forms::DialogResult result = MessageBox::Show("Остановить будильник? Если нет - то переставить на 1 мин",
					"Сообщение",
					MessageBoxButtons::YesNo);
				//выбор функции после срабатывания будильника
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
					CheckMin1->Text = CheckMin1->Text + 1;
				}
				else if (result == System::Windows::Forms::DialogResult::No)
				{
					
					
				}
			}


		//проверка второго будильника 
			if (CheckHour2->Text == HoursBox->Text && CheckMin2->Text == MinBox->Text && SecBox->Text == "00" && checkBox2->Checked == true)
			{
				PlaySound(TEXT("sound1.wav"), NULL, SND_ASYNC);
				MessageBox::Show(this, "Wake up,it's not time to sleep");

				System::Windows::Forms::DialogResult result = MessageBox::Show("Остановить будильник? Если нет - то переставить на 1 мин",
					"Сообщение",
					MessageBoxButtons::YesNo);
				//выбор функции после срабатывания будильника
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
					CheckMin2->Text = CheckMin2->Text + 1;
				}
				else if (result == System::Windows::Forms::DialogResult::No)
				{


				}
			}
		//проверка третьего будильника
			if (CheckHour3->Text == HoursBox->Text && CheckMin3->Text == MinBox->Text && SecBox->Text == "00" && checkBox3->Checked == true)
			{
				PlaySound(TEXT("sound1.wav"), NULL, SND_ASYNC);
				MessageBox::Show(this, "Wake up,it's not time to sleep");

				System::Windows::Forms::DialogResult result = MessageBox::Show("Остановить будильник? Если нет - то переставить на 1 мин",
					"Сообщение",
					MessageBoxButtons::YesNo);
				//выбор функции после срабатывания будильника
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
					CheckMin3->Text = CheckMin3->Text + 1;
				}
				else if (result == System::Windows::Forms::DialogResult::No)
				{


				}
			}


		
	}

};
}
