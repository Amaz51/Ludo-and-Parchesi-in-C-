#include<time.h>
#include<cstdlib>
#include<iostream>
#include<conio.h>
#include<string>
#include<Windows.h>

#include "Parchisi.h"


#define RED "\u001B[31m"
#define RESET "\u001B[0m"
#define GREEN "\u001B[32m"
#define YELLOW "\u001B[33m"
#define CYAN "\u001B[36m"
#define PURPLE "\033[1;35m"
#define STOP_UNDERLINE "\u001B[24m"
#define UNDERLINE "\u001B[4m"


Token token1a(0, 1, 0, '1', 0), token1b(0, 1, 0, '2', 0), token1c(0, 1, 0, '3', 0),
token1d(0, 1, 0, '4', 0), token2a(26, 1, 0, 'a', 0), token2b(26, 1, 0, 'b', 0),
token2c(26, 1, 0, 'c', 0), token2d(26, 1, 0, 'd', 0);

void Parchisi::table()
{
	system("CLS");

	tablechange();

	std::cout << "                   ________" << RED << "      ______    " << RESET << std::endl;
	std::cout << "                  |" << a[49] << b[49] << "|" << RED << a[50] << b[50] << RESET << "|" << a[51] << b[51] << "|    " << RED << "|      |      " << RESET << std::endl;
	std::cout << "                  " << PURPLE << '|' << RESET << a[48] << b[48] << PURPLE << "|" << RESET << RED << p1l[1] << b1l[1] << PURPLE << '|' << RESET << a[0] << b[0] << PURPLE << "|    " << RESET << RED << "| " << p1a << "  " << p1b << " | " << RESET << std::endl;
	std::cout << "                  |" << a[47] << b[47] << "|" << RED << p1l[2] << b1l[2] << RESET << '|' << a[1] << b[1] << "|    " << RED << "| " << p1c << "  " << p1d << " |  " << RESET << std::endl;
	std::cout << "                  |" << a[46] << b[46] << "|" << RED << p1l[3] << b1l[3] << RESET << '|' << a[2] << b[2] << "|    " << RED << "|______|  " << RESET << std::endl;
	std::cout << "                  |" << a[45] << b[45] << "|" << RED << p1l[4] << b1l[4] << RESET << '|' << a[3] << b[3] << "|              " << std::endl;
	std::cout << " _________________|" << a[44] << b[44] << "|" << RED << p1l[5] << b1l[5] << RESET << '|' << a[4] << b[4] << "|_________________ " << std::endl;
	std::cout << "|" << a[38] << b[38] << PURPLE << '|' << RESET << a[39] << b[39] << PURPLE << "|" << RESET << a[40] << b[40] << "|" << a[41] << b[41] << "|" << a[42] << b[42] << "|" << a[43] << b[43] << "|  " << RED << end1a << end1b << end1c << end1d << RESET << "  |" << a[5] << b[5] << "|" << a[6] << b[6] << "|" << a[7] << b[7] << "|" << a[8] << b[8] << PURPLE << "|" << RESET << a[9] << b[9] << PURPLE << "|" << RESET << a[10] << b[10] << "| " << std::endl;
	std::cout << "|" << a[37] << b[37] << "" << CYAN << "|" << RESET << "__" << CYAN << "|" << RESET << "__" << CYAN << "|" << RESET << "__" << CYAN << "|" << RESET << "__" << CYAN << "|" << RESET << "__" << CYAN << "|" << RESET << "        " << YELLOW << "|" << RESET << "__" << YELLOW << "|" << RESET << "__" << YELLOW << "|" << RESET << "__" << YELLOW << "|" << RESET << "__" << YELLOW << "|" << RESET << "__" << YELLOW << "|" << RESET << a[11] << b[11] << "|" << std::endl;
	std::cout << "|" << a[36] << b[36] << PURPLE << "|" << RESET << a[35] << b[35] << PURPLE << "|" << RESET << a[34] << b[34] << "|" << a[33] << b[33] << "|" << a[32] << b[32] << "|" << a[31] << b[31] << "|__" << GREEN << end2a << end2b << end2c << end2d << RESET << "__|" << a[17] << b[17] << "|" << a[16] << b[16] << "|" << a[15] << b[15] << "|" << a[14] << b[14] << PURPLE << "|" << RESET << a[13] << b[13] << PURPLE << "|" << RESET << a[12] << b[12] << "|" << std::endl;
	std::cout << "                  |" << a[30] << b[30] << "|" << GREEN << p2l[5] << b2l[5] << RESET << "|" << a[18] << b[18] << "|              " << std::endl;
	std::cout << "      " << GREEN << " ______ " << RESET << "    |" << a[29] << b[29] << "|" << GREEN << p2l[4] << b2l[4] << RESET << "|" << a[19] << b[19] << "|              " << std::endl;
	std::cout << "      " << GREEN << "|      |" << RESET << "    |" << a[28] << b[28] << "|" << GREEN << p2l[3] << b2l[3] << RESET << "|" << a[20] << b[20] << "|              " << std::endl;
	std::cout << "      " << GREEN << "| " << p2a << "  " << p2b << " |" << RESET << "    |" << a[27] << b[27] << "|" << GREEN << p2l[2] << b2l[2] << RESET << "|" << a[21] << b[21] << "|              " << std::endl;
	std::cout << "      " << GREEN << "| " << p2c << "  " << p2d << " |" << PURPLE << "    |" << RESET << a[26] << b[26] << PURPLE << "|" << GREEN << p2l[1] << b2l[1] << PURPLE << "|" << RESET << a[22] << b[22] << PURPLE << '|' << RESET << "              " << std::endl;
	std::cout << "      " << GREEN << "|______|" << RESET << "    |" << a[25] << b[25] << "|" << a[24] << b[24] << "|" << a[23] << b[23] << "|              " << std::endl;
}

