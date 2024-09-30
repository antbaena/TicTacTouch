#pragma once
#include "GameScreen.h"

namespace TicTacTouch {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TicTacTouch;

	public ref class InitialScreen : public System::Windows::Forms::Form
	{
	public:
		InitialScreen(void)
		{
			InitializeComponent();

		}

	protected:
		~InitialScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::Button^ closeCutton;
	private: System::Windows::Forms::Label^ tittle;
	private: System::Windows::Forms::ComboBox^ dificultyComboBox;
	private: System::Windows::Forms::Label^ difficultyLabel;
	private: System::Windows::Forms::LinkLabel^ linkProfile;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InitialScreen::typeid));
			   this->startButton = (gcnew System::Windows::Forms::Button());
			   this->closeCutton = (gcnew System::Windows::Forms::Button());
			   this->tittle = (gcnew System::Windows::Forms::Label());
			   this->dificultyComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->difficultyLabel = (gcnew System::Windows::Forms::Label());
			   this->linkProfile = (gcnew System::Windows::Forms::LinkLabel());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // startButton
			   // 
			   this->startButton->BackColor = System::Drawing::Color::PaleGreen;
			   this->startButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->startButton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->startButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->startButton->Location = System::Drawing::Point(158, 286);
			   this->startButton->Name = L"startButton";
			   this->startButton->Size = System::Drawing::Size(110, 50);
			   this->startButton->TabIndex = 0;
			   this->startButton->Text = L"Start";
			   this->startButton->UseVisualStyleBackColor = false;
			   this->startButton->Click += gcnew System::EventHandler(this, &InitialScreen::startButton_Click);
			   // 
			   // closeCutton
			   // 
			   this->closeCutton->BackColor = System::Drawing::Color::Red;
			   this->closeCutton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->closeCutton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->closeCutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->closeCutton->Location = System::Drawing::Point(359, 286);
			   this->closeCutton->Name = L"closeCutton";
			   this->closeCutton->Size = System::Drawing::Size(110, 50);
			   this->closeCutton->TabIndex = 1;
			   this->closeCutton->Text = L"Exit";
			   this->closeCutton->UseVisualStyleBackColor = false;
			   this->closeCutton->Click += gcnew System::EventHandler(this, &InitialScreen::closeCutton_Click);
			   // 
			   // tittle
			   // 
			   this->tittle->AutoSize = true;
			   this->tittle->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tittle->Location = System::Drawing::Point(123, 20);
			   this->tittle->Name = L"tittle";
			   this->tittle->Size = System::Drawing::Size(424, 60);
			   this->tittle->TabIndex = 2;
			   this->tittle->Text = L"TicTacTouch";
			   this->tittle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // dificultyComboBox
			   // 
			   this->dificultyComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			   this->dificultyComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->dificultyComboBox->FormattingEnabled = true;
			   this->dificultyComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Easy", L"Medium", L"Hard" });
			   this->dificultyComboBox->Location = System::Drawing::Point(404, 232);
			   this->dificultyComboBox->Name = L"dificultyComboBox";
			   this->dificultyComboBox->Size = System::Drawing::Size(121, 28);
			   this->dificultyComboBox->TabIndex = 4;
			   this->dificultyComboBox->Tag = L"";
			   // 
			   // difficultyLabel
			   // 
			   this->difficultyLabel->AutoSize = true;
			   this->difficultyLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->difficultyLabel->Location = System::Drawing::Point(126, 232);
			   this->difficultyLabel->Name = L"difficultyLabel";
			   this->difficultyLabel->Size = System::Drawing::Size(272, 27);
			   this->difficultyLabel->TabIndex = 5;
			   this->difficultyLabel->Text = L"Select a difficulty:";
			   this->difficultyLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			   // 
			   // linkProfile
			   // 
			   this->linkProfile->AutoSize = true;
			   this->linkProfile->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->linkProfile->Location = System::Drawing::Point(577, 346);
			   this->linkProfile->Name = L"linkProfile";
			   this->linkProfile->Size = System::Drawing::Size(64, 16);
			   this->linkProfile->TabIndex = 6;
			   this->linkProfile->TabStop = true;
			   this->linkProfile->Text = L"antbaena";
			   this->linkProfile->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &InitialScreen::linkProfile_LinkClicked);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(517, 346);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(60, 16);
			   this->label1->TabIndex = 7;
			   this->label1->Text = L"Made by";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(223, 115);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(75, 75);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 8;
			   this->pictureBox1->TabStop = false;
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(326, 115);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(75, 75);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox2->TabIndex = 9;
			   this->pictureBox2->TabStop = false;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Minecraft", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(450, 73);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(180, 17);
			   this->label2->TabIndex = 10;
			   this->label2->Text = L"now using MINMAX!";
			   // 
			   // InitialScreen
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(652, 371);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->linkProfile);
			   this->Controls->Add(this->difficultyLabel);
			   this->Controls->Add(this->dificultyComboBox);
			   this->Controls->Add(this->tittle);
			   this->Controls->Add(this->closeCutton);
			   this->Controls->Add(this->startButton);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MaximizeBox = false;
			   this->Name = L"InitialScreen";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"TicTacTouch";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dificultyComboBox->SelectedIndex == -1) {
			MessageBox::Show("Please select a difficulty before starting.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			String^ selectedValue = this->dificultyComboBox->SelectedItem->ToString();
			TicTacTouch::GameScreen^ gameScreen = gcnew TicTacTouch::GameScreen(selectedValue);
			this->Hide();
			gameScreen->Show();

		}
	}
	private: System::Void closeCutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void linkProfile_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		System::Diagnostics::Process::Start(gcnew System::Diagnostics::ProcessStartInfo("https://antbaena.github.io/"));
	}

	};
}
