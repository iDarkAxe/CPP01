/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 11:10:18 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/02 11:24:50 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR;

	stringPTR = &str;
	// PART 1
	std::cout << "Memory adress of str is \t\t" << &str << std::endl;
	std::cout << "Memory adress held by stringPTR is \t" << stringPTR << std::endl;
	std::cout << "Memory adress held by stringREF is \t" << &stringREF << std::endl;
	std::cout << std::endl;
	// PART 2
	std::cout << "Value of str is \t\t\t" << str << std::endl;
	std::cout << "Value pointer to by stringPTR is \t" << *stringPTR << std::endl;
	std::cout << "Value pointer to by stringREF is \t" << stringREF << std::endl;
	std::cout << std::endl;
	// Explanations
	std::cout << "stringPTR = address of str and *stringPTR = the value of str" << std::endl;
	std::cout << "&stringREF = adress of str and stringREF = the value of str" << std::endl;
	std::cout << "The advantage of references is that you can use is as a normal type but it's using the adress of an other" << std::endl;
	std::cout << "In C++, using iso c98, you can't use *str or *stringREF, you need use [index] like str[index] or stringREF[index]" << std::endl;
	return (0);
}