void Parchisi::tablechange()
{
	a = "_______________________________________________________________ ";
	b = "_______________________________________________________________ ";
	p1l = " _____";
	b1l = " _____";
	p2l = " _____";
	b2l = " _____";
	p1a = ' ', p1b = ' ', p1c = ' ', p1d = ' ', p2a = ' ', p2b = ' ', p2c = ' ', p2d = ' ';
	end1a = ' ', end1b = ' ', end1c = ' ', end1d = ' ', end2a = '_', end2b = '_', end2c = '_', end2d = '_';
	{
		if (token1a.in_home) p1a = token1a.symbol;
		else if (token1a.end) end1a = token1a.symbol;
		else if (token1a.in_last && p1l[token1a.position] != '_')
			b1l[token1a.position] = token1a.symbol;
		else if (token1a.in_last) p1l[token1a.position] = token1a.symbol;
		else if (a[token1a.position] != ' ' && a[token1a.position] != '_')
			b[token1a.position] = token1a.symbol;
		else a[token1a.position] = token1a.symbol;

		if (token1b.in_home) p1b = token1b.symbol;
		else if (token1b.end) end1b = token1b.symbol;
		else if (token1b.in_last && p1l[token1b.position] != '_')
			b1l[token1b.position] = token1b.symbol;
		else if (token1b.in_last) p1l[token1b.position] = token1b.symbol;
		else if (a[token1b.position] != ' ' && a[token1b.position] != '_')
			b[token1b.position] = token1b.symbol;
		else a[token1b.position] = token1b.symbol;

		if (token1c.in_home) p1c = token1c.symbol;
		else if (token1c.end) end1c = token1c.symbol;
		else if (token1c.in_last && p1l[token1c.position] != '_')
			b1l[token1c.position] = token1c.symbol;
		else if (token1c.in_last) p1l[token1c.position] = token1c.symbol;
		else if (a[token1c.position] != ' ' && a[token1c.position] != '_')
			b[token1c.position] = token1c.symbol;
		else a[token1c.position] = token1c.symbol;

		if (token1d.in_home) p1d = token1d.symbol;
		else if (token1d.end) end1d = token1d.symbol;
		else if (token1d.in_last && p1l[token1d.position] != '_')
			b1l[token1d.position] = token1d.symbol;
		else if (token1d.in_last) p1l[token1d.position] = token1d.symbol;
		else if (a[token1d.position] != ' ' && a[token1d.position] != '_')
			b[token1d.position] = token1d.symbol;
		else a[token1d.position] = token1d.symbol;

		if (token2a.in_home) p2a = token2a.symbol;
		else if (token2a.end) end2a = token2a.symbol;
		else if (token2a.in_last && p1l[token2a.position] != '_')
			b2l[token2a.position] = token2a.symbol;
		else if (token2a.in_last) p2l[token2a.position] = token2a.symbol;
		else if (a[token2a.position] != ' ' && a[token2a.position] != '_')
			b[token2a.position] = token2a.symbol;
		else a[token2a.position] = token2a.symbol;

		if (token2b.in_home) p2b = token2b.symbol;
		else if (token2b.end) end2b = token2b.symbol;
		else if (token2b.in_last && p1l[token2b.position] != '_')
			b2l[token2b.position] = token2b.symbol;
		else if (token2b.in_last) p2l[token2b.position] = token2b.symbol;
		else if (a[token2b.position] != ' ' && a[token2b.position] != '_')
			b[token2b.position] = token2b.symbol;
		else a[token2b.position] = token2b.symbol;

		if (token2c.in_home) p2c = token2c.symbol;
		else if (token2c.end) end2c = token2c.symbol;
		else if (token2c.in_last && p1l[token2c.position] != '_')
			b2l[token2c.position] = token2c.symbol;
		else if (token2c.in_last) p2l[token2c.position] = token2c.symbol;
		else if (a[token2c.position] != ' ' && a[token2c.position] != '_')
			b[token2c.position] = token2c.symbol;
		else a[token2c.position] = token2c.symbol;

		if (token2d.in_home) p2d = token2d.symbol;
		else if (token2d.end) end2d = token2d.symbol;
		else if (token2d.in_last && p1l[token2d.position] != '_')
			b2l[token2d.position] = token2d.symbol;
		else if (token2d.in_last) p2l[token2d.position] = token2d.symbol;
		else if (a[token2d.position] != ' ' && a[token2d.position] != '_')
			b[token2d.position] = token2d.symbol;
		else a[token2d.position] = token2d.symbol;
	}
}

void Parchisi::start()
{
	MoveWindow(wh, 200, 100, 600, 400, TRUE);
	system("CLS");
	std::cout << std::endl << CYAN << "   Game : Parchisi" << std::endl << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << YELLOW << "   Press any key to roll the dice." << std::endl;
	std::cout << "   If all 4 tokens of any player reach the end, the player wins." << std::endl;
	std::cout << "   Best of Luck!" << std::endl << std::endl;
	std::cout << "   Press any key to start the game..." << RESET;
	_getch();
	system("CLS");
	name();
}

void Parchisi::name()
{

	system("CLS");
	std::cout << "Enter Player 1 Name: ";
	std::cin.ignore();
	getline(std::cin, player1_name);
	std::cout << "Enter Player 2 Name: ";
	std::cin.ignore();
	getline(std::cin, player2_name);
	MoveWindow(wh, 200, 50, 500, 500, TRUE);
	return;
}

