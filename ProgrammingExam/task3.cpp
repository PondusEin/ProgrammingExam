#include "Menu.h"
#include <string>
#include <conio.h>
#include <vector>
static constexpr int KEY_UP = 72;
static constexpr int KEY_DOWN = 80;
static constexpr int KEY_LEFT = 75;
static constexpr int KEY_RIGHT = 77;
void task3() {
	int amount = 0;
		int pos{ 0 };
		unsigned char Player = '*';
		const char BLANK = ' ';

		std::vector<std::string> Sentence{};

		std::cout << "How many letters will you have : ";
		std::cin >> amount;
		Sentence.capacity();
		do {
			system("cls");
			for (size_t i = 0; i < pos; i++)
			{
				std::cout << "  ";
			}
			std::cout << "|V|" << std::endl;
			for (int i = 0; i < Sentence.size(); i++)
			{
				std::cout << '[' << Sentence[0] << ']';
			}
			if (Sentence.size())
			{
				break;
			}
			switch (_getch())
			{
			case 87: case 119: case 72:
				Sentence[pos];
				break;
			case 97: case 65: case 75:
				if (pos > 0)
					pos--;
				break;
			case 115: case 83: case 80:
				Sentence[pos];
				break;
			case 68: case 100: case 77:
				if (pos < 5)
					pos++;
				break;
			default:
				break;
			}
		} while (true);
		std::cout << "\tUnlocked" << std::endl;
		system("pause");
	
}