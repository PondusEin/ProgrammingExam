// ProgrammingExam.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <conio.h>
#include "Menu.h"
static constexpr int KEY_UP = 72;
static constexpr int KEY_DOWN = 80;
int main()
{
	login();
	int task;
   
	do
	{	
		system("cls");
		std::cout << "Please select task [1-4]" << std::endl;
		std::cout << "Task 1: Print names' Initials and end\nTask 2: Students exam results\nTask 3: Typing a sentence\nTask 4: Exit";
		std::cin >> task;
		switch (task)
		{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 4:
			exit(EXIT_SUCCESS);
		default:
			system("cls");
			break;
		}
		//int pos{ 0 };
		//unsigned char Player = '->';
		//const char BLANK = ' ';
		//std::string password{ "AAAAAA" };
		//std::string FindPassword{ "STRING" };
		//do {
		//	system("cls");
		//	for (size_t i = 0; i < pos; i++)
		//	{
		//		std::cout << "  ";
		//	}
		//	std::cout << "->" << std::endl;

		//	switch (_getch())
		//	{
		//	case 87: case 119: case 72:
		//		if (pos > 0)
		//			pos--;
		//		break;
		//	case 115: case 83: case 80:
		//		if (pos < 5)
		//			pos++;
		//		break;

		//	default:
		//		break;
		//	}
		//} while (true);
	} while (true);

}