bool Parchisi::stop()
{

	if (token1a.end && token1b.end && token1c.end && token1d.end) {
		_getch();
		table();
		std::cout << std::endl << std::endl << RED << "Player 1 Won!!" << RESET << std::endl;
		_getch();
		return 1;
	}
	if (token2a.end && token2b.end && token2c.end && token2d.end) {
		_getch();
		table();
		std::cout << std::endl << std::endl << GREEN << "Player 2 Won!!" << RESET << std::endl;
		_getch();
		return 1;
	}
	return 0;
}

int Parchisi::dice()
{
	return (rand() % 6 + 1);
}

int Parchisi::roll()
{
	std::cout << "Roll..." << std::endl;
	_getch();
	roll1 = dice();
	roll2 = dice();
	std::cout << "You rolled a " << roll1 << " and " << roll2 << std::endl;
	_getch();
	return roll1 + roll2;
}

bool Parchisi::possible1(Token& token, int roll)
{
	if (token.in_home) {
		if ((roll1s && roll1 == 5) || (roll2s && roll2 == 5) && b[0] == '_')return 1;
		return 0;
	}
	// checking blockades

	for (int i = 1; i < 52; i++) {
		if (token.position < i && (token.position + roll) >= i
			&& b[i] != '_') return 0;
	}
	//blockades for coming out of home already checked
	for (int i = 1; i < 6; i++) {
		if (token.in_last && token.position < i && (token.position + roll) >= i
			&& b1l[i] != '_') return 0;
		if ((token.position + roll) > 50 && (token.position + roll - 50) >= i
			&& b1l[i] != '_')return 0;
	}

	//check done

	token.position += roll;

	if (token.in_last && token.position > 6) {
		token.position -= roll;
		return 0;
	}
	if (token.in_last) {
		token.position -= roll;
		return 1;
	}

	if (token.position > 50) {
		token.position -= 50;
		token.in_last = 1;
	}
	if (token.in_last && token.position > 6) {
		token.position += 50;
		token.position -= roll;
		token.in_last = 0;
		return 0;
	}

	if (token.in_last) {
		token.in_last = 0;
		token.position += 50;
		token.position -= roll;
	}
	else token.position -= roll;
	return 1;
}

void Parchisi::position1(Token& token, int total_roll)
{
	if (token.in_home) {
		token.in_home = 0;
		return;
	}

	token.position += total_roll;

	if (token.position > 50) {
		token.position -= 50;
		token.in_last = 1;
	}
	if (token.position == 6 && token.in_last) {
		token.end = 1;
		endtokenthisturn = 1;
	}
	if (!token.end) {
		if (token.position == token2a.position) {
			beat1(token2a);
		}
		if (token.position == token2b.position) {
			beat1(token2b);
		}
		if (token.position == token2c.position) {
			beat1(token2c);
		}
		if (token.position == token2d.position) {
			beat1(token2d);
		}
	}

}

void Parchisi::beat1(Token& token)
{
	if (!token.in_home && !token.in_last && !token.end && token.position != 0 && token.position != 9 && token.position != 13
		&& token.position != 22 && token.position != 26 && token.position != 35
		&& token.position != 39 && token.position != 48) {
		token.position = 26;
		token.in_home = true;
		token.passed_mid = false;
		beathisturn = 1;
	}
}

void Parchisi::veto1()
{

	if ((roll1 + roll2 == 5) && roll1s && roll2s) {
		if (token1a.in_home && b[0] == '_') {
			token1a.in_home = 0;
			roll1s = 0, roll2s = 0;
		}
		else if (token1b.in_home && b[0] == '_') {
			token1b.in_home = 0;
			roll1s = 0, roll2s = 0;
		}
		else if (token1c.in_home && b[0] == '_') {
			token1c.in_home = 0;
			roll1s = 0, roll2s = 0;
		}
		else if (token1d.in_home && b[0] == '_') {
			token1d.in_home = 0;
			roll1s = 0, roll2s = 0;
		}
		return;
	}

	if (roll1 == roll2 && roll1s && roll2s) {
		int num = 0;
		for (int i = 0; i < 51 && num != 2; i++) {
			if (b[i] != '_') {
				if (token1a.position == i && !token1a.end && !token1a.in_home) {
					if (possible1(token1a, roll1)) {
						position1(token1a, roll1);
						roll1s = 0;
						num++;
					}
				}

				else if (token1b.position == i && !token1b.end && !token1b.in_home) {
					if (possible1(token1b, roll1)) {
						position1(token1b, roll1);
						roll1s = 0;
						num++;
					}
				}

				else if (token1c.position == i && !token1c.end && !token1c.in_home) {
					if (possible1(token1c, roll1)) {
						position1(token1c, roll1);
						roll1s = 0;
						num++;
					}
				}
				else if (token1d.position == i && !token1d.end && !token1d.in_home) {
					if (possible1(token1d, roll1)) {
						position1(token1d, roll1);
						roll1s = 0;
						num++;
					}
				}
			}
		}
		for (int i = 1; i < 6 && num != 2; i++) {
			if (b1l[i] != '_') {
				if (token1a.position == i && !token1a.end && token1a.in_last)
				{
					if (possible1(token1a, roll1)) {
						position1(token1a, roll1);
						roll1s = 0;
						num++;
					}
				}
				else if (token1b.position == i && !token1b.end && token1b.in_last)
				{
					if (possible1(token1b, roll1)) {
						position1(token1b, roll1);
						roll1s = 0;
						num++;
					}
				}
				else if (token1c.position == i && !token1c.end && token1c.in_last)
				{
					if (possible1(token1c, roll1)) {
						position1(token1c, roll1);
						roll1s = 0;
						num++;
					}
				}
				else if (token1d.position == i && !token1d.end && token1d.in_last)
				{
					if (possible1(token1d, roll1)) {
						position1(token1d, roll1);
						roll1s = 0;
						num++;
					}
				}
			}
		}
		if (num == 2)roll2s = 0;
	}

	if (roll1 == 5 && roll1s) {
		if (token1a.in_home && b[0] == '_') {
			token1a.in_home = 0;
			roll1s = 0;
		}
		else if (token1b.in_home && b[0] == '_') {
			token1b.in_home = 0;
			roll1s = 0;
		}
		else if (token1c.in_home && b[0] == '_') {
			token1c.in_home = 0;
			roll1s = 0;
		}
		else if (token1d.in_home && b[0] == '_') {
			token1d.in_home = 0;
			roll1s = 0;
		}
		tablechange();
	}

	if (roll2 == 5 && roll2s) {
		if (token1a.in_home && b[0] == '_') {
			token1a.in_home = 0;
			roll2s = 0;
		}
		else if (token1b.in_home && b[0] == '_') {
			token1b.in_home = 0;
			roll2s = 0;
		}
		else if (token1c.in_home && b[0] == '_') {
			token1c.in_home = 0;
			roll2s = 0;
		}
		else if (token1d.in_home && b[0] == '_') {
			token1d.in_home = 0;
			roll2s = 0;
		}
	}

}

