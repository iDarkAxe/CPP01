#ifndef WEAPON_HPP
# define WEAPON_HPP


#include <iostream>

class Weapon{
	private:
		std::string type;
		Weapon();
	
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string getType(); 
		void setType(std::string new_type);
};

#endif