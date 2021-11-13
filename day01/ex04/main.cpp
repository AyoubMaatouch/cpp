#include <iostream>
#include <fstream>

int error_file(std::string std)
{
	std::cout<<std<<std::endl;
	return EXIT_FAILURE;
}

bool is_empty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

std::string ReplaceAll(std::string str, const std::string& s1, const std::string& s2) 
{
	size_t place;

	if (s1 != s2)
	{
		while ((place = str.find(s1)) != std::string::npos)
		{ 
			str.erase(place, s1.length());
			str.insert(place, s2);
		}
	}
	return str;
}

int main (int ac, char **av)
{

	if (ac == 4)
	{
		std::ifstream in_file;
		std::ofstream out_file;
		
		std::string out = std::string(av[1]) + std::string(".replace");
		in_file.open(av[1]);
		
		if (in_file.is_open() && !is_empty(in_file))
		{
			out_file.open(out);
			if (!out_file.is_open())
				return error_file("Destination File Error");
			for( std::string line; getline( in_file, line ); )
			{
				out_file << ReplaceAll(line, std::string(av[2]), std::string(av[3])) << std::endl;
			}
			in_file.close();
			out_file.close();
		}
		else
			return error_file("Source File Error");
	}
	else
		return error_file("Argument ERROR !");
	return EXIT_SUCCESS;
}