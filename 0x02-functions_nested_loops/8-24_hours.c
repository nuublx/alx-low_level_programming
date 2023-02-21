#include"main.h"

/**
 * jack_bauer - prints the day in minutes
 *
 * Description: prints from 00:00 to 23:59
 *
 * Return: void Always
*/
void jack_bauer(void)
{
	int hours1, hours2, minutes1, minutes2;

	for (hours1 = 0; hours1 < 3; hours1++)
	{
		for (hours2 = 0; hours2 < 10; hours2++)
		{
			if (hours1 == 2 && hours2 > 3)
				return;

			for (minutes1 = 0; minutes1 < 6; minutes1++)
			{
				for (minutes2 = 0; minutes2 < 10; minutes2++)
				{
					_putchar(hours1 + '0');
					_putchar(hours2 + '0');
					_putchar(':');
					_putchar(minutes1 + '0');
					_putchar(minutes2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
