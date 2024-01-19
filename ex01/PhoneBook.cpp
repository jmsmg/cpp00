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

	i = 0;
	while (contact[i].check_field() == 0 && !std::cin.eof())
	{
		contact[i].print_list(i);
		i++;
	}
	return (0);
}