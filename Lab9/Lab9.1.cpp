#include<iostream>

/*19.Вычислить значения выражений у для значений x, равных 3, 6, …, 30:
				y = t^3 + 3t^2 + 1, t =2 − x.*/

int main()
{
	system("chcp 1251");
	system("cls");

	int  y, t;

	for (int x = 30; x >= 3; x -= 3)
	{
		t = 2 - x;
		y = t * t * t + 3 * t * t + 1;
		printf("y = %d", y);
	}

	return 0;
}