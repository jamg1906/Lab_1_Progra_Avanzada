#pragma once
#include "Recursividad.h"
#include <vector>

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


	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ n_para_multi_2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->n_para_multi_2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// Fibonacci_btn
			// 
			this->Fibonacci_btn->Location = System::Drawing::Point(259, 100);
			this->Fibonacci_btn->Name = L"Fibonacci_btn";
			this->Fibonacci_btn->Size = System::Drawing::Size(87, 40);
			this->Fibonacci_btn->TabIndex = 0;
			this->Fibonacci_btn->Text = L"Fibonacci";
			this->Fibonacci_btn->UseVisualStyleBackColor = true;
			this->Fibonacci_btn->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(61, 120);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingrese un número";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(100, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Resultado";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 217);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ingrese un número para hacer factorial";
			// 
			// Factorial_txt
			// 
			this->Factorial_txt->Location = System::Drawing::Point(61, 251);
			this->Factorial_txt->Name = L"Factorial_txt";
			this->Factorial_txt->Size = System::Drawing::Size(100, 20);
			this->Factorial_txt->TabIndex = 5;
			// 
			// Factorial_btn
			// 
			this->Factorial_btn->Location = System::Drawing::Point(259, 217);
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
			this->resultado_factorial_label->Location = System::Drawing::Point(100, 292);
			this->resultado_factorial_label->Name = L"resultado_factorial_label";
			this->resultado_factorial_label->Size = System::Drawing::Size(55, 13);
			this->resultado_factorial_label->TabIndex = 7;
			this->resultado_factorial_label->Text = L"Resultado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(58, 341);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(217, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Ingrese un número para transformar a binario";
			// 
			// binario_btn
			// 
			this->binario_btn->Location = System::Drawing::Point(259, 381);
			this->binario_btn->Name = L"binario_btn";
			this->binario_btn->Size = System::Drawing::Size(87, 40);
			this->binario_btn->TabIndex = 9;
			this->binario_btn->Text = L"Binario";
			this->binario_btn->UseVisualStyleBackColor = true;
			this->binario_btn->Click += gcnew System::EventHandler(this, &MyForm::Binario_btn_Click);
			// 
			// binario_txt
			// 
			this->binario_txt->Location = System::Drawing::Point(61, 392);
			this->binario_txt->Name = L"binario_txt";
			this->binario_txt->Size = System::Drawing::Size(100, 20);
			this->binario_txt->TabIndex = 10;
			this->binario_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::Binario_txt_TextChanged);
			// 
			// resultado_binario_label
			// 
			this->resultado_binario_label->AutoSize = true;
			this->resultado_binario_label->Location = System::Drawing::Point(100, 438);
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
			this->label5->Location = System::Drawing::Point(138, 24);
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
			this->label6->Location = System::Drawing::Point(623, 14);
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
			this->label7->Location = System::Drawing::Point(413, 76);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(161, 18);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Multiplicación con sumas";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(413, 113);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Ingrese números";
			// 
			// n_para_multiplicar
			// 
			this->n_para_multiplicar->Location = System::Drawing::Point(416, 138);
			this->n_para_multiplicar->Name = L"n_para_multiplicar";
			this->n_para_multiplicar->Size = System::Drawing::Size(69, 20);
			this->n_para_multiplicar->TabIndex = 18;
			// 
			// Multi_Iterativo_btn
			// 
			this->Multi_Iterativo_btn->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Multi_Iterativo_btn->Location = System::Drawing::Point(614, 121);
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
			this->Multi_Recursivo_btn->Location = System::Drawing::Point(735, 121);
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
			this->label8->Location = System::Drawing::Point(413, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Resultados";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(413, 233);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(106, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Tiempo de ejecución";
			// 
			// res_multi_iterativo
			// 
			this->res_multi_iterativo->AutoSize = true;
			this->res_multi_iterativo->Location = System::Drawing::Point(623, 210);
			this->res_multi_iterativo->Name = L"res_multi_iterativo";
			this->res_multi_iterativo->Size = System::Drawing::Size(27, 13);
			this->res_multi_iterativo->TabIndex = 23;
			this->res_multi_iterativo->Text = L"N/A";
			// 
			// tiempo_multi_iterativo
			// 
			this->tiempo_multi_iterativo->AutoSize = true;
			this->tiempo_multi_iterativo->Location = System::Drawing::Point(623, 234);
			this->tiempo_multi_iterativo->Name = L"tiempo_multi_iterativo";
			this->tiempo_multi_iterativo->Size = System::Drawing::Size(27, 13);
			this->tiempo_multi_iterativo->TabIndex = 24;
			this->tiempo_multi_iterativo->Text = L"N/A";
			// 
			// res_multi_Recursivo
			// 
			this->res_multi_Recursivo->AutoSize = true;
			this->res_multi_Recursivo->Location = System::Drawing::Point(742, 210);
			this->res_multi_Recursivo->Name = L"res_multi_Recursivo";
			this->res_multi_Recursivo->Size = System::Drawing::Size(27, 13);
			this->res_multi_Recursivo->TabIndex = 25;
			this->res_multi_Recursivo->Text = L"N/A";
			// 
			// tiempo_multi_recursivo
			// 
			this->tiempo_multi_recursivo->AutoSize = true;
			this->tiempo_multi_recursivo->Location = System::Drawing::Point(742, 234);
			this->tiempo_multi_recursivo->Name = L"tiempo_multi_recursivo";
			this->tiempo_multi_recursivo->Size = System::Drawing::Size(27, 13);
			this->tiempo_multi_recursivo->TabIndex = 26;
			this->tiempo_multi_recursivo->Text = L"N/A";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(742, 456);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 13);
			this->label15->TabIndex = 37;
			this->label15->Text = L"N/A";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(742, 423);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(27, 13);
			this->label16->TabIndex = 36;
			this->label16->Text = L"N/A";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(611, 456);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 13);
			this->label17->TabIndex = 35;
			this->label17->Text = L"N/A";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(611, 423);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(27, 13);
			this->label18->TabIndex = 34;
			this->label18->Text = L"N/A";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(413, 455);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(106, 13);
			this->label19->TabIndex = 33;
			this->label19->Text = L"Tiempo de ejecución";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(413, 422);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(60, 13);
			this->label20->TabIndex = 32;
			this->label20->Text = L"Resultados";
			// 
			// base_Recursivo_btn
			// 
			this->base_Recursivo_btn->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->base_Recursivo_btn->Location = System::Drawing::Point(735, 376);
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
			this->Base_Iterativo_btn->Location = System::Drawing::Point(614, 377);
			this->Base_Iterativo_btn->Name = L"Base_Iterativo_btn";
			this->Base_Iterativo_btn->Size = System::Drawing::Size(102, 28);
			this->Base_Iterativo_btn->TabIndex = 30;
			this->Base_Iterativo_btn->Text = L"ITERATIVO";
			this->Base_Iterativo_btn->UseVisualStyleBackColor = true;
			this->Base_Iterativo_btn->Click += gcnew System::EventHandler(this, &MyForm::Base_Iterativo_btn_Click);
			// 
			// Numero_Convertir
			// 
			this->Numero_Convertir->Location = System::Drawing::Point(416, 347);
			this->Numero_Convertir->Name = L"Numero_Convertir";
			this->Numero_Convertir->Size = System::Drawing::Size(100, 20);
			this->Numero_Convertir->TabIndex = 29;
			this->Numero_Convertir->TextChanged += gcnew System::EventHandler(this, &MyForm::Numero_Convertir_TextChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(413, 331);
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
			this->label22->Location = System::Drawing::Point(413, 294);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(143, 18);
			this->label22->TabIndex = 27;
			this->label22->Text = L"Conversión base m a n";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(413, 371);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(63, 13);
			this->label23->TabIndex = 38;
			this->label23->Text = L"Base origen";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(614, 332);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(68, 13);
			this->label24->TabIndex = 40;
			this->label24->Text = L"Base destino";
			// 
			// n_para_multi_2
			// 
			this->n_para_multi_2->Location = System::Drawing::Point(416, 177);
			this->n_para_multi_2->Name = L"n_para_multi_2";
			this->n_para_multi_2->Size = System::Drawing::Size(69, 20);
			this->n_para_multi_2->TabIndex = 42;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(445, 161);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 13);
			this->label11->TabIndex = 43;
			this->label11->Text = L"X";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBox1->Location = System::Drawing::Point(416, 391);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 44;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2", L"10", L"8" });
			this->comboBox2->Location = System::Drawing::Point(614, 347);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(100, 21);
			this->comboBox2->TabIndex = 45;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Enabled = false;
			this->label12->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(907, 76);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(141, 18);
			this->label12->TabIndex = 46;
			this->label12->Text = L"Palabras palíndromas";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::OpenFileDialog1_FileOk);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(996, 314);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 66);
			this->button1->TabIndex = 47;
			this->button1->Text = L"Leer archivo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click_1);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(910, 110);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(340, 175);
			this->richTextBox1->TabIndex = 49;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::RichTextBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1320, 594);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->n_para_multi_2);
			this->Controls->Add(this->label24);
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
			label2->Text = "";
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
	Recursividad^ RecursividadObj = gcnew Recursividad();
	int base = System::Convert::ToInt32(comboBox1->Text);
	int numero_convertir = System::Convert::ToInt32(Numero_Convertir->Text);
	int decimal;
	int base_destino = System::Convert::ToInt32(comboBox2->Text);
	decimal = System::Convert::ToInt32(RecursividadObj->Base_A_Decimal(numero_convertir, base));
	RecursividadObj->Decimal_A_Base(decimal, base_destino);
}
private: System::Void Numero_Convertir_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FolderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void OpenFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void Button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	StreamReader^ lector = gcnew StreamReader("..//Laboratorio_1_Javier_Morales_1210219//Palabras.txt");
	String^ texto_obtenido = lector->ReadToEnd();
	String^ signo;
	int c = 0;
	int palabras_palindromas = 0;
	int longitud;
	int palabras = 0;
	for (int i = 0; i < texto_obtenido->Length; i++)
	{
		longitud = 0;
		signo = System::Convert::ToString(texto_obtenido[i]);
		if (signo == ",")
		{
			palabras++;
			longitud = (i - c);
			int verificaciones = 0;
			verificaciones = longitud / 2;
			for (int j = 0; j <= longitud; j++)
			{
				if (System::Convert::ToString(texto_obtenido[c+j]) == System::Convert::ToString(texto_obtenido[(c+longitud-1-j)]))
				{
					verificaciones--;
				}
				else
				{
					j = longitud + 1;
				}
				if (verificaciones == 0)
				{
					palabras_palindromas++;
					j = longitud + 1;
				}
			}
			c = i + 1;
		}
	}
	System::Windows::Forms::MessageBox::Show(texto_obtenido);
	System::Windows::Forms::MessageBox::Show("En el archivo existen " + System::Convert::ToString(palabras_palindromas) + " palabras palíndromas de un total de " + System::Convert::ToString(palabras) + " palabras que se encontraron en el archivo de texto.");

}
private: System::Void RichTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
