#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class	PhoneBook
{
	private:
		int		_i;
		Contact	contact[8];

    public:
		int		add();
		int		search();
		void	init_index();
};

# endif
