#include "phonebook.hpp"

int		main()
{
	char	input[] = "";
	char	exit[] = "EXIT";

	while (42)
	{
		std::cin >> input;
		if (ft_strcmp(input, exit) == 0)
			break ;
	}
	return 0;
}