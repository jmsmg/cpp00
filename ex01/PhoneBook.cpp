#include "PhoneBook.hpp"

void	PhoneBook::init_index()
{
	_i = 0;
}

int	PhoneBook::add()
{
	Contact	tmp;

	tmp.add();
	if (std::cin.eof())
		return (1);
	contact[_i % 8].contactcpy(tmp);
	_i++;
	return (0);
}

int	PhoneBook::search()
{
	int	i;
	int	j;

	i = 0;
	while (contact[i].check_field() == 0 && !std::cin.eof())
	{
		contact[i].print_list(i);
		i++;
	}
	if (i != 0)
	{
		std::cout << "Enter the index number : ";
		std::cin >> j;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Invalid input. Please enter a valid integer" << std::endl;
			return (1);
		}
		if (j < i && !std::cin.eof())
			contact[j].print_list(j);
		else
			std::cout << "index out of range" << std::endl;
	}
	return (0);
}