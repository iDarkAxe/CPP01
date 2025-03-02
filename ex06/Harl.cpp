/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:05:58 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/02 17:10:38 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::complain(std::string complain)
{
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*f[5])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error , &Harl::insignificant_problems};
	size_t index;

	index = 0;
	while(index < 4)
	{
		if (complain == str[index])
			break;
		index++;
	}
	// Executes the function pointer by f at the given index
	(this->*f[index])();
}

void Harl::moreComplaints(std::string input)
{
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*f[5])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error , &Harl::insignificant_problems};
	size_t index;

	index = 0;
	while (index < 4)
	{
		if (input == str[index])
			break;
		index++;
	}
	switch(index)
	{
		case 4:
			this->complain("NOT_DEFINED");
			(this->*f[4])();
			break;
		case 3:
			std::cout << "[ " << str[3] << " ]" << std::endl;
			(this->*f[3])();
		case 2:
			std::cout << "[ " << str[2] << " ]" << std::endl;
			(this->*f[2])();
		case 1:
			std::cout << "[ " << str[1] << " ]" << std::endl;
			(this->*f[1])();
		case 0:
			std::cout << "[ " << str[0] << " ]" << std::endl;
			(this->*f[0])();
		default:
			break;
	}
}

	void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void  Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::insignificant_problems(void)
{
	std::cout << "[Probably complaining about insignificant problems]" << std::endl;
}
