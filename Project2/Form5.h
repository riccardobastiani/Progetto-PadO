#pragma once
#include "Form1.h"
#include "BlackScholes.h"
#include <Windows.h>

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Riepilogo per Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form ^menu;
		Form5(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}
		Form5(Form ^choice_3)
		{
			menu = choice_3;
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}
	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  s_label4;
	private: System::Windows::Forms::Label^  k_label4;
	private: System::Windows::Forms::Label^  r_label4;
	private: System::Windows::Forms::Label^  r_f_label4;
	private: System::Windows::Forms::Label^  sigma_label4;
	private: System::Windows::Forms::Label^  t_label4;
	private: System::Windows::Forms::Label^  call_label4;
	private: System::Windows::Forms::Label^  put_label4;
	protected:

	protected:







	private: System::Windows::Forms::TextBox^  s_textbox5;
	private: System::Windows::Forms::TextBox^  k_textbox5;
	private: System::Windows::Forms::TextBox^  r_textbox5;
	private: System::Windows::Forms::TextBox^  r_f_textbox5;
	private: System::Windows::Forms::TextBox^  sigma_textbox5;
	private: System::Windows::Forms::TextBox^  t_textbox5;
	private: System::Windows::Forms::TextBox^  call_textbox5;
	private: System::Windows::Forms::TextBox^  put_textbox5;
	private: System::Windows::Forms::Label^  info_s5;

	private: System::Windows::Forms::Label^  info_k5;

	private: System::Windows::Forms::Label^  info_r5;

	private: System::Windows::Forms::Label^  info_r_f5;

	private: System::Windows::Forms::Label^  info_sigma5;

	private: System::Windows::Forms::Label^  info_t5;

	private: System::Windows::Forms::Label^  info_c5;
	private: System::Windows::Forms::Label^  info_p5;
	private: System::Windows::Forms::Button^  reset_button5;
	private: System::Windows::Forms::Button^  calculate_button5;
	private: System::Windows::Forms::Button^  back_button5;
	private: System::Windows::Forms::Button^  save_data5;














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
			this->s_label4 = (gcnew System::Windows::Forms::Label());
			this->k_label4 = (gcnew System::Windows::Forms::Label());
			this->r_label4 = (gcnew System::Windows::Forms::Label());
			this->r_f_label4 = (gcnew System::Windows::Forms::Label());
			this->sigma_label4 = (gcnew System::Windows::Forms::Label());
			this->t_label4 = (gcnew System::Windows::Forms::Label());
			this->call_label4 = (gcnew System::Windows::Forms::Label());
			this->put_label4 = (gcnew System::Windows::Forms::Label());
			this->s_textbox5 = (gcnew System::Windows::Forms::TextBox());
			this->k_textbox5 = (gcnew System::Windows::Forms::TextBox());
			this->r_textbox5 = (gcnew System::Windows::Forms::TextBox());
			this->r_f_textbox5 = (gcnew System::Windows::Forms::TextBox());
			this->sigma_textbox5 = (gcnew System::Windows::Forms::TextBox());
			this->t_textbox5 = (gcnew System::Windows::Forms::TextBox());
			this->call_textbox5 = (gcnew System::Windows::Forms::TextBox());
			this->put_textbox5 = (gcnew System::Windows::Forms::TextBox());
			this->info_s5 = (gcnew System::Windows::Forms::Label());
			this->info_k5 = (gcnew System::Windows::Forms::Label());
			this->info_r5 = (gcnew System::Windows::Forms::Label());
			this->info_r_f5 = (gcnew System::Windows::Forms::Label());
			this->info_sigma5 = (gcnew System::Windows::Forms::Label());
			this->info_t5 = (gcnew System::Windows::Forms::Label());
			this->info_c5 = (gcnew System::Windows::Forms::Label());
			this->info_p5 = (gcnew System::Windows::Forms::Label());
			this->reset_button5 = (gcnew System::Windows::Forms::Button());
			this->calculate_button5 = (gcnew System::Windows::Forms::Button());
			this->back_button5 = (gcnew System::Windows::Forms::Button());
			this->save_data5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// s_label4
			// 
			this->s_label4->AutoSize = true;
			this->s_label4->Location = System::Drawing::Point(25, 38);
			this->s_label4->Name = L"s_label4";
			this->s_label4->Size = System::Drawing::Size(240, 25);
			this->s_label4->TabIndex = 0;
			this->s_label4->Text = L"s (Spot Exchange Rate)";
			// 
			// k_label4
			// 
			this->k_label4->AutoSize = true;
			this->k_label4->Location = System::Drawing::Point(84, 111);
			this->k_label4->Name = L"k_label4";
			this->k_label4->Size = System::Drawing::Size(181, 25);
			this->k_label4->TabIndex = 1;
			this->k_label4->Text = L"k (Exercise Price)";
			// 
			// r_label4
			// 
			this->r_label4->AutoSize = true;
			this->r_label4->Location = System::Drawing::Point(9, 184);
			this->r_label4->Name = L"r_label4";
			this->r_label4->Size = System::Drawing::Size(256, 25);
			this->r_label4->TabIndex = 2;
			this->r_label4->Text = L"r (Domestic Interest Rate)";
			// 
			// r_f_label4
			// 
			this->r_f_label4->AutoSize = true;
			this->r_f_label4->Location = System::Drawing::Point(7, 259);
			this->r_f_label4->Name = L"r_f_label4";
			this->r_f_label4->Size = System::Drawing::Size(258, 25);
			this->r_f_label4->TabIndex = 3;
			this->r_f_label4->Text = L"r_f (Foreign Interest Rate)";
			// 
			// sigma_label4
			// 
			this->sigma_label4->AutoSize = true;
			this->sigma_label4->Location = System::Drawing::Point(95, 331);
			this->sigma_label4->Name = L"sigma_label4";
			this->sigma_label4->Size = System::Drawing::Size(170, 25);
			this->sigma_label4->TabIndex = 4;
			this->sigma_label4->Text = L"sigma (Volatility)";
			// 
			// t_label4
			// 
			this->t_label4->AutoSize = true;
			this->t_label4->Location = System::Drawing::Point(73, 405);
			this->t_label4->Name = L"t_label4";
			this->t_label4->Size = System::Drawing::Size(192, 25);
			this->t_label4->TabIndex = 5;
			this->t_label4->Text = L"t (Time to Maturity)";
			// 
			// call_label4
			// 
			this->call_label4->AutoSize = true;
			this->call_label4->Location = System::Drawing::Point(61, 522);
			this->call_label4->Name = L"call_label4";
			this->call_label4->Size = System::Drawing::Size(204, 25);
			this->call_label4->TabIndex = 6;
			this->call_label4->Text = L"c (Call Option Price)";
			// 
			// put_label4
			// 
			this->put_label4->AutoSize = true;
			this->put_label4->Location = System::Drawing::Point(65, 596);
			this->put_label4->Name = L"put_label4";
			this->put_label4->Size = System::Drawing::Size(200, 25);
			this->put_label4->TabIndex = 7;
			this->put_label4->Text = L"p (Put Option Price)";
			// 
			// s_textbox5
			// 
			this->s_textbox5->Location = System::Drawing::Point(295, 35);
			this->s_textbox5->Name = L"s_textbox5";
			this->s_textbox5->Size = System::Drawing::Size(130, 31);
			this->s_textbox5->TabIndex = 8;
			// 
			// k_textbox5
			// 
			this->k_textbox5->Location = System::Drawing::Point(295, 108);
			this->k_textbox5->Name = L"k_textbox5";
			this->k_textbox5->Size = System::Drawing::Size(130, 31);
			this->k_textbox5->TabIndex = 9;
			// 
			// r_textbox5
			// 
			this->r_textbox5->Location = System::Drawing::Point(295, 181);
			this->r_textbox5->Name = L"r_textbox5";
			this->r_textbox5->Size = System::Drawing::Size(130, 31);
			this->r_textbox5->TabIndex = 10;
			// 
			// r_f_textbox5
			// 
			this->r_f_textbox5->Location = System::Drawing::Point(295, 253);
			this->r_f_textbox5->Name = L"r_f_textbox5";
			this->r_f_textbox5->Size = System::Drawing::Size(130, 31);
			this->r_f_textbox5->TabIndex = 11;
			// 
			// sigma_textbox5
			// 
			this->sigma_textbox5->Location = System::Drawing::Point(295, 328);
			this->sigma_textbox5->Name = L"sigma_textbox5";
			this->sigma_textbox5->Size = System::Drawing::Size(130, 31);
			this->sigma_textbox5->TabIndex = 12;
			// 
			// t_textbox5
			// 
			this->t_textbox5->Location = System::Drawing::Point(295, 402);
			this->t_textbox5->Name = L"t_textbox5";
			this->t_textbox5->Size = System::Drawing::Size(130, 31);
			this->t_textbox5->TabIndex = 13;
			// 
			// call_textbox5
			// 
			this->call_textbox5->Location = System::Drawing::Point(295, 519);
			this->call_textbox5->Name = L"call_textbox5";
			this->call_textbox5->ReadOnly = true;
			this->call_textbox5->Size = System::Drawing::Size(130, 31);
			this->call_textbox5->TabIndex = 14;
			// 
			// put_textbox5
			// 
			this->put_textbox5->Location = System::Drawing::Point(295, 593);
			this->put_textbox5->Name = L"put_textbox5";
			this->put_textbox5->ReadOnly = true;
			this->put_textbox5->Size = System::Drawing::Size(130, 31);
			this->put_textbox5->TabIndex = 15;
			// 
			// info_s5
			// 
			this->info_s5->AutoSize = true;
			this->info_s5->Location = System::Drawing::Point(440, 38);
			this->info_s5->Name = L"info_s5";
			this->info_s5->Size = System::Drawing::Size(127, 25);
			this->info_s5->TabIndex = 16;
			this->info_s5->Text = L"(ex. 100,00)";
			// 
			// info_k5
			// 
			this->info_k5->AutoSize = true;
			this->info_k5->Location = System::Drawing::Point(440, 111);
			this->info_k5->Name = L"info_k5";
			this->info_k5->Size = System::Drawing::Size(127, 25);
			this->info_k5->TabIndex = 17;
			this->info_k5->Text = L"(ex. 100,00)";
			// 
			// info_r5
			// 
			this->info_r5->AutoSize = true;
			this->info_r5->Location = System::Drawing::Point(440, 184);
			this->info_r5->Name = L"info_r5";
			this->info_r5->Size = System::Drawing::Size(171, 25);
			this->info_r5->TabIndex = 18;
			this->info_r5->Text = L"(ex. 0,1 for 10%)";
			// 
			// info_r_f5
			// 
			this->info_r_f5->AutoSize = true;
			this->info_r_f5->Location = System::Drawing::Point(440, 256);
			this->info_r_f5->Name = L"info_r_f5";
			this->info_r_f5->Size = System::Drawing::Size(171, 25);
			this->info_r_f5->TabIndex = 19;
			this->info_r_f5->Text = L"(ex. 0,05 for 5%)";
			// 
			// info_sigma5
			// 
			this->info_sigma5->AutoSize = true;
			this->info_sigma5->Location = System::Drawing::Point(440, 331);
			this->info_sigma5->Name = L"info_sigma5";
			this->info_sigma5->Size = System::Drawing::Size(183, 25);
			this->info_sigma5->TabIndex = 20;
			this->info_sigma5->Text = L"(ex. 0,25 for 25%)";
			// 
			// info_t5
			// 
			this->info_t5->AutoSize = true;
			this->info_t5->Location = System::Drawing::Point(440, 405);
			this->info_t5->Name = L"info_t5";
			this->info_t5->Size = System::Drawing::Size(174, 25);
			this->info_t5->TabIndex = 21;
			this->info_t5->Text = L"(ex. 1 for 1 Year)";
			// 
			// info_c5
			// 
			this->info_c5->AutoSize = true;
			this->info_c5->Location = System::Drawing::Point(440, 522);
			this->info_c5->Name = L"info_c5";
			this->info_c5->Size = System::Drawing::Size(24, 25);
			this->info_c5->TabIndex = 22;
			this->info_c5->Text = L"$";
			// 
			// info_p5
			// 
			this->info_p5->AutoSize = true;
			this->info_p5->Location = System::Drawing::Point(440, 596);
			this->info_p5->Name = L"info_p5";
			this->info_p5->Size = System::Drawing::Size(24, 25);
			this->info_p5->TabIndex = 23;
			this->info_p5->Text = L"$";
			// 
			// reset_button5
			// 
			this->reset_button5->Location = System::Drawing::Point(470, 674);
			this->reset_button5->Name = L"reset_button5";
			this->reset_button5->Size = System::Drawing::Size(120, 54);
			this->reset_button5->TabIndex = 24;
			this->reset_button5->Text = L"Reset";
			this->reset_button5->UseVisualStyleBackColor = true;
			this->reset_button5->Click += gcnew System::EventHandler(this, &Form5::reset_button5_Click);
			// 
			// calculate_button5
			// 
			this->calculate_button5->Location = System::Drawing::Point(470, 547);
			this->calculate_button5->Name = L"calculate_button5";
			this->calculate_button5->Size = System::Drawing::Size(120, 54);
			this->calculate_button5->TabIndex = 25;
			this->calculate_button5->Text = L"Calculate";
			this->calculate_button5->UseVisualStyleBackColor = true;
			this->calculate_button5->Click += gcnew System::EventHandler(this, &Form5::calculate_button5_Click);
			// 
			// back_button5
			// 
			this->back_button5->Location = System::Drawing::Point(68, 674);
			this->back_button5->Name = L"back_button5";
			this->back_button5->Size = System::Drawing::Size(197, 54);
			this->back_button5->TabIndex = 26;
			this->back_button5->Text = L"Back to Menu";
			this->back_button5->UseVisualStyleBackColor = true;
			this->back_button5->Click += gcnew System::EventHandler(this, &Form5::back_button5_Click);
			// 
			// save_data5
			// 
			this->save_data5->Location = System::Drawing::Point(298, 674);
			this->save_data5->Name = L"save_data5";
			this->save_data5->Size = System::Drawing::Size(135, 54);
			this->save_data5->TabIndex = 29;
			this->save_data5->Text = L"Save Data";
			this->save_data5->UseVisualStyleBackColor = true;
			this->save_data5->Click += gcnew System::EventHandler(this, &Form5::save_data5_Click);
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(679, 775);
			this->Controls->Add(this->save_data5);
			this->Controls->Add(this->back_button5);
			this->Controls->Add(this->calculate_button5);
			this->Controls->Add(this->reset_button5);
			this->Controls->Add(this->info_p5);
			this->Controls->Add(this->info_c5);
			this->Controls->Add(this->info_t5);
			this->Controls->Add(this->info_sigma5);
			this->Controls->Add(this->info_r_f5);
			this->Controls->Add(this->info_r5);
			this->Controls->Add(this->info_k5);
			this->Controls->Add(this->info_s5);
			this->Controls->Add(this->put_textbox5);
			this->Controls->Add(this->call_textbox5);
			this->Controls->Add(this->t_textbox5);
			this->Controls->Add(this->sigma_textbox5);
			this->Controls->Add(this->r_f_textbox5);
			this->Controls->Add(this->r_textbox5);
			this->Controls->Add(this->k_textbox5);
			this->Controls->Add(this->s_textbox5);
			this->Controls->Add(this->put_label4);
			this->Controls->Add(this->call_label4);
			this->Controls->Add(this->t_label4);
			this->Controls->Add(this->sigma_label4);
			this->Controls->Add(this->r_f_label4);
			this->Controls->Add(this->r_label4);
			this->Controls->Add(this->k_label4);
			this->Controls->Add(this->s_label4);
			this->Name = L"Form5";
			this->Text = L"Form5";
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form5_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void reset_button5_Click(System::Object^  sender, System::EventArgs^  e) {
		s_textbox5->Clear();
		k_textbox5->Clear();
		r_textbox5->Clear();
		r_f_textbox5->Clear();
		sigma_textbox5->Clear();
		t_textbox5->Clear();
		call_textbox5->Clear();
		put_textbox5->Clear();
	}
