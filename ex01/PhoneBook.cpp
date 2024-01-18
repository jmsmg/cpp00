#include "PhoneBook"

int     PhoneBook::add();
{
    int     i;
    Contact tmp;

    i = 0;
    while (i < 8 && contact[i]::check_field() == 0)
        i++;
    i = n % 8;
    tmp::add();
    if (tmp::check_field())
        return (1);
    n++;
    contact[i].contactcpy(tmp);
    return (0);
}

int PhoneBook::search()
{
    
}