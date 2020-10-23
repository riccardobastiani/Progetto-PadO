// Form from Choice 1: European Base Option
#pragma once
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include "Form1.h"
#include "BlackScholes.h"
#include <Windows.h>

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
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::Windows::Forms::DataVisualization::Charting;


	using namespace System::Runtime::InteropServices;



	/// <summary>
	/// Riepilogo per Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form ^menu;
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}
		Form2(Form ^choice_1)
		{
			menu = choice_1;
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}

	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  s_textbox2;
	private: System::Windows::Forms::TextBox^  k_textbox2;
	private: System::Windows::Forms::TextBox^  r_textbox2;
	private: System::Windows::Forms::TextBox^  sigma_textbox2;
	private: System::Windows::Forms::TextBox^  t_textbox2;
	private: System::Windows::Forms::Label^  s_label2;
	private: System::Windows::Forms::Label^  k_label2;
	private: System::Windows::Forms::Label^  r_label2;
	private: System::Windows::Forms::Label^  sigma_label2;
	private: System::Windows::Forms::Label^  time_label2;
	private: System::Windows::Forms::TextBox^  call_textbox2;
	private: System::Windows::Forms::TextBox^  put_textbox2;
	private: System::Windows::Forms::Label^  call_label2;
	private: System::Windows::Forms::Label^  put_label2;
	private: System::Windows::Forms::Label^  info_s2;
	private: System::Windows::Forms::Label^  info_k2;
	private: System::Windows::Forms::Label^  info_r2;

	private: System::Windows::Forms::Label^  info_sigma2;
	private: System::Windows::Forms::Label^  info_t2;
	private: System::Windows::Forms::Label^  info_c2;
	private: System::Windows::Forms::Label^  info_p2;
	private: System::Windows::Forms::Button^  reset_button2;
	private: System::Windows::Forms::Button^  calculate_button2;
	private: System::Windows::Forms::Button^  back_button2;
	private: System::Windows::Forms::Button^  save_data2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;

	private: System::Windows::Forms::Button^ button2_Click;








	protected:

	protected:






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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->s_textbox2 = (gcnew System::Windows::Forms::TextBox());
			this->k_textbox2 = (gcnew System::Windows::Forms::TextBox());
			this->r_textbox2 = (gcnew System::Windows::Forms::TextBox());
			this->sigma_textbox2 = (gcnew System::Windows::Forms::TextBox());
			this->t_textbox2 = (gcnew System::Windows::Forms::TextBox());
			this->s_label2 = (gcnew System::Windows::Forms::Label());
			this->k_label2 = (gcnew System::Windows::Forms::Label());
			this->r_label2 = (gcnew System::Windows::Forms::Label());
			this->sigma_label2 = (gcnew System::Windows::Forms::Label());
			this->time_label2 = (gcnew System::Windows::Forms::Label());
			this->call_textbox2 = (gcnew System::Windows::Forms::TextBox());
			this->put_textbox2 = (gcnew System::Windows::Forms::TextBox());
			this->call_label2 = (gcnew System::Windows::Forms::Label());
			this->put_label2 = (gcnew System::Windows::Forms::Label());
			this->info_s2 = (gcnew System::Windows::Forms::Label());
			this->info_k2 = (gcnew System::Windows::Forms::Label());
			this->info_r2 = (gcnew System::Windows::Forms::Label());
			this->info_sigma2 = (gcnew System::Windows::Forms::Label());
			this->info_t2 = (gcnew System::Windows::Forms::Label());
			this->info_c2 = (gcnew System::Windows::Forms::Label());
			this->info_p2 = (gcnew System::Windows::Forms::Label());
			this->reset_button2 = (gcnew System::Windows::Forms::Button());
			this->calculate_button2 = (gcnew System::Windows::Forms::Button());
			this->back_button2 = (gcnew System::Windows::Forms::Button());
			this->save_data2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2_Click = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// s_textbox2
			// 
			this->s_textbox2->Location = System::Drawing::Point(173, 22);
			this->s_textbox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->s_textbox2->Name = L"s_textbox2";
			this->s_textbox2->Size = System::Drawing::Size(88, 22);
			this->s_textbox2->TabIndex = 0;
			// 
			// k_textbox2
			// 
			this->k_textbox2->Location = System::Drawing::Point(173, 69);
			this->k_textbox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->k_textbox2->Name = L"k_textbox2";
			this->k_textbox2->Size = System::Drawing::Size(88, 22);
			this->k_textbox2->TabIndex = 1;
			// 
			// r_textbox2
			// 
			this->r_textbox2->Location = System::Drawing::Point(173, 116);
			this->r_textbox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->r_textbox2->Name = L"r_textbox2";
			this->r_textbox2->Size = System::Drawing::Size(88, 22);
			this->r_textbox2->TabIndex = 2;
			// 
			// sigma_textbox2
			// 
			this->sigma_textbox2->Location = System::Drawing::Point(173, 162);
			this->sigma_textbox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sigma_textbox2->Name = L"sigma_textbox2";
			this->sigma_textbox2->Size = System::Drawing::Size(88, 22);
			this->sigma_textbox2->TabIndex = 3;
			// 
			// t_textbox2
			// 
			this->t_textbox2->Location = System::Drawing::Point(173, 210);
			this->t_textbox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->t_textbox2->Name = L"t_textbox2";
			this->t_textbox2->Size = System::Drawing::Size(88, 22);
			this->t_textbox2->TabIndex = 4;
			// 
			// s_label2
			// 
			this->s_label2->AutoSize = true;
			this->s_label2->Location = System::Drawing::Point(61, 25);
			this->s_label2->Name = L"s_label2";
			this->s_label2->Size = System::Drawing::Size(94, 17);
			this->s_label2->TabIndex = 5;
			this->s_label2->Text = L"s (Spot Price)";
			this->s_label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// k_label2
			// 
			this->k_label2->AutoSize = true;
			this->k_label2->Location = System::Drawing::Point(35, 71);
			this->k_label2->Name = L"k_label2";
			this->k_label2->Size = System::Drawing::Size(118, 17);
			this->k_label2->TabIndex = 6;
			this->k_label2->Text = L"k (Exercise Price)";
			this->k_label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// r_label2
			// 
			this->r_label2->AutoSize = true;
			this->r_label2->Location = System::Drawing::Point(48, 118);
			this->r_label2->Name = L"r_label2";
			this->r_label2->Size = System::Drawing::Size(108, 17);
			this->r_label2->TabIndex = 7;
			this->r_label2->Text = L"r (Interest Rate)";
			this->r_label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// sigma_label2
			// 
			this->sigma_label2->AutoSize = true;
			this->sigma_label2->Location = System::Drawing::Point(43, 164);
			this->sigma_label2->Name = L"sigma_label2";
			this->sigma_label2->Size = System::Drawing::Size(111, 17);
			this->sigma_label2->TabIndex = 8;
			this->sigma_label2->Text = L"sigma (Volatility)";
			this->sigma_label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// time_label2
			// 
			this->time_label2->AutoSize = true;
			this->time_label2->Location = System::Drawing::Point(28, 212);
			this->time_label2->Name = L"time_label2";
			this->time_label2->Size = System::Drawing::Size(127, 17);
			this->time_label2->TabIndex = 9;
			this->time_label2->Text = L"t (Time to Maturity)";
			this->time_label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// call_textbox2
			// 
			this->call_textbox2->Location = System::Drawing::Point(173, 276);
			this->call_textbox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->call_textbox2->Name = L"call_textbox2";
			this->call_textbox2->ReadOnly = true;
			this->call_textbox2->Size = System::Drawing::Size(88, 22);
			this->call_textbox2->TabIndex = 10;
			// 
			// put_textbox2
			// 
			this->put_textbox2->Location = System::Drawing::Point(173, 322);
			this->put_textbox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->put_textbox2->Name = L"put_textbox2";
			this->put_textbox2->ReadOnly = true;
			this->put_textbox2->Size = System::Drawing::Size(88, 22);
			this->put_textbox2->TabIndex = 11;
			// 
			// call_label2
			// 
			this->call_label2->AutoSize = true;
			this->call_label2->Location = System::Drawing::Point(20, 278);
			this->call_label2->Name = L"call_label2";
			this->call_label2->Size = System::Drawing::Size(134, 17);
			this->call_label2->TabIndex = 12;
			this->call_label2->Text = L"c (Call Option Price)";
			// 
			// put_label2
			// 
			this->put_label2->AutoSize = true;
			this->put_label2->Location = System::Drawing::Point(23, 325);
			this->put_label2->Name = L"put_label2";
			this->put_label2->Size = System::Drawing::Size(133, 17);
			this->put_label2->TabIndex = 13;
			this->put_label2->Text = L"p (Put Option Price)";
			// 
			// info_s2
			// 
			this->info_s2->AutoSize = true;
			this->info_s2->Location = System::Drawing::Point(264, 26);
			this->info_s2->Name = L"info_s2";
			this->info_s2->Size = System::Drawing::Size(84, 17);
			this->info_s2->TabIndex = 14;
			this->info_s2->Text = L"(ex. 100.00)";
			// 
			// info_k2
			// 
			this->info_k2->AutoSize = true;
			this->info_k2->Location = System::Drawing::Point(264, 71);
			this->info_k2->Name = L"info_k2";
			this->info_k2->Size = System::Drawing::Size(84, 17);
			this->info_k2->TabIndex = 15;
			this->info_k2->Text = L"(ex. 100.00)";
			// 
			// info_r2
			// 
			this->info_r2->AutoSize = true;
			this->info_r2->Location = System::Drawing::Point(264, 118);
			this->info_r2->Name = L"info_r2";
			this->info_r2->Size = System::Drawing::Size(113, 17);
			this->info_r2->TabIndex = 16;
			this->info_r2->Text = L"(ex. 0.1 for 10%)";
			// 
			// info_sigma2
			// 
			this->info_sigma2->AutoSize = true;
			this->info_sigma2->Location = System::Drawing::Point(264, 164);
			this->info_sigma2->Name = L"info_sigma2";
			this->info_sigma2->Size = System::Drawing::Size(117, 17);
			this->info_sigma2->TabIndex = 17;
			this->info_sigma2->Text = L"(ex 0.25 for 25%)";
			// 
			// info_t2
			// 
			this->info_t2->AutoSize = true;
			this->info_t2->Location = System::Drawing::Point(264, 212);
			this->info_t2->Name = L"info_t2";
			this->info_t2->Size = System::Drawing::Size(113, 17);
			this->info_t2->TabIndex = 18;
			this->info_t2->Text = L"(ex. 1 for 1 year)";
			// 
			// info_c2
			// 
			this->info_c2->AutoSize = true;
			this->info_c2->Location = System::Drawing::Point(264, 278);
			this->info_c2->Name = L"info_c2";
			this->info_c2->Size = System::Drawing::Size(16, 17);
			this->info_c2->TabIndex = 19;
			this->info_c2->Text = L"$";
			// 
			// info_p2
			// 
			this->info_p2->AutoSize = true;
			this->info_p2->Location = System::Drawing::Point(264, 325);
			this->info_p2->Name = L"info_p2";
			this->info_p2->Size = System::Drawing::Size(16, 17);
			this->info_p2->TabIndex = 20;
			this->info_p2->Text = L"$";
			// 
			// reset_button2
			// 
			this->reset_button2->Location = System::Drawing::Point(301, 368);
			this->reset_button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->reset_button2->Name = L"reset_button2";
			this->reset_button2->Size = System::Drawing::Size(80, 34);
			this->reset_button2->TabIndex = 21;
			this->reset_button2->Text = L"Reset";
			this->reset_button2->UseVisualStyleBackColor = true;
			this->reset_button2->Click += gcnew System::EventHandler(this, &Form2::reset_button2_Click);
			// 
			// calculate_button2
			// 
			this->calculate_button2->Location = System::Drawing::Point(301, 322);
			this->calculate_button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->calculate_button2->Name = L"calculate_button2";
			this->calculate_button2->Size = System::Drawing::Size(80, 34);
			this->calculate_button2->TabIndex = 22;
			this->calculate_button2->Text = L"Calculate";
			this->calculate_button2->UseVisualStyleBackColor = true;
			this->calculate_button2->Click += gcnew System::EventHandler(this, &Form2::calculate_button2_Click);
			// 
			// back_button2
			// 
			this->back_button2->Location = System::Drawing::Point(24, 368);
			this->back_button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->back_button2->Name = L"back_button2";
			this->back_button2->Size = System::Drawing::Size(131, 34);
			this->back_button2->TabIndex = 23;
			this->back_button2->Text = L"Back to Menu";
			this->back_button2->UseVisualStyleBackColor = true;
			this->back_button2->Click += gcnew System::EventHandler(this, &Form2::back_button2_Click);
			// 
			// save_data2
			// 
			this->save_data2->Location = System::Drawing::Point(172, 368);
			this->save_data2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->save_data2->Name = L"save_data2";
			this->save_data2->Size = System::Drawing::Size(91, 34);
			this->save_data2->TabIndex = 24;
			this->save_data2->Text = L"Save Data";
			this->save_data2->UseVisualStyleBackColor = true;
			this->save_data2->Click += gcnew System::EventHandler(this, &Form2::save_data2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(301, 282);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 34);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Plot";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->DataSource = this->chart1->Images;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(436, 13);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->IsXValueIndexed = true;
			series1->Legend = L"Legend1";
			series1->Name = L"Call Price";
			series1->YValuesPerPoint = 2;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Put Price";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"sigma";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(581, 366);
			this->chart1->TabIndex = 26;
			this->chart1->Tag = L"";
			this->chart1->Text = L"chart1";
			title1->Name = L"BS Calculator";
			this->chart1->Titles->Add(title1);
			this->chart1->Click += gcnew System::EventHandler(this, &Form2::chart1_Click);
			// 
			// button2_Click
			// 
			this->button2_Click->Location = System::Drawing::Point(301, 246);
			this->button2_Click->Margin = System::Windows::Forms::Padding(4);
			this->button2_Click->Name = L"button2_Click";
			this->button2_Click->Size = System::Drawing::Size(80, 28);
			this->button2_Click->TabIndex = 27;
			this->button2_Click->Text = L"Take file";
			this->button2_Click->UseVisualStyleBackColor = true;
			this->button2_Click->UseWaitCursor = true;
			this->button2_Click->Click += gcnew System::EventHandler(this, &Form2::button2_Click_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1069, 448);
			this->Controls->Add(this->button2_Click);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->save_data2);
			this->Controls->Add(this->back_button2);
			this->Controls->Add(this->calculate_button2);
			this->Controls->Add(this->reset_button2);
			this->Controls->Add(this->info_p2);
			this->Controls->Add(this->info_c2);
			this->Controls->Add(this->info_t2);
			this->Controls->Add(this->info_sigma2);
			this->Controls->Add(this->info_r2);
			this->Controls->Add(this->info_k2);
			this->Controls->Add(this->info_s2);
			this->Controls->Add(this->put_label2);
			this->Controls->Add(this->call_label2);
			this->Controls->Add(this->put_textbox2);
			this->Controls->Add(this->call_textbox2);
			this->Controls->Add(this->time_label2);
			this->Controls->Add(this->sigma_label2);
			this->Controls->Add(this->r_label2);
			this->Controls->Add(this->k_label2);
			this->Controls->Add(this->s_label2);
			this->Controls->Add(this->t_textbox2);
			this->Controls->Add(this->sigma_textbox2);
			this->Controls->Add(this->r_textbox2);
			this->Controls->Add(this->k_textbox2);
			this->Controls->Add(this->s_textbox2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form2";
			this->Text = L"Calcolo BS Options";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void calculate_button2_Click(System::Object^  sender, System::EventArgs^  e) {
		// Read data from textboxes and convert them in dobule data
		// Try & Catch indicates error if there are invalid input data, as negative numbers or letters 
		try
		{
			if (System::Convert::ToDecimal(s_textbox2->Text) <= 0)
			{
				throw "Spot Price must be a positive number!";
			}
			if (System::Convert::ToDecimal(k_textbox2->Text) <= 0)
			{
				throw "Exercise Price must be a positive number!";
			}
			if (System::Convert::ToDecimal(r_textbox2->Text) <= 0)
			{
				throw "Interest Rate must be a positive number!";
			}
			if (System::Convert::ToDecimal(sigma_textbox2->Text) <= 0)
			{
				throw "Sigma must be a positive number!";
			}
			if (System::Convert::ToDouble(t_textbox2->Text) <= 0)
			{
				throw "Time to Maturity must be a positive number!";
			}
			auto s = System::Convert::ToDouble(s_textbox2->Text);
			auto k = System::Convert::ToDouble(k_textbox2->Text);
			auto r = System::Convert::ToDouble(r_textbox2->Text);
			auto sigma = System::Convert::ToDouble(sigma_textbox2->Text);
			auto t = System::Convert::ToDouble(t_textbox2->Text);
			OptionBase option(s, k, r, sigma, t);
			call_textbox2->Text = (option.getCall()).ToString("0.00");
			put_textbox2->Text = (option.getPut()).ToString("0.00");
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
	private: System::Void back_button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		menu->Show();
	}
	private: System::Void reset_button2_Click(System::Object^  sender, System::EventArgs^  e) {
		s_textbox2->Clear();
		k_textbox2->Clear();
		r_textbox2->Clear();
		sigma_textbox2->Clear();
		t_textbox2->Clear();
		call_textbox2->Clear();
		put_textbox2->Clear();
	}
	private: System::Void save_data2_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog ^saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "CSV file(*.csv)|*.csv";
		saveFileDialog1->Title = "Save a CSV File";
		saveFileDialog1->ShowDialog();
		StreamWriter^ outfile = gcnew StreamWriter(saveFileDialog1->FileName, std::ios::app);
		String ^s = s_textbox2->Text;
		String ^k = k_textbox2->Text;
		String ^r = r_textbox2->Text;
		String ^sigma = sigma_textbox2->Text;
		String ^t = t_textbox2->Text;
		String ^call = call_textbox2->Text;
		String ^put = put_textbox2->Text;
		String ^etichette = "Spot Price; Strike Price ; Interest Rate; Sigma; Time; Call Result; Put Result";
		String ^out = s + ";" + k + ";" + r + ";" + sigma + ";" + t + ";" + call + ";" + put;


		double ds, dk, dr, dsigma, dt, dcall, dput, dout;
		ds = Double::Parse(s);
		dk = Double::Parse(k);
		dr = Double::Parse(r);
		dsigma = Double::Parse(sigma);
		dt = Double::Parse(t);
		dcall = Double::Parse(call);
		dput = Double::Parse(put);
		//dout = Double::Parse(out);


		outfile->WriteLine(out);
		outfile->Close();

	}
			 /* CHART CALL E PUT*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


		this->chart1->Series["Call Price"]->Points->AddXY("", this->call_textbox2->Text);
		this->chart1->Series["Put Price"]->Points->AddXY("", this->put_textbox2->Text);

		


		/*FINE CHART CALL E PUT*/


	};
			 /*BUTTON2_CLICK*/

	
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void button2_Click_Click(System::Object^ sender, System::EventArgs^ e) {
	Stream^ streamToSave;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((streamToSave = openFileDialog1->OpenFile()) != nullptr);
		{
			String^ Strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ Readfile = File::ReadAllText(Strfilename);
			MessageBox::Show(Readfile);
			streamToSave->Close();

		};
	};
};
};
};