private: System::Void back_button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	menu->Show();
}
private: System::Void calculate_button5_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		if (System::Convert::ToDouble(s_textbox5->Text) <= 0)
		{
			throw "Spot Price must be a positive number!";
		}
		if (System::Convert::ToDouble(k_textbox5->Text) <= 0)
		{
			throw "Exercise Price must be a positive number!";
		}
		if (System::Convert::ToDouble(r_textbox5->Text) <= 0)
		{
			throw "Interest Rate must be a positive number!";
		}
		if (System::Convert::ToDouble(r_f_textbox5->Text) <= 0)
		{
			throw "Interest Rate must be a positive number!";
		}
		if (System::Convert::ToDouble(sigma_textbox5->Text) <= 0)
		{
			throw "Sigma must be a positive number!";
		}
		if (System::Convert::ToDouble(t_textbox5->Text) <= 0)
		{
			throw "Time to Maturity must be a positive number!";
		}
		double s = System::Convert::ToDouble(s_textbox5->Text);
		double k = System::Convert::ToDouble(k_textbox5->Text);
		double r = System::Convert::ToDouble(r_textbox5->Text);
		double r_f = System::Convert::ToDouble(r_f_textbox5->Text);
		double sigma = System::Convert::ToDouble(sigma_textbox5->Text);
		double t = System::Convert::ToDouble(t_textbox5->Text);
		OptionForCurr option(s, k, r, r_f, sigma, t);
		call_textbox5->Text = (option.getCall()).ToString("0.0000");
		put_textbox5->Text = (option.getPut()).ToString("0.0000");
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
private: System::Void save_data5_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult a = MessageBox::Show("Do you want to save it to a new file?", "Save", MessageBoxButtons::YesNo);
	if (a == System::Windows::Forms::DialogResult::Yes) {
		SaveFileDialog ^saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "CSV file(*.csv)|*.csv";
		saveFileDialog1->Title = "Save a CSV File";
		saveFileDialog1->ShowDialog();
		StreamWriter^ outfile = gcnew StreamWriter(saveFileDialog1->FileName, std::ios::app);
		String ^s = s_textbox5->Text;
		String ^k = k_textbox5->Text;
		String ^r = r_textbox5->Text;
		String ^r_f = r_f_textbox5->Text;
		String ^sigma = sigma_textbox5->Text;
		String ^t = t_textbox5->Text;
		String ^call = call_textbox5->Text;
		String ^put = put_textbox5->Text;
		String ^out = s + ";" + k + ";" + r + ";" + r_f + ";" + sigma + ";" + t + ";" + call + ";" + put;
		String ^intest = "S_PRICE;K_PRICE;D_INT_RATE;F_INT_RATE;SIGMA;TIME_T_M;CALL_PRICE;PUT_PRICE";
		outfile->WriteLine(intest);
		outfile->WriteLine(out);
		outfile->Close();
	}
	else {
		System::Windows::Forms::DialogResult b = MessageBox::Show("Chose an existing file!", "Save", MessageBoxButtons::OK);
		SaveFileDialog ^saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->ShowDialog();
		StreamWriter^ outfile = gcnew StreamWriter(saveFileDialog1->FileName, std::ios::app);
		String ^s = s_textbox5->Text;
		String ^k = k_textbox5->Text;
		String ^r = r_textbox5->Text;
		String ^r_f = r_f_textbox5->Text;
		String ^sigma = sigma_textbox5->Text;
		String ^t = t_textbox5->Text;
		String ^call = call_textbox5->Text;
		String ^put = put_textbox5->Text;
		String ^out = s + ";" + k + ";" + r + ";" + r_f + ";" + sigma + ";" + t + ";" + call + ";" + put;
		outfile->WriteLine(out);
		outfile->Close();
	}
}
};
}
