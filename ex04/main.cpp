/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 12:38:07 by ppontet           #+#    #+#             */
/*   Updated: 2025/07/01 11:07:09 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4 || *argv[2] == '\0' || *argv[3] == '\0')
	{
		std::cerr << "ERROR : " << argv[0] << " should be used as following :" << std::endl;
		std::cerr << argv[0] << " <PATH1>/<file1> <s1> <s2>" << std::endl;
		std::cerr << "All <s1> occurrences will be replaced by <s2>" << std::endl;
		return (1);
	}

	std::fstream fs_src, fs_dest;
	std::string str;
	std::string to_search;
	std::string to_replace;

	str = argv[1];
	to_search = argv[2];
	to_replace = argv[3];

    fs_src.open(str.c_str());
	if (!fs_src.is_open())
	{
		fs_src.clear();
		std::cerr << "ERROR : opening '" << str << "' file" << std::endl;
		return (2);
	}

	str += ".replace";
	fs_dest.open(str.c_str(), std::ios::out);
	if (!fs_dest.is_open())
	{
		fs_dest.clear();
		std::cerr << "ERROR : creating or opening'" << str << "' file" << std::endl;
		return (3);
	}

	size_t pos;

	pos = 0;
	while (getline(fs_src, str))
	{
		pos = 0;
		pos = str.find(to_search, pos);
		while (pos != std::string::npos)
		{
			fs_dest << str.substr(0, pos) << to_replace;
			str = str.substr(pos + to_search.length());
			
			pos = str.find(to_search);
		}
		fs_dest << str;
		if (fs_src.eof() == 0)
        	fs_dest << std::endl;
	}
	fs_src.close();
	fs_dest.close();
	return (0);
}
