#include "Contact.hpp"

void	Contact::print_column(std::string str)
{
	std::string	tmp;

	tmp = str;
	if (10 < tmp.length())
	{
		tmp.resize(9);
		std::cout << tmp << ".";
	}
	else
		std::cout << std::setw(10) << str;
}

void	Contact::print_column(void)
{
	std::cout << _first_name << std::endl;
	std::cout << _last_name << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _phone_number << std::endl;
	std::cout << _darkest_secret << std::endl;
}

void	Contact::print_list(int i)
{
	std::cout << std::setw(10) << i;
	std::cout << "|";
	print_column(_first_name);
	std::cout << "|";
	print_column(_last_name);
	std::cout << "|";
	print_column(_nickname);
	std::cout << std::endl;
}

void	Contact::contactcpy(Contact src)
{
	_first_name = src._first_name;
	_last_name = src._last_name;
	_nickname = src._nickname;
	_phone_number = src._phone_number;
	_darkest_secret = src._darkest_secret;
}

int	Contact::check_field()
{
    if (_first_name.empty() || _last_name.empty()
		|| _nickname.empty() || _phone_number.empty()
		|| _darkest_secret.empty())
	{
		return (1);
	}
	return (0);
}

void	Contact::get_input(const std::string& prompt, std::string& input)
{
	if (!std::cin.eof())
	{
		std::cout << prompt;
		std::cin >> input;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void	Contact::add()
{
	get_input("Enter first name : ", _first_name);
	get_input("Enter last name : ", _last_name);
	get_input("Enter nickname : ", _nickname);
	get_input("Enter phone number : ", _phone_number);
	get_input("Enter darkest secret : ", _darkest_secret);
}
