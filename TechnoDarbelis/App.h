#pragma once

namespace TechnoDarbelis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for App
	/// </summary>
	public ref class App : public System::Windows::Forms::Form
	{
	public:
		App(void)
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
		~App()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ Mokinimasis;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ Testas;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox2;
	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(App::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Mokinimasis = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Testas = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->Mokinimasis->SuspendLayout();
			this->Testas->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Mokinimasis";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &App::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Režimai";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(93, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Testas";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &App::button2_Click);
			// 
			// Mokinimasis
			// 
			this->Mokinimasis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->Mokinimasis->Controls->Add(this->textBox1);
			this->Mokinimasis->Controls->Add(this->label2);
			this->Mokinimasis->Controls->Add(this->button5);
			this->Mokinimasis->Controls->Add(this->button4);
			this->Mokinimasis->Controls->Add(this->button3);
			this->Mokinimasis->Location = System::Drawing::Point(15, 59);
			this->Mokinimasis->Name = L"Mokinimasis";
			this->Mokinimasis->Size = System::Drawing::Size(554, 331);
			this->Mokinimasis->TabIndex = 3;
			this->Mokinimasis->Visible = false;
			this->Mokinimasis->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &App::Mokinimasis_Paint);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(20, 15);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(516, 217);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(20, 296);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(516, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Bendra Tema";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &App::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(20, 267);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(516, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Desertai";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &App::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 238);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(516, 23);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Konditerija";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &App::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(211, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Pasirinkite režimą";
			// 
			// Testas
			// 
			this->Testas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->Testas->Controls->Add(this->panel2);
			this->Testas->Location = System::Drawing::Point(12, 59);
			this->Testas->Name = L"Testas";
			this->Testas->Size = System::Drawing::Size(557, 314);
			this->Testas->TabIndex = 5;
			this->Testas->Visible = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gray;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->checkedListBox2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->checkedListBox1);
			this->panel2->Location = System::Drawing::Point(12, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(530, 289);
			this->panel2->TabIndex = 0;
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->BackColor = System::Drawing::Color::Silver;
			this->checkedListBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->checkedListBox2->CheckOnClick = true;
			this->checkedListBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->checkedListBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Patiekalas pateikiamas po pagrindinio patiekalo",
					L"Dykuma", L"Patiekalas pateikiams pačioje pradžioje", L"Želė", L"Nežinau(0 tšk.)"
			});
			this->checkedListBox2->Location = System::Drawing::Point(258, 28);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(252, 77);
			this->checkedListBox2->TabIndex = 3;
			this->checkedListBox2->ThreeDCheckBoxes = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(278, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(215, 14);
			this->label4->TabIndex = 2;
			this->label4->Text = L"II. Pažymėkite, kas yra desertas.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 14);
			this->label3->TabIndex = 1;
			this->label3->Text = L"I. Pažymėkite tik konditerijos rūšis";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::Silver;
			this->checkedListBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->checkedListBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"X", L"Y", L"Z", L"W", L"Q", L"R", L"T",
					L"P"
			});
			this->checkedListBox1->Location = System::Drawing::Point(15, 28);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(220, 122);
			this->checkedListBox1->TabIndex = 0;
			this->checkedListBox1->ThreeDCheckBoxes = true;
			// 
			// App
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->ClientSize = System::Drawing::Size(581, 402);
			this->Controls->Add(this->Testas);
			this->Controls->Add(this->Mokinimasis);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"App";
			this->Text = L"Mokintojėlis v1";
			this->Mokinimasis->ResumeLayout(false);
			this->Mokinimasis->PerformLayout();
			this->Testas->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Testas->Visible = false;
		Mokinimasis->Visible = true;
	}
	private: System::Void Mokinimasis_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = L"Konditerija - tai x, y ir z.";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = L"Desertai - tai x, y ir z.";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = L"Bendrai apie kulinariją: x, y ir z.";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Mokinimasis->Visible = false;
	Testas->Visible = true;
}
};
}
