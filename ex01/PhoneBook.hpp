#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact"

class   PhoneBook
{
    private:
        int     _n = 0;
        Contact contact[8];

    public:
        int add();
        int search();
};

# endif