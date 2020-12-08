#include "Menu.h"
#include <vector>
#include <string>

void LastInitial(std::vector<std::string>& names) {
	std::cout << "n";
	/*while(names.at())
	{

	*/
}

void FirstInitial(std::vector<std::string>& names) {
	std::cout << "J";
}

void task1() {
	system("cls");
	std::vector<std::string> names{ "Jonahtan", "Susan", "Lucy", "John" };
	for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i] << " first initial is : ";	
		FirstInitial(names);
		std::cout << std::endl;
		std::cout << names[i] << " last initial is : ";
		LastInitial(names);
		std::cout << std::endl;
	}
	
	system("pause");
}