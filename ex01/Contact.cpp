#include <string>
#include <iomanip>

class   Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string secret;

    public:
        int add();
        int check(string input);

    private:
        get_input(const std::string& prompt, std::input& input)
};

int     check_field()
{
    if (Contact::first_name == "")
    {
        std::cout << "first name is null" << std::endl;
        return (1);
    }
    else if (Contact::last_name == "")
    {
        std::cout << "last name is null" << std::endl;
        return (1);
    }
    else if (Contact::nickname == "")
    {
        std::cout << "nickname is null" << std::endl;
        return (1);
    }
    else if (Contact::phone_number == "")
    {
        std::cout << "phone number is null" << std::endl;
        return (1);
    }
    else if (Contact::secret == "")
    {
        std::cout << "secret is null" << std::endl;
        return (1);
    }
    return (0);
}

void    get_input(const std::string& prompt, std::input& input)
{
    std::cout << prompt << std::endl;
    std::cin >> input;
}

int Contact::add()
{
    get_input("Enter first name", Contact::first_name);
    get_input("Enter last name", Contact::last_name);
    get_input("Enter nickname", Contact::nickname);
    get_input("Enter phone number", Contact::phone_number);
    get_input("Enter secret", Contact::secret);
}