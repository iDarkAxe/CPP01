#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void insignificant_problems(void);

	public:
		Harl();
		~Harl();

		void complain(std::string complain);
		void moreComplaints(std::string input);
};

# endif
