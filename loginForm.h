#pragma once
#include "menuForm.h"

namespace AppEscuela001 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
		{
			InitializeComponent();
		}

	protected:
		~loginForm()
		{
			if (components) { delete components; }
		}

	private:
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::Button^ button1;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(433, 104);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(528, 529);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &loginForm::panel1_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(93, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(270, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &loginForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 233);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(270, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(88, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(224, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(270, 22);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(93, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 46);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Usuario:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FloralWhite;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(156, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 36);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Iniciar Sesión";
			// 
			// loginForm
			// 
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(1730, 832);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"loginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &loginForm::loginForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "User" && textBox2->Text == "12345678") {
			// Abrimos el menú principal
			menuForm^ menu = gcnew menuForm();
			menu->Show();

			this->Hide(); // Ocultamos el login
		}
		else {
			MessageBox::Show("Usuario o contraseña incorrectos", "Error");
		}
	}
	private: System::Void loginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}