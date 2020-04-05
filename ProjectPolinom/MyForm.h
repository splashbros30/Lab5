#pragma once
#include"Monom.h"
#include"Polinom_Header.h"
#include <msclr\marshal_cppstd.h>

namespace ProjectPolinom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Exit_button;
	private: System::Windows::Forms::TextBox^  Chislo_perem_textBox;
	private: System::Windows::Forms::TextBox^  maxst_textBox;
	private: System::Windows::Forms::Button^  SET_button1;
	private: System::Windows::Forms::Button^  SET_button2;
	private: System::Windows::Forms::TextBox^  Polinom1_textBox;
	private: System::Windows::Forms::TextBox^  Polinom2_textBox;
	private: System::Windows::Forms::TextBox^  Action_with_Polinom1_textBox;
	private: System::Windows::Forms::TextBox^  Action_with_Polinom2_textBox;
	private: System::Windows::Forms::Button^  ADD_Polinom1_button;
	private: System::Windows::Forms::Button^  DEL_Polinom1_button;
	private: System::Windows::Forms::Button^  ADD_Polinom2_button;
	private: System::Windows::Forms::Button^  DEL_Polinom2_button;
	private: System::Windows::Forms::Button^  Plus_button;
	private: System::Windows::Forms::TextBox^  Res_textBox;
	private: System::Windows::Forms::Button^  Minus_button;
	private: System::Windows::Forms::Button^  Multiplication_button;
	private: System::Windows::Forms::Button^  Multiplication_by_number_button;
	private: System::Windows::Forms::TextBox^  Multiplication_by_number_textBox;
	private: System::Windows::Forms::Button^  Multiplication_by_number_Q_button;
	private: System::Windows::Forms::TextBox^  Multiplication_by_number_Q_textBox;

	private: System::Windows::Forms::Button^  Clear_button;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Exit_button = (gcnew System::Windows::Forms::Button());
			this->Chislo_perem_textBox = (gcnew System::Windows::Forms::TextBox());
			this->maxst_textBox = (gcnew System::Windows::Forms::TextBox());
			this->SET_button1 = (gcnew System::Windows::Forms::Button());
			this->SET_button2 = (gcnew System::Windows::Forms::Button());
			this->Polinom1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Polinom2_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Action_with_Polinom1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Action_with_Polinom2_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ADD_Polinom1_button = (gcnew System::Windows::Forms::Button());
			this->DEL_Polinom1_button = (gcnew System::Windows::Forms::Button());
			this->ADD_Polinom2_button = (gcnew System::Windows::Forms::Button());
			this->DEL_Polinom2_button = (gcnew System::Windows::Forms::Button());
			this->Plus_button = (gcnew System::Windows::Forms::Button());
			this->Res_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Minus_button = (gcnew System::Windows::Forms::Button());
			this->Multiplication_button = (gcnew System::Windows::Forms::Button());
			this->Multiplication_by_number_button = (gcnew System::Windows::Forms::Button());
			this->Multiplication_by_number_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Multiplication_by_number_Q_button = (gcnew System::Windows::Forms::Button());
			this->Multiplication_by_number_Q_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Clear_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Exit_button
			// 
			this->Exit_button->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit_button->Location = System::Drawing::Point(859, 470);
			this->Exit_button->Name = L"Exit_button";
			this->Exit_button->Size = System::Drawing::Size(75, 23);
			this->Exit_button->TabIndex = 0;
			this->Exit_button->Text = L"Exit";
			this->Exit_button->UseVisualStyleBackColor = true;
			this->Exit_button->Click += gcnew System::EventHandler(this, &MyForm::Exit_button_Click);
			// 
			// Chislo_perem_textBox
			// 
			this->Chislo_perem_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Chislo_perem_textBox->Location = System::Drawing::Point(653, 12);
			this->Chislo_perem_textBox->Name = L"Chislo_perem_textBox";
			this->Chislo_perem_textBox->Size = System::Drawing::Size(72, 20);
			this->Chislo_perem_textBox->TabIndex = 1;
			this->Chislo_perem_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Chislo_perem_textBox_TextChanged);
			// 
			// maxst_textBox
			// 
			this->maxst_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->maxst_textBox->Location = System::Drawing::Point(446, 12);
			this->maxst_textBox->Name = L"maxst_textBox";
			this->maxst_textBox->Size = System::Drawing::Size(72, 20);
			this->maxst_textBox->TabIndex = 2;
			this->maxst_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::maxst_textBox_TextChanged);
			// 
			// SET_button1
			// 
			this->SET_button1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SET_button1->Location = System::Drawing::Point(429, 38);
			this->SET_button1->Name = L"SET_button1";
			this->SET_button1->Size = System::Drawing::Size(107, 23);
			this->SET_button1->TabIndex = 3;
			this->SET_button1->Text = L"SET MAX ST";
			this->SET_button1->UseVisualStyleBackColor = true;
			this->SET_button1->Click += gcnew System::EventHandler(this, &MyForm::SET_button1_Click);
			// 
			// SET_button2
			// 
			this->SET_button2->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SET_button2->Location = System::Drawing::Point(646, 38);
			this->SET_button2->Name = L"SET_button2";
			this->SET_button2->Size = System::Drawing::Size(89, 23);
			this->SET_button2->TabIndex = 4;
			this->SET_button2->Text = L"SET N";
			this->SET_button2->UseVisualStyleBackColor = true;
			this->SET_button2->Click += gcnew System::EventHandler(this, &MyForm::SET_button2_Click);
			// 
			// Polinom1_textBox
			// 
			this->Polinom1_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Polinom1_textBox->Location = System::Drawing::Point(69, 143);
			this->Polinom1_textBox->Name = L"Polinom1_textBox";
			this->Polinom1_textBox->ReadOnly = true;
			this->Polinom1_textBox->Size = System::Drawing::Size(436, 20);
			this->Polinom1_textBox->TabIndex = 5;
			this->Polinom1_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Polinom1_textBox_TextChanged);
			// 
			// Polinom2_textBox
			// 
			this->Polinom2_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Polinom2_textBox->Location = System::Drawing::Point(69, 255);
			this->Polinom2_textBox->Name = L"Polinom2_textBox";
			this->Polinom2_textBox->ReadOnly = true;
			this->Polinom2_textBox->Size = System::Drawing::Size(436, 20);
			this->Polinom2_textBox->TabIndex = 6;
			this->Polinom2_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Polinom2_textBox_TextChanged);
			// 
			// Action_with_Polinom1_textBox
			// 
			this->Action_with_Polinom1_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Action_with_Polinom1_textBox->Location = System::Drawing::Point(653, 143);
			this->Action_with_Polinom1_textBox->Name = L"Action_with_Polinom1_textBox";
			this->Action_with_Polinom1_textBox->ReadOnly = true;
			this->Action_with_Polinom1_textBox->Size = System::Drawing::Size(129, 20);
			this->Action_with_Polinom1_textBox->TabIndex = 7;
			this->Action_with_Polinom1_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Action_with_Polinom1_textBox_TextChanged);
			// 
			// Action_with_Polinom2_textBox
			// 
			this->Action_with_Polinom2_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Action_with_Polinom2_textBox->Location = System::Drawing::Point(653, 255);
			this->Action_with_Polinom2_textBox->Name = L"Action_with_Polinom2_textBox";
			this->Action_with_Polinom2_textBox->ReadOnly = true;
			this->Action_with_Polinom2_textBox->Size = System::Drawing::Size(129, 20);
			this->Action_with_Polinom2_textBox->TabIndex = 8;
			this->Action_with_Polinom2_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Action_with_Polinom2_textBox_TextChanged);
			// 
			// ADD_Polinom1_button
			// 
			this->ADD_Polinom1_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ADD_Polinom1_button->Location = System::Drawing::Point(788, 120);
			this->ADD_Polinom1_button->Name = L"ADD_Polinom1_button";
			this->ADD_Polinom1_button->Size = System::Drawing::Size(75, 23);
			this->ADD_Polinom1_button->TabIndex = 9;
			this->ADD_Polinom1_button->Text = L"ADD";
			this->ADD_Polinom1_button->UseVisualStyleBackColor = true;
			this->ADD_Polinom1_button->Click += gcnew System::EventHandler(this, &MyForm::ADD_Polinom1_button_Click);
			// 
			// DEL_Polinom1_button
			// 
			this->DEL_Polinom1_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DEL_Polinom1_button->Location = System::Drawing::Point(788, 162);
			this->DEL_Polinom1_button->Name = L"DEL_Polinom1_button";
			this->DEL_Polinom1_button->Size = System::Drawing::Size(75, 23);
			this->DEL_Polinom1_button->TabIndex = 10;
			this->DEL_Polinom1_button->Text = L"DEL";
			this->DEL_Polinom1_button->UseVisualStyleBackColor = true;
			this->DEL_Polinom1_button->Click += gcnew System::EventHandler(this, &MyForm::DEL_Polinom1_button_Click);
			// 
			// ADD_Polinom2_button
			// 
			this->ADD_Polinom2_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ADD_Polinom2_button->Location = System::Drawing::Point(788, 233);
			this->ADD_Polinom2_button->Name = L"ADD_Polinom2_button";
			this->ADD_Polinom2_button->Size = System::Drawing::Size(75, 23);
			this->ADD_Polinom2_button->TabIndex = 11;
			this->ADD_Polinom2_button->Text = L"ADD";
			this->ADD_Polinom2_button->UseVisualStyleBackColor = true;
			this->ADD_Polinom2_button->Click += gcnew System::EventHandler(this, &MyForm::ADD_Polinom2_button_Click);
			// 
			// DEL_Polinom2_button
			// 
			this->DEL_Polinom2_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DEL_Polinom2_button->Location = System::Drawing::Point(788, 273);
			this->DEL_Polinom2_button->Name = L"DEL_Polinom2_button";
			this->DEL_Polinom2_button->Size = System::Drawing::Size(75, 23);
			this->DEL_Polinom2_button->TabIndex = 12;
			this->DEL_Polinom2_button->Text = L"DEL";
			this->DEL_Polinom2_button->UseVisualStyleBackColor = true;
			this->DEL_Polinom2_button->Click += gcnew System::EventHandler(this, &MyForm::DEL_Polinom2_button_Click);
			// 
			// Plus_button
			// 
			this->Plus_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Plus_button->Location = System::Drawing::Point(653, 321);
			this->Plus_button->Name = L"Plus_button";
			this->Plus_button->Size = System::Drawing::Size(75, 23);
			this->Plus_button->TabIndex = 13;
			this->Plus_button->Text = L"+";
			this->Plus_button->UseVisualStyleBackColor = true;
			this->Plus_button->Click += gcnew System::EventHandler(this, &MyForm::Plus_button_Click);
			// 
			// Res_textBox
			// 
			this->Res_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Res_textBox->Location = System::Drawing::Point(112, 350);
			this->Res_textBox->Name = L"Res_textBox";
			this->Res_textBox->ReadOnly = true;
			this->Res_textBox->Size = System::Drawing::Size(436, 20);
			this->Res_textBox->TabIndex = 14;
			this->Res_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Res_textBox_TextChanged);
			// 
			// Minus_button
			// 
			this->Minus_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Minus_button->Location = System::Drawing::Point(653, 350);
			this->Minus_button->Name = L"Minus_button";
			this->Minus_button->Size = System::Drawing::Size(75, 23);
			this->Minus_button->TabIndex = 15;
			this->Minus_button->Text = L"-";
			this->Minus_button->UseVisualStyleBackColor = true;
			this->Minus_button->Click += gcnew System::EventHandler(this, &MyForm::Minus_button_Click);
			// 
			// Multiplication_button
			// 
			this->Multiplication_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Multiplication_button->Location = System::Drawing::Point(653, 379);
			this->Multiplication_button->Name = L"Multiplication_button";
			this->Multiplication_button->Size = System::Drawing::Size(75, 23);
			this->Multiplication_button->TabIndex = 16;
			this->Multiplication_button->Text = L"*";
			this->Multiplication_button->UseVisualStyleBackColor = true;
			this->Multiplication_button->Click += gcnew System::EventHandler(this, &MyForm::Multiplication_button_Click);
			// 
			// Multiplication_by_number_button
			// 
			this->Multiplication_by_number_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Multiplication_by_number_button->Location = System::Drawing::Point(653, 408);
			this->Multiplication_by_number_button->Name = L"Multiplication_by_number_button";
			this->Multiplication_by_number_button->Size = System::Drawing::Size(75, 23);
			this->Multiplication_by_number_button->TabIndex = 17;
			this->Multiplication_by_number_button->Text = L"*k(P)";
			this->Multiplication_by_number_button->UseVisualStyleBackColor = true;
			this->Multiplication_by_number_button->Click += gcnew System::EventHandler(this, &MyForm::Multiplication_by_number_button_Click);
			// 
			// Multiplication_by_number_textBox
			// 
			this->Multiplication_by_number_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Multiplication_by_number_textBox->Location = System::Drawing::Point(734, 408);
			this->Multiplication_by_number_textBox->Name = L"Multiplication_by_number_textBox";
			this->Multiplication_by_number_textBox->ReadOnly = true;
			this->Multiplication_by_number_textBox->Size = System::Drawing::Size(100, 20);
			this->Multiplication_by_number_textBox->TabIndex = 18;
			this->Multiplication_by_number_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Multiplication_by_number_textBox_TextChanged);
			// 
			// Multiplication_by_number_Q_button
			// 
			this->Multiplication_by_number_Q_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Multiplication_by_number_Q_button->Location = System::Drawing::Point(653, 437);
			this->Multiplication_by_number_Q_button->Name = L"Multiplication_by_number_Q_button";
			this->Multiplication_by_number_Q_button->Size = System::Drawing::Size(75, 23);
			this->Multiplication_by_number_Q_button->TabIndex = 19;
			this->Multiplication_by_number_Q_button->Text = L"*k(Q)";
			this->Multiplication_by_number_Q_button->UseVisualStyleBackColor = true;
			this->Multiplication_by_number_Q_button->Click += gcnew System::EventHandler(this, &MyForm::Multiplication_by_number_Q_button_Click);
			// 
			// Multiplication_by_number_Q_textBox
			// 
			this->Multiplication_by_number_Q_textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Multiplication_by_number_Q_textBox->Location = System::Drawing::Point(734, 440);
			this->Multiplication_by_number_Q_textBox->Name = L"Multiplication_by_number_Q_textBox";
			this->Multiplication_by_number_Q_textBox->ReadOnly = true;
			this->Multiplication_by_number_Q_textBox->Size = System::Drawing::Size(100, 20);
			this->Multiplication_by_number_Q_textBox->TabIndex = 20;
			this->Multiplication_by_number_Q_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::Multiplication_by_number_Q_textBox_TextChanged);
			// 
			// Clear_button
			// 
			this->Clear_button->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear_button->Location = System::Drawing::Point(788, 12);
			this->Clear_button->Name = L"Clear_button";
			this->Clear_button->Size = System::Drawing::Size(146, 74);
			this->Clear_button->TabIndex = 22;
			this->Clear_button->Text = L"CLEAR";
			this->Clear_button->UseVisualStyleBackColor = true;
			this->Clear_button->Click += gcnew System::EventHandler(this, &MyForm::Clear_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 34);
			this->label1->TabIndex = 23;
			this->label1->Text = L"P:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 241);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 34);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Q:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 338);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 34);
			this->label3->TabIndex = 25;
			this->label3->Text = L"RES:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(946, 505);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Clear_button);
			this->Controls->Add(this->Multiplication_by_number_Q_textBox);
			this->Controls->Add(this->Multiplication_by_number_Q_button);
			this->Controls->Add(this->Multiplication_by_number_textBox);
			this->Controls->Add(this->Multiplication_by_number_button);
			this->Controls->Add(this->Multiplication_button);
			this->Controls->Add(this->Minus_button);
			this->Controls->Add(this->Res_textBox);
			this->Controls->Add(this->Plus_button);
			this->Controls->Add(this->DEL_Polinom2_button);
			this->Controls->Add(this->ADD_Polinom2_button);
			this->Controls->Add(this->DEL_Polinom1_button);
			this->Controls->Add(this->ADD_Polinom1_button);
			this->Controls->Add(this->Action_with_Polinom2_textBox);
			this->Controls->Add(this->Action_with_Polinom1_textBox);
			this->Controls->Add(this->Polinom2_textBox);
			this->Controls->Add(this->Polinom1_textBox);
			this->Controls->Add(this->SET_button2);
			this->Controls->Add(this->SET_button1);
			this->Controls->Add(this->maxst_textBox);
			this->Controls->Add(this->Chislo_perem_textBox);
			this->Controls->Add(this->Exit_button);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int max_step = -1, n = -1;
		polinom* polinom1;
		polinom* polinom2;
		polinom* res;
	private: System::Void Exit_button_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void Chislo_perem_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void maxst_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void SET_button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ tmp = maxst_textBox->Text;
		max_step = System::Convert::ToInt32(tmp);
		maxst_textBox->ReadOnly = true;
		Action_with_Polinom1_textBox->ReadOnly = false;
		Action_with_Polinom2_textBox->ReadOnly = false;
		Multiplication_by_number_textBox->ReadOnly = false;
		Multiplication_by_number_Q_textBox->ReadOnly = false;
		if (max_step != -1 && n != -1) {
			polinom1 = new polinom("", n, max_step);
			polinom2 = new polinom("", n, max_step);
		}

	}
