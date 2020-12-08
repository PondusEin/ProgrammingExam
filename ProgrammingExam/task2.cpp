#include "Menu.h"
#include <fstream>
#include <vector>
#include <iomanip>
#include <String>

class Student {
public:
	std::string studentsName;
	std::string results;
	int studentScores;
};

void calculateGrade(std::vector<char>& answer, std::vector<Student>& students) {
	for (int j = 0; j < students.size(); j++)
	{
		for (int i = 0; i < answer.size(); i++)
		{
			if (answer.at(i) == students.at(j).results[i])
			{
				students.at(j).studentScores += 1;
			}
		}
	}
}

void fileStudents(std::vector<Student>& students) {
	std::string studentsName;
	std::string results;

	/*int amount=0;
	std::cout << "How many students are there?" << std::endl;
	std::cin >> amount;*/

	std::ofstream out_file("task2.txt");
//	std::cout << "Name : ";
	//out_file << studentsName;
	//std::cout << "Results : ";
	//out_file << results;
	out_file.close();
	std::ifstream student("task2.txt");

	while (!student.eof())
	{
		student >> studentsName;
		student >> results;
		students.push_back({ studentsName, results,0 });
	}
	student.close();
}

int amountOfStudents(std::vector<Student>& students) {
	int count = students.size();
	return count;
}

double average(std::vector<Student>& students) {
	double average{ 0 };
	for (int i = 0; i < students.size(); i++)
	{
		average += students.at(i).studentScores;
	}
	average = average / students.size();
	return average;
}

int max(std::vector<Student>& students) {
	int max{ 0 };
	for (int i = 0; i < students.size(); i++)
	{
		if (students.at(i).studentScores > max)
		{
			max = students.at(i).studentScores;
		}
	}
	return max;
}
int min(std::vector<Student>& students) {
	int min{ 6 };
	for (int i = 0; i < students.size(); i++)
	{
		if (students.at(i).studentScores < min)
		{
			min = students.at(i).studentScores;
		}
	}
	return min;
}

void task2() {
	system("cls");
	std::vector<char> answer{ 'A','B','D','C','A','B','D','A' };
	std::vector<Student> students;


	fileStudents(students);
	calculateGrade(answer, students);

	std::cout << "Studentname\tScore\n";
	for (int i = 0; i < students.size(); i++)
	{
		std::cout << students.at(i).studentsName << "\t\t" << students.at(i).studentScores << std::endl;
	}
	std::cout << "Number of students: " << amountOfStudents(students) << std::endl;
	std::cout << "Average score: " << std::setprecision(3) << average(students) << std::endl;
	std::cout << "Highest score: " << max(students) << std::endl;
	std::cout << "Lowest score: " << min(students) << std::endl;

	system("pause");
}