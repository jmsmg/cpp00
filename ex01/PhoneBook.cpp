#include "Contact"

class   PhoneBook
{
    private:
        int index[8];
    public:
        int add();
        int search();
};

int     PhoneBook::add();
{
    Contact contact;

    contact::add();
    if (contact::check_field())
    {
        return (1);
    }
    
}