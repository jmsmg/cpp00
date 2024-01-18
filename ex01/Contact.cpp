#include "Contact"

void    Contact::contactcpy(Contact src)
{
    _first_name = src._first_name;
    _last_name = src._last_name;
    _nickname = src._nickname;
    _phone_number = src._phone_number;
    _secret = src._secret;
}

int     Contact::check_field()
{
    if (_first_name.empty() || _last_name.empty()
        || _nickname.empty() || _phone_number == 0
        || _secret.empty())
    {
        return (1);
    }
    return (0);
}

void    Contact::get_input(const std::string& prompt, std::input& input)
{
    std::cout << prompt << std::endl;
    std::cin >> input;
}

int Contact::add()
{
    get_input("Enter first name", _first_name);
    get_input("Enter last name", _last_name);
    get_input("Enter nickname", _nickname);
    get_input("Enter phone number", _phone_number);
    get_input("Enter secret", _secret);
}