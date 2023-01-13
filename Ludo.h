
#pragma once
#include<time.h>
#include<cstdlib>
#include<iostream>
#include<conio.h>
#include<string>
#include<Windows.h>
#include"Global.h"
using namespace std;

#define RED "\u001B[31m"
#define RESET "\u001B[0m"
#define YELLOW "\u001B[33m"
#define CYAN "\u001B[36m"

class Token2 {
public:
	int position;
	bool in_home;
	bool in_last;
	char symbol;
	bool end;
	bool passed_mid = false;
	void reset(int a_position, bool home, bool last, char asymbol, bool endd) {
		position = a_position;
		in_home = home;
		symbol = asymbol;
		in_last = last;
		end = endd;
	}
	Token2(int a_position, bool home, bool last, char asymbol, bool endd) {
		position = a_position;
		in_home = home;
		symbol = asymbol;
		in_last = last;
		end = endd;
	}
};
Token2 tokenludo1a(0, 1, 0, '1', 0), tokenludo1b(0, 1, 0, '2', 0), tokenludo1c(0, 1, 0, '3', 0),
tokenludo1d(0, 1, 0, '4', 0), tokenludo2a(26, 1, 0, 'a', 0), tokenludo2b(26, 1, 0, 'b', 0),
tokenludo2c(26, 1, 0, 'c', 0), tokenludo2d(26, 1, 0, 'd', 0);


class Ludo {
public:
	HWND wh = GetConsoleWindow();

