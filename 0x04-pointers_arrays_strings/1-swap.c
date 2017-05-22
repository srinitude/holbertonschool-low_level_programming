/**
 * swap_int - Swap the two integer values passed
 * @a: The first integer
 * @b: The second integer
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
