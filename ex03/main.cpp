/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 11:26:53 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/02 12:24:50 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		// Bob specifically has the weapon club so if club changes, bob weapon's change
		bob.attack();
	}
	std::cout << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		// Tries to attack but no weapon initialized
		jim.attack();

		// Weapon is set
		jim.setWeapon(club);
		jim.attack();
		// Weapon is changed for another
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}