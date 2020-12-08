#include "Menu.h"

int attempts = 0;
std::string input;
void login() {
	const std::string password = "adminpass";
	while (true)
	{
		std::cout << "Please write password" << std::endl;
		std::cin >> input; 
		if (input.length() != password.length())
		{
			if (attempts<5)
			{
				do
				{
					std::cin.clear();
					if (std::cin.peek() == static_cast<int>('\n') || std::cin.peek() == static_cast<int>(' '))
					{
						std::cin.ignore(32767, '\n');
					}
					attempts++;
					std::cin >> input;
				} while (std::cin.fail());
			}

			if (attempts >= 5)
			{
				std::cout << "Goodbye" << attempts;
				exit(EXIT_SUCCESS);
			}

		}
		if (input.length()==password.length())
		{
			break;
		}
	} 
}