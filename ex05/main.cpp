/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:03:18 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/02 16:35:43 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	// Normal order
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	std::cout << std::endl;
	// Mixed order
	harl.complain("DEBUG");
	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("N'EXISTE PAS");
	harl.complain("ERROR");
	harl.complain("UNE AUTRE");
	return (0);
}
