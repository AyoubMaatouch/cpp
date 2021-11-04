#include <iostream>
#include <cctype>


int main(int argc, char* argv[])
{
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	 else
	 {  
		char ch;
		for(int i = 1; i < argc; i++)
		{
			for (int j = 0; j < (int)strlen(argv[i]); j++) 
			{
				ch = toupper(argv[i][j]);
				std::cout << ch;
			}
			if (argv[i + 1])
				std::cout<<" ";
		}
		std::cout<<std::endl;
	}
	return EXIT_SUCCESS;
}