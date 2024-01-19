#include "PhoneBook.hpp"

static int	excute_command(PhoneBook& phonebook, std::string input)
{
	if (std::cin.eof())
		return (true);
	if (input == "ADD")
		phonebook.add();
	else if (input == "SEARCH")
		phonebook.search();
	else
		std::cout << "Invalid input. Please enter a valid value" << std::endl;
	if (std::cin.eof())
		return (true);
	return (false);
}

int main()
{
	PhoneBook	phonebook;
	std::string	input;

	phonebook.init_index();
	while (1)
	{
		std::cout << "Enter a command" << std::endl;
		std::cin >> input;
		if (input == "EXIT")
		{
			std::cout << "exit" << std::endl;
			return (0);
		}
		if (excute_command(phonebook, input))
			return (1);
	}
}
