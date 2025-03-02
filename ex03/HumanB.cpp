/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 11:52:53 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/02 12:23:25 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

// HumanB::HumanB() : _weapon
// {
// 	this->_name = "0";
// }

HumanB::HumanB(std::string name) : _weapon(NULL)
{
	this->_name = name;
}

HumanB::~HumanB()
{
	return;
}

void HumanB::attack()
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " can't attack, he has no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
