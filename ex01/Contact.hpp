#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>
# include <iomanip>

class	Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		void	add();
		int		check_field();
		void	contactcpy(Contact src);
		void	print_list(int i);
		void	print_column(void);

	private:
		void	get_input(const std::string& prompt, std::string& input);
		void	print_column(std::string str);
};

# endif
