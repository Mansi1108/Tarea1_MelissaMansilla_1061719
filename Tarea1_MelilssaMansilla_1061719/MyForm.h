#pragma once
#include "Ejercicios.h"

namespace Tarea1MelilssaMansilla1061719 {

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
	private: System::Windows::Forms::TabControl^  TareaTab;
	protected:
	private: System::Windows::Forms::TabPage^  Multiplicacióntab;
	private: System::Windows::Forms::TabPage^  PalíndromasTab;
	private: System::Windows::Forms::Button^  Calcbtn;
	private: System::Windows::Forms::Label^  reslbl;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  Sumlbl;
	private: System::Windows::Forms::TextBox^  MultiTxt;
	private: System::Windows::Forms::TextBox^  Sumtxt;
	private: System::Windows::Forms::TextBox^  txtpalin;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  sinolbl;
	private: System::Windows::Forms::Button^  Verificarbtn;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  baseOrglbl;
	private: System::Windows::Forms::Label^  numorlbl;
	private: System::Windows::Forms::Label^  reslbl2;
	private: System::Windows::Forms::Button^  calcbasebtn;

	protected:

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
			this->TareaTab = (gcnew System::Windows::Forms::TabControl());
			this->Multiplicacióntab = (gcnew System::Windows::Forms::TabPage());
			this->Calcbtn = (gcnew System::Windows::Forms::Button());
			this->reslbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Sumlbl = (gcnew System::Windows::Forms::Label());
			this->MultiTxt = (gcnew System::Windows::Forms::TextBox());
			this->Sumtxt = (gcnew System::Windows::Forms::TextBox());
			this->PalíndromasTab = (gcnew System::Windows::Forms::TabPage());
			this->txtpalin = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->sinolbl = (gcnew System::Windows::Forms::Label());
			this->Verificarbtn = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->calcbasebtn = (gcnew System::Windows::Forms::Button());
			this->reslbl2 = (gcnew System::Windows::Forms::Label());
			this->numorlbl = (gcnew System::Windows::Forms::Label());
			this->baseOrglbl = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->TareaTab->SuspendLayout();
			this->Multiplicacióntab->SuspendLayout();
			this->PalíndromasTab->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TareaTab
			// 
			this->TareaTab->Controls->Add(this->Multiplicacióntab);
			this->TareaTab->Controls->Add(this->PalíndromasTab);
			this->TareaTab->Controls->Add(this->tabPage1);
			this->TareaTab->Location = System::Drawing::Point(12, 12);
			this->TareaTab->Name = L"TareaTab";
			this->TareaTab->SelectedIndex = 0;
			this->TareaTab->Size = System::Drawing::Size(509, 254);
			this->TareaTab->TabIndex = 0;
			// 
			// Multiplicacióntab
			// 
			this->Multiplicacióntab->Controls->Add(this->Calcbtn);
			this->Multiplicacióntab->Controls->Add(this->reslbl);
			this->Multiplicacióntab->Controls->Add(this->label1);
			this->Multiplicacióntab->Controls->Add(this->Sumlbl);
			this->Multiplicacióntab->Controls->Add(this->MultiTxt);
			this->Multiplicacióntab->Controls->Add(this->Sumtxt);
			this->Multiplicacióntab->Location = System::Drawing::Point(4, 29);
			this->Multiplicacióntab->Name = L"Multiplicacióntab";
			this->Multiplicacióntab->Padding = System::Windows::Forms::Padding(3);
			this->Multiplicacióntab->Size = System::Drawing::Size(501, 221);
			this->Multiplicacióntab->TabIndex = 0;
			this->Multiplicacióntab->Text = L"Multiplicación";
			this->Multiplicacióntab->UseVisualStyleBackColor = true;
			// 
			// Calcbtn
			// 
			this->Calcbtn->Location = System::Drawing::Point(145, 141);
			this->Calcbtn->Name = L"Calcbtn";
			this->Calcbtn->Size = System::Drawing::Size(182, 39);
			this->Calcbtn->TabIndex = 5;
			this->Calcbtn->Text = L"Calcular";
			this->Calcbtn->UseVisualStyleBackColor = true;
			this->Calcbtn->Click += gcnew System::EventHandler(this, &MyForm::Calcbtn_Click);
			// 
			// reslbl
			// 
			this->reslbl->AutoSize = true;
			this->reslbl->Location = System::Drawing::Point(231, 190);
			this->reslbl->Name = L"reslbl";
			this->reslbl->Size = System::Drawing::Size(13, 20);
			this->reslbl->TabIndex = 4;
			this->reslbl->Text = L".";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Multiplicando:";
			// 
			// Sumlbl
			// 
			this->Sumlbl->AutoSize = true;
			this->Sumlbl->Location = System::Drawing::Point(43, 38);
			this->Sumlbl->Name = L"Sumlbl";
			this->Sumlbl->Size = System::Drawing::Size(78, 20);
			this->Sumlbl->TabIndex = 2;
			this->Sumlbl->Text = L"Sumador:";
			// 
			// MultiTxt
			// 
			this->MultiTxt->Location = System::Drawing::Point(235, 94);
			this->MultiTxt->Name = L"MultiTxt";
			this->MultiTxt->Size = System::Drawing::Size(211, 26);
			this->MultiTxt->TabIndex = 1;
			// 
			// Sumtxt
			// 
			this->Sumtxt->Location = System::Drawing::Point(235, 35);
			this->Sumtxt->Name = L"Sumtxt";
			this->Sumtxt->Size = System::Drawing::Size(211, 26);
			this->Sumtxt->TabIndex = 0;
			// 
			// PalíndromasTab
			// 
			this->PalíndromasTab->Controls->Add(this->txtpalin);
			this->PalíndromasTab->Controls->Add(this->label3);
			this->PalíndromasTab->Controls->Add(this->sinolbl);
			this->PalíndromasTab->Controls->Add(this->Verificarbtn);
			this->PalíndromasTab->Location = System::Drawing::Point(4, 29);
			this->PalíndromasTab->Name = L"PalíndromasTab";
			this->PalíndromasTab->Padding = System::Windows::Forms::Padding(3);
			this->PalíndromasTab->Size = System::Drawing::Size(501, 221);
			this->PalíndromasTab->TabIndex = 1;
			this->PalíndromasTab->Text = L"Palíndromas";
			this->PalíndromasTab->UseVisualStyleBackColor = true;
			this->PalíndromasTab->Click += gcnew System::EventHandler(this, &MyForm::PalíndromasTab_Click);
			// 
			// txtpalin
			// 
			this->txtpalin->Location = System::Drawing::Point(145, 65);
			this->txtpalin->Name = L"txtpalin";
			this->txtpalin->Size = System::Drawing::Size(197, 26);
			this->txtpalin->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(172, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Palabra Palíndroma:";
			// 
			// sinolbl
			// 
			this->sinolbl->AutoSize = true;
			this->sinolbl->Location = System::Drawing::Point(232, 188);
			this->sinolbl->Name = L"sinolbl";
			this->sinolbl->Size = System::Drawing::Size(0, 20);
			this->sinolbl->TabIndex = 1;
			// 
			// Verificarbtn
			// 
			this->Verificarbtn->Location = System::Drawing::Point(145, 112);
			this->Verificarbtn->Name = L"Verificarbtn";
			this->Verificarbtn->Size = System::Drawing::Size(197, 60);
			this->Verificarbtn->TabIndex = 0;
			this->Verificarbtn->Text = L"Verificar";
			this->Verificarbtn->UseVisualStyleBackColor = true;
			this->Verificarbtn->Click += gcnew System::EventHandler(this, &MyForm::Verificarbtn_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->baseOrglbl);
			this->tabPage1->Controls->Add(this->numorlbl);
			this->tabPage1->Controls->Add(this->reslbl2);
			this->tabPage1->Controls->Add(this->calcbasebtn);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(501, 221);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Base n";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// calcbasebtn
			// 
			this->calcbasebtn->Location = System::Drawing::Point(162, 169);
			this->calcbasebtn->Name = L"calcbasebtn";
			this->calcbasebtn->Size = System::Drawing::Size(88, 36);
			this->calcbasebtn->TabIndex = 0;
			this->calcbasebtn->Text = L"Calcular";
			this->calcbasebtn->UseVisualStyleBackColor = true;
			// 
			// reslbl2
			// 
			this->reslbl2->AutoSize = true;
			this->reslbl2->Location = System::Drawing::Point(334, 185);
			this->reslbl2->Name = L"reslbl2";
			this->reslbl2->Size = System::Drawing::Size(13, 20);
			this->reslbl2->TabIndex = 1;
			this->reslbl2->Text = L".";
			// 
			// numorlbl
			// 
			this->numorlbl->AutoSize = true;
			this->numorlbl->Location = System::Drawing::Point(15, 22);
			this->numorlbl->Name = L"numorlbl";
			this->numorlbl->Size = System::Drawing::Size(126, 20);
			this->numorlbl->TabIndex = 2;
			this->numorlbl->Text = L"Numero Original:";
			// 
			// baseOrglbl
			// 
			this->baseOrglbl->AutoSize = true;
			this->baseOrglbl->Location = System::Drawing::Point(15, 68);
			this->baseOrglbl->Name = L"baseOrglbl";
			this->baseOrglbl->Size = System::Drawing::Size(107, 20);
			this->baseOrglbl->TabIndex = 3;
			this->baseOrglbl->Text = L"Base Original:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Base deseada:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(162, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(185, 26);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(162, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(185, 26);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(162, 109);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(185, 26);
			this->textBox3->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 277);
			this->Controls->Add(this->TareaTab);
			this->Name = L"MyForm";
			this->Text = L"Tarea";
			this->TareaTab->ResumeLayout(false);
			this->Multiplicacióntab->ResumeLayout(false);
			this->Multiplicacióntab->PerformLayout();
			this->PalíndromasTab->ResumeLayout(false);
			this->PalíndromasTab->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Calcbtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		int sum = System::Convert::ToInt32(Sumtxt->Text);
		int multi = System::Convert::ToInt32(MultiTxt->Text);
		Ejercicios^ ejerciciosObj = gcnew Ejercicios();
		reslbl->Text = "Resultado: " + System::Convert::ToString(ejerciciosObj->Multiplicacion(sum, multi));
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
	};
private: System::Void Verificarbtn_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	System::String^ palabra = txtpalin->Text;
	Ejercicios^ ejerciciosObj2 = gcnew Ejercicios();
	sinolbl->Text = "Resultado: " + System::Convert::ToString(ejerciciosObj2->Palindromas(palabra->ToUpper()));
	Timer->Stop();
	System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
}
private: System::Void PalíndromasTab_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
