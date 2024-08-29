#pragma once
#include "GameScreen.h"
namespace TicTacTouch {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::Button^ closeCutton;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ tittle;


	private: System::Windows::Forms::ComboBox^ dificultyComboBox;
	private: System::Windows::Forms::Label^ difficultyLabel;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
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
			this->startButton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->startButton->Location = System::Drawing::Point(158, 286);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(110, 50);
			this->startButton->TabIndex = 0;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm::startButton_Click);
			// 
			// closeCutton
			// 
			this->closeCutton->BackColor = System::Drawing::Color::Red;
			this->closeCutton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->closeCutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->closeCutton->Location = System::Drawing::Point(359, 286);
			this->closeCutton->Name = L"closeCutton";
			this->closeCutton->Size = System::Drawing::Size(110, 50);
			this->closeCutton->TabIndex = 1;
			this->closeCutton->Text = L"Exit";
			this->closeCutton->UseVisualStyleBackColor = false;
			this->closeCutton->Click += gcnew System::EventHandler(this, &MyForm::closeCutton_Click);
			// 
			// tittle
			// 
			this->tittle->AutoSize = true;
			this->tittle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tittle->Location = System::Drawing::Point(249, 9);
			this->tittle->Name = L"tittle";
			this->tittle->Size = System::Drawing::Size(175, 30);
			this->tittle->TabIndex = 2;
			this->tittle->Text = L"TikTackTouch";
			// 
			// dificultyComboBox
			// 
			this->dificultyComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->dificultyComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dificultyComboBox->FormattingEnabled = true;
			this->dificultyComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Easy", L"Medium", L"Hard" });
			this->dificultyComboBox->Location = System::Drawing::Point(325, 229);
			this->dificultyComboBox->Name = L"dificultyComboBox";
			this->dificultyComboBox->Size = System::Drawing::Size(121, 24);
			this->dificultyComboBox->TabIndex = 4;
			this->dificultyComboBox->Tag = L"";
			this->dificultyComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// difficultyLabel
			// 
			this->difficultyLabel->AutoSize = true;
			this->difficultyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->difficultyLabel->Location = System::Drawing::Point(192, 231);
			this->difficultyLabel->Name = L"difficultyLabel";
			this->difficultyLabel->Size = System::Drawing::Size(132, 20);
			this->difficultyLabel->TabIndex = 5;
			this->difficultyLabel->Text = L"Select a difficulty:";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(651, 371);
			this->Controls->Add(this->difficultyLabel);
			this->Controls->Add(this->dificultyComboBox);
			this->Controls->Add(this->tittle);
			this->Controls->Add(this->closeCutton);
			this->Controls->Add(this->startButton);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dificultyComboBox->SelectedIndex == -1) {
			MessageBox::Show("Please select a difficulty before starting.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			
			// Ocultar la ventana principal en lugar de cerrarla
			this->Hide();

			// Crear y mostrar la nueva ventana
			String^ selectedValue = this->dificultyComboBox->SelectedItem->ToString();
			GameScreen^ gameScreen = gcnew GameScreen(selectedValue);
			gameScreen->ShowDialog(); // ShowDialog para hacer que la nueva ventana sea modal
			// Si quieres cerrar la aplicación cuando se cierre la nueva ventana
			this->Close(); // Esto se ejecutará cuando se cierre Form2 si usaste ShowDialog

			
		}
	}
	private: System::Void closeCutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
