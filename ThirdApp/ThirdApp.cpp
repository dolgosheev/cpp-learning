// ThirdApp
// Get day of week by date

#include <iostream>
#include "russian_convertor.h"

int main()
{
	int d, m, y;
	int h, yh, mRoma, res;

	printf(Rusify("Вычисление дня недели по дате\n"));
	puts(Rusify("Введите дату формата DD-MM-YYYY"));
	printf("->");
	scanf_s("%i-%i-%i", &d, &m, &y);

	if (m == 1 || m == 2)
		y--;

	mRoma = m - 2;

	if (mRoma <= 0) mRoma += 12;

	h = y / 100;
	yh = y - h * 100;

	res = (d + (13 * mRoma - 1) / 5 + yh + yh / 4 + h / 4 - 2 * h + 777) % 7;

	switch (res)
	{
	case 1: puts(Rusify("Понедельник")); break;
	case 2: puts(Rusify("Вторник")); break;
	case 3: puts(Rusify("Среда")); break;
	case 4: puts(Rusify("Четверг")); break;
	case 5: puts(Rusify("Пятница")); break;
	case 6: puts(Rusify("Суббота")); break;
	case 7: puts(Rusify("Воскресенье")); break;
	}

	getchar();
}