private: System::Void SET_button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ tmp = Chislo_perem_textBox->Text;
	n = System::Convert::ToInt32(tmp);
	Chislo_perem_textBox->ReadOnly = true;
	Action_with_Polinom1_textBox->ReadOnly = false;
	Action_with_Polinom2_textBox->ReadOnly = false;
	Multiplication_by_number_textBox->ReadOnly = false;
	Multiplication_by_number_Q_textBox->ReadOnly = false;
	if (max_step != -1 && n != -1) {
		polinom1 = new polinom("", n, max_step);
		polinom2 = new polinom("", n, max_step);
	}

}
private: System::Void Polinom1_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Polinom2_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Action_with_Polinom1_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Action_with_Polinom2_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ADD_Polinom1_button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	String^ tmpS = Action_with_Polinom1_textBox->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* kek = new monom(tmp, max_step, n);
	polinom1->add(*kek);
	Polinom1_textBox->Text = msclr::interop::marshal_as<String^>(polinom1->to_string());

}
private: System::Void DEL_Polinom1_button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	String^ tmpS = Action_with_Polinom1_textBox->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* kek = new monom(tmp, max_step, n);
	polinom1->erase(*kek);
	Polinom1_textBox->Text = msclr::interop::marshal_as<String^>(polinom1->to_string());

}
private: System::Void ADD_Polinom2_button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	String^ tmpS = Action_with_Polinom2_textBox->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* kek = new monom(tmp, max_step, n);
	polinom2->add(*kek);
	Polinom2_textBox->Text = msclr::interop::marshal_as<String^>(polinom2->to_string());

}
private: System::Void DEL_Polinom2_button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	String^ tmpS = Action_with_Polinom2_textBox->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* kek = new monom(tmp, max_step, n);
	polinom2->erase(*kek);
	Polinom2_textBox->Text = msclr::interop::marshal_as<String^>(polinom2->to_string());

}
private: System::Void Plus_button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	res = new polinom(polinom1->operator+(*polinom2));
	Res_textBox->Text = msclr::interop::marshal_as<String^>(res->to_string());

}
private: System::Void Res_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Minus_button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	res = new polinom(polinom1->operator-(*polinom2));
	Res_textBox->Text = msclr::interop::marshal_as<String^>(res->to_string());
}
private: System::Void Multiplication_button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	res = new polinom(polinom1->operator*(*polinom2));
	Res_textBox->Text = msclr::interop::marshal_as<String^>(res->to_string());

}
private: System::Void Multiplication_by_number_button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	int k = System::Convert::ToInt32(Multiplication_by_number_textBox->Text);
	res = new polinom(polinom1->operator*(k));
	Res_textBox->Text = msclr::interop::marshal_as<String^>(res->to_string());

}
private: System::Void Multiplication_by_number_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Multiplication_by_number_Q_button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	int k = System::Convert::ToInt32(Multiplication_by_number_Q_textBox->Text);
	res = new polinom(polinom2->operator*(k));
	Res_textBox->Text = msclr::interop::marshal_as<String^>(res->to_string());

}
private: System::Void Multiplication_by_number_Q_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Clear_button_Click(System::Object^  sender, System::EventArgs^  e) {
	maxst_textBox->ReadOnly = false;
	Chislo_perem_textBox->ReadOnly = false;
	maxst_textBox->Clear();
	Chislo_perem_textBox->Clear();
	n = -1;
	max_step = -1;
	Polinom1_textBox->Clear();
	Polinom2_textBox->Clear();
	Res_textBox->Clear();
	Action_with_Polinom1_textBox->Clear();
	Action_with_Polinom2_textBox->Clear();
	Multiplication_by_number_textBox->Clear();
	Multiplication_by_number_Q_textBox->Clear();
	Action_with_Polinom1_textBox->ReadOnly = true;
	Action_with_Polinom2_textBox->ReadOnly = true;
	Multiplication_by_number_textBox->ReadOnly = true;
	Multiplication_by_number_Q_textBox->ReadOnly = true;
}
};
}
