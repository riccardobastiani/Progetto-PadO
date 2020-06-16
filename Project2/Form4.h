#pragma once
#include "Form1.h"
#include "BlackScholes.h"
#include <iomanip>
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
	/// Riepilogo per Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form ^menu;
		Form4(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}
		Form4(Form ^choice_3)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  f_label4;
	protected:

	private: System::Windows::Forms::Label^  k_label4;
	protected:

	private: System::Windows::Forms::Label^  r_label4;

	private: System::Windows::Forms::Label^  sigma_label4;

	private: System::Windows::Forms::Label^  t_label4;

	private: System::Windows::Forms::Label^  call_label4;

	private: System::Windows::Forms::Label^  put_label4;
	private: System::Windows::Forms::TextBox^  f_textbox4;
	private: System::Windows::Forms::TextBox^  k_textbox4;
	private: System::Windows::Forms::TextBox^  r_textbox4;
	private: System::Windows::Forms::TextBox^  sigma_textbox4;
	private: System::Windows::Forms::TextBox^  t_textbox4;
	private: System::Windows::Forms::TextBox^  call_textbox4;
	private: System::Windows::Forms::TextBox^  put_textbox4;


	private: System::Windows::Forms::Button^  calculate_button4;
	private: System::Windows::Forms::Button^  reset_button4;
	private: System::Windows::Forms::Button^  back_button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  save_data4;


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
			this->f_label4 = (gcnew System::Windows::Forms::Label());
			this->k_label4 = (gcnew System::Windows::Forms::Label());
			this->r_label4 = (gcnew System::Windows::Forms::Label());
			this->sigma_label4 = (gcnew System::Windows::Forms::Label());
			this->t_label4 = (gcnew System::Windows::Forms::Label());
			this->call_label4 = (gcnew System::Windows::Forms::Label());
			this->put_label4 = (gcnew System::Windows::Forms::Label());
			this->f_textbox4 = (gcnew System::Windows::Forms::TextBox());
			this->k_textbox4 = (gcnew System::Windows::Forms::TextBox());
			this->r_textbox4 = (gcnew System::Windows::Forms::TextBox());
			this->sigma_textbox4 = (gcnew System::Windows::Forms::TextBox());
			this->t_textbox4 = (gcnew System::Windows::Forms::TextBox());
			this->call_textbox4 = (gcnew System::Windows::Forms::TextBox());
			this->put_textbox4 = (gcnew System::Windows::Forms::TextBox());
			this->calculate_button4 = (gcnew System::Windows::Forms::Button());
			this->reset_button4 = (gcnew System::Windows::Forms::Button());
			this->back_button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->save_data4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// f_label4
			// 
			this->f_label4->AutoSize = true;
			this->f_label4->Location = System::Drawing::Point(68, 38);
			this->f_label4->Name = L"f_label4";
			this->f_label4->Size = System::Drawing::Size(166, 25);
			this->f_label4->TabIndex = 0;
			this->f_label4->Text = L"f (Futures Price)";
			// 
			// k_label4
			// 
			this->k_label4->AutoSize = true;
			this->k_label4->Location = System::Drawing::Point(53, 111);
			this->k_label4->Name = L"k_label4";
			this->k_label4->Size = System::Drawing::Size(181, 25);
			this->k_label4->TabIndex = 1;
			this->k_label4->Text = L"k (Exercise Price)";
			// 
			// r_label4
			// 
			this->r_label4->AutoSize = true;
			this->r_label4->Location = System::Drawing::Point(73, 184);
			this->r_label4->Name = L"r_label4";
			this->r_label4->Size = System::Drawing::Size(161, 25);
			this->r_label4->TabIndex = 2;
			this->r_label4->Text = L"r (Interest Rate)";
			// 
			// sigma_label4
			// 
			this->sigma_label4->AutoSize = true;
			this->sigma_label4->Location = System::Drawing::Point(64, 256);
			this->sigma_label4->Name = L"sigma_label4";
			this->sigma_label4->Size = System::Drawing::Size(170, 25);
			this->sigma_label4->TabIndex = 3;
			this->sigma_label4->Text = L"sigma (Volatility)";
			// 
			// t_label4
			// 
			this->t_label4->AutoSize = true;
			this->t_label4->Location = System::Drawing::Point(42, 331);
			this->t_label4->Name = L"t_label4";
			this->t_label4->Size = System::Drawing::Size(192, 25);
			this->t_label4->TabIndex = 4;
			this->t_label4->Text = L"t (Time to Maturity)";
			// 
			// call_label4
			// 
			this->call_label4->AutoSize = true;
			this->call_label4->Location = System::Drawing::Point(30, 434);
			this->call_label4->Name = L"call_label4";
			this->call_label4->Size = System::Drawing::Size(204, 25);
			this->call_label4->TabIndex = 5;
			this->call_label4->Text = L"c (Call Option Price)";
			// 
			// put_label4
			// 
			this->put_label4->AutoSize = true;
			this->put_label4->Location = System::Drawing::Point(34, 507);
			this->put_label4->Name = L"put_label4";
			this->put_label4->Size = System::Drawing::Size(200, 25);
			this->put_label4->TabIndex = 6;
			this->put_label4->Text = L"p (Put Option Price)";
			// 
			// f_textbox4
			// 
			this->f_textbox4->Location = System::Drawing::Point(260, 35);
			this->f_textbox4->Name = L"f_textbox4";
			this->f_textbox4->Size = System::Drawing::Size(130, 31);
			this->f_textbox4->TabIndex = 7;
			// 
			// k_textbox4
			// 
			this->k_textbox4->Location = System::Drawing::Point(260, 108);
			this->k_textbox4->Name = L"k_textbox4";
			this->k_textbox4->Size = System::Drawing::Size(130, 31);
			this->k_textbox4->TabIndex = 8;
			// 
			// r_textbox4
			// 
			this->r_textbox4->Location = System::Drawing::Point(260, 181);
			this->r_textbox4->Name = L"r_textbox4";
			this->r_textbox4->Size = System::Drawing::Size(130, 31);
			this->r_textbox4->TabIndex = 9;
			// 
			// sigma_textbox4
			// 
			this->sigma_textbox4->Location = System::Drawing::Point(260, 253);
			this->sigma_textbox4->Name = L"sigma_textbox4";
			this->sigma_textbox4->Size = System::Drawing::Size(130, 31);
			this->sigma_textbox4->TabIndex = 10;
			// 
			// t_textbox4
			// 
			this->t_textbox4->Location = System::Drawing::Point(260, 328);
			this->t_textbox4->Name = L"t_textbox4";
			this->t_textbox4->Size = System::Drawing::Size(130, 31);
			this->t_textbox4->TabIndex = 11;
			// 
			// call_textbox4
			// 
			this->call_textbox4->Location = System::Drawing::Point(260, 431);
			this->call_textbox4->Name = L"call_textbox4";
			this->call_textbox4->ReadOnly = true;
			this->call_textbox4->Size = System::Drawing::Size(130, 31);
			this->call_textbox4->TabIndex = 12;
			// 
			// put_textbox4
			// 
			this->put_textbox4->Location = System::Drawing::Point(260, 504);
			this->put_textbox4->Name = L"put_textbox4";
			this->put_textbox4->ReadOnly = true;
			this->put_textbox4->Size = System::Drawing::Size(130, 31);
			this->put_textbox4->TabIndex = 13;
			// 
			// calculate_button4
			// 
			this->calculate_button4->Location = System::Drawing::Point(436, 458);
			this->calculate_button4->Name = L"calculate_button4";
			this->calculate_button4->Size = System::Drawing::Size(120, 54);
			this->calculate_button4->TabIndex = 14;
			this->calculate_button4->Text = L"Calculate";
			this->calculate_button4->UseVisualStyleBackColor = true;
			this->calculate_button4->Click += gcnew System::EventHandler(this, &Form4::calculate_button4_Click);
			// 
			// reset_button4
			// 
			this->reset_button4->Location = System::Drawing::Point(436, 583);
			this->reset_button4->Name = L"reset_button4";
			this->reset_button4->Size = System::Drawing::Size(120, 54);
			this->reset_button4->TabIndex = 15;
			this->reset_button4->Text = L"Reset";
			this->reset_button4->UseVisualStyleBackColor = true;
			this->reset_button4->Click += gcnew System::EventHandler(this, &Form4::reset_button4_Click);
			// 
			// back_button4
			// 
			this->back_button4->Location = System::Drawing::Point(37, 583);
			this->back_button4->Name = L"back_button4";
			this->back_button4->Size = System::Drawing::Size(197, 54);
			this->back_button4->TabIndex = 16;
			this->back_button4->Text = L"Back to Menu";
			this->back_button4->UseVisualStyleBackColor = true;
			this->back_button4->Click += gcnew System::EventHandler(this, &Form4::back_button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(396, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 25);
			this->label1->TabIndex = 17;
			this->label1->Text = L"(ex. 100,00)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(396, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 25);
			this->label2->TabIndex = 18;
			this->label2->Text = L"(ex. 100,00)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(396, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 25);
			this->label3->TabIndex = 19;
			this->label3->Text = L"(ex. 0,1 for 10%)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(396, 256);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(177, 25);
			this->label4->TabIndex = 20;
			this->label4->Text = L"(ex 0,25 for 25%)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(396, 331);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 25);
			this->label5->TabIndex = 21;
			this->label5->Text = L"(ex. 1 for 1 year)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(396, 434);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 25);
			this->label6->TabIndex = 22;
			this->label6->Text = L"$";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(396, 507);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 25);
			this->label7->TabIndex = 23;
			this->label7->Text = L"$";
			// 
			// save_data4
			// 
			this->save_data4->Location = System::Drawing::Point(258, 583);
			this->save_data4->Name = L"save_data4";
			this->save_data4->Size = System::Drawing::Size(135, 54);
			this->save_data4->TabIndex = 28;
			this->save_data4->Text = L"Save Data";
			this->save_data4->UseVisualStyleBackColor = true;
			this->save_data4->Click += gcnew System::EventHandler(this, &Form4::save_data4_Click);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 665);
			this->Controls->Add(this->save_data4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->back_button4);
			this->Controls->Add(this->reset_button4);
			this->Controls->Add(this->calculate_button4);
			this->Controls->Add(this->put_textbox4);
			this->Controls->Add(this->call_textbox4);
			this->Controls->Add(this->t_textbox4);
			this->Controls->Add(this->sigma_textbox4);
			this->Controls->Add(this->r_textbox4);
			this->Controls->Add(this->k_textbox4);
			this->Controls->Add(this->f_textbox4);
			this->Controls->Add(this->put_label4);
			this->Controls->Add(this->call_label4);
			this->Controls->Add(this->t_label4);
			this->Controls->Add(this->sigma_label4);
			this->Controls->Add(this->r_label4);
			this->Controls->Add(this->k_label4);
			this->Controls->Add(this->f_label4);
			this->Name = L"Form4";
			this->Text = L"Form4";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void calculate_button4_Click(System::Object^  sender, System::EventArgs^  e) {
		// Read data from textboxes and convert them in dobule data
		// Try & Catch indicates error if there are invalid input data, as negative numbers or letters 
		try
		{
			if (System::Convert::ToDouble(f_textbox4->Text) <= 0)
			{
				throw "Spot Price must be a positive number!";
			}
			if (System::Convert::ToDouble(k_textbox4->Text) <= 0)
			{
				throw "Exercise Price must be a positive number!";
			}
			if (System::Convert::ToDouble(r_textbox4->Text) <= 0)
			{
				throw "Interest Rate must be a positive number!";
			}
			if (System::Convert::ToDouble(sigma_textbox4->Text) <= 0)
			{
				throw "Sigma must be a positive number!";
			}
			if (System::Convert::ToDouble(t_textbox4->Text) <= 0)
			{
				throw "Time to Maturity must be a positive number!";
			}
			double f = System::Convert::ToDouble(f_textbox4->Text);
			double k = System::Convert::ToDouble(k_textbox4->Text);
			double r = System::Convert::ToDouble(r_textbox4->Text);
			double sigma = System::Convert::ToDouble(sigma_textbox4->Text);
			double t = System::Convert::ToDouble(t_textbox4->Text);
			OptionFutures option(f, k, r, sigma, t);
			call_textbox4->Text = (option.getCall()).ToString("0.0000");
			put_textbox4->Text = (option.getPut()).ToString("0.0000");
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
	private: System::Void back_button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		menu->Show();
	}
	private: System::Void reset_button4_Click(System::Object^  sender, System::EventArgs^  e) {
		f_textbox4->Clear();
		k_textbox4->Clear();
		r_textbox4->Clear();
		sigma_textbox4->Clear();
		t_textbox4->Clear();
		call_textbox4->Clear();
		put_textbox4->Clear();
	}
private: System::Void save_data4_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult a = MessageBox::Show("Do you want to save it to a new file?", "Save", MessageBoxButtons::YesNo);
	if (a == System::Windows::Forms::DialogResult::Yes) {
		SaveFileDialog ^saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "CSV file(*.csv)|*.csv";
		saveFileDialog1->Title = "Save a CSV File";
		saveFileDialog1->ShowDialog();
		StreamWriter^ outfile = gcnew StreamWriter(saveFileDialog1->FileName, std::ios::app);
		String ^f = f_textbox4->Text;
		String ^k = k_textbox4->Text;
		String ^r = r_textbox4->Text;
		String ^sigma = sigma_textbox4->Text;
		String ^t = t_textbox4->Text;
		String ^call = call_textbox4->Text;
		String ^put = put_textbox4->Text;
		String ^out = f + ";" + k + ";" + r + ";" + sigma + ";" + t + ";" + call + ";" + put;
		String ^intest = "F_PRICE;K_PRICE;INT_RATE;SIGMA;TIME_T_M;CALL_PRICE;PUT_PRICE";
		outfile->WriteLine(intest);
		outfile->WriteLine(out);
		outfile->Close();
	} 
	else {
		SaveFileDialog ^saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->ShowDialog();
		StreamWriter^ outfile = gcnew StreamWriter(saveFileDialog1->FileName, std::ios::app);
		String ^f = f_textbox4->Text;
		String ^k = k_textbox4->Text;
		String ^r = r_textbox4->Text;
		String ^sigma = sigma_textbox4->Text;
		String ^t = t_textbox4->Text;
		String ^call = call_textbox4->Text;
		String ^put = put_textbox4->Text;
		String ^out = f + ";" + k + ";" + r + ";" + sigma + ";" + t + ";" + call + ";" + put;
		outfile->WriteLine(out);
		outfile->Close();
	};
};
};
};
