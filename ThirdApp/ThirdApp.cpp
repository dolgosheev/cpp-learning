// ThirdApp
// Get day of week by date

#include <iostream>
#include "russian_convertor.h"

int main()
{
	int d, m, y;
	int h, yh, mRoma, res;

	printf(Rusify("���������� ��� ������ �� ����\n"));
	puts(Rusify("������� ���� ������� DD-MM-YYYY"));
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
	case 1: puts(Rusify("�����������")); break;
	case 2: puts(Rusify("�������")); break;
	case 3: puts(Rusify("�����")); break;
	case 4: puts(Rusify("�������")); break;
	case 5: puts(Rusify("�������")); break;
	case 6: puts(Rusify("�������")); break;
	case 7: puts(Rusify("�����������")); break;
	}

	getchar();
}