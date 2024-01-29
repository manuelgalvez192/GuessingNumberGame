#pragma once
#include <cstdlib>
#include <ctime>

namespace GuessingNumberGame {

//#include <cstdlib>
//#include <iostream>

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
	public:
		MyForm(void)
		{
			InitializeComponent();
			//Initializing the variables
			userNumber = 0;
			randomNum = 0;
			lives = 5;
			score = 0;
			gameLoop();
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Label^ label2;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(58, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(541, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to the Guessing Number Game";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(203, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start the Game";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(250, 193);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(103, 49);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(238, 266);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 42);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Submit your guess";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			this->errorProvider1->RightToLeftChanged += gcnew System::EventHandler(this, &MyForm::button1_click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(220, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Guess the number to win the game!";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(634, 352);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int userNumber, randomNum, lives = 5, score = 0;

	private: void generateRandomNumber() {
		srand(static_cast<unsigned int>(time(nullptr)));
		randomNum = rand() % 100 + 1;
	}
	private: void gameLoop() {
		this->label1->Text = "The Game Starts\n";
		while (score < 1000) {
			generateRandomNumber();
			lives = 5;
			score += 100;
			this->label1->Text = "You have " + lives + " lives\n";
		}
		while (userNumber != randomNum && lives > 0) {
			if (userNumber < randomNum) {
				this->label1->Text += "The magic number is greater than the number you are trying to guess\n";
			}
			else if (userNumber > randomNum) {
				this->label1->Text += "The magic number is less than the number you are trying to guess\n";
			}
			if (userNumber == randomNum) {
				this->label1->Text += "You win the round\n";
				score += 100;
				this->label1->Text += "Your score is " + score + "\n";
				lives += 3;
			}
			if (userNumber != randomNum && lives == 0) {
				this->label1->Text += "GAME OVER\n";
				this->label1->Text += "The magic number is " + randomNum + "\n";
				score = 0;
			}
			if (score >= 1000) {
				this->label1->Text += "YOU WIN THE GAME\n";
			}
		}
	}
	private: System::Void button1_click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Guess the number between 0 and 100 to win the game";
		label1->Location.X = 100;
		label1->Location.Y = 50;
		button1->Visible = false;
		textBox1->Visible = true;
		button2->Visible = true;
	}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {


}
};
};
