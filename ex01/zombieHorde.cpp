/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:53:29 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/02 10:58:07 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];
	if (!zombies)
		return (NULL);
	for (int i = 0; i < N; i++)
		zombies[i].setName(name);
	return (zombies);
}

// Enable to see betther the different names in the horde
// Zombie* zombieHorde(int N, std::string name)
// {
// 	Zombie *zombies = new Zombie[N];
// 	std::string new_name;
// 	if (!zombies)
// 		return (NULL);
// 	for (int i = 0; i < N; i++)
// 	{
// 		new_name = name + "_";
// 		for (int j = 0; j < i; j++)
// 		{
// 			if (j % 2 == 0)
// 				new_name = new_name + name;
// 			else
// 				new_name = new_name + "_";
// 		}
// 		zombies[i].setName(new_name);
// 	}
	
// 	return (zombies);
// }