void Parchisi::choosing1()
{
	choose1();
	bool go = true;
	if (roll1 == roll2) {
		if (!roll1s)go = 0;
	}
	if (choice2 == roll1 && go) {
		choose1r1();
		roll1s = 0;
		if (!roll1s && !roll2s) return;
		if (!roll2s)return;
		table();
		rollpossible1();
		if (roll2pos1a || roll2pos1b || roll2pos1c || roll2pos1d) {
			if (auto1())return;
			std::cout << std::endl << "Choose token (" << roll2 << ") : ";
			std::cin >> choice1;
			while (choice1 != token1a.symbol && choice1 != token1b.symbol &&
				choice1 != token1c.symbol && choice1 != token1d.symbol) {
				std::cout << "Invalid input" << std::endl;
				std::cout << "Choose token (" << roll2 << ") : ";
				std::cin >> choice1;
			}

			choose1r2();

		}
	}
	else {
		choose1r2();
		roll2s = 0;
		if (!roll1s && !roll2s) return;
		if (!roll1s)return;
		table();
		rollpossible1();
		if (roll1pos1a || roll1pos1b || roll1pos1c || roll1pos1d)
		{
			if (auto1())return;
			std::cout << std::endl << "Choose token (" << roll1 << ") : ";
			std::cin >> choice1;
			while (choice1 != token1a.symbol && choice1 != token1b.symbol &&
				choice1 != token1c.symbol && choice1 != token1d.symbol) {
				std::cout << "Invalid input" << std::endl;
				std::cout << "Choose token (" << roll1 << ") : ";
				std::cin >> choice1;
			}
			choose1r1();

		}
	}
}

void Parchisi::choose1()
{
	if (roll1s && roll2s) {
		std::cout << "Choose roll " << roll1 << " or " << roll2 << " : ";
		std::cin >> choice2;
	}
	else if (roll1s)choice2 = roll1;
	else if (roll2s)choice2 = roll2;
	while (choice2 != roll1 && choice2 != roll2) {
		std::cout << "Invalid input" << std::endl;
		std::cout << "Choose roll " << roll1 << " or " << roll2 << " : ";
		std::cin >> choice2;
	}

	std::cout << "Choose token(" << choice2 << "): ";
	std::cin >> choice1;
	while (choice1 != token1a.symbol && choice1 != token1b.symbol &&
		choice1 != token1c.symbol && choice1 != token1d.symbol) {
		std::cout << "Invalid input" << std::endl;
		std::cout << "Choose token: ";
		std::cin >> choice1;
	}

}

void Parchisi::choose1r1()
{
	if (choice1 == token1a.symbol) {
		if (roll1pos1a) {
			position1(token1a, roll1);
			return;
		}
	}
	else if (choice1 == token1b.symbol) {
		if (roll1pos1b) {
			position1(token1b, roll1);
			return;
		}
	}
	else if (choice1 == token1c.symbol) {
		if (roll1pos1c) {
			position1(token1c, roll1);
			return;
		}
	}
	else if (choice1 == token1d.symbol) {
		if (roll1pos1d) {
			position1(token1d, roll1);
			return;
		}
	}

	std::cout << "Not Possible" << std::endl;
	choosing1();

}

void Parchisi::choose1r2()
{
	if (choice1 == token1a.symbol) {
		if (roll2pos1a) {
			position1(token1a, roll2);
			return;
		}
	}
	else if (choice1 == token1b.symbol) {
		if (roll2pos1b) {
			position1(token1b, roll2);
			return;
		}
	}
	else if (choice1 == token1c.symbol) {
		if (roll2pos1c) {
			position1(token1c, roll2);
			return;
		}
	}
	else if (choice1 == token1d.symbol) {
		if (roll2pos1d) {
			position1(token1d, roll2);
			return;
		}
	}

	std::cout << "Not Possible" << std::endl;
	choosing1();

}

