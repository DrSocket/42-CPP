/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:22:18 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/05 13:26:30 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	testExcepLow(void) {

	Bureaucrat	i("Boss", 151);
}

void	testExcepHigh(void) {

	Bureaucrat	i("Boss", 0);
}

void	testIncrement(void) {

	Bureaucrat i("Boss", 3);

	std::cout << "Grade Increment Test" << std::endl;
	std::cout << i << std::endl;
	i.gradeIncrement();
	i.gradeIncrement();
	std::cout << i << std::endl;
	i.gradeIncrement(); // bust
}

void	testDecrement(void) {

	Bureaucrat i("Boss", 148);

	std::cout << "Grade Decrement Test" << std::endl;
	std::cout << i << std::endl;
	i.gradeDecrement();
	i.gradeDecrement();
	std::cout << i << std::endl;
	i.gradeDecrement(); // bust	
}

int		main() {

	{
		try {
			testExcepLow();
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
			testExcepHigh();
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
			testIncrement();
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
			testDecrement();
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}