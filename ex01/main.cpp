/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:36:21 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/02 10:59:31 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
	int nb;

	nb = 100;
	// Zombie allocated on the stack
	Zombie z;
	z.setName("main");
	z.announce();

	// Zombie allocated on the heap
	Zombie *zombies_horde = zombieHorde(nb, "horde");
	if (!zombies_horde)
		return (1);
	for (int i = 0; i < nb; i++)
	{
		zombies_horde[i].announce();
		std::cout << "zombie[" << i << "] spoke" << std::endl;
	}
		
	delete[] zombies_horde;
}
