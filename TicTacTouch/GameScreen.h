#pragma once
#include <algorithm> // Para std::find

namespace TicTacTouch {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class GameScreen : public System::Windows::Forms::Form
	{

	public:
		GameScreen( String^ difficulty)
		{
			InitializeComponent();
			
			this->difficulty = difficulty;
			this->difficultyPlaceholder->Text = difficulty;
			this->Text += difficulty;
			if (difficulty->ToLower() == "easy") {
				difficultyLevel = 1;
			}
			else if (difficulty->ToLower() == "medium") {
				difficultyLevel = 2;
			}
			else if (difficulty->ToLower() == "hard") {
				difficultyLevel = 3;
			}
		}

	protected:
		~GameScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ tittle1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ difficultyPlaceholder;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ gameLabel;
	private: System::Windows::Forms::Panel^ buttonsPanel;
	private: System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonReset;
	private: System::Windows::Forms::Button^ buttonChangeDif;



		
		int difficultyLevel;
		String^ difficulty;

#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   this->tittle1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->difficultyPlaceholder = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   this->gameLabel = (gcnew System::Windows::Forms::Label());
			   this->buttonsPanel = (gcnew System::Windows::Forms::Panel());
			   this->buttonExit = (gcnew System::Windows::Forms::Button());
			   this->buttonReset = (gcnew System::Windows::Forms::Button());
			   this->buttonChangeDif = (gcnew System::Windows::Forms::Button());
			   this->buttonsPanel->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // tittle1
			   // 
			   this->tittle1->AutoSize = true;
			   this->tittle1->Font = (gcnew System::Drawing::Font(L"Consolas", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tittle1->Location = System::Drawing::Point(191, 0);
			   this->tittle1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->tittle1->Name = L"tittle1";
			   this->tittle1->Size = System::Drawing::Size(399, 43);
			   this->tittle1->TabIndex = 0;
			   this->tittle1->Text = L"Let start the game!";
			   this->tittle1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(282, 42);
			   this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(108, 20);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Difficulty:";
			   this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			   // 
			   // difficultyPlaceholder
			   // 
			   this->difficultyPlaceholder->AutoSize = true;
			   this->difficultyPlaceholder->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->difficultyPlaceholder->Location = System::Drawing::Point(402, 42);
			   this->difficultyPlaceholder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->difficultyPlaceholder->Name = L"difficultyPlaceholder";
			   this->difficultyPlaceholder->Size = System::Drawing::Size(99, 20);
			   this->difficultyPlaceholder->TabIndex = 2;
			   this->difficultyPlaceholder->Text = L"difficulty";
			   this->difficultyPlaceholder->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // button1
			   // 
			   this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(25, 7);
			   this->button1->Margin = System::Windows::Forms::Padding(4);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(90, 90);
			   this->button1->TabIndex = 3;
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			   // 
			   // button2
			   // 
			   this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->Location = System::Drawing::Point(160, 7);
			   this->button2->Margin = System::Windows::Forms::Padding(4);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(90, 90);
			   this->button2->TabIndex = 4;
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			   // 
			   // button3
			   // 
			   this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button3->Location = System::Drawing::Point(295, 7);
			   this->button3->Margin = System::Windows::Forms::Padding(4);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(90, 90);
			   this->button3->TabIndex = 5;
			   this->button3->Tag = L"";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			   // 
			   // button4
			   // 
			   this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button4->Location = System::Drawing::Point(25, 111);
			   this->button4->Margin = System::Windows::Forms::Padding(4);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(90, 90);
			   this->button4->TabIndex = 6;
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			   // 
			   // button5
			   // 
			   this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button5->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button5->Location = System::Drawing::Point(160, 111);
			   this->button5->Margin = System::Windows::Forms::Padding(4);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(90, 90);
			   this->button5->TabIndex = 7;
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			   // 
			   // button6
			   // 
			   this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button6->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button6->Location = System::Drawing::Point(295, 111);
			   this->button6->Margin = System::Windows::Forms::Padding(4);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(90, 90);
			   this->button6->TabIndex = 8;
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			   // 
			   // button7
			   // 
			   this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button7->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button7->Location = System::Drawing::Point(25, 215);
			   this->button7->Margin = System::Windows::Forms::Padding(4);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(90, 90);
			   this->button7->TabIndex = 9;
			   this->button7->UseVisualStyleBackColor = true;
			   this->button7->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			   // 
			   // button8
			   // 
			   this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button8->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button8->Location = System::Drawing::Point(160, 215);
			   this->button8->Margin = System::Windows::Forms::Padding(4);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(90, 90);
			   this->button8->TabIndex = 10;
			   this->button8->UseVisualStyleBackColor = true;
			   this->button8->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			   // 
			   // button9
			   // 
			   this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button9->Font = (gcnew System::Drawing::Font(L"Minecraft", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button9->Location = System::Drawing::Point(295, 215);
			   this->button9->Margin = System::Windows::Forms::Padding(4);
			   this->button9->Name = L"button9";
			   this->button9->Size = System::Drawing::Size(90, 90);
			   this->button9->TabIndex = 11;
			   this->button9->UseVisualStyleBackColor = true;
			   this->button9->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			   // 
			   // gameLabel
			   // 
			   this->gameLabel->AutoSize = true;
			   this->gameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->gameLabel->Location = System::Drawing::Point(227, 388);
			   this->gameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->gameLabel->Name = L"gameLabel";
			   this->gameLabel->Size = System::Drawing::Size(326, 31);
			   this->gameLabel->TabIndex = 12;
			   this->gameLabel->Text = L"Select a square to start!";
			   this->gameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // buttonsPanel
			   // 
			   this->buttonsPanel->Controls->Add(this->button1);
			   this->buttonsPanel->Controls->Add(this->button2);
			   this->buttonsPanel->Controls->Add(this->button3);
			   this->buttonsPanel->Controls->Add(this->button4);
			   this->buttonsPanel->Controls->Add(this->button5);
			   this->buttonsPanel->Controls->Add(this->button6);
			   this->buttonsPanel->Controls->Add(this->button7);
			   this->buttonsPanel->Controls->Add(this->button8);
			   this->buttonsPanel->Controls->Add(this->button9);
			   this->buttonsPanel->Location = System::Drawing::Point(185, 66);
			   this->buttonsPanel->Margin = System::Windows::Forms::Padding(4);
			   this->buttonsPanel->Name = L"buttonsPanel";
			   this->buttonsPanel->Size = System::Drawing::Size(411, 318);
			   this->buttonsPanel->TabIndex = 17;
			   // 
			   // buttonExit
			   // 
			   this->buttonExit->BackColor = System::Drawing::Color::Red;
			   this->buttonExit->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->buttonExit->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			   this->buttonExit->ForeColor = System::Drawing::Color::White;
			   this->buttonExit->Location = System::Drawing::Point(252, 426);
			   this->buttonExit->Name = L"buttonExit";
			   this->buttonExit->Size = System::Drawing::Size(128, 60);
			   this->buttonExit->TabIndex = 18;
			   this->buttonExit->Text = L"Exit";
			   this->buttonExit->UseVisualStyleBackColor = false;
			   this->buttonExit->Visible = false;
			   this->buttonExit->Click += gcnew System::EventHandler(this, &GameScreen::buttonExit_Click);
			   // 
			   // buttonReset
			   // 
			   this->buttonReset->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->buttonReset->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			   this->buttonReset->Location = System::Drawing::Point(395, 426);
			   this->buttonReset->Name = L"buttonReset";
			   this->buttonReset->Size = System::Drawing::Size(128, 60);
			   this->buttonReset->TabIndex = 19;
			   this->buttonReset->Text = L"Reset";
			   this->buttonReset->UseVisualStyleBackColor = true;
			   this->buttonReset->Visible = false;
			   this->buttonReset->Click += gcnew System::EventHandler(this, &GameScreen::buttonReset_Click);
			   // 
			   // buttonChangeDif
			   // 
			   this->buttonChangeDif->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->buttonChangeDif->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->buttonChangeDif->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			   this->buttonChangeDif->Location = System::Drawing::Point(538, 426);
			   this->buttonChangeDif->Name = L"buttonChangeDif";
			   this->buttonChangeDif->Size = System::Drawing::Size(128, 60);
			   this->buttonChangeDif->TabIndex = 20;
			   this->buttonChangeDif->Text = L"Change difficulty";
			   this->buttonChangeDif->UseVisualStyleBackColor = false;
			   this->buttonChangeDif->Visible = false;
			   this->buttonChangeDif->Click += gcnew System::EventHandler(this, &GameScreen::buttonChangeDif_Click);
			   // 
			   // GameScreen
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(763, 498);
			   this->Controls->Add(this->buttonChangeDif);
			   this->Controls->Add(this->buttonReset);
			   this->Controls->Add(this->buttonExit);
			   this->Controls->Add(this->buttonsPanel);
			   this->Controls->Add(this->gameLabel);
			   this->Controls->Add(this->difficultyPlaceholder);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->tittle1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"GameScreen";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Game - ";
			   this->buttonsPanel->ResumeLayout(false);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void gameButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedButton = safe_cast<Button^>(sender);

		clickedButton->Text = "X";
		clickedButton->Enabled = false;

		this->gameLabel->Text = "Waiting for the enemy's move...";

		DisableAllButtons();

		if (!CheckForVictory()) {
			if (HasAvailableSpaces()) {
				MoveEnemy(this->difficultyLevel);  // Adjust difficulty as needed
			}
		}
	}

	private: System::Void MoveEnemy(int difficulty) {
		System::Collections::Generic::List<Button^>^ availableButtons = GetAvailableButtons();

		if (availableButtons->Count > 0) {
			Button^ selectedButton = nullptr;

			switch (difficulty) {
			case 1: {  // Random move
				System::Random^ rand = gcnew System::Random();
				int index = rand->Next(availableButtons->Count);
				selectedButton = availableButtons[index];
				break;
			}
			case 2: {  // Medium AI
				selectedButton = MediumAI(availableButtons);
				break;
			}
			case 3: {  // Hard AI
				selectedButton = HardAI(availableButtons);
				break;
			}
			}

			if (selectedButton != nullptr) {
				selectedButton->Text = "O";
				selectedButton->Enabled = false;
			}
		}
		if (!CheckForVictory()) {
			this->gameLabel->Text = L"Select a square to continue!";
			EnableAvailableButtons();
		}
	}

	public: System::Collections::Generic::List<Button^>^ GetAvailableButtons() {
		System::Collections::Generic::List<Button^>^ availableButtons = gcnew System::Collections::Generic::List<Button^>();
		for each (Control ^ control in buttonsPanel->Controls) {
			Button^ btn = dynamic_cast<Button^>(control);
			if (btn != nullptr && btn->Text == "") {
				availableButtons->Add(btn);
			}
		}
		return availableButtons;
	}

	private: Button^ MediumAI(System::Collections::Generic::List<Button^>^ availableButtons) {
		for each (Button ^ btn in availableButtons) {
			if (CanWin(btn)) return btn;  // Attempt to win
		}

		for each (Button ^ btn in availableButtons) {
			if (CanBlock(btn)) return btn;  // Block the opponent
		}

		// If no strategic move, pick randomly
		System::Random^ rand = gcnew System::Random();
		int index = rand->Next(availableButtons->Count);
		return availableButtons[index];
	}

	private: Button^ HardAI(System::Collections::Generic::List<Button^>^ availableButtons) {
		Button^ bestMove = nullptr;
		int bestScore = -9999;

		for each (Button ^ btn in availableButtons) {
			btn->Text = "O";  // Suponemos que "O" es la IA
			int score = Minimax(false, -9999, 9999);  // Simulamos el turno del oponente
			btn->Text = "";  // Deshacemos el movimiento

			if (score > bestScore) {
				bestScore = score;
				bestMove = btn;
			}
		}
		return bestMove;
	}

	private: int Minimax(bool isMaximizing, int alpha, int beta) {
		if (IsWin("O")) return 10;  // IA gana
		if (IsWin("X")) return -10;  // Jugador gana
		if (IsDraw()) return 0;  // Empate

		int bestScore = isMaximizing ? -9999 : 9999;

		for each (Control ^ control in buttonsPanel->Controls) {
			Button^ btn = dynamic_cast<Button^>(control);
			if (btn != nullptr && btn->Text == "") {  // Casilla vacía
				btn->Text = isMaximizing ? "O" : "X";  // Simula la jugada
				int score = Minimax(!isMaximizing, alpha, beta);  // Cambia el turno
				btn->Text = "";  // Deshace la jugada

				if (isMaximizing) {
					bestScore = std::max(score, bestScore);
					alpha = std::max(alpha, bestScore);
				}
				else {
					bestScore = std::min(score, bestScore);
					beta = std::min(beta, bestScore);
				}
				if (beta <= alpha) {
					break;
				}
			}
		}
		return bestScore;
	}

	private: bool IsWin(System::String^ player) {
		return checkIfWin(player) != nullptr;
	}

	private: array<int>^ checkIfWin(System::String^ player) {
		// Representación de las combinaciones ganadoras
		System::Collections::Generic::List<array<int>^>^ winPatterns = gcnew System::Collections::Generic::List<array<int>^>();

		// Horizontal
		winPatterns->Add(gcnew array<int>{0, 1, 2});
		winPatterns->Add(gcnew array<int>{3, 4, 5});
		winPatterns->Add(gcnew array<int>{6, 7, 8});

		// Vertical
		winPatterns->Add(gcnew array<int>{0, 3, 6});
		winPatterns->Add(gcnew array<int>{1, 4, 7});
		winPatterns->Add(gcnew array<int>{2, 5, 8});

		// Diagonal
		winPatterns->Add(gcnew array<int>{0, 4, 8});
		winPatterns->Add(gcnew array<int>{2, 4, 6});

		// Verifica si hay alguna combinación ganadora
		for each (array<int> ^ pattern in winPatterns) {
			if (buttonsPanel->Controls[pattern[0]]->Text == player &&
				buttonsPanel->Controls[pattern[1]]->Text == player &&
				buttonsPanel->Controls[pattern[2]]->Text == player) {
				return pattern;
			}
		}

		return nullptr;
	}

	private: void PrintBoard() {
		String^ boardState = "Estado del tablero:\n";

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				Button^ btn = dynamic_cast<Button^>(buttonsPanel->Controls[i * 3 + j]);
				boardState += (btn->Text == "" ? " . " : " " + btn->Text + " ");
			}
			boardState += "\n";  // Nueva línea después de cada fila
		}

		// Mostrar el estado del tablero en un MessageBox
		MessageBox::Show(boardState, "Estado del Tablero");
	}

	private: bool IsDraw() {
		for each (Control ^ control in buttonsPanel->Controls) {
			Button^ btn = dynamic_cast<Button^>(control);
			if (btn != nullptr && btn->Text == "") return false;  // Si hay casillas vacías, no es empate
		}
		// Si no hay ganador y no hay casillas vacías, es empate
		return !IsWin("X") && !IsWin("O");
	}

	private: bool CanWin(Button^ btn) {
		btn->Text = "O";
		bool win = IsWin("O");
		btn->Text = "";  // Undo
		return win;
	}

	private: bool CanBlock(Button^ btn) {
		btn->Text = "X";
		bool block = IsWin("X");
		btn->Text = "";  // Undo
		return block;
	}

	private: System::Void CheckForAvailableSpaces() {
		if (!HasAvailableSpaces()) {
			this->gameLabel->Text = "Game Over!";
		}
		else {
			EnableAvailableButtons();
		}
	}

	private: bool HasAvailableSpaces() {
		return GetAvailableButtons()->Count > 0;
	}

	private: System::Void DisableAllButtons() {
		for each (Control ^ control in buttonsPanel->Controls) {
			Button^ btn = dynamic_cast<Button^>(control);
			if (btn != nullptr) {
				btn->Enabled = false;
			}
		}
	}

	private: System::Void EnableAvailableButtons() {
		for each (Control ^ control in buttonsPanel->Controls) {
			Button^ btn = dynamic_cast<Button^>(control);
			if (btn != nullptr && btn->Text == "") {
				btn->Enabled = true;
			}
		}
	}

	private: System::Boolean CheckForVictory() {
		if (IsDraw()) {
			this->gameLabel->Text = "It's a draw!";
			DisableAllButtons();
			this->buttonExit->Visible = true;
			this->buttonReset->Visible = true;
			//this->buttonChangeDif->Visible = true;
			return true;
		}
		array<int>^ winPatterns = checkIfWin("X");
		if (winPatterns != nullptr) {
			this->gameLabel->Text = "You have won!";
			DrawWinningLine(winPatterns[0], winPatterns[1], winPatterns[2]);
			this->buttonExit->Visible = true;
			this->buttonReset->Visible = true;
			//this->buttonChangeDif->Visible = true;
			DisableAllButtons();
			return true;
		}
		array<int>^ winPatterns2 = checkIfWin("O");
		if (winPatterns2 != nullptr) {
			this->gameLabel->Text = "You have lost!";
			DrawWinningLine(winPatterns2[0], winPatterns2[1], winPatterns2[2]);
			this->buttonExit->Visible = true;
			this->buttonReset->Visible = true;
			//this->buttonChangeDif->Visible = true;
			DisableAllButtons();
			return true;
		}

		return false;
	}

	private: System::Void DrawWinningLine(int start, int middle, int end) {
		buttonsPanel->Controls[start]->BackColor = System::Drawing::Color::Green;
		buttonsPanel->Controls[middle]->BackColor = System::Drawing::Color::Green;
		buttonsPanel->Controls[end]->BackColor = System::Drawing::Color::Green;
	}

	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	
	private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e) {
		GameScreen^ gameScreen = gcnew GameScreen(this->difficulty);
		this->Hide();
		gameScreen->Show();
		
	}
	
	private: System::Void buttonChangeDif_Click(System::Object^ sender, System::EventArgs^ e) {
		//WORK IN PROGRESS
		this->Close();
	}
};

}
