#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iomanip>

class   Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        int _phone_number;
        std::string _secret;

    public:
        int     add();
        int     check_field();
        void    contactcpy(Contact src);

    private:
        void    get_input(const std::string& prompt, std::input& input);
};

# endif