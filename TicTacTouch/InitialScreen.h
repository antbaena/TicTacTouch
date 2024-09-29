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
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->closeCutton = (gcnew System::Windows::Forms::Button());
			this->tittle = (gcnew System::Windows::Forms::Label());
			this->dificultyComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->difficultyLabel = (gcnew System::Windows::Forms::Label());
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
			this->dificultyComboBox->Location = System::Drawing::Point(404, 218);
			this->dificultyComboBox->Name = L"dificultyComboBox";
			this->dificultyComboBox->Size = System::Drawing::Size(121, 28);
			this->dificultyComboBox->TabIndex = 4;
			this->dificultyComboBox->Tag = L"";
			this->dificultyComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &InitialScreen::comboBox1_SelectedIndexChanged);
			// 
			// difficultyLabel
			// 
			this->difficultyLabel->AutoSize = true;
			this->difficultyLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->difficultyLabel->Location = System::Drawing::Point(126, 218);
			this->difficultyLabel->Name = L"difficultyLabel";
			this->difficultyLabel->Size = System::Drawing::Size(272, 27);
			this->difficultyLabel->TabIndex = 5;
			this->difficultyLabel->Text = L"Select a difficulty:";
			this->difficultyLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// InitialScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 371);
			this->Controls->Add(this->difficultyLabel);
			this->Controls->Add(this->dificultyComboBox);
			this->Controls->Add(this->tittle);
			this->Controls->Add(this->closeCutton);
			this->Controls->Add(this->startButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"InitialScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TicTacTouch";
			this->Load += gcnew System::EventHandler(this, &InitialScreen::InitialScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InitialScreen_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

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
	};
}
