// FirstApp
// Testing function with dynamic params

#include <iostream>

using namespace std;

void border_string(char filler,int counter);
void dividefrac(float num, float& intfrac, float& floatfrac);

int main()
{
	float num, intfrac, floatfrac;
	
	border_string('*', 38);

	cout << "CPP studying started" << endl;

	border_string('=', 20);

	cout << "Student : \t Alexander Dolgosheev" << endl;

	border_string('\r', 1);

	cout << "Data    : \t 03.06.2021" << endl;


	border_string('*', 38);


	cout << "Enter float number ( divider . ) : " ;
	cin >> num;
	dividefrac(num,intfrac,floatfrac);

	cout << "Int part : " << intfrac << "\nFloat part : " << floatfrac << endl;
	
	return 0;
}

void border_string(char ch, int count)
{
	for (int i = 1; i< count; i ++)
		cout << ch;
	cout << endl;
}

void dividefrac(float num, float& intfrac, float& floatfrac)
{
	float temp = static_cast<long>(num);
	floatfrac = num - temp;
	intfrac = num - floatfrac;
	
}