void Parchisi::rollpossible1()
{
	if (roll1s) {
		if (token1a.end) {
			roll1pos1a = 0;
			roll2pos1a = 0;
		}
		else {
			roll1pos1a = possible1(token1a, roll1);
		}
		if (token1b.end) {
			roll1pos1b = 0;
			roll2pos1b = 0;
		}
		else {
			roll1pos1b = possible1(token1b, roll1);
		}
		if (token1c.end) {
			roll1pos1c = 0;
			roll2pos1c = 0;
		}
		else {
			roll1pos1c = possible1(token1c, roll1);
		}
		if (token1d.end) {
			roll1pos1d = 0;
			roll2pos1d = 0;
		}
		else {
			roll1pos1d = possible1(token1d, roll1);
		}
	}
	if (roll2s) {
		if (token1a.end) {
			roll1pos1a = 0;
			roll2pos1a = 0;
		}
		else {
			roll2pos1a = possible1(token1a, roll2);
		}
		if (token1b.end) {
			roll1pos1b = 0;
			roll2pos1b = 0;
		}
		else {
			roll2pos1b = possible1(token1b, roll2);
		}
		if (token1c.end) {
			roll1pos1c = 0;
			roll2pos1c = 0;
		}
		else {
			roll2pos1c = possible1(token1c, roll2);
		}
		if (token1d.end) {
			roll1pos1d = 0;
			roll2pos1d = 0;
		}
		else {
			roll2pos1d = possible1(token1d, roll2);
		}
	}
}

bool Parchisi::auto1() {
	if (roll1pos1a && !roll1pos1b && !roll1pos1c && !roll1pos1d
		&& ((!roll2pos1a && !roll2pos1b && !roll2pos1c && !roll2pos1d) || !roll2s)) {
		if (roll1s) {
			position1(token1a, roll1);
			roll1s = 0;
			return 1;
		}
	}

	if (!roll1pos1a && !roll1pos1b && !roll1pos1c && !roll1pos1d
		&& ((!roll2pos1a && !roll2pos1b && !roll2pos1c && !roll2pos1d) || !roll2s)) {
		if (roll1s) {
			position1(token1b, roll1);
			roll1s = 0;
			return 1;
		}
	}

	if (!roll1pos1a && !roll1pos1b && roll1pos1c && !roll1pos1d
		&& ((!roll2pos1a && !roll2pos1b && !roll2pos1c && !roll2pos1d) || !roll2s)) {
		if (roll1s) {
			position1(token1c, roll1);
			roll1s = 0;
			return 1;
		}
	}

	if (!roll1pos1a && !roll1pos1b && !roll1pos1c && roll1pos1d
		&& ((!roll2pos1a && !roll2pos1b && !roll2pos1c && !roll2pos1d) || !roll2s)) {
		if (roll1s) {
			position1(token1d, roll1);
			roll1s = 0;
			return 1;
		}
	}

	if (((!roll1pos1a && !roll1pos1b && !roll1pos1c && !roll1pos1d) || !roll1s)
		&& roll2pos1a && !roll2pos1b && !roll2pos1c && !roll2pos1d) {
		if (roll2s) {
			position1(token1a, roll2);
			roll2s = 0;
			return 1;
		}
	}

	if (((!roll1pos1a && !roll1pos1b && !roll1pos1c && !roll1pos1d) || !roll1s)
		&& !roll2pos1a && roll2pos1b && !roll2pos1c && !roll2pos1d) {
		if (roll2s) {
			position1(token1b, roll2);
			roll2s = 0;
			return 1;
		}
	}

	if (((!roll1pos1a && !roll1pos1b && !roll1pos1c && !roll1pos1d) || !roll1s)
		&& !roll2pos1a && !roll2pos1b && roll2pos1c && !roll2pos1d) {
		if (roll2s) {
			position1(token1c, roll2);
			roll2s = 0;
			return 1;
		}
	}

	if (((!roll1pos1a && !roll1pos1b && !roll1pos1c && !roll1pos1d) || !roll1s)
		&& !roll2pos1a && !roll2pos1b && !roll2pos1c && roll2pos1d) {
		if (roll2s) {
			position1(token1d, roll2);
			roll2s = 0;
			return 1;
		}
	}
	return 0;
}




bool Parchisi::possible2(Token& token, int total_roll)
{

	if (token.in_home) {
		if ((roll1s && roll1 == 5) || (roll2s && roll2 == 5) && b[26] == '_')return 1;
		return 0;
	}

	// checking blockades
	for (int i = 1; i < 52; i++)
		if (token.position < i && (token.position + total_roll) >= i
			&& b[i] != '_') return 0;
	//checking blockades when passing mid
	for (int i = 0; i < 12; i++)
		if (token.position < 52 && !token.passed_mid && (token.position + total_roll) >= 52 &&
			(token.position + total_roll - 52) >= i && b[i] != '_') return 0;
	for (int i = 1; i < 6; i++) {
		if (token.in_last && token.position < i && (token.position + total_roll) >= i
			&& b2l[i] != '_') return 0;
		if ((token.position + total_roll) > 24 && (token.position + total_roll - 24) >= i
			&& b2l[i] != '_')return 0;
	}

	token.position += total_roll;

	bool tokenpassedmid_thisturn = false;

	if (token.in_last && token.position > 6) {
		token.position -= total_roll;
		return 0;
	}
	if (token.in_last) {
		token.position -= total_roll;
		return 1;
	}

	if (token.position > 51 && !token.passed_mid) {
		token.position -= 52;
		token.passed_mid = 1;
		tokenpassedmid_thisturn = true;
	}

	if (token.position > 24 && token.passed_mid) {
		token.position -= 24;
		token.in_last = 1;
	}
	if (token.in_last && token.position > 6) {
		token.position += 24;
		token.position -= total_roll;
		token.in_last = 0;
		return 0;
	}

	if (token.in_last) {
		token.in_last = 0;
		token.position += 24;
		token.position -= total_roll;
	}
	else token.position -= total_roll;
	if (tokenpassedmid_thisturn) {
		token.position += 52;
		token.passed_mid = 0;
	}

	return 1;
}

