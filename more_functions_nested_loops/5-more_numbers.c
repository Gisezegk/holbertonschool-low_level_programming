#include"main.h"
/**
* more_numbers - prints x10
* Return: 0
*/
void more_numbers(void)
{
	int x10;
	int g;

	for (x10 = 0; x10 <= 9; x10++)
	{
		for (g = 0; g <= 14; g++)
		{
			if (g >= 10)
			{
				_putchar((g / 10) + '0');
			}

			_putchar ((g % 10) + '0');
	}

		_putchar ('\n');

}
}
