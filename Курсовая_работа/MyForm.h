#pragma once
#include <math.h>
#include<ctime>
#include<iostream>
namespace Курсоваяработа {

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
	private: System::Windows::Forms::CheckBox^ check1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::CheckBox^ check3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->check1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->check3 = (gcnew System::Windows::Forms::CheckBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// check1
			// 
			this->check1->AutoSize = true;
			this->check1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check1->Location = System::Drawing::Point(164, 226);
			this->check1->Name = L"check1";
			this->check1->Size = System::Drawing::Size(170, 29);
			this->check1->TabIndex = 43;
			this->check1->Text = L"Подтвердить";
			this->check1->UseVisualStyleBackColor = true;
			this->check1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check1_CheckedChanged);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(476, 140);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(291, 80);
			this->textBox11->TabIndex = 46;
			this->textBox11->Text = L"Теорема Виета";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(101, 140);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(291, 80);
			this->textBox3->TabIndex = 45;
			this->textBox3->Text = L"Дискриминант";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// check3
			// 
			this->check3->AutoSize = true;
			this->check3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check3->Location = System::Drawing::Point(536, 226);
			this->check3->Name = L"check3";
			this->check3->Size = System::Drawing::Size(170, 29);
			this->check3->TabIndex = 44;
			this->check3->Text = L"Подтвердить";
			this->check3->UseVisualStyleBackColor = true;
			this->check3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check3_CheckedChanged);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(663, 545);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(166, 55);
			this->button5->TabIndex = 42;
			this->button5->Text = L"Очистить";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Silver;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 557);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 32);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Ответ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Silver;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(246, 488);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 37);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Уравнение";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(663, 607);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(166, 55);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Решить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox9
			// 
			this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox9->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(560, 341);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(146, 51);
			this->textBox9->TabIndex = 38;
			this->textBox9->Text = L"с ";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox8->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(366, 341);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(146, 51);
			this->textBox8->TabIndex = 37;
			this->textBox8->Text = L"b";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(164, 341);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(146, 51);
			this->textBox7->TabIndex = 36;
			this->textBox7->Text = L"a , a<>0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(366, 411);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(146, 61);
			this->textBox6->TabIndex = 35;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(560, 411);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(146, 61);
			this->textBox5->TabIndex = 34;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(164, 411);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(146, 61);
			this->textBox4->TabIndex = 33;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoEllipsis = true;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(271, 475);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 37);
			this->label1->TabIndex = 32;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(203, 292);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(466, 43);
			this->textBox2->TabIndex = 31;
			this->textBox2->Text = L"Введите коэффициенты:";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(73, 71);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 3, 4, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(722, 46);
			this->textBox1->TabIndex = 30;
			this->textBox1->Text = L"Каким способом решать данное уравнение\?";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(841, 674);
			this->Controls->Add(this->check1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->check3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор квадратных уравнений";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check1->Checked ) {
			
			double a = System::Convert::ToDouble(textBox4->Text);
			double b = System::Convert::ToDouble(textBox6->Text);
			double c = System::Convert::ToDouble(textBox5->Text);


			if (b > 0 && c > 0) {

				label2->Text = a + "x^2 + " + b + "x + " + c + " = 0";
			}
			else if (b < 0 && c>0) {

				label2->Text = a + "x^2 " + b + "x + " + c + " = 0";

			}

			else if (b > 0 && c < 0) {

				label2->Text = a + "x^2 + " + b + "x " + c + " = 0";
			}
			else if (b < 0 && c < 0) {

				label2->Text = a + "x^2 " + b + "x " + c + " = 0";
			}

			else if (a == 0) {

				label2->Text = "Ошибка:a должно быть > 0!";
				return;

			}
			else if (b == 0 && c == 0) {

				label2->Text = a + "x^2 = 0";
			}
			else if (c == 0) {
				if (b > 0) {
					label2->Text = a + "x^2" + " + " + b + "x " + "= 0";
				}
				else {

					label2->Text = a + "x^2" + b + "x " + "= 0";
				}
			}
			else if (b == 0) {
				if (c > 0) {
					label2->Text = a + "x^2" + "+" + c + "= 0";
				}
				else {

					label2->Text = a + "x^2" + c + "= 0";
				}
			}
			 if(b!=0 && c!=0 ) {
				double D = b * b - 4 * a * c;
				if (D > 0) {

					double x1 = (-b + sqrt(D)) / (2 * a);
					double x2 = (-b - sqrt(D)) / (2 * a);
					label3->Text = "x1 = " + round(x1*10000)/10000 + "\n" + "x2 = " + round(x2 * 10000) / 10000;
					
				}
				else if (D == 0) {

					double x = (-b / (2 * a));

					label3->Text = "x1 = " + x + "\n" + "x2 = " + x;
				}
				else {

					label3->Text = "Нет корней";

				}


			}
			if(b==0) {
				double x1,x2;
				if ((- c / a) > 0) {
					x1= sqrt(-c / a);
					x2 = -(sqrt( - c / a));
					label3->Text = "x1 = " + round(x1 * 10000) / 10000 + "\n" + "x2 = " + round(x2*10000)/10000;
				}
				else {
					label3->Text = "Нет корней";
				}
			}
			 if (c == 0) {

				double x1, x2;
				
				x1 = 0;
				x2 = - b /  a;
				label3->Text = "x1 = " + x1 + "\n" + "x2 = " + round(x2*10000)/10000;
			}
			if (b == 0 && c == 0) {

				double x;
				x = 0;
				label3->Text = "x = " + x;
			}
		}

		if (check3->Checked) {

			double a = System::Convert::ToDouble(textBox4->Text);
			double b = System::Convert::ToDouble(textBox6->Text);
			double c = System::Convert::ToDouble(textBox5->Text);
			if (b > 0 && c > 0) {

				label2->Text = a + "x^2 + " + b + "x + " + c + " = 0";
			}
			else if (b < 0 && c>0) {

				label2->Text = a + "x^2" + b + "x + " + c + " = 0";

			}

			else if (b > 0 && c < 0) {

				label2->Text = a + "x^2 + " + b + "x " + c + " = 0";
			}
			else if (b < 0 && c < 0) {

				label2->Text = a + "x^2" + b + "x " + c + " = 0";
			}
			else if (a == 0) {

				label2->Text = "Ошибка:a должно быть > 0!";
				return;
			}
			else if (b == 0 && c == 0) {

				label2->Text = a + "x^2 = 0";
			}
			else if (c == 0) {
				if (b > 0) {
					label2->Text = a + "x^2" + " + " + b + "x " + "= 0";
				}
				else {

					label2->Text = a + "x^2" + b + "x " + "= 0";
				}
			}
			else if (b == 0) {
				if (c>0) {
					label2->Text = a + "x^2" + "+"+ c + "= 0";
				}
				else {

					label2->Text = a + "x^2" + c + "= 0";
				}
			}
			 if(b!=0 && c!=0) {
				double x1, x2, D,x;
				D = b * b - 4 * a* c;

				if (D == 0) {
					x = -b / (2*a) ;
					
					label3->Text = "x1 = " + x + "\n" + "x2 = " + x;
				}
				 if (D > 0) {
					x1 =(- b + sqrt(D)) / (2 * a);
					x2 = ( - b - sqrt(D)) / (2 * a);
					if (x1 + x2 == -b / a && x1*x2 == c/a) {
						label3->Text = "x1 = " + round(x1 * 10000) / 10000 + "\n" + "x2 = " + round(x2 * 10000) / 10000 +"\n"+"(Корни удовлетворяют теореме Виета)";
							
					}
					else {
						label3->Text = "Корни не удовлетворяют теореме Виета";
					}
				}
				else {
					label3->Text = "Нет корней";
				}
			}
			if (b == 0) {
				double x1, x2;
				if (-c / a > 0) {
					x1 = sqrt(-c / a);
					x2 =  -(sqrt( - c / a));
				
					
					if (x1 + x2 == -b / a && x1 * x2 == c / a) {
						label3->Text = "x1 = " + round(x1 * 10000) / 10000 + "\n" + "x2 = " + round(x2 * 10000) / 10000 + "\n" + "(Корни удовлетворяют теореме Виета)";
					}
					else {
						label3->Text = "Корни не удовлетворяют теореме Виета";
					}
					
				}
				else if ((-c / a) < 0) {
					label3->Text = "Нет корней";
				}
				

			}
			if (c == 0) {

				double x1, x2;
				x1 = 0;
				x2 = -b / a;

				if (x1 + x2 == -b / a && x1 * x2 == c / a) {
					label3->Text = "x1 = " + x1 + "\n" + "x2 = " + round(x2 * 10000) / 10000 + "\n" + "(Корни удовлетворяют теореме Виета)";
				}
				else {

					label3->Text = "Нет корней";

				}
			}
			if (b == 0 && c == 0) {

				double x;
				x = 0;
				label3->Text = "x = " + x;
			}
		}
		
		
	}
	
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
	textBox6->Text = "";
	textBox5->Text = "";
	label2->Text = "";
}
private: System::Void check1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (check1->Checked) {
		check3->Checked = false;
		
	}
	
}
private: System::Void check3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (check3->Checked) {
		check1->Checked = false;
		
	}

}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == 46 || e->KeyChar == 45))
	{
		e->Handled = true;
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox1->ReadOnly = true;
	textBox11->ReadOnly = true;
	textBox3->ReadOnly = true;
	textBox2->ReadOnly = true; 
	textBox7->ReadOnly = true;
	textBox8->ReadOnly = true;
	textBox9->ReadOnly = true;
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