	void table(string player1_name, string player2_name) {
		system("CLS");

		a = "_   ______  ______   _______   ______  ______   ____            ";
		same = "         _                             _            ";
		p1l = " _____ ";
		p2l = " _______                   ";
		p1a = ' ', p1b = ' ', p1c = ' ', p1d = ' ', p2a = ' ', p2b = ' ', p2c = ' ', p2d = ' ';
		end1a = ' ', end1b = ' ', end1c = ' ', end1d = ' ', end2a = '_', end2b = '_', end2c = '_', end2d = '_';

		if (tokenludo1a.in_home) p1a = tokenludo1a.symbol;
		else if (tokenludo1a.end) end1a = tokenludo1a.symbol;
		else if (tokenludo1a.in_last) p1l[tokenludo1a.position] = tokenludo1a.symbol;
		else if (a[tokenludo1a.position] != ' ' && a[tokenludo1a.position] != '_')
			same[tokenludo1a.position] = tokenludo1a.symbol;
		else a[tokenludo1a.position] = tokenludo1a.symbol;

		if (tokenludo1b.in_home) p1b = tokenludo1b.symbol;
		else if (tokenludo1b.end) end1b = tokenludo1b.symbol;
		else if (tokenludo1b.in_last) p1l[tokenludo1b.position] = tokenludo1b.symbol;
		else if (a[tokenludo1b.position] != ' ' && a[tokenludo1b.position] != '_')
			same[tokenludo1b.position] = tokenludo1b.symbol;
		else a[tokenludo1b.position] = tokenludo1b.symbol;

		if (tokenludo1c.in_home) p1c = tokenludo1c.symbol;
		else if (tokenludo1c.end) end1c = tokenludo1c.symbol;
		else if (tokenludo1c.in_last) p1l[tokenludo1c.position] = tokenludo1c.symbol;
		else if (a[tokenludo1c.position] != ' ' && a[tokenludo1c.position] != '_')
			same[tokenludo1c.position] = tokenludo1c.symbol;
		else a[tokenludo1c.position] = tokenludo1c.symbol;

		if (tokenludo1d.in_home) p1d = tokenludo1d.symbol;
		else if (tokenludo1d.end) end1d = tokenludo1d.symbol;
		else if (tokenludo1d.in_last) p1l[tokenludo1d.position] = tokenludo1d.symbol;
		else if (a[tokenludo1d.position] != ' ' && a[tokenludo1d.position] != '_')
			same[tokenludo1d.position] = tokenludo1d.symbol;
		else a[tokenludo1d.position] = tokenludo1d.symbol;

		if (tokenludo2a.in_home) p2a = tokenludo2a.symbol;
		else if (tokenludo2a.end) end2a = tokenludo2a.symbol;
		else if (tokenludo2a.in_last) p2l[tokenludo2a.position] = tokenludo2a.symbol;
		else if (a[tokenludo2a.position] != ' ' && a[tokenludo2a.position] != '_')
			same[tokenludo2a.position] = tokenludo2a.symbol;
		else a[tokenludo2a.position] = tokenludo2a.symbol;

		if (tokenludo2b.in_home) p2b = tokenludo2b.symbol;
		else if (tokenludo2b.end) end2b = tokenludo2b.symbol;
		else if (tokenludo2b.in_last) p2l[tokenludo2b.position] = tokenludo2b.symbol;
		else if (a[tokenludo2b.position] != ' ' && a[tokenludo2b.position] != '_')
			same[tokenludo2b.position] = tokenludo2b.symbol;
		else a[tokenludo2b.position] = tokenludo2b.symbol;

		if (tokenludo2c.in_home) p2c = tokenludo2c.symbol;
		else if (tokenludo2c.end) end2c = tokenludo2c.symbol;
		else if (tokenludo2c.in_last) p2l[tokenludo2c.position] = tokenludo2c.symbol;
		else if (a[tokenludo2c.position] != ' ' && a[tokenludo2c.position] != '_')
			same[tokenludo2c.position] = tokenludo2c.symbol;
		else a[tokenludo2c.position] = tokenludo2c.symbol;

		if (tokenludo2d.in_home) p2d = tokenludo2d.symbol;
		else if (tokenludo2d.end) end2d = tokenludo2d.symbol;
		else if (tokenludo2d.in_last) p2l[tokenludo2d.position] = tokenludo2d.symbol;
		else if (a[tokenludo2d.position] != ' ' && a[tokenludo2d.position] != '_')
			same[tokenludo2d.position] = tokenludo2d.symbol;
		else a[tokenludo2d.position] = tokenludo2d.symbol;

		cout << "               ________         " << endl;
		cout << "              |_" << a[49] << " _" << a[50] << " _" << a[51] << "|" << endl;
		cout << "             " << same[48] << YELLOW << '|' << RESET << '_' << a[48] << YELLOW << '|' << RESET << RED << p1l[1] << '_' << YELLOW << '|' << RESET << '_' << a[0] << YELLOW << '|' << RESET << same[0] << "     " << RED << p1a << "  " << p1b << RESET << endl;
		cout << "              | " << a[47] << "|" << RED << p1l[2] << '_' << RESET << "| " << a[1] << "|      " << RED << p1c << "  " << p1d << RESET << endl;
		cout << "              | " << a[46] << "|" << RED << p1l[3] << '_' << RESET << "| " << a[2] << "| " << endl;
		cout << "              | " << a[45] << "|" << RED << p1l[4] << '_' << RESET << "| " << a[3] << "| " << endl;
		cout << " __" << same[39] << "__________|_" << a[44] << "|" << RED << p1l[5] << '_' << RESET << "|_" << a[4] << "|__________" << same[9] << "__" << endl;
		cout << "|" << a[38] << YELLOW << '|' << RESET << a[39] << YELLOW << '|' << RESET << '_' << a[40] << "_" << a[41] << "_" << a[42] << "_" << a[43] << "_" << "|  " << end1a << end1b << end1c << end1d << "  |_" << a[5] << "_" << a[6] << "_" << a[7] << "_" << a[8] << '_' << YELLOW << '|' << RESET << a[9] << YELLOW << '|' << RESET << a[10] << "|" << endl;
		cout << "|" << a[37] << "|___________          ___________|" << a[11] << "| " << endl;
		cout << "|" << a[36] << YELLOW << '|' << RESET << a[35] << YELLOW << '|' << RESET << '_' << a[34] << "_" << a[33] << "_" << a[32] << "_" << a[31] << "_|__" << end2a << end2b << end2c << end2d << "__|_" << a[17] << "_" << a[16] << "_" << a[15] << "_" << a[14] << '_' << YELLOW << '|' << RESET << a[13] << YELLOW << '|' << RESET << a[12] << "| " << endl;
		cout << "   " << same[35] << "          |" << a[30] << " |" << CYAN << '_' << p2l[5] << RESET << "| " << a[18] << "|          " << same[13] << endl;
		cout << "              |" << a[29] << " |" << CYAN << '_' << p2l[4] << RESET << "| " << a[19] << "|        " << endl;
		cout << "              |" << a[28] << " |" << CYAN << '_' << p2l[3] << RESET << "| " << a[20] << "|        " << endl;
		cout << "    " << CYAN << p2a << "  " << p2b << RESET << "      |" << a[27] << "_|" << CYAN << '_' << p2l[2] << RESET << "|_" << a[21] << "| " << endl;
		cout << "    " << CYAN << p2c << "  " << p2d << RESET << "     " << same[26] << YELLOW << '|' << RESET << a[26] << '_' << YELLOW << '|' << RESET << CYAN << '_' << p2l[1] << RESET << YELLOW << '|' << RESET << '_' << a[22] << YELLOW << "| " << RESET << same[22] << endl;
		cout << "              |" << a[25] << "___" << a[24] << "__" << a[23] << "|        " << endl;
	}
	void start() {

		MoveWindow(wh, 200, 100, 600, 400, TRUE);
		system("CLS");
		std::cout << std::endl << CYAN << "   Game : Ludo" << std::endl << std::endl;
		std::cout << std::endl << std::endl;
		std::cout << YELLOW << "   Press any key to roll the dice." << std::endl;
		std::cout << "   If all 4 tokens of any player reach the end, the player wins." << std::endl;
		std::cout << "   Best of Luck!" << std::endl << std::endl;
		std::cout << "   Press any key to start the game..." << RESET;
		_getch();
		system("CLS");
		
	}
	string name1() {
		system("CLS");
		string player1_name;
		cout << "Enter Player 1 Name: ";
		cin.ignore();
		getline(cin, player1_name);
		return player1_name;

	}
	string name2() {
		string player2_name;
		cout << "Enter Player 2 Name: ";
		cin.ignore();
		getline(cin, player2_name);
		return player2_name;
	}
	bool stop() {

		if (tokenludo1a.end && tokenludo1b.end && tokenludo1c.end && tokenludo1d.end) {
			_getch();
			system("CLS");
			cout << "Player 1 Won!!" << endl;
			_getch();
			return 1;
		}
		if (tokenludo2a.end && tokenludo2b.end && tokenludo2c.end && tokenludo2d.end) {
			_getch();
			system("CLS");
			cout << "Player 2 Won!!" << endl;
			_getch();
			return 1;
		}
		return 0;
	}

