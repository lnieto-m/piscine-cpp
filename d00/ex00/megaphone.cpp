/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 13:07:36 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/07/13 18:38:33 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char *av[])
{
	int		i = 1;
	int		j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
		{
			while(av[i][j] != '\0')
			{
				if (av[i][j] > 96 && av[i][j] < 123)
					std::cout << (char)(av[i][j++] - 32);
				else
					std::cout << av[i][j++];
			}
			j = 0;
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
