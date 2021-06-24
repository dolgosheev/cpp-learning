#pragma once
#include <string.h>

char* Rusify(char rawString[]);

/* Convert ANSI -> ASCII*/
inline auto Rusify(const char rawString[]) -> char*
{
	char* preparedString = new char[strlen(rawString) - 2];
	int i = 0;
	while (rawString[i] != 0)
	{
		unsigned char ch = rawString[i];
		if (ch >= 192 && ch <= 255) {
			if (ch < 240)
				preparedString[i] = rawString[i] - 64;
			else
				preparedString[i] = rawString[i] - 16;
		}
		else {
			preparedString[i] = rawString[i];
		}
		i++;
	}
	preparedString[i] = 0;
	return preparedString;
}