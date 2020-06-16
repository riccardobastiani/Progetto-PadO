// Starting Menu
#pragma once
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"
#include "Form5.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	/// <summary>
	/// Riepilogo per Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}

	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  choice1;
	protected:
	private: System::Windows::Forms::Button^  choice2;
	private: System::Windows::Forms::GroupBox^  box1;
	private: System::Windows::Forms::Label^  text1;
	private: System::Windows::Forms::GroupBox^  box2;
	private: System::Windows::Forms::Label^  text2;
	private: System::Windows::Forms::GroupBox^  box3;
	private: System::Windows::Forms::Button^  choice3;
	private: System::Windows::Forms::Label^  text3;
	private: System::Windows::Forms::GroupBox^  box4;
	private: System::Windows::Forms::Button^  choice4;
	private: System::Windows::Forms::Label^  text4;



	private:
		/// <summary>
		/// Variabile di progettazione necessaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		/// </summary>
		void InitializeComponent(void)
		{
			this->choice1 = (gcnew System::Windows::Forms::Button());
			this->choice2 = (gcnew System::Windows::Forms::Button());
			this->box1 = (gcnew System::Windows::Forms::GroupBox());
			this->text1 = (gcnew System::Windows::Forms::Label());
			this->box2 = (gcnew System::Windows::Forms::GroupBox());
			this->text2 = (gcnew System::Windows::Forms::Label());
			this->box3 = (gcnew System::Windows::Forms::GroupBox());
			this->choice3 = (gcnew System::Windows::Forms::Button());
			this->text3 = (gcnew System::Windows::Forms::Label());
			this->box4 = (gcnew System::Windows::Forms::GroupBox());
			this->choice4 = (gcnew System::Windows::Forms::Button());
			this->text4 = (gcnew System::Windows::Forms::Label());
			this->box1->SuspendLayout();
			this->box2->SuspendLayout();
			this->box3->SuspendLayout();
			this->box4->SuspendLayout();
			this->SuspendLayout();
			// 
			// choice1
			// 
			this->choice1->Location = System::Drawing::Point(260, 16);
			this->choice1->Margin = System::Windows::Forms::Padding(2);
			this->choice1->Name = L"choice1";
			this->choice1->Size = System::Drawing::Size(94, 36);
			this->choice1->TabIndex = 0;
			this->choice1->Text = L"Start";
			this->choice1->UseVisualStyleBackColor = true;
			this->choice1->Click += gcnew System::EventHandler(this, &Form1::choice1_Click);
			// 
			// choice2
			// 
			this->choice2->Location = System::Drawing::Point(260, 16);
			this->choice2->Margin = System::Windows::Forms::Padding(2);
			this->choice2->Name = L"choice2";
			this->choice2->Size = System::Drawing::Size(94, 37);
			this->choice2->TabIndex = 1;
			this->choice2->Text = L"Start";
			this->choice2->UseVisualStyleBackColor = true;
			this->choice2->Click += gcnew System::EventHandler(this, &Form1::choice2_Click);
			// 
			// box1
			// 
			this->box1->Controls->Add(this->text1);
			this->box1->Controls->Add(this->choice1);
			this->box1->Location = System::Drawing::Point(6, 7);
			this->box1->Margin = System::Windows::Forms::Padding(2);
			this->box1->Name = L"box1";
			this->box1->Padding = System::Windows::Forms::Padding(2);
			this->box1->Size = System::Drawing::Size(364, 60);
			this->box1->TabIndex = 2;
			this->box1->TabStop = false;
			this->box1->Text = L"European Base Option";
			// 
			// text1
			// 
			this->text1->AutoSize = true;
			this->text1->Location = System::Drawing::Point(3, 20);
			this->text1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->text1->Name = L"text1";
			this->text1->Size = System::Drawing::Size(213, 26);
			this->text1->TabIndex = 1;
			this->text1->Text = L"Price of Call and Put European Base Option\r\ncalculated by Black Scholes Formula.";
			this->text1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// box2
			// 
			this->box2->Controls->Add(this->text2);
			this->box2->Controls->Add(this->choice2);
			this->box2->Location = System::Drawing::Point(6, 70);
			this->box2->Margin = System::Windows::Forms::Padding(2);
			this->box2->Name = L"box2";
			this->box2->Padding = System::Windows::Forms::Padding(2);
			this->box2->Size = System::Drawing::Size(364, 62);
			this->box2->TabIndex = 1;
			this->box2->TabStop = false;
			this->box2->Text = L"European Option with Continous Payout";
			// 
			// text2
			// 
			this->text2->AutoSize = true;
			this->text2->Location = System::Drawing::Point(8, 14);
			this->text2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->text2->Name = L"text2";
			this->text2->Size = System::Drawing::Size(208, 39);
			this->text2->TabIndex = 2;
			this->text2->Text = L"Price of Call and Put European Option with\r\ncontinous payouts from underlying \r\nc"
				L"alculated by Black Scholes Formula.";
			this->text2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// box3
			// 
			this->box3->Controls->Add(this->choice3);
			this->box3->Controls->Add(this->text3);
			this->box3->Location = System::Drawing::Point(6, 136);
			this->box3->Margin = System::Windows::Forms::Padding(2);
			this->box3->Name = L"box3";
			this->box3->Padding = System::Windows::Forms::Padding(2);
			this->box3->Size = System::Drawing::Size(364, 60);
			this->box3->TabIndex = 3;
			this->box3->TabStop = false;
			this->box3->Text = L"European Option on Futures";
			// 
			// choice3
			// 
			this->choice3->Location = System::Drawing::Point(260, 14);
			this->choice3->Margin = System::Windows::Forms::Padding(2);
			this->choice3->Name = L"choice3";
			this->choice3->Size = System::Drawing::Size(94, 37);
			this->choice3->TabIndex = 4;
			this->choice3->Text = L"Start";
			this->choice3->UseVisualStyleBackColor = true;
			this->choice3->Click += gcnew System::EventHandler(this, &Form1::choice3_Click);
			// 
			// text3
			// 
			this->text3->AutoSize = true;
			this->text3->Location = System::Drawing::Point(3, 14);
			this->text3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->text3->Name = L"text3";
			this->text3->Size = System::Drawing::Size(239, 26);
			this->text3->TabIndex = 4;
			this->text3->Text = L"Price of Call and Put European Option on Futures\r\ncalculated by Black Scholes For"
				L"mula.";
			// 
			// box4
			// 
			this->box4->Controls->Add(this->choice4);
			this->box4->Controls->Add(this->text4);
			this->box4->Location = System::Drawing::Point(6, 199);
			this->box4->Margin = System::Windows::Forms::Padding(2);
			this->box4->Name = L"box4";
			this->box4->Padding = System::Windows::Forms::Padding(2);
			this->box4->Size = System::Drawing::Size(364, 58);
			this->box4->TabIndex = 4;
			this->box4->TabStop = false;
			this->box4->Text = L"European Option with Foreign Currenty";
			// 
			// choice4
			// 
			this->choice4->Location = System::Drawing::Point(260, 14);
			this->choice4->Margin = System::Windows::Forms::Padding(2);
			this->choice4->Name = L"choice4";
			this->choice4->Size = System::Drawing::Size(94, 37);
			this->choice4->TabIndex = 5;
			this->choice4->Text = L"Start";
			this->choice4->UseVisualStyleBackColor = true;
			this->choice4->Click += gcnew System::EventHandler(this, &Form1::choice4_Click);
			// 
			// text4
			// 
			this->text4->AutoSize = true;
			this->text4->Location = System::Drawing::Point(3, 14);
			this->text4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->text4->Name = L"text4";
			this->text4->Size = System::Drawing::Size(208, 39);
			this->text4->TabIndex = 0;
			this->text4->Text = L"Price of Call and Put European Option with\r\nForeign Currency calculated by Black "
				L"\r\nScholes Formula.";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 327);
			this->Controls->Add(this->box4);
			this->Controls->Add(this->box3);
			this->Controls->Add(this->box2);
			this->Controls->Add(this->box1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->box1->ResumeLayout(false);
			this->box1->PerformLayout();
			this->box2->ResumeLayout(false);
			this->box2->PerformLayout();
			this->box3->ResumeLayout(false);
			this->box3->PerformLayout();
			this->box4->ResumeLayout(false);
			this->box4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void choice1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Form2^ choice1 = gcnew Form2(this);
		choice1->Show();
	}
	private: System::Void choice2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Form3^ choice2 = gcnew Form3(this);
		choice2->Show();
	}
	private: System::Void choice3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Form4^ choice3 = gcnew Form4(this);
		choice3->Show();
	}
	private: System::Void choice4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Form5^ choice4 = gcnew Form5(this);
		choice4->Show();
	};
	};
};