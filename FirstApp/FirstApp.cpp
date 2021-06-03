// FirstApp
// Testing function with dynamic params

#include <iostream>

using namespace std;

void borderString(char,int);

int main()
{
	borderString('*', 38);

	std::cout << "CPP studying started" << endl;

	borderString('=', 20);

	std::cout << "Student : \t Alexander Dolgosheev" << endl;

	borderString('\r', 1);

	std::cout << "Data    : \t 03.06.2021" << endl;


	borderString('*', 38);
	
	return 0;
}

void borderString(char ch, int count)
{
	for (int i = 1; i< count; i ++)
		std::cout << ch;
	std::cout << endl;
}
