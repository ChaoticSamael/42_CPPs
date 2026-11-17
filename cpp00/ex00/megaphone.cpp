#include <string>
#include <iostream>

std::string	strToUpper(std::string str)
{
	size_t cnt = 0;

	while (cnt < str.length())
	{
		str.at(cnt) = std::toupper(str.at(cnt));
		cnt++;
	}
	return (str);
}

int main(int argc, char **argv)
{	
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		for (int cnt=1; cnt < argc; cnt++)
			std::cout<<strToUpper(argv[cnt]);

		std::cout<<std::endl;
	}
}
