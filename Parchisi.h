#pragma once
#include<time.h>
#include<cstdlib>
#include<iostream>
#include<conio.h>
#include<string>
#include"Global.h"

class Token {
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
	Token(int a_position, bool home, bool last, char asymbol, bool endd) {
		position = a_position;
		in_home = home;
		symbol = asymbol;
		in_last = last;
		end = endd;
	}
};

class Parchisi
{

public:
	HWND wh = GetConsoleWindow();
	void table();
	void tablechange();
	void start();
	void name();
	bool stop();

	int dice();
	int roll();

	bool possible1(Token& token, int total_roll);
	void position1(Token& token, int total_roll);
	void beat1(Token& token);
	void choose1();
	void choose1r1();
	void choose1r2();
	void rollpossible1();
	void veto1();
	void choosing1();
	bool auto1();

	bool possible2(Token& token, int total_roll);
	void position2(Token& token, int total_roll);
	void beat2(Token& token);
	void choose2();
	void choose2r1();
	void choose2r2();
	void rollpossible2();
	void veto2();
	void choosing2();
	bool auto2();

	void turn1();
	void turn2();
	void reset();

	Parchisi() {
		start();
		system("CLS");
		while (!stop()) {
			turn1();
			if (stop()) break;
			turn2();
		}
		reset();
	}
};





#pragma once
