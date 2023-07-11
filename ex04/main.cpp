#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	(void)av;

	if (ac != 4)
	{
		std::cerr << "Try again with the correct format: ./replace filename str1 str2" << std::endl;
		exit (EXIT_FAILURE);
	}
	std::string filename = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];

	if (str1 == str2)
	{
		std::cerr << "str1 and str2 can't be equal" << std::endl;
	}

	std::ifstream file(filename); // (ifstream)input file stream class
	std::string newfilename;
	std::string content;
	char ch;

	if (!file.is_open())
	{
		std::cerr << "Invalid filename!!" << std::endl;
		file.close();
		exit (EXIT_FAILURE);
	}
	else
	{
		newfilename = filename + ".replace";
	}
	while (file.is_open())
	{
		file.get(ch);
		if (file.is_open())
			content.push_back(ch);
	}
	file.close();
	std::ofstream newfile(newfilename); //output file stream 
}