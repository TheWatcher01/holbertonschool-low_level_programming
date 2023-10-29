/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of intergers
 * @n: number og elements of the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