void Parchisi::position2(Token& token, int total_roll)
{

	if (token.in_home) {
		token.in_home = 0;
		return;
	}

	token.position += total_roll;

	if (token.position > 51 && !token.passed_mid) {
		token.position -= 52;
		token.passed_mid = 1;
	}

	if (token.position > 24 && token.passed_mid) {
		token.position -= 24;
		token.in_last = 1;
	}
	if (token.position == 6 && token.in_last) {
		token.end = 1;
		endtokenthisturn = 1;
	}
	if (!token.end) {
		if (token.position == token1a.position) {
			beat2(token1a);
		}
		if (token.position == token1b.position) {
			beat2(token1b);
		}
		if (token.position == token1c.position) {
			beat2(token1c);
		}
		if (token.position == token1d.position) {
			beat2(token1d);
		}
	}

}

void Parchisi::beat2(Token& token)
{
	if (!token.in_home && !token.in_last && !token.end && token.position != 0 && token.position != 9 && token.position != 13
		&& token.position != 22 && token.position != 26 && token.position != 35
		&& token.position != 39 && token.position != 48) {
		token.position = 0;
		token.in_home = true;
		beathisturn = 1;
	}
}

void Parchisi::veto2()
{
	if ((roll1 + roll2 == 5) && roll1s && roll2s) {
		if (token2a.in_home && b[26] == '_') {
			token2a.in_home = 0;
			roll1s = 0, roll2s = 0;
		}
		else if (token2b.in_home && b[26] == '_') {
			token2b.in_home = 0;
			roll1s = 0, roll2s = 0;
		}
		else if (token2c.in_home && b[26] == '_') {
			token2c.in_home = 0;
			roll1s = 0, roll2s = 0;
		}
		else if (token2d.in_home && b[26] == '_') {
			token2d.in_home = 0;
			roll1s = 0, roll2s = 0;
		}
		return;
	}

	if (roll1 == roll2 && roll1s && roll2s) {
		int num = 0;
		for (int i = 0; i < 52 && num != 2; i++) {
			if (b[i] != '_') {
				if (token2a.position == i && !token2a.end && !token2a.in_home) {
					if (possible2(token2a, roll1)) {
						position2(token2a, roll1);
						roll1s = 0;
						num++;
					}
				}

				else if (token2b.position == i && !token2b.end && !token2b.in_home) {
					if (possible2(token2b, roll1)) {
						position2(token2b, roll1);
						roll1s = 0;
						num++;
					}
				}

				else if (token2c.position == i && !token2c.end && !token2c.in_home) {
					if (possible2(token2c, roll1)) {
						position2(token2c, roll1);
						roll1s = 0;
						num++;
					}
				}
				else if (token2d.position == i && !token2d.end && !token2d.in_home) {
					if (possible2(token2d, roll1)) {
						position2(token2d, roll1);
						roll1s = 0;
						num++;
					}
				}
			}
		}
		for (int i = 1; i < 6 && num != 2; i++) {
			if (b2l[i] != '_') {
				if (token2a.position == i && !token2a.end && token2a.in_last)
				{
					if (possible2(token2a, roll1)) {
						position2(token2a, roll1);
						roll1s = 0;
						num++;
					}
				}
				else if (token2b.position == i && !token2b.end && token2b.in_last)
				{
					if (possible2(token2b, roll1)) {
						position2(token2b, roll1);
						roll1s = 0;
						num++;
					}
				}
				else if (token2c.position == i && !token2c.end && token2c.in_last)
				{
					if (possible2(token2c, roll1)) {
						position2(token2c, roll1);
						roll1s = 0;
						num++;
					}
				}
				else if (token2d.position == i && !token2d.end && token2d.in_last)
				{
					if (possible2(token2d, roll1)) {
						position2(token2d, roll1);
						roll1s = 0;
						num++;
					}
				}
			}
		}
		if (num == 2)roll2s = 0;
	}

	if (roll1 == 5 && roll1s) {
		if (token2a.in_home && b[26] == '_') {
			token2a.in_home = 0;
			roll1s = 0;
		}
		else if (token2b.in_home && b[26] == '_') {
			token2b.in_home = 0;
			roll1s = 0;
		}
		else if (token2c.in_home && b[26] == '_') {
			token2c.in_home = 0;
			roll1s = 0;
		}
		else if (token2d.in_home && b[26] == '_') {
			token2d.in_home = 0;
			roll1s = 0;
		}
		tablechange();
	}

	if (roll2 == 5 && roll2s) {
		if (token2a.in_home && b[26] == '_') {
			token2a.in_home = 0;
			roll2s = 0;
		}
		else if (token2b.in_home && b[26] == '_') {
			token2b.in_home = 0;
			roll2s = 0;
		}
		else if (token2c.in_home && b[26] == '_') {
			token2c.in_home = 0;
			roll2s = 0;
		}
		else if (token2d.in_home && b[26] == '_') {
			token2d.in_home = 0;
			roll2s = 0;
		}
	}
}