	int dice() {
		return (rand() % 6 + 1);
	}
	int roll() {

		cout << "Roll..." << endl;
		_getch();
		int roll2 = 0;
		int roll = dice();
		if (roll == 6) {
			roll2 = dice();
			cout << "You rolled a " << roll << " and " << roll2 << endl;
		}
		else  cout << "You rolled a " << roll << endl;
		_getch();
		return roll + roll2;
	}

	bool possible1(Token2& tokenludo, int total_roll) {

		if (tokenludo.in_home) {
			if (total_roll >= 6) {
				if (same[0] != ' ')return 0;
				tokenludo.position += (total_roll - 6);

				if (tokenludo.symbol == tokenludo1a.symbol) {

					if (tokenludo.position == tokenludo1b.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo1c.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo1d.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo1b.symbol) {
					if (tokenludo.position == tokenludo1a.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo1c.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo1d.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo1c.symbol) {
					if (tokenludo.position == tokenludo1a.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo1b.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo1d.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo1d.symbol) {
					if (tokenludo.position == tokenludo1a.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo1b.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo1c.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}

				}

				tokenludo.position -= (total_roll - 6);
			}

			else return 0;
		}
		else {
			if (tokenludo.position < 9 && (tokenludo.position + total_roll) == 9
				&& same[9] != ' ' && same[9] != '_') return 0;
			if (tokenludo.position < 13 && (tokenludo.position + total_roll) == 13
				&& same[13] != ' ' && same[13] != '_') return 0;
			if (tokenludo.position < 22 && (tokenludo.position + total_roll) == 22
				&& same[22] != ' ' && same[22] != '_') return 0;
			if (tokenludo.position < 26 && (tokenludo.position + total_roll) == 26
				&& same[26] != ' ' && same[26] != '_') return 0;
			if (tokenludo.position < 35 && (tokenludo.position + total_roll) == 35
				&& same[35] != ' ' && same[35] != '_') return 0;
			if (tokenludo.position < 39 && (tokenludo.position + total_roll) == 39
				&& same[39] != ' ' && same[39] != '_') return 0;
			if (tokenludo.position < 48 && (tokenludo.position + total_roll) == 48
				&& same[48] != ' ' && same[48] != '_') return 0;

			tokenludo.position += total_roll;

			if (tokenludo.in_last && tokenludo.position > 6) {
				tokenludo.position -= total_roll;
				return 0;
			}
			if (tokenludo.in_last) {
				if (tokenludo.symbol == tokenludo1a.symbol) {

					if (tokenludo.position == tokenludo1b.position && tokenludo.in_last == tokenludo1b.in_last && !tokenludo1b.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1c.position && tokenludo.in_last == tokenludo1c.in_last && !tokenludo1c.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1d.position && tokenludo.in_last == tokenludo1d.in_last && !tokenludo1d.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo1b.symbol) {
					if (tokenludo.position == tokenludo1a.position && tokenludo.in_last == tokenludo1a.in_last && !tokenludo1a.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1c.position && tokenludo.in_last == tokenludo1c.in_last && !tokenludo1c.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1d.position && tokenludo.in_last == tokenludo1d.in_last && !tokenludo1d.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo1c.symbol) {
					if (tokenludo.position == tokenludo1a.position && tokenludo.in_last == tokenludo1a.in_last && !tokenludo1a.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1b.position && tokenludo.in_last == tokenludo1b.in_last && !tokenludo1b.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1d.position && tokenludo.in_last == tokenludo1d.in_last && !tokenludo1d.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo1d.symbol) {
					if (tokenludo.position == tokenludo1a.position && tokenludo.in_last == tokenludo1a.in_last && !tokenludo1a.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1b.position && tokenludo.in_last == tokenludo1b.in_last && !tokenludo1b.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1c.position && tokenludo.in_last == tokenludo1c.in_last && !tokenludo1c.end) {
						tokenludo.position -= total_roll;
						return 0;
					}

				}

				tokenludo.position -= total_roll;

				return 1;
			}

			if (tokenludo.position > 50) {
				tokenludo.position -= 50;
				tokenludo.in_last = 1;
			}
			if (tokenludo.in_last && tokenludo.position > 6) {
				tokenludo.position += 50;
				tokenludo.position -= total_roll;
				tokenludo.in_last = 0;
				return 0;
			}
			if (tokenludo.position != 9 && tokenludo.position != 13
				&& tokenludo.position != 22 && tokenludo.position != 26 && tokenludo.position != 35
				&& tokenludo.position != 39 && tokenludo.position != 48) {

				if (tokenludo.symbol == tokenludo1a.symbol) {

					if (tokenludo.position == tokenludo1b.position && tokenludo.in_last == tokenludo1b.in_last && !tokenludo1b.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1c.position && tokenludo.in_last == tokenludo1c.in_last && !tokenludo1c.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1d.position && tokenludo.in_last == tokenludo1d.in_last && !tokenludo1d.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo1b.symbol) {
					if (tokenludo.position == tokenludo1a.position && tokenludo.in_last == tokenludo1a.in_last && !tokenludo1a.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1c.position && tokenludo.in_last == tokenludo1c.in_last && !tokenludo1c.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1d.position && tokenludo.in_last == tokenludo1d.in_last && !tokenludo1d.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo1c.symbol) {
					if (tokenludo.position == tokenludo1a.position && tokenludo.in_last == tokenludo1a.in_last && !tokenludo1a.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1b.position && tokenludo.in_last == tokenludo1b.in_last && !tokenludo1b.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1d.position && tokenludo.in_last == tokenludo1d.in_last && !tokenludo1d.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo1d.symbol) {
					if (tokenludo.position == tokenludo1a.position && tokenludo.in_last == tokenludo1a.in_last && !tokenludo1a.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1b.position && tokenludo.in_last == tokenludo1b.in_last && !tokenludo1b.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo1c.position && tokenludo.in_last == tokenludo1c.in_last && !tokenludo1c.end) {
						tokenludo.position -= total_roll;
						return 0;
					}

				}
			}
			if (tokenludo.in_last) {
				tokenludo.in_last = 0;
				tokenludo.position += 50;
				tokenludo.position -= total_roll;
			}
			else tokenludo.position -= total_roll;
		}
		return 1;
	}
	void position1(Token2& tokenludo, int total_roll) {
		{

			if (tokenludo.in_home) {
				if (total_roll >= 6) {
					tokenludo.position += (total_roll - 6);
					tokenludo.in_home = 0;
				}
			}
			else {

				tokenludo.position += total_roll;

				if (tokenludo.position > 50) {
					tokenludo.position -= 50;
					tokenludo.in_last = 1;
				}
				if (tokenludo.position == 6 && tokenludo.in_last) {
					tokenludo.end = 1;
				}
				if (!tokenludo.end) {
					if (tokenludo.position == tokenludo2a.position) {
						beat1(tokenludo2a);
					}
					if (tokenludo.position == tokenludo2b.position) {
						beat1(tokenludo2b);
					}
					if (tokenludo.position == tokenludo2c.position) {
						beat1(tokenludo2c);
					}
					if (tokenludo.position == tokenludo2d.position) {
						beat1(tokenludo2d);
					}
				}
			}
		}
	}
	void beat1(Token2& tokenludo) {
		if (!tokenludo.in_home && !tokenludo.in_last && tokenludo.position != 9 && tokenludo.position != 13
			&& tokenludo.position != 22 && tokenludo.position != 26 && tokenludo.position != 35
			&& tokenludo.position != 39 && tokenludo.position != 48) {
			tokenludo.position = 26;
			tokenludo.in_home = true;
			tokenludo.passed_mid = false;
		}
	}

	bool possible2(Token2& tokenludo, int total_roll) {

		if (tokenludo.in_home) {
			if (total_roll >= 6) {
				if (same[26] != ' ')return 0;

				tokenludo.position += (total_roll - 6);

				if (tokenludo.symbol == tokenludo2a.symbol) {

					if (tokenludo.position == tokenludo2b.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo2c.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo2d.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo2b.symbol) {
					if (tokenludo.position == tokenludo2a.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo2c.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo2d.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo2c.symbol) {
					if (tokenludo.position == tokenludo2a.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo2b.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo2d.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo2d.symbol) {
					if (tokenludo.position == tokenludo2a.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo2b.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}
					if (tokenludo.position == tokenludo2c.position) {
						tokenludo.position -= (total_roll - 6);
						return 0;
					}

				}
				tokenludo.position -= (total_roll - 6);
			}

			else return 0;
		}
		else {
			if (tokenludo.position < 52 && !tokenludo.passed_mid && (tokenludo.position + total_roll) == 52
				&& same[0] != ' ' && same[0] != '_') return 0;
			if (tokenludo.position < 9 && (tokenludo.position + total_roll) == 9
				&& same[9] != ' ' && same[9] != '_') return 0;
			if (tokenludo.position < 13 && (tokenludo.position + total_roll) == 13
				&& same[13] != ' ' && same[13] != '_') return 0;
			if (tokenludo.position < 22 && (tokenludo.position + total_roll) == 22
				&& same[22] != ' ' && same[22] != '_') return 0;
			if (tokenludo.position < 35 && (tokenludo.position + total_roll) == 35
				&& same[35] != ' ' && same[35] != '_') return 0;
			if (tokenludo.position < 39 && (tokenludo.position + total_roll) == 39
				&& same[39] != ' ' && same[39] != '_') return 0;
			if (tokenludo.position < 48 && (tokenludo.position + total_roll) == 48
				&& same[48] != ' ' && same[48] != '_') return 0;

			tokenludo.position += total_roll;

			bool tokenludopassedmid_thisturn = false;

			if (tokenludo.in_last && tokenludo.position > 6) {
				tokenludo.position -= total_roll;
				return 0;
			}

			if (tokenludo.position > 51 && !tokenludo.passed_mid) {
				tokenludo.position -= 52;
				tokenludo.passed_mid = 1;
				tokenludopassedmid_thisturn = true;
			}

			if (tokenludo.in_last) {
				if (tokenludo.symbol == tokenludo2a.symbol) {

					if (tokenludo.position == tokenludo2b.position && tokenludo.in_last == tokenludo2b.in_last && !tokenludo2b.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2c.position && tokenludo.in_last == tokenludo2c.in_last && !tokenludo2c.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2d.position && tokenludo.in_last == tokenludo2d.in_last && !tokenludo2d.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo2b.symbol) {
					if (tokenludo.position == tokenludo2a.position && tokenludo.in_last == tokenludo2a.in_last && !tokenludo2a.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2c.position && tokenludo.in_last == tokenludo2c.in_last && !tokenludo2c.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2d.position && tokenludo.in_last == tokenludo2d.in_last && !tokenludo2d.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo2c.symbol) {
					if (tokenludo.position == tokenludo2a.position && tokenludo.in_last == tokenludo2a.in_last && !tokenludo2a.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2b.position && tokenludo.in_last == tokenludo2b.in_last && !tokenludo2b.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2d.position && tokenludo.in_last == tokenludo2d.in_last && !tokenludo2d.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo2d.symbol) {
					if (tokenludo.position == tokenludo2a.position && tokenludo.in_last == tokenludo2a.in_last && !tokenludo2a.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2b.position && tokenludo.in_last == tokenludo2b.in_last && !tokenludo2b.end) {
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2c.position && tokenludo.in_last == tokenludo2c.in_last && !tokenludo2c.end) {
						tokenludo.position -= total_roll;
						return 0;
					}

				}

				tokenludo.position -= total_roll;

				return 1;
			}


			if (tokenludo.position > 24 && tokenludo.passed_mid) {
				tokenludo.position -= 24;
				tokenludo.in_last = 1;
			}
			if (tokenludo.in_last && tokenludo.position > 6) {
				tokenludo.position += 24;
				tokenludo.position -= total_roll;
				tokenludo.in_last = 0;
				return 0;
			}
			if (tokenludo.position != 9 && tokenludo.position != 13
				&& tokenludo.position != 22 && tokenludo.position != 0 && tokenludo.position != 35
				&& tokenludo.position != 39 && tokenludo.position != 48) {

				if (tokenludo.symbol == tokenludo2a.symbol) {

					if (tokenludo.position == tokenludo2b.position && tokenludo.in_last == tokenludo2b.in_last && !tokenludo2b.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}

						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2c.position && tokenludo.in_last == tokenludo2c.in_last && !tokenludo2c.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2d.position && tokenludo.in_last == tokenludo2d.in_last && !tokenludo2d.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo2b.symbol) {
					if (tokenludo.position == tokenludo2a.position && tokenludo.in_last == tokenludo2a.in_last && !tokenludo2a.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2c.position && tokenludo.in_last == tokenludo2c.in_last && !tokenludo2c.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2d.position && tokenludo.in_last == tokenludo2d.in_last && !tokenludo2d.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo2c.symbol) {
					if (tokenludo.position == tokenludo2a.position && tokenludo.in_last == tokenludo2a.in_last && !tokenludo2a.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2b.position && tokenludo.in_last == tokenludo2b.in_last && !tokenludo2b.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2d.position && tokenludo.in_last == tokenludo2d.in_last && !tokenludo2d.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}
						tokenludo.position -= total_roll;
						return 0;
					}
				}

				if (tokenludo.symbol == tokenludo2d.symbol) {
					if (tokenludo.position == tokenludo2a.position && tokenludo.in_last == tokenludo2a.in_last && !tokenludo2a.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2b.position && tokenludo.in_last == tokenludo2b.in_last && !tokenludo2b.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}
						tokenludo.position -= total_roll;
						return 0;
					}
					if (tokenludo.position == tokenludo2c.position && tokenludo.in_last == tokenludo2c.in_last && !tokenludo2c.end) {
						if (tokenludo.in_last) {
							tokenludo.position += 24;
							tokenludo.in_last = 0;
						}
						if (tokenludopassedmid_thisturn) {
							tokenludo.position += 52;
							tokenludo.passed_mid = 0;
						}
						tokenludo.position -= total_roll;
						return 0;
					}

				}
			}

			if (tokenludo.in_last) {
				tokenludo.in_last = 0;
				tokenludo.position += 24;
				tokenludo.position -= total_roll;
			}
			else tokenludo.position -= total_roll;
			if (tokenludopassedmid_thisturn) {
				tokenludo.position += 52;
				tokenludo.passed_mid = 0;
			}
		}
		return 1;
	}
	void position2(Token2& tokenludo, int total_roll) {
		{

			if (tokenludo.in_home) {
				if (total_roll >= 6) {
					tokenludo.position += (total_roll - 6);
					tokenludo.in_home = 0;
				}
			}
			else {

				tokenludo.position += total_roll;

				if (tokenludo.position > 51 && !tokenludo.passed_mid) {
					tokenludo.position -= 52;
					tokenludo.passed_mid = 1;
				}

				if (tokenludo.position > 24 && tokenludo.passed_mid) {
					tokenludo.position -= 24;
					tokenludo.in_last = 1;
				}
				if (tokenludo.position == 6 && tokenludo.in_last) {
					tokenludo.end = 1;
				}
				if (!tokenludo.end) {
					if (tokenludo.position == tokenludo1a.position) {
						beat2(tokenludo1a);
					}
					if (tokenludo.position == tokenludo1b.position) {
						beat2(tokenludo1b);
					}
					if (tokenludo.position == tokenludo1c.position) {
						beat2(tokenludo1c);
					}
					if (tokenludo.position == tokenludo1d.position) {
						beat2(tokenludo1d);
					}
				}
			}
		}
	}
	void beat2(Token2& tokenludo) {
		if (!tokenludo.in_home && !tokenludo.in_last && tokenludo.position != 9 && tokenludo.position != 13
			&& tokenludo.position != 22 && tokenludo.position != 26 && tokenludo.position != 35
			&& tokenludo.position != 39 && tokenludo.position != 48) {
			tokenludo.position = 0;
			tokenludo.in_home = true;

		}
	}

	void turn1(int roll) {

		bool possible1a, possible1b, possible1c, possible1d;
		if (tokenludo1a.end)possible1a = 0;
		else possible1a = possible1(tokenludo1a, roll);
		if (tokenludo1b.end)possible1b = 0;
		else possible1b = possible1(tokenludo1b, roll);
		if (tokenludo1c.end)possible1c = 0;
		else possible1c = possible1(tokenludo1c, roll);
		if (tokenludo1d.end)possible1d = 0;
		else possible1d = possible1(tokenludo1d, roll);


		if (possible1a || possible1b || possible1c || possible1d) {

			if (possible1a && !possible1b && !possible1c && !possible1d) {
				position1(tokenludo1a, roll);
				return;
			}
			if (!possible1a && possible1b && !possible1c && !possible1d) {
				position1(tokenludo1b, roll);
				return;
			}
			if (!possible1a && !possible1b && possible1c && !possible1d) {
				position1(tokenludo1c, roll);
				return;
			}
			if (!possible1a && !possible1b && !possible1c && possible1d) {
				position1(tokenludo1d, roll);
				return;
			}
			cout << "Choose token : ";
			cin >> choice1;
			bool next = 0;
			while (next != 1) {
				if (choice1 == tokenludo1a.symbol) {
					if (possible1a) {
						position1(tokenludo1a, roll);
						break;
					}
				}
				if (choice1 == tokenludo1b.symbol) {
					if (possible1b) {
						position1(tokenludo1b, roll);
						break;
					}
				}
				if (choice1 == tokenludo1c.symbol) {
					if (possible1c) {
						position1(tokenludo1c, roll);
						break;
					}
				}
				if (choice1 == tokenludo1d.symbol) {
					if (possible1d) {
						position1(tokenludo1d, roll);
						break;
					}
				}
				cout << "Not Possible" << endl;
				cout << "Choose token : ";
				cin >> choice1;
			}
		}
	}
	void turn2(int roll) {

		bool possible2a, possible2b, possible2c, possible2d;
		if (tokenludo2a.end)possible2a = 0;
		else possible2a = possible2(tokenludo2a, roll);
		if (tokenludo2b.end)possible2b = 0;
		else possible2b = possible2(tokenludo2b, roll);
		if (tokenludo2c.end)possible2c = 0;
		else possible2c = possible2(tokenludo2c, roll);
		if (tokenludo2d.end)possible2d = 0;
		else possible2d = possible2(tokenludo2d, roll);

		if (possible2a || possible2b || possible2c || possible2d) {

			if (possible2a && !possible2b && !possible2c && !possible2d) {
				position2(tokenludo2a, roll);
				return;
			}
			if (!possible2a && possible2b && !possible2c && !possible2d) {
				position2(tokenludo2b, roll);
				return;
			}
			if (!possible2a && !possible2b && possible2c && !possible2d) {
				position2(tokenludo2c, roll);
				return;
			}
			if (!possible2a && !possible2b && !possible2c && possible2d) {
				position2(tokenludo2d, roll);
				return;
			}
			cout << "Choose token : ";
			cin >> choice1;
			bool next = 0;
			while (next != 1) {
				if (choice1 == tokenludo2a.symbol) {
					if (possible2a) {
						position2(tokenludo2a, roll);
						break;
					}
				}
				if (choice1 == tokenludo2b.symbol) {
					if (possible2b) {
						position2(tokenludo2b, roll);
						break;
					}
				}
				if (choice1 == tokenludo2c.symbol) {
					if (possible2c) {
						position2(tokenludo2c, roll);
						break;
					}
				}
				if (choice1 == tokenludo2d.symbol) {
					if (possible2d) {
						position2(tokenludo2d, roll);
						break;
					}
				}
				cout << "Not Possible" << endl;
				cout << "Choose token : ";
				cin >> choice1;
			}
		}

	}
	void reset() {
		tokenludo1a.reset(0, 1, 0, '1', 0), tokenludo1b.reset(0, 1, 0, '2', 0), tokenludo1c.reset(0, 1, 0, '3', 0),
			tokenludo1d.reset(0, 1, 0, '4', 0), tokenludo2a.reset(26, 1, 0, 'a', 0), tokenludo2b.reset(26, 1, 0, 'b', 0),
			tokenludo2c.reset(26, 1, 0, 'c', 0), tokenludo2d.reset(26, 1, 0, 'd', 0);
	}


	Ludo() {
		start();
		string player1_name = name1();
		string player2_name = name2();
		system("CLS");
		MoveWindow(wh, 200, 50, 500, 500, TRUE);
		while (!stop()) {

			table(player1_name, player2_name);
			cout << endl << player1_name << "'s Turn:" << endl;
			int total_roll = roll();
			turn1(total_roll);
			table(player1_name, player2_name);
			if (stop()) break;
			cout << endl << player2_name << "'s Turn:" << endl;
			total_roll = roll();
			turn2(total_roll);
			system("CLS");
		}
		reset();
	}
};
