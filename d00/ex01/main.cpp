/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 09:51:23 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/07/15 11:18:53 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		main()
{
	std::string	input;

	while (42)
	{
		std::cin >> input;
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			add();
	}
	return 0;
}
