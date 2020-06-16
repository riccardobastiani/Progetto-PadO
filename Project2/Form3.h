//Form from Choice 2: European Option with Continous Payout
#pragma once
#include "Form1.h"
#include "BlackScholes.h"
#include <Windows.h>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <vector>


namespace Project2 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Riepilogo per Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form ^menu;
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}
		Form3(Form ^choice_2)
		{
			menu = choice_2;
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}

	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  s_label3;

	protected:
	private: System::Windows::Forms::Label^  k_label3;
	private: System::Windows::Forms::Label^  r_label3;
	private: System::Windows::Forms::Label^  q_label3;
	private: System::Windows::Forms::Label^  sigma_label3;
	private: System::Windows::Forms::Label^  t_label3;
	private: System::Windows::Forms::Label^  call_label3;
	private: System::Windows::Forms::Label^  put_label3;
	private: System::Windows::Forms::TextBox^  s_textbox3;
	private: System::Windows::Forms::TextBox^  k_textbox3;
	private: System::Windows::Forms::TextBox^  r_textbox3;
	private: System::Windows::Forms::TextBox^  q_textbox3;
	private: System::Windows::Forms::TextBox^  sigma_textbox3;
	private: System::Windows::Forms::TextBox^  t_textbox3;
	private: System::Windows::Forms::TextBox^  call_textbox3;
	private: System::Windows::Forms::TextBox^  put_textbox3;
	private: System::Windows::Forms::Button^  calculate_button3;
	private: System::Windows::Forms::Button^  reset_button3;
	private: System::Windows::Forms::Label^  info_s3;

	private: System::Windows::Forms::Label^  info_k3;

	private: System::Windows::Forms::Label^  info_r3;

	private: System::Windows::Forms::Label^  info_q3;

	private: System::Windows::Forms::Label^  info_sigma3;

	private: System::Windows::Forms::Label^  info_t3;

	private: System::Windows::Forms::Label^  info_c3;

	private: System::Windows::Forms::Label^  info_p3;
	private: System::Windows::Forms::Button^  back_button3;
	private: System::Windows::Forms::Button^  save_data3;











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
			this->s_label3 = (gcnew System::Windows::Forms::Label());
			this->k_label3 = (gcnew System::Windows::Forms::Label());
			this->r_label3 = (gcnew System::Windows::Forms::Label());
			this->q_label3 = (gcnew System::Windows::Forms::Label());
			this->sigma_label3 = (gcnew System::Windows::Forms::Label());
			this->t_label3 = (gcnew System::Windows::Forms::Label());
			this->call_label3 = (gcnew System::Windows::Forms::Label());
			this->put_label3 = (gcnew System::Windows::Forms::Label());
			this->s_textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->k_textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->r_textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->q_textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->sigma_textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->t_textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->call_textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->put_textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->calculate_button3 = (gcnew System::Windows::Forms::Button());
			this->reset_button3 = (gcnew System::Windows::Forms::Button());
			this->info_s3 = (gcnew System::Windows::Forms::Label());
			this->info_k3 = (gcnew System::Windows::Forms::Label());
			this->info_r3 = (gcnew System::Windows::Forms::Label());
			this->info_q3 = (gcnew System::Windows::Forms::Label());
			this->info_sigma3 = (gcnew System::Windows::Forms::Label());
			this->info_t3 = (gcnew System::Windows::Forms::Label());
			this->info_c3 = (gcnew System::Windows::Forms::Label());
			this->info_p3 = (gcnew System::Windows::Forms::Label());
			this->back_button3 = (gcnew System::Windows::Forms::Button());
			this->save_data3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// s_label3
			// 
			this->s_label3->AutoSize = true;
			this->s_label3->Location = System::Drawing::Point(80, 25);
			this->s_label3->Name = L"s_label3";
			this->s_label3->Size = System::Drawing::Size(94, 17);
			this->s_label3->TabIndex = 0;
			this->s_label3->Text = L"s (Spot Price)";
			// 
			// k_label3
			// 
			this->k_label3->AutoSize = true;
			this->k_label3->Location = System::Drawing::Point(53, 71);
			this->k_label3->Name = L"k_label3";
			this->k_label3->Size = System::Drawing::Size(118, 17);
			this->k_label3->TabIndex = 1;
			this->k_label3->Text = L"k (Exercise Price)";
			// 
			// r_label3
			// 
			this->r_label3->AutoSize = true;
			this->r_label3->Location = System::Drawing::Point(67, 118);
			this->r_label3->Name = L"r_label3";
			this->r_label3->Size = System::Drawing::Size(108, 17);
			this->r_label3->TabIndex = 2;
			this->r_label3->Text = L"r (Interest Rate)";
			// 
			// q_label3
			// 
			this->q_label3->AutoSize = true;
			this->q_label3->Location = System::Drawing::Point(20, 166);
			this->q_label3->Name = L"q_label3";
			this->q_label3->Size = System::Drawing::Size(153, 17);
			this->q_label3->TabIndex = 3;
			this->q_label3->Text = L"q (Yield on Underlying)";
			// 
			// sigma_label3
			// 
			this->sigma_label3->AutoSize = true;
			this->sigma_label3->Location = System::Drawing::Point(61, 212);
			this->sigma_label3->Name = L"sigma_label3";
			this->sigma_label3->Size = System::Drawing::Size(111, 17);
			this->sigma_label3->TabIndex = 4;
			this->sigma_label3->Text = L"sigma (Volatility)";
			// 
			// t_label3
			// 
			this->t_label3->AutoSize = true;
			this->t_label3->Location = System::Drawing::Point(47, 260);
			this->t_label3->Name = L"t_label3";
			this->t_label3->Size = System::Drawing::Size(127, 17);
			this->t_label3->TabIndex = 5;
			this->t_label3->Text = L"t (Time to Maturity)";
			// 
			// call_label3
			// 
			this->call_label3->AutoSize = true;
			this->call_label3->Location = System::Drawing::Point(39, 334);
			this->call_label3->Name = L"call_label3";
			this->call_label3->Size = System::Drawing::Size(134, 17);
			this->call_label3->TabIndex = 6;
			this->call_label3->Text = L"c (Call Option Price)";
			// 
			// put_label3
			// 
			this->put_label3->AutoSize = true;
			this->put_label3->Location = System::Drawing::Point(41, 382);
			this->put_label3->Name = L"put_label3";
			this->put_label3->Size = System::Drawing::Size(133, 17);
			this->put_label3->TabIndex = 7;
			this->put_label3->Text = L"p (Put Option Price)";
			// 
			// s_textbox3
			// 
			this->s_textbox3->Location = System::Drawing::Point(195, 22);
			this->s_textbox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->s_textbox3->Name = L"s_textbox3";
			this->s_textbox3->Size = System::Drawing::Size(88, 22);
			this->s_textbox3->TabIndex = 8;
			// 
			// k_textbox3
			// 
			this->k_textbox3->Location = System::Drawing::Point(195, 69);
			this->k_textbox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->k_textbox3->Name = L"k_textbox3";
			this->k_textbox3->Size = System::Drawing::Size(88, 22);
			this->k_textbox3->TabIndex = 9;
			// 
			// r_textbox3
			// 
			this->r_textbox3->Location = System::Drawing::Point(195, 116);
			this->r_textbox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->r_textbox3->Name = L"r_textbox3";
			this->r_textbox3->Size = System::Drawing::Size(88, 22);
			this->r_textbox3->TabIndex = 10;
			// 
			// q_textbox3
			// 
			this->q_textbox3->Location = System::Drawing::Point(195, 162);
			this->q_textbox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->q_textbox3->Name = L"q_textbox3";
			this->q_textbox3->Size = System::Drawing::Size(88, 22);
			this->q_textbox3->TabIndex = 11;
			// 
			// sigma_textbox3
			// 
			this->sigma_textbox3->Location = System::Drawing::Point(195, 210);
			this->sigma_textbox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sigma_textbox3->Name = L"sigma_textbox3";
			this->sigma_textbox3->Size = System::Drawing::Size(88, 22);
			this->sigma_textbox3->TabIndex = 12;
			// 
			// t_textbox3
			// 
			this->t_textbox3->Location = System::Drawing::Point(195, 257);
			this->t_textbox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->t_textbox3->Name = L"t_textbox3";
			this->t_textbox3->Size = System::Drawing::Size(88, 22);
			this->t_textbox3->TabIndex = 13;
			// 
			// call_textbox3
			// 
			this->call_textbox3->Location = System::Drawing::Point(195, 332);
			this->call_textbox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->call_textbox3->Name = L"call_textbox3";
			this->call_textbox3->ReadOnly = true;
			this->call_textbox3->Size = System::Drawing::Size(88, 22);
			this->call_textbox3->TabIndex = 14;
			// 
			// put_textbox3
			// 
			this->put_textbox3->Location = System::Drawing::Point(195, 379);
			this->put_textbox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->put_textbox3->Name = L"put_textbox3";
			this->put_textbox3->ReadOnly = true;
			this->put_textbox3->Size = System::Drawing::Size(88, 22);
			this->put_textbox3->TabIndex = 15;
			// 
			// calculate_button3
			// 
			this->calculate_button3->Location = System::Drawing::Point(326, 356);
			this->calculate_button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->calculate_button3->Name = L"calculate_button3";
			this->calculate_button3->Size = System::Drawing::Size(80, 28);
			this->calculate_button3->TabIndex = 16;
			this->calculate_button3->Text = L"Calculate";
			this->calculate_button3->UseVisualStyleBackColor = true;
			this->calculate_button3->Click += gcnew System::EventHandler(this, &Form3::calculate_button3_Click);
			// 
			// reset_button3
			// 
			this->reset_button3->Location = System::Drawing::Point(328, 434);
			this->reset_button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->reset_button3->Name = L"reset_button3";
			this->reset_button3->Size = System::Drawing::Size(80, 34);
			this->reset_button3->TabIndex = 17;
			this->reset_button3->Text = L"Reset";
			this->reset_button3->UseVisualStyleBackColor = true;
			this->reset_button3->Click += gcnew System::EventHandler(this, &Form3::reset_button3_Click);
			// 
			// info_s3
			// 
			this->info_s3->AutoSize = true;
			this->info_s3->Location = System::Drawing::Point(293, 25);
			this->info_s3->Name = L"info_s3";
			this->info_s3->Size = System::Drawing::Size(84, 17);
			this->info_s3->TabIndex = 18;
			this->info_s3->Text = L"(ex. 100,00)";
			// 
			// info_k3
			// 
			this->info_k3->AutoSize = true;
			this->info_k3->Location = System::Drawing::Point(293, 71);
			this->info_k3->Name = L"info_k3";
			this->info_k3->Size = System::Drawing::Size(84, 17);
			this->info_k3->TabIndex = 19;
			this->info_k3->Text = L"(ex. 100,00)";
			// 
			// info_r3
			// 
			this->info_r3->AutoSize = true;
			this->info_r3->Location = System::Drawing::Point(293, 118);
			this->info_r3->Name = L"info_r3";
			this->info_r3->Size = System::Drawing::Size(113, 17);
			this->info_r3->TabIndex = 20;
			this->info_r3->Text = L"(ex. 0,1 for 10%)";
			// 
			// info_q3
			// 
			this->info_q3->AutoSize = true;
			this->info_q3->Location = System::Drawing::Point(293, 164);
			this->info_q3->Name = L"info_q3";
			this->info_q3->Size = System::Drawing::Size(113, 17);
			this->info_q3->TabIndex = 21;
			this->info_q3->Text = L"(ex. 0,05 for 5%)";
			// 
			// info_sigma3
			// 
			this->info_sigma3->AutoSize = true;
			this->info_sigma3->Location = System::Drawing::Point(293, 212);
			this->info_sigma3->Name = L"info_sigma3";
			this->info_sigma3->Size = System::Drawing::Size(121, 17);
			this->info_sigma3->TabIndex = 22;
			this->info_sigma3->Text = L"(ex. 0,25 for 25%)";
			// 
			// info_t3
			// 
			this->info_t3->AutoSize = true;
			this->info_t3->Location = System::Drawing::Point(293, 260);
			this->info_t3->Name = L"info_t3";
			this->info_t3->Size = System::Drawing::Size(115, 17);
			this->info_t3->TabIndex = 23;
			this->info_t3->Text = L"(ex. 1 for 1 Year)";
			// 
			// info_c3
			// 
			this->info_c3->AutoSize = true;
			this->info_c3->Location = System::Drawing::Point(293, 334);
			this->info_c3->Name = L"info_c3";
			this->info_c3->Size = System::Drawing::Size(16, 17);
			this->info_c3->TabIndex = 24;
			this->info_c3->Text = L"$";
			// 
			// info_p3
			// 
			this->info_p3->AutoSize = true;
			this->info_p3->Location = System::Drawing::Point(293, 382);
			this->info_p3->Name = L"info_p3";
			this->info_p3->Size = System::Drawing::Size(16, 17);
			this->info_p3->TabIndex = 25;
			this->info_p3->Text = L"$";
			// 
			// back_button3
			// 
			this->back_button3->Location = System::Drawing::Point(43, 434);
			this->back_button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->back_button3->Name = L"back_button3";
			this->back_button3->Size = System::Drawing::Size(131, 34);
			this->back_button3->TabIndex = 26;
			this->back_button3->Text = L"Back to Menu";
			this->back_button3->UseVisualStyleBackColor = true;
			this->back_button3->Click += gcnew System::EventHandler(this, &Form3::back_button3_Click);
			// 
			// save_data3
			// 
			this->save_data3->Location = System::Drawing::Point(192, 434);
			this->save_data3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->save_data3->Name = L"save_data3";
			this->save_data3->Size = System::Drawing::Size(91, 34);
			this->save_data3->TabIndex = 27;
			this->save_data3->Text = L"Save Data";
			this->save_data3->UseVisualStyleBackColor = true;
			this->save_data3->Click += gcnew System::EventHandler(this, &Form3::save_data3_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 479);
			this->Controls->Add(this->save_data3);
			this->Controls->Add(this->back_button3);
			this->Controls->Add(this->info_p3);
			this->Controls->Add(this->info_c3);
			this->Controls->Add(this->info_t3);
			this->Controls->Add(this->info_sigma3);
			this->Controls->Add(this->info_q3);
			this->Controls->Add(this->info_r3);
			this->Controls->Add(this->info_k3);
			this->Controls->Add(this->info_s3);
			this->Controls->Add(this->reset_button3);
			this->Controls->Add(this->calculate_button3);
			this->Controls->Add(this->put_textbox3);
			this->Controls->Add(this->call_textbox3);
			this->Controls->Add(this->t_textbox3);
			this->Controls->Add(this->sigma_textbox3);
			this->Controls->Add(this->q_textbox3);
			this->Controls->Add(this->r_textbox3);
			this->Controls->Add(this->k_textbox3);
			this->Controls->Add(this->s_textbox3);
			this->Controls->Add(this->put_label3);
			this->Controls->Add(this->call_label3);
			this->Controls->Add(this->t_label3);
			this->Controls->Add(this->sigma_label3);
			this->Controls->Add(this->q_label3);
			this->Controls->Add(this->r_label3);
			this->Controls->Add(this->k_label3);
			this->Controls->Add(this->s_label3);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form3";
			this->Text = L"Form3";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		};
#pragma endregion
	private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void calculate_button3_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			if (System::Convert::ToDouble(s_textbox3->Text) <= 0)
			{
				throw "Spot Price must be a positive number!";
			}
			if (System::Convert::ToDouble(k_textbox3->Text) <= 0)
			{
				throw "Exercise Price must be a positive number!";
			}
			if (System::Convert::ToDouble(r_textbox3->Text) <= 0)
			{
				throw "Interest Rate must be a positive number!";
			}
			if (System::Convert::ToDouble(q_textbox3->Text) <= 0)
			{
				throw "Interest Rate must be a positive number!";
			}
			if (System::Convert::ToDouble(sigma_textbox3->Text) <= 0)
			{
				throw "Sigma must be a positive number!";
			}
			if (System::Convert::ToDouble(t_textbox3->Text) <= 0)
			{
				throw "Time to Maturity must be a positive number!";
			}
			double s = System::Convert::ToDouble(s_textbox3->Text);
			double k = System::Convert::ToDouble(k_textbox3->Text);
			double r = System::Convert::ToDouble(r_textbox3->Text);
			double q = System::Convert::ToDouble(q_textbox3->Text);
			double sigma = System::Convert::ToDouble(sigma_textbox3->Text);
			double t = System::Convert::ToDouble(t_textbox3->Text);
			OptionContPay option(s, k, r, q, sigma, t);
			call_textbox3->Text = (option.getCall()).ToString("0.0000");
			put_textbox3->Text = (option.getPut()).ToString("0.0000");
		}
		catch (const char *e)
		{
			MessageBox::Show("Invalid Input: data must be positive numbers!");
		}
		catch (FormatException ^e)
		{
			MessageBox::Show("Invalid Input: data must be numbers!");
		}
	}
	private: System::Void back_button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		menu->Show();
	}
	private: System::Void reset_button3_Click(System::Object^  sender, System::EventArgs^  e) {
		s_textbox3->Clear();
		k_textbox3->Clear();
		r_textbox3->Clear();
		q_textbox3->Clear();
		sigma_textbox3->Clear();
		t_textbox3->Clear();
		call_textbox3->Clear();
		put_textbox3->Clear();
	}
	private: System::Void save_data3_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult a = MessageBox::Show("Do you want to save it to a new file?", "Save", MessageBoxButtons::YesNo);
		if (a == System::Windows::Forms::DialogResult::Yes) {
			SaveFileDialog ^saveFileDialog1 = gcnew SaveFileDialog();
			saveFileDialog1->Filter = "CSV file(*.csv)|*.csv";
			saveFileDialog1->Title = "Save a CSV File";
			saveFileDialog1->ShowDialog();
			StreamWriter^ outfile = gcnew StreamWriter(saveFileDialog1->FileName, std::ios::app);
			String ^s = s_textbox3->Text;
			String ^k = k_textbox3->Text;
			String ^r = r_textbox3->Text;
			String ^q = q_textbox3->Text;
			String ^sigma = sigma_textbox3->Text;
			String ^t = t_textbox3->Text;
			String ^call = call_textbox3->Text;
			String ^put = put_textbox3->Text;
			String ^out = s + ";" + k + ";" + r + ";" + q + ";" + sigma + ";" + t + ";" + call + ";" + put;
			String ^intest = "S_PRICE;K_PRICE;INT_RATE;Y_UNDER;SIGMA;TIME_T_M;CALL_PRICE;PUT_PRICE";
			outfile->Write(intest);
			outfile->WriteLine(out);
			outfile->Close();
		}
		else {
			System::Windows::Forms::DialogResult b = MessageBox::Show("Chose an existing file!", "Save", MessageBoxButtons::OK);
			SaveFileDialog ^saveFileDialog1 = gcnew SaveFileDialog();
			saveFileDialog1->ShowDialog();
			StreamWriter^ outfile = gcnew StreamWriter(saveFileDialog1->FileName, std::ios::app);
			String ^s = s_textbox3->Text;
			String ^k = k_textbox3->Text;
			String ^r = r_textbox3->Text;
			String ^q = q_textbox3->Text;
			String ^sigma = sigma_textbox3->Text;
			String ^t = t_textbox3->Text;
			String ^call = call_textbox3->Text;
			String ^put = put_textbox3->Text;
			String ^out = s + ";" + k + ";" + r + ";" + q + ";" + sigma + ";" + t + ";" + call + ";" + put;
			outfile->WriteLine(out);
			outfile->Close();
		};
	};
	};

};

	

