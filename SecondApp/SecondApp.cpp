// Russian text ANSI -> ASCII
// Colored text

#include <cstdio>
#include <iostream>
#include <Windows.h>

#include "russian_convertor.h"
#include "color_marker.h"

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	const char* text = "Hello Alexander";
	int textLength = strlen(text);

	for (int i = 0;i <= textLength; i++)
	{
		if (i > 14)
			std::cout << std::endl;
		
		SetConsoleTextAttribute(hConsole, i+1);
		std::cout << text[i];
	}

	
	SetConsoleTextAttribute(hConsole, RED);
	printf("Начал тут подучивать C/C++\n");

	SetConsoleTextAttribute(hConsole, GREEN);
	printf(Rusify((char*)"Начал тут подучивать C/C++\n"));

	getchar();
}