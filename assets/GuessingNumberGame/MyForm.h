#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <string>

namespace GuessingNumberGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int randomNum, lives, score, userNumber;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label2;

		public:
			MyForm(void)
			{
				InitializeComponent();
				randomNum = 0;
				lives = 5;
				score = 0;
				userNumber = 0;
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
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Button^ button1;

		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::TextBox^ textBox1;
		protected:

		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container^ components;

	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// label1
				// 
				this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
					static_cast<System::Int32>(static_cast<System::Byte>(224)));
				this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->label1->Font = (gcnew System::Drawing::Font(L"Poor Richard", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
				this->label1->Location = System::Drawing::Point(58, 33);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(540, 41);
				this->label1->TabIndex = 0;
				this->label1->Text = L"Welcome to the Guessing Number Game";
				this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				// 
				// button1
				// 
				this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
				this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
				this->button1->Location = System::Drawing::Point(203, 106);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(191, 50);
				this->button1->TabIndex = 1;
				this->button1->Text = L"Start the Game";
				this->button1->UseVisualStyleBackColor = false;
				this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_click);
				// 
				// button2
				// 
				this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button2->Location = System::Drawing::Point(239, 258);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(138, 42);
				this->button2->TabIndex = 3;
				this->button2->Text = L"Submit your guess";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Visible = false;
				this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				// 
				// textBox1
				// 
				this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textBox1->Location = System::Drawing::Point(253, 198);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(100, 29);
				this->textBox1->TabIndex = 4;
				this->textBox1->Visible = false;
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->Location = System::Drawing::Point(58, 74);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(0, 26);
				this->label2->TabIndex = 5;
				this->label2->Visible = false;
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->Location = System::Drawing::Point(29, 313);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(76, 26);
				this->label3->TabIndex = 6;
				this->label3->Text = L"Score: 0";
				this->label3->Visible = false;
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->ClientSize = System::Drawing::Size(633, 362);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->button2);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->label1);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
		private: System::Void button1_click(System::Object^ sender, System::EventArgs^ e) {
			label1->Location.X = 100;
			label1->Location.Y = 50;
			button1->Visible = false;
			textBox1->Visible = true;
			button2->Visible = true;
			label2->Visible = true;
			label3->Visible = true;
			textBox1->Text = "";
			label1->Text = "Welcome to the Guessing Number Game";
			label2->Text = "";
			lives = 5;
			generateRandomNumber();
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!int::TryParse(textBox1->Text, userNumber)) {
			this->label2->Text = "It must be a number";
			return;
		}
		else
		{
			if (userNumber < randomNum) {
				this->label2->Text = "The magic number is greater\n";
				lives--;
			}
			else if (userNumber > randomNum) {
				this->label2->Text = "The magic number is less\n";
				lives--;
			}
			if (userNumber == randomNum)
			{
				this->label1->Text = "You win the round\n";
				score += 100;
				this->label3->Text = "Score: " + score;
				this->textBox1->Text = "";
				this->label2->Text = "Another number has been generated";
				lives += 1;
				generateRandomNumber();
			}
			if (userNumber != randomNum && lives == 0) {
				this->label1->Text = "GAME OVER\n";
				this->label2->Text = "The magic number is " + randomNum + "\n";
				this->button1->Visible = true;
				this->label2->Visible = false;
				this->label3->Visible = false;
				this->textBox1->Visible = false;
				this->button2->Visible = false;
			}
			if (score >= 1000) {
				this->label1->Text = "Congratulations!\n";
				this->label2->Text = "You have won the game!\n";
			}
		}
	}

		private: void generateRandomNumber() {
			srand(time(NULL));
			randomNum = rand() % 101;
		}
	};
};
