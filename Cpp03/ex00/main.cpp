/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:21:37 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/31 18:27:37 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(int ac, char **av) {

	(void)ac;
	
	ClapTrap mika("Mika");
	ClapTrap joe("Joe");

	joe.attack("Mika");
	mika.beRepaired(10);
	joe.takeDamage(10);

	return 0;
}