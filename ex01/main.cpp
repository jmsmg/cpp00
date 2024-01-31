#include "PhoneBook.hpp"

static int	excute_command(PhoneBook& phonebook, std::string input)
{
	if (std::cin.eof())
		return (true);
	if (input == "EXIT")
		return (true);
	else if (input == "ADD")
		phonebook.add();
	else if (input == "SEARCH")
		phonebook.search();
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
		std::cout << "Enter a command : ";
		std::getline(std::cin, input);
		if (excute_command(phonebook, input))
			return (1);
	}
}
