#include "pch.h"
#include <iostream>
#include <stdlib.h>
int main()
{
	int a, b, c, n = 0, max = 0;
	std::cout << "Enter A ="; std::cin >> a;
	if (a < 0) n++;
	max = a;
	std::cout << "Enter B ="; std::cin >> b;
	if (b < 0) n++;
	if (max < b) max = b;
	std::cout << "Enter C ="; std::cin >> c;
	if (c < 0) n++;
	if (max < c) max = c;
	float vid = a+b+c;
	std::cout << "Average =" << vid << "\n";
	std::cout << "Negative =" << n << "\n";
	std::cout << "Maximum =" << max << "\n";
	if ((a < b + c) && (b < a + c) && (c < a + b))
	{
		std::cout << "Triangle is possible" << "\n";
	} else {
		std::cout << "Triangle is impossible" << "\n";
	}
	system("pause");
	return 0;
}