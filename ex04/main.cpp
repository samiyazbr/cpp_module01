#include <iostream>
#include <string>

int main(int ac, char **av)
{
	(void)av;

	if (ac != 4)
	{
		std::cout << "Try again with the correct format: ./replace filename s1 s2" << std::endl;
		return 0;
	}

}