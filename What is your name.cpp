#include <iostream>
#include <string>

int main() 
{
	std::string name;
	int age;

	std::cout << "What is your full name? ";

	// getline - reads strings with spaces
	// Requires string library to work
	std::getline(std::cin, name);

	std::cout << "What is your age? ";
	std::cin >> age;

	std::cout << "Your name is " << name << '\n';
	std::cout << "You are  " << age << " years old";

	return 0;
}