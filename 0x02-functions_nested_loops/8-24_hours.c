#include "holberton.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			int hour_quotient = hour / 10;
			int hour_remainder = hour % 10;

			int minute_quotient = minute / 10;
			int minute_remainder = minute % 10;

			if (hour < 10)
			{
				_putchar('0');
				_putchar('0' + hour);
			}
			else
			{
				_putchar('0' + hour_quotient);
				_putchar('0' + hour_remainder);
			}
			_putchar(':');
			if (minute < 10)
			{
				_putchar('0');
				_putchar('0' + minute);
			}
			else
			{
				_putchar('0' + minute_quotient);
				_putchar('0' + minute_remainder);
			}
			_putchar('\n');
		}
	}
}
