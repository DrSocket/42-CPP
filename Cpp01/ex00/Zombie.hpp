/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:58:09 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/23 11:52:57 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

# define GREEN			"\x1B[32m"
# define YELLOW			"\x1B[33m"
# define NORMAL			"\x1B[0m"
# define RED			"\x1B[31m"

class Zombie {

private:
	std::string	_name;

public:
	Zombie(std::string name);
	virtual	~Zombie(void);

	void	announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif