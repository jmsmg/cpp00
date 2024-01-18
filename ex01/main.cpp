#include "PhoneBook"

static int  excute_command(PhoneBook& phonebook, std::string input)
{
    if (input == "EXIT")
        return (true);
    if (input == "ADD")
        PhoneBook::add();
    // else if (input == "SEARCH")
    // {
        
    // }
    return (false);
}

int main(int argc, char *argv[])
{
    PhoneBook   phoneBook;
    std::string input;
    while (1)
    {
        std::cin >> input;
        if (excute_command(phonebook, input))
            return (0);
    }
}