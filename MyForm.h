#pragma once
#include <math.h>

namespace MyCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: double num1;
	private: char op;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ plus_minus;

	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ point_btn;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->plus_minus = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->point_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::IndianRed;
			this->button2->Location = System::Drawing::Point(371, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 32);
			this->button2->TabIndex = 0;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(330, 32);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Калькулятор";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(18, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(385, 63);
			this->label6->TabIndex = 2;
			this->label6->Text = L"0";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::LightCoral;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(18, 155);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(189, 74);
			this->button15->TabIndex = 4;
			this->button15->Text = L"AC";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::btn_reset_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::LightGreen;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(213, 155);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(190, 74);
			this->button16->TabIndex = 5;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::btn_result_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(18, 235);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(93, 86);
			this->button17->TabIndex = 6;
			this->button17->Text = L"7";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(114, 235);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(93, 86);
			this->button18->TabIndex = 7;
			this->button18->Text = L"8";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(213, 235);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(93, 86);
			this->button19->TabIndex = 8;
			this->button19->Text = L"9";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(310, 235);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(93, 86);
			this->button20->TabIndex = 9;
			this->button20->Text = L"+";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(310, 327);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(93, 86);
			this->button21->TabIndex = 13;
			this->button21->Text = L"-";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::btn_min_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(213, 327);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(93, 86);
			this->button22->TabIndex = 12;
			this->button22->Text = L"6";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(114, 327);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(93, 86);
			this->button23->TabIndex = 11;
			this->button23->Text = L"5";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(18, 327);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(93, 86);
			this->button24->TabIndex = 10;
			this->button24->Text = L"4";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->Location = System::Drawing::Point(310, 419);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(93, 86);
			this->button25->TabIndex = 17;
			this->button25->Text = L"*";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->Location = System::Drawing::Point(213, 419);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(93, 86);
			this->button26->TabIndex = 16;
			this->button26->Text = L"3";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->Location = System::Drawing::Point(114, 419);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(93, 86);
			this->button27->TabIndex = 15;
			this->button27->Text = L"2";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->Location = System::Drawing::Point(18, 419);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(93, 86);
			this->button28->TabIndex = 14;
			this->button28->Text = L"1";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->Location = System::Drawing::Point(310, 511);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(93, 86);
			this->button29->TabIndex = 21;
			this->button29->Text = L"/";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// plus_minus
			// 
			this->plus_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus_minus->Location = System::Drawing::Point(213, 511);
			this->plus_minus->Name = L"plus_minus";
			this->plus_minus->Size = System::Drawing::Size(93, 86);
			this->plus_minus->TabIndex = 20;
			this->plus_minus->Text = L"+/-";
			this->plus_minus->UseVisualStyleBackColor = true;
			this->plus_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_clickpm);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->Location = System::Drawing::Point(114, 511);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(93, 86);
			this->button31->TabIndex = 19;
			this->button31->Text = L"0";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// point_btn
			// 
			this->point_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->point_btn->Location = System::Drawing::Point(18, 511);
			this->point_btn->Name = L"point_btn";
			this->point_btn->Size = System::Drawing::Size(93, 86);
			this->point_btn->TabIndex = 18;
			this->point_btn->Text = L".";
			this->point_btn->UseVisualStyleBackColor = true;
			this->point_btn->Click += gcnew System::EventHandler(this, &MyForm::btn_click_pnt);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(18, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(385, 42);
			this->label1->TabIndex = 22;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(263, 603);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 86);
			this->button1->TabIndex = 25;
			this->button1->Text = L"√x";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::btn_click_koren);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(164, 603);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 86);
			this->button3->TabIndex = 24;
			this->button3->Text = L"^2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::btn_click_squar);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(68, 603);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 86);
			this->button4->TabIndex = 23;
			this->button4->Text = L"%";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::btn_click_percent);
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(423, 697);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->plus_minus);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->point_btn);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_num_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = safe_cast<Button^>(sender);
		if (this->label6->Text == "0") {
			this->label6->Text = btn->Text;
		}
		else {
			this->label6->Text = this->label6->Text + btn->Text;
		}
	}
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '+';
		this->num1 = System::Convert::ToDouble(this->label6->Text);
		this->label1->Text = this->label6->Text+"+";
		this->label6->Text = "0";
	}
	private: System::Void btn_min_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '-';
		this->num1 = System::Convert::ToDouble(this->label6->Text);
		this->label1->Text = this->label6->Text+"-";
		this->label6->Text = "0";
	}
	private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '*';
		this->num1 = System::Convert::ToDouble(this->label6->Text);
		this->label1->Text = this->label6->Text+"*";
		this->label6->Text = "0";
	}
	private: System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '/';
		this->num1 = System::Convert::ToDouble(this->label6->Text);
		this->label1->Text = this->label6->Text+"/";
		this->label6->Text = "0";
	}
	private: System::Void btn_result_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double num2 = System::Convert::ToDouble(this->label6->Text);	
		this->label1->Text += this->label6->Text+"=";
		double res = 0;
		switch (this->op)
		{
			case ('+'):res = this->num1 + num2; break;
			case ('-'):res = this->num1 - num2; break;
			case ('*'):res = this->num1 * num2; break;
			case ('%'):res = this->num1 / 100 * num2; break;
			/*case('^'):res = this->num1 * this->num1;
				this->op = ' ';
				break;*/
			case ('/'):
				if (num2 == 0) {
					MessageBox::Show("Деление на 0!", "Обнаружен двоешник", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
					res = this->num1 / num2;
				break;
		}
		this->label6->Text = System::Convert::ToString(res);
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
private: System::Void btn_reset_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label6->Text = "0";
	this->label1->Text = "0";
	this->num1 = 0;
	this->op = ' ';
}
private: System::Void btn_clickpm(System::Object^ sender, System::EventArgs^ e) {
	this->label6->Text = System::Convert::ToString(System::Convert::ToDouble(this->label6->Text) * -1);

}
private: System::Void btn_click_pnt(System::Object^ sender, System::EventArgs^ e) {
	if(!this->label6->Text->Contains(",")) this->label6->Text = this->label6->Text + ",";
}
private: System::Void btn_click_percent(System::Object^ sender, System::EventArgs^ e) {
	this->op = '%';
	this->num1 = System::Convert::ToDouble(this->label6->Text);
	this->label1->Text = this->label6->Text+"%";
	this->label6->Text = "0";
}
private: System::Void btn_click_squar(System::Object^ sender, System::EventArgs^ e) {
	//this->op = '^';
	this->num1 = System::Convert::ToDouble(this->label6->Text);
	this->label1->Text = this->label6->Text+"^=";
	double _temp = this->num1;
	this->num1 *= _temp;
	this->label6->Text = System::Convert::ToString(this->num1);
	//this->label6->Text = "0";
}
private: System::Void btn_click_koren(System::Object^ sender, System::EventArgs^ e) {
	this->num1 = System::Convert::ToDouble(this->label6->Text);
	this->label1->Text = "Корень "+this->label6->Text+"=";
	this->num1 = sqrt(this->num1);
	this->label6->Text = System::Convert::ToString(this->num1);
}
};
}
