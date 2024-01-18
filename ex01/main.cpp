#include "PhoneBook"

static int  excute_command(string input)
{
    if (input == "EXIT")
        return (true);
    if (input == "ADD")
    {
        PhoneBook::add();
    }
    else if (input == "SEARCH")
    {
        
    }
    return (false);
}

int main(int argc, char *argv[])
{
    string input;
    while (1)
    {
        std::cin >> input;
        if (excute_command(input))
            return (0);
    }
}