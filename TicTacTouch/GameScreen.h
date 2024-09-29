#pragma once
#include <algorithm> // Para std::find
namespace TicTacTouch {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GameScreen
	/// </summary>
	public ref class GameScreen : public System::Windows::Forms::Form
	{
	public:
		GameScreen(String^ difficulty)
		{
			InitializeComponent();
			this->difficultyPlaceholder->Text = difficulty;
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
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
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

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ buttonsPanel;



	protected:

	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		int difficultyLevel;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameScreen::typeid));
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonsPanel = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->buttonsPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// tittle1
			// 
			this->tittle1->AutoSize = true;
			this->tittle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tittle1->Location = System::Drawing::Point(177, 9);
			this->tittle1->Name = L"tittle1";
			this->tittle1->Size = System::Drawing::Size(210, 25);
			this->tittle1->TabIndex = 0;
			this->tittle1->Text = L"Let start the game!";

			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(203, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Difficulty:";
			// 
			// difficultyPlaceholder
			// 
			this->difficultyPlaceholder->AutoSize = true;
			this->difficultyPlaceholder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->difficultyPlaceholder->Location = System::Drawing::Point(248, 34);
			this->difficultyPlaceholder->Name = L"difficultyPlaceholder";
			this->difficultyPlaceholder->Size = System::Drawing::Size(127, 16);
			this->difficultyPlaceholder->TabIndex = 2;
			this->difficultyPlaceholder->Text = L"difficultyPlaceholder";

			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(106, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(192, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 5;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(19, 82);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 6;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(106, 82);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 7;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(192, 82);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 8;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(19, 158);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 9;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(106, 158);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 10;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(192, 158);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 11;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &GameScreen::gameButton_Click);
			// 
			// gameLabel
			// 
			this->gameLabel->AutoSize = true;
			this->gameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gameLabel->Location = System::Drawing::Point(144, 315);
			this->gameLabel->Name = L"gameLabel";
			this->gameLabel->Size = System::Drawing::Size(265, 25);
			this->gameLabel->TabIndex = 12;
			this->gameLabel->Text = L"Select a square to start!";

			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(299, 348);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(52, 50);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(145, 348);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(57, 50);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(208, 365);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"You";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(359, 365);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 16);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Enemy";
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

			this->buttonsPanel->Location = System::Drawing::Point(145, 94);
			this->buttonsPanel->Name = L"buttonsPanel";
			this->buttonsPanel->Size = System::Drawing::Size(263, 218);
			this->buttonsPanel->TabIndex = 17;
			this->buttonsPanel->BringToFront();
			// 
			// GameScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 405);
			this->Controls->Add(this->buttonsPanel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->gameLabel);
			this->Controls->Add(this->difficultyPlaceholder);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tittle1);
			this->Name = L"GameScreen";
			this->Text = L"GameScreen";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
				return true;
			}
		}

		return false;
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
		array<Button^>^ buttons = gcnew array<Button^>{
			this->button1, this->button2, this->button3,
				this->button4, this->button5, this->button6,
				this->button7, this->button8, this->button9
		};

		// Check rows
		for (int i = 0; i < 9; i += 3) {
			if (buttons[i]->Text != "" && buttons[i]->Text == buttons[i + 1]->Text && buttons[i]->Text == buttons[i + 2]->Text) {
				this->gameLabel->Text = buttons[i]->Text + " has won!";
				DrawWinningLine(buttons, i, i + 1, i + 2);
				DisableAllButtons();
				return true;
			}
		}

		// Check columns
		for (int i = 0; i < 3; ++i) {
			if (buttons[i]->Text != "" && buttons[i]->Text == buttons[i + 3]->Text && buttons[i]->Text == buttons[i + 6]->Text) {
				this->gameLabel->Text = buttons[i]->Text + " has won!";
				DrawWinningLine(buttons, i, i + 3, i + 6);
				DisableAllButtons();
				return true;
			}
		}

		// Check diagonals
		if (buttons[0]->Text != "" && buttons[0]->Text == buttons[4]->Text && buttons[0]->Text == buttons[8]->Text) {
			this->gameLabel->Text = buttons[0]->Text + " has won!";
			DrawWinningLine(buttons, 0, 4, 8);
			DisableAllButtons();
			return true;
		}
		if (buttons[2]->Text != "" && buttons[2]->Text == buttons[4]->Text && buttons[2]->Text == buttons[6]->Text) {
			this->gameLabel->Text = buttons[2]->Text + " has won!";
			DrawWinningLine(buttons, 2, 4, 6);
			DisableAllButtons();
			return true;
		}

		return false;
	}

	private: System::Void DrawWinningLine(array<Button^>^ buttons, int start, int middle, int end) {
		// Puedes ajustar el color y grosor de la línea aquí
		System::Drawing::Pen^ winningLinePen = gcnew System::Drawing::Pen(System::Drawing::Color::Red, 5);

		// Configura el panel de líneas
		Panel^ buttonsPanel = this->buttonsPanel;
		buttonsPanel->Refresh();

		// Obtén las coordenadas de los botones para dibujar la línea
		System::Drawing::Rectangle rectStart = buttons[start]->Bounds;
		System::Drawing::Rectangle rectMiddle = buttons[middle]->Bounds;
		System::Drawing::Rectangle rectEnd = buttons[end]->Bounds;

		// Calcula la posición y tamaño de la línea
		System::Drawing::Graphics^ g = buttonsPanel->CreateGraphics();
		if (start == end) {
			// Línea vertical
			g->DrawLine(winningLinePen,
				rectStart.X + rectStart.Width / 2, rectStart.Y,
				rectStart.X + rectStart.Width / 2, rectStart.Y + rectStart.Height);
		}
		else if (middle == end) {
			// Línea horizontal
			g->DrawLine(winningLinePen,
				rectStart.X, rectStart.Y + rectStart.Height / 2,
				rectEnd.X + rectEnd.Width, rectEnd.Y + rectEnd.Height / 2);
		}
		else {
			// Línea diagonal
			g->DrawLine(winningLinePen,
				rectStart.X, rectStart.Y,
				rectEnd.X + rectEnd.Width, rectEnd.Y + rectEnd.Height);
		}
	}


	};



}