void Parchisi::choosing2()
{
	choose2();
	bool go = true;
	if (roll1 == roll2) {
		if (!roll1s)go = 0;
	}
	if (choice2 == roll1 && go) {
		choose2r1();
		roll1s = 0;
		if (!roll1s && !roll2s) return;
		if (!roll2s)return;
		table();
		rollpossible2();
		if (roll2pos2a || roll2pos2b || roll2pos2c || roll2pos2d) {
			if (auto2())return;;
			std::cout << std::endl << "Choose token (" << roll2 << ") : ";
			std::cin >> choice1;
			while (choice1 != token2a.symbol && choice1 != token2b.symbol &&
				choice1 != token2c.symbol && choice1 != token2d.symbol) {
				std::cout << "Invalid input" << std::endl;
				std::cout << "Choose token (" << roll2 << ") : ";
				std::cin >> choice1;
			}

			choose2r2();
		}
	}
	else {
		choose2r2();
		roll2s = 0;
		if (!roll1s && !roll2s) return;
		if (!roll1s)return;
		table();
		rollpossible2();
		if (roll1pos2a || roll1pos2b || roll1pos2c || roll1pos2d)
		{
			if (auto2())return;;
			std::cout << std::endl << "Choose token (" << roll1 << ") : ";
			std::cin >> choice1;
			while (choice1 != token2a.symbol && choice1 != token2b.symbol &&
				choice1 != token2c.symbol && choice1 != token2d.symbol) {
				std::cout << "Invalid input" << std::endl;
				std::cout << "Choose token (" << roll1 << ") : ";
				std::cin >> choice1;
			}
			choose2r1();
		}
	}
}

void Parchisi::choose2()
{
	if (roll1s && roll2s) {
		std::cout << "Choose roll " << roll1 << " or " << roll2 << " : ";
		std::cin >> choice2;
	}
	else if (roll1s)choice2 = roll1;
	else if (roll2s)choice2 = roll2;
	while (choice2 != roll1 && choice2 != roll2) {
		std::cout << "Invalid input" << std::endl;
		std::cout << "Choose roll " << roll1 << " or " << roll2 << " : ";
		std::cin >> choice2;
	}

	std::cout << "Choose token(" << choice2 << "): ";
	std::cin >> choice1;
	while (choice1 != token2a.symbol && choice1 != token2b.symbol &&
		choice1 != token2c.symbol && choice1 != token2d.symbol) {
		std::cout << "Invalid input" << std::endl;
		std::cout << "Choose token: ";
		std::cin >> choice1;
	}
}

void Parchisi::choose2r1()
{
	if (choice1 == token2a.symbol) {
		if (roll1pos2a) {
			position2(token2a, roll1);
			return;
		}
	}
	else if (choice1 == token2b.symbol) {
		if (roll1pos2b) {
			position2(token2b, roll1);
			return;
		}
	}
	else if (choice1 == token2c.symbol) {
		if (roll1pos2c) {
			position2(token2c, roll1);
			return;
		}
	}
	else if (choice1 == token2d.symbol) {
		if (roll1pos2d) {
			position2(token2d, roll1);
			return;
		}
	}

	std::cout << "Not Possible" << std::endl;
	choosing2();
}

void Parchisi::choose2r2()
{
	if (choice1 == token2a.symbol) {
		if (roll2pos2a) {
			position2(token2a, roll2);
			return;
		}
	}
	else if (choice1 == token2b.symbol) {
		if (roll2pos2b) {
			position2(token2b, roll2);
			return;
		}
	}
	else if (choice1 == token2c.symbol) {
		if (roll2pos2c) {
			position2(token2c, roll2);
			return;
		}
	}
	else if (choice1 == token2d.symbol) {
		if (roll2pos2d) {
			position2(token2d, roll2);
			return;
		}
	}

	std::cout << "Not Possible" << std::endl;
	choosing2();
}

void Parchisi::rollpossible2()
{
	if (roll1s) {
		if (token2a.end) {
			roll1pos2a = 0;
			roll2pos2a = 0;
		}
		else {
			roll1pos2a = possible2(token2a, roll1);
		}
		if (token2b.end) {
			roll1pos2b = 0;
			roll2pos2b = 0;
		}
		else {
			roll1pos2b = possible2(token2b, roll1);
		}
		if (token2c.end) {
			roll1pos2c = 0;
			roll2pos2c = 0;
		}
		else {
			roll1pos2c = possible2(token2c, roll1);
		}
		if (token2d.end) {
			roll1pos2d = 0;
			roll2pos2d = 0;
		}
		else {
			roll1pos2d = possible2(token2d, roll1);
		}
	}
	if (roll2s) {
		if (token2a.end) {
			roll1pos2a = 0;
			roll2pos2a = 0;
		}
		else {
			roll2pos2a = possible2(token2a, roll2);
		}
		if (token2b.end) {
			roll1pos2b = 0;
			roll2pos2b = 0;
		}
		else {
			roll2pos2b = possible2(token2b, roll2);
		}
		if (token2c.end) {
			roll1pos2c = 0;
			roll2pos2c = 0;
		}
		else {
			roll2pos2c = possible2(token2c, roll2);
		}
		if (token2d.end) {
			roll1pos2d = 0;
			roll2pos2d = 0;
		}
		else {
			roll2pos2d = possible2(token2d, roll2);
		}
	}
}

