#pragma once
#include "Recursividad.h"

namespace Laboratorio1JavierMorales1210219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Fibonacci_btn;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Factorial_txt;
	private: System::Windows::Forms::Button^ Factorial_btn;
	private: System::Windows::Forms::Label^ resultado_factorial_label;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ binario_btn;
	private: System::Windows::Forms::TextBox^ binario_txt;
	private: System::Windows::Forms::Label^ resultado_binario_label;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ n_para_multiplicar;

	private: System::Windows::Forms::Button^ Multi_Iterativo_btn;
	private: System::Windows::Forms::Button^ Multi_Recursivo_btn;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ res_multi_iterativo;
	private: System::Windows::Forms::Label^ tiempo_multi_iterativo;


	private: System::Windows::Forms::Label^ res_multi_Recursivo;
	private: System::Windows::Forms::Label^ tiempo_multi_recursivo;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ base_Recursivo_btn;

	private: System::Windows::Forms::Button^ Base_Iterativo_btn;
	private: System::Windows::Forms::TextBox^ Numero_Convertir;


	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ n_para_multi_2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox4;


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
			this->Fibonacci_btn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Factorial_txt = (gcnew System::Windows::Forms::TextBox());
			this->Factorial_btn = (gcnew System::Windows::Forms::Button());
			this->resultado_factorial_label = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->binario_btn = (gcnew System::Windows::Forms::Button());
			this->binario_txt = (gcnew System::Windows::Forms::TextBox());
			this->resultado_binario_label = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->n_para_multiplicar = (gcnew System::Windows::Forms::TextBox());
			this->Multi_Iterativo_btn = (gcnew System::Windows::Forms::Button());
			this->Multi_Recursivo_btn = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->res_multi_iterativo = (gcnew System::Windows::Forms::Label());
			this->tiempo_multi_iterativo = (gcnew System::Windows::Forms::Label());
			this->res_multi_Recursivo = (gcnew System::Windows::Forms::Label());
			this->tiempo_multi_recursivo = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->base_Recursivo_btn = (gcnew System::Windows::Forms::Button());
			this->Base_Iterativo_btn = (gcnew System::Windows::Forms::Button());
			this->Numero_Convertir = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->n_para_multi_2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Fibonacci_btn
			// 
			this->Fibonacci_btn->Location = System::Drawing::Point(227, 79);
			this->Fibonacci_btn->Name = L"Fibonacci_btn";
			this->Fibonacci_btn->Size = System::Drawing::Size(87, 40);
			this->Fibonacci_btn->TabIndex = 0;
			this->Fibonacci_btn->Text = L"Fibonacci";
			this->Fibonacci_btn->UseVisualStyleBackColor = true;
			this->Fibonacci_btn->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(29, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingrese un número";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Resultado";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ingrese un número para hacer factorial";
			// 
			// Factorial_txt
			// 
			this->Factorial_txt->Location = System::Drawing::Point(29, 230);
			this->Factorial_txt->Name = L"Factorial_txt";
			this->Factorial_txt->Size = System::Drawing::Size(100, 20);
			this->Factorial_txt->TabIndex = 5;
			// 
			// Factorial_btn
			// 
			this->Factorial_btn->Location = System::Drawing::Point(227, 196);
			this->Factorial_btn->Name = L"Factorial_btn";
			this->Factorial_btn->Size = System::Drawing::Size(87, 40);
			this->Factorial_btn->TabIndex = 6;
			this->Factorial_btn->Text = L"Factorial";
			this->Factorial_btn->UseVisualStyleBackColor = true;
			this->Factorial_btn->Click += gcnew System::EventHandler(this, &MyForm::Factorial_btn_Click);
			// 
			// resultado_factorial_label
			// 
			this->resultado_factorial_label->AutoSize = true;
			this->resultado_factorial_label->Location = System::Drawing::Point(68, 271);
			this->resultado_factorial_label->Name = L"resultado_factorial_label";
			this->resultado_factorial_label->Size = System::Drawing::Size(55, 13);
			this->resultado_factorial_label->TabIndex = 7;
			this->resultado_factorial_label->Text = L"Resultado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 320);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(217, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Ingrese un número para transformar a binario";
			// 
			// binario_btn
			// 
			this->binario_btn->Location = System::Drawing::Point(227, 360);
			this->binario_btn->Name = L"binario_btn";
			this->binario_btn->Size = System::Drawing::Size(87, 40);
			this->binario_btn->TabIndex = 9;
			this->binario_btn->Text = L"Binario";
			this->binario_btn->UseVisualStyleBackColor = true;
			this->binario_btn->Click += gcnew System::EventHandler(this, &MyForm::Binario_btn_Click);
			// 
			// binario_txt
			// 
			this->binario_txt->Location = System::Drawing::Point(29, 371);
			this->binario_txt->Name = L"binario_txt";
			this->binario_txt->Size = System::Drawing::Size(100, 20);
			this->binario_txt->TabIndex = 10;
			this->binario_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::Binario_txt_TextChanged);
			// 
			// resultado_binario_label
			// 
			this->resultado_binario_label->AutoSize = true;
			this->resultado_binario_label->Location = System::Drawing::Point(68, 417);
			this->resultado_binario_label->Name = L"resultado_binario_label";
			this->resultado_binario_label->Size = System::Drawing::Size(55, 13);
			this->resultado_binario_label->TabIndex = 11;
			this->resultado_binario_label->Text = L"Resultado";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(106, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 22);
			this->label5->TabIndex = 12;
			this->label5->Text = L"LABORATORIO";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(746, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 22);
			this->label6->TabIndex = 13;
			this->label6->Text = L"TAREA";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Enabled = false;
			this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(536, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(161, 18);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Multiplicación con sumas";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(536, 123);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Ingrese números";
			// 
			// n_para_multiplicar
			// 
			this->n_para_multiplicar->Location = System::Drawing::Point(539, 148);
			this->n_para_multiplicar->Name = L"n_para_multiplicar";
			this->n_para_multiplicar->Size = System::Drawing::Size(69, 20);
			this->n_para_multiplicar->TabIndex = 18;
			// 
			// Multi_Iterativo_btn
			// 
			this->Multi_Iterativo_btn->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Multi_Iterativo_btn->Location = System::Drawing::Point(738, 130);
			this->Multi_Iterativo_btn->Name = L"Multi_Iterativo_btn";
			this->Multi_Iterativo_btn->Size = System::Drawing::Size(102, 28);
			this->Multi_Iterativo_btn->TabIndex = 19;
			this->Multi_Iterativo_btn->Text = L"ITERATIVO";
			this->Multi_Iterativo_btn->UseVisualStyleBackColor = true;
			this->Multi_Iterativo_btn->Click += gcnew System::EventHandler(this, &MyForm::Multi_Iterativo_btn_Click);
			// 
			// Multi_Recursivo_btn
			// 
			this->Multi_Recursivo_btn->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Multi_Recursivo_btn->Location = System::Drawing::Point(905, 130);
			this->Multi_Recursivo_btn->Name = L"Multi_Recursivo_btn";
			this->Multi_Recursivo_btn->Size = System::Drawing::Size(102, 28);
			this->Multi_Recursivo_btn->TabIndex = 20;
			this->Multi_Recursivo_btn->Text = L"RECURSIVO";
			this->Multi_Recursivo_btn->UseVisualStyleBackColor = true;
			this->Multi_Recursivo_btn->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(536, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Resultados";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(536, 243);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(106, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Tiempo de ejecución";
			// 
			// res_multi_iterativo
			// 
			this->res_multi_iterativo->AutoSize = true;
			this->res_multi_iterativo->Location = System::Drawing::Point(747, 219);
			this->res_multi_iterativo->Name = L"res_multi_iterativo";
			this->res_multi_iterativo->Size = System::Drawing::Size(27, 13);
			this->res_multi_iterativo->TabIndex = 23;
			this->res_multi_iterativo->Text = L"N/A";
			// 
			// tiempo_multi_iterativo
			// 
			this->tiempo_multi_iterativo->AutoSize = true;
			this->tiempo_multi_iterativo->Location = System::Drawing::Point(747, 243);
			this->tiempo_multi_iterativo->Name = L"tiempo_multi_iterativo";
			this->tiempo_multi_iterativo->Size = System::Drawing::Size(27, 13);
			this->tiempo_multi_iterativo->TabIndex = 24;
			this->tiempo_multi_iterativo->Text = L"N/A";
			// 
			// res_multi_Recursivo
			// 
			this->res_multi_Recursivo->AutoSize = true;
			this->res_multi_Recursivo->Location = System::Drawing::Point(912, 219);
			this->res_multi_Recursivo->Name = L"res_multi_Recursivo";
			this->res_multi_Recursivo->Size = System::Drawing::Size(27, 13);
			this->res_multi_Recursivo->TabIndex = 25;
			this->res_multi_Recursivo->Text = L"N/A";
			// 
			// tiempo_multi_recursivo
			// 
			this->tiempo_multi_recursivo->AutoSize = true;
			this->tiempo_multi_recursivo->Location = System::Drawing::Point(912, 243);
			this->tiempo_multi_recursivo->Name = L"tiempo_multi_recursivo";
			this->tiempo_multi_recursivo->Size = System::Drawing::Size(27, 13);
			this->tiempo_multi_recursivo->TabIndex = 26;
			this->tiempo_multi_recursivo->Text = L"N/A";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(912, 465);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 13);
			this->label15->TabIndex = 37;
			this->label15->Text = L"N/A";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(912, 432);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(27, 13);
			this->label16->TabIndex = 36;
			this->label16->Text = L"N/A";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(735, 465);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 13);
			this->label17->TabIndex = 35;
			this->label17->Text = L"N/A";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(735, 432);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(27, 13);
			this->label18->TabIndex = 34;
			this->label18->Text = L"N/A";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(536, 465);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(106, 13);
			this->label19->TabIndex = 33;
			this->label19->Text = L"Tiempo de ejecución";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(536, 432);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(60, 13);
			this->label20->TabIndex = 32;
			this->label20->Text = L"Resultados";
			// 
			// base_Recursivo_btn
			// 
			this->base_Recursivo_btn->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->base_Recursivo_btn->Location = System::Drawing::Point(905, 385);
			this->base_Recursivo_btn->Name = L"base_Recursivo_btn";
			this->base_Recursivo_btn->Size = System::Drawing::Size(102, 28);
			this->base_Recursivo_btn->TabIndex = 31;
			this->base_Recursivo_btn->Text = L"RECURSIVO";
			this->base_Recursivo_btn->UseVisualStyleBackColor = true;
			// 
			// Base_Iterativo_btn
			// 
			this->Base_Iterativo_btn->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Base_Iterativo_btn->Location = System::Drawing::Point(738, 386);
			this->Base_Iterativo_btn->Name = L"Base_Iterativo_btn";
			this->Base_Iterativo_btn->Size = System::Drawing::Size(102, 28);
			this->Base_Iterativo_btn->TabIndex = 30;
			this->Base_Iterativo_btn->Text = L"ITERATIVO";
			this->Base_Iterativo_btn->UseVisualStyleBackColor = true;
			this->Base_Iterativo_btn->Click += gcnew System::EventHandler(this, &MyForm::Base_Iterativo_btn_Click);
			// 
			// Numero_Convertir
			// 
			this->Numero_Convertir->Location = System::Drawing::Point(539, 357);
			this->Numero_Convertir->Name = L"Numero_Convertir";
			this->Numero_Convertir->Size = System::Drawing::Size(100, 20);
			this->Numero_Convertir->TabIndex = 29;
			this->Numero_Convertir->TextChanged += gcnew System::EventHandler(this, &MyForm::Numero_Convertir_TextChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(536, 341);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(95, 13);
			this->label21->TabIndex = 28;
			this->label21->Text = L"Ingrese un número";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Enabled = false;
			this->label22->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(536, 304);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(143, 18);
			this->label22->TabIndex = 27;
			this->label22->Text = L"Conversión base m a n";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(536, 381);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(63, 13);
			this->label23->TabIndex = 38;
			this->label23->Text = L"Base origen";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(741, 357);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 41;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(738, 341);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(68, 13);
			this->label24->TabIndex = 40;
			this->label24->Text = L"Base destino";
			// 
			// n_para_multi_2
			// 
			this->n_para_multi_2->Location = System::Drawing::Point(539, 187);
			this->n_para_multi_2->Name = L"n_para_multi_2";
			this->n_para_multi_2->Size = System::Drawing::Size(69, 20);
			this->n_para_multi_2->TabIndex = 42;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(568, 171);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 13);
			this->label11->TabIndex = 43;
			this->label11->Text = L"X";
			// 
			// textBox4
			// 
			this->textBox4->AllowDrop = true;
			this->textBox4->Location = System::Drawing::Point(539, 397);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 39;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1145, 594);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->n_para_multi_2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->base_Recursivo_btn);
			this->Controls->Add(this->Base_Iterativo_btn);
			this->Controls->Add(this->Numero_Convertir);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->tiempo_multi_recursivo);
			this->Controls->Add(this->res_multi_Recursivo);
			this->Controls->Add(this->tiempo_multi_iterativo);
			this->Controls->Add(this->res_multi_iterativo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Multi_Recursivo_btn);
			this->Controls->Add(this->Multi_Iterativo_btn);
			this->Controls->Add(this->n_para_multiplicar);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->resultado_binario_label);
			this->Controls->Add(this->binario_txt);
			this->Controls->Add(this->binario_btn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->resultado_factorial_label);
			this->Controls->Add(this->Factorial_btn);
			this->Controls->Add(this->Factorial_txt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Fibonacci_btn);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			//Declaración de Stopwatch
			Stopwatch^ stopWatch = gcnew Stopwatch();
			stopWatch->Start();
			//Ejecución de Fibonacci
			int num = System::Convert::ToInt32(textBox1->Text);
			Recursividad^ recursividadObj = gcnew Recursividad();
			label2->Text = label2->Text + System::Convert::ToString(recursividadObj->Fibonacci(num));
			stopWatch->Stop();
			System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(stopWatch->Elapsed));
			/*
			//Leer archivo
			StreamReader^ streamReader = gcnew StreamReader("..//Archivos//numeros.csv");
			String^ contenidoArchivo = streamReader->ReadToEnd();
			streamReader->Close();
			//Escribir Archivo
			StreamWriter^ streamWriter = gcnew StreamWriter("..//Archivos//resultado.csv");
			streamWriter->WriteLine("Texto que quieren escribir");
			streamWriter->Close();
			*/
		}
		catch (...)
		{
			System::Windows::Forms::MessageBox::Show("ERROR");
		}
	}
	private: System::Void Factorial_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			int n = System::Convert::ToInt32(Factorial_txt->Text);
			Recursividad^ recursividadObj = gcnew Recursividad();
			resultado_factorial_label->Text = System::Convert::ToString(recursividadObj->Factorial(n));
		}
		catch (...)
		{
			System::Windows::Forms::MessageBox::Show("ERROR");
		}
	}
private: System::Void Binario_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		System::String^ res = "";
		int n = System::Convert::ToInt32(binario_txt->Text);
		Recursividad^ RecursividadObj = gcnew Recursividad();
		resultado_binario_label->Text = "";
		resultado_binario_label->Text += System::Convert::ToString(RecursividadObj->Binario(n, res));
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("ERROR");
	}
}
private: System::Void Binario_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Stopwatch^ stopWatch = gcnew Stopwatch();
		stopWatch->Start();
		int n = System::Convert::ToInt32(n_para_multiplicar->Text);
		int m = System::Convert::ToInt32(n_para_multi_2->Text);
		Recursividad^ RecursividadObj = gcnew Recursividad();
		res_multi_Recursivo->Text = "";
		res_multi_Recursivo->Text = System::Convert::ToString(RecursividadObj->Multiplicacion_Recursiva(n, m));
		stopWatch->Stop();
		tiempo_multi_recursivo->Text = "";
		tiempo_multi_recursivo->Text = System::Convert::ToString(stopWatch->Elapsed);
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("ERROR");
	}
}
private: System::Void Multi_Iterativo_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Stopwatch^ stopWatch = gcnew Stopwatch();
		stopWatch->Start();
		int n = System::Convert::ToInt32(n_para_multiplicar->Text);
		int m = System::Convert::ToInt32(n_para_multi_2->Text);
		Recursividad^ RecursividadObj = gcnew Recursividad();
		res_multi_iterativo->Text = "";
		res_multi_iterativo->Text = System::Convert::ToString(RecursividadObj->Multiplicacion_Iterativa(n, m));
		stopWatch->Stop();
		tiempo_multi_iterativo->Text = "";
		tiempo_multi_iterativo->Text = System::Convert::ToString(stopWatch->Elapsed);
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("ERROR");
	}
}
private: System::Void Base_Iterativo_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
}
private: System::Void Numero_Convertir_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
