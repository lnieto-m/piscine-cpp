/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 09:54:53 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/07/15 11:56:22 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add(void)
{
	Contact		inst;
	std::string	input;

	std::cout << "First Name : ";
	std::cin >> input;
	inst.SetFirstName(input);
	std::cout << inst.GetFirstName() << std::endl;
}
