/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:36:21 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/01 16:47:33 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	// Zombie allocated on the stack
	Zombie z;
	z.setName("main");
	z.announce();

	// Zombie allocated on the heap
	Zombie *z2 = newZombie("newZombie");
	z2->announce();

	// Zombie allocated on the stack
	randomChump("random");
	randomChump("Valentin");
	
	std::cout << std::endl;
	delete (z2);
}