bool Parchisi::auto2() {

	if (roll1pos2a && !roll1pos2b && !roll1pos2c && !roll1pos2d
		&& ((!roll2pos2a && !roll2pos2b && !roll2pos2c && !roll2pos2d) || !roll2s)) {
		if (roll1s) {
			position2(token2a, roll1);
			roll1s = 0;
			return 1;
		}
	}

	if (!roll1pos2a && !roll1pos2b && !roll1pos2c && !roll1pos2d
		&& ((!roll2pos2a && !roll2pos2b && !roll2pos2c && !roll2pos2d) || !roll2s)) {
		if (roll1s) {
			position2(token2b, roll1);
			roll1s = 0;
			return 1;
		}
	}

	if (!roll1pos2a && !roll1pos2b && roll1pos2c && !roll1pos2d
		&& ((!roll2pos2a && !roll2pos2b && !roll2pos2c && !roll2pos2d) || !roll2s)) {
		if (roll1s) {
			position2(token2c, roll1);
			roll1s = 0;
			return 1;
		}
	}

	if (!roll1pos2a && !roll1pos2b && !roll1pos2c && roll1pos2d
		&& ((!roll2pos2a && !roll2pos2b && !roll2pos2c && !roll2pos2d) || !roll2s)) {
		if (roll1s) {
			position2(token2d, roll1);
			roll1s = 0;
			return 1;
		}
	}

	if (((!roll1pos2a && !roll1pos2b && !roll1pos2c && !roll1pos2d) || !roll1s)
		&& roll2pos2a && !roll2pos2b && !roll2pos2c && !roll2pos2d) {
		if (roll2s) {
			position2(token2a, roll2);
			roll2s = 0;
			return 1;
		}
	}

	if (((!roll1pos2a && !roll1pos2b && !roll1pos2c && !roll1pos2d) || !roll1s)
		&& !roll2pos2a && roll2pos2b && !roll2pos2c && !roll2pos2d) {
		if (roll2s) {
			position2(token2b, roll2);
			roll2s = 0;
			return 1;
		}
	}

	if (((!roll1pos2a && !roll1pos2b && !roll1pos2c && !roll1pos2d) || !roll1s)
		&& !roll2pos2a && !roll2pos2b && roll2pos2c && !roll2pos2d) {
		if (roll2s) {
			position2(token2c, roll2);
			roll2s = 0;
			return 1;
		}
	}

	if (((!roll1pos2a && !roll1pos2b && !roll1pos2c && !roll1pos2d) || !roll1s)
		&& !roll2pos2a && !roll2pos2b && !roll2pos2c && roll2pos2d) {
		if (roll2s) {
			position2(token2d, roll2);
			roll2s = 0;
			return 1;
		}
	}
	return 0;
}




void Parchisi::turn1()
{
	beathisturn = 0;
	endtokenthisturn = 0;
	table();
	std::cout << UNDERLINE << std::endl << player1_name << "'s Turn" << STOP_UNDERLINE << ':' << std::endl;
	roll();
	roll1s = 1, roll2s = 1;
	veto1();
	rollpossible1();
	if (roll1pos1a || roll1pos1b || roll1pos1c || roll1pos1d
		|| roll2pos1a || roll2pos1b || roll2pos1c || roll2pos1d) {
		table();
		std::cout << UNDERLINE << std::endl << player1_name << "'s Turn" << STOP_UNDERLINE << ':' << std::endl;
		std::cout << "You rolled a " << roll1 << " and " << roll2 << std::endl;
		if (!roll1s && !roll2s) {
			_getch();
			return;
		}
		if (roll1pos1a || roll1pos1b || roll1pos1c || roll1pos1d
			|| roll2pos1a || roll2pos1b || roll2pos1c || roll2pos1d) {
			rollpossible1();
			if (auto1())return;;
			choosing1();
		}
	}
	if (endtokenthisturn) {
		if (beathisturn)turn1();
		if (roll1 == roll2)turn1();
		turn1();
	}
	else if (beathisturn) {
		if (roll1 == roll2)turn1();
		turn1();
	}
	else if (roll1 == roll2)turn1();
}

void Parchisi::turn2()
{
	beathisturn = 0;
	endtokenthisturn = 0;
	table();
	std::cout << UNDERLINE << std::endl << player2_name << "'s Turn" << STOP_UNDERLINE << ':' << std::endl;
	roll();
	roll1s = 1, roll2s = 1;
	veto2();
	rollpossible2();
	if (roll1pos2a || roll1pos2b || roll1pos2c || roll1pos2d
		|| roll2pos2a || roll2pos2b || roll2pos2c || roll2pos2d) {
		table();
		std::cout << UNDERLINE << std::endl << player2_name << "'s Turn" << STOP_UNDERLINE << ':' << std::endl;
		std::cout << "You rolled a " << roll1 << " and " << roll2 << std::endl;
		if (!roll1s && !roll2s) {
			_getch();
			return;
		}
		if (roll1pos2a || roll1pos2b || roll1pos2c || roll1pos2d
			|| roll2pos2a || roll2pos2b || roll2pos2c || roll2pos2d) {
			rollpossible2();
			if (auto2())return;;
			choosing2();
		}
	}
	if (endtokenthisturn) {
		if (beathisturn)turn2();
		if (roll1 == roll2)turn2();
		turn2();
	}
	else if (beathisturn) {
		if (roll1 == roll2)turn2();
		turn2();
	}
	else if (roll1 == roll2)turn2();
}

void Parchisi::reset() {
	token1a.reset(0, 1, 0, '1', 0), token1b.reset(0, 1, 0, '2', 0), token1c.reset(0, 1, 0, '3', 0),
		token1d.reset(0, 1, 0, '4', 0), token2a.reset(26, 1, 0, 'a', 0), token2b.reset(26, 1, 0, 'b', 0),
		token2c.reset(26, 1, 0, 'c', 0), token2d.reset(26, 1, 0, 'd', 0);
}