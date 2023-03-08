/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 *
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 *
 * Return: square root of @n or -1
 */
int _sqrt_recursion_real(int n, int a, int b)
{
	int numb, numb_sqd;

	numb = (min + max) / 2;	
	numb_sqd = numb * numb;	

	if (numb_sqd == n)		
		return (numb_sqd);
	else if (a == b)		
		return (-1);
	else if (numb_sqd < n)	
		return (_sqrt_recursion_real(n, numb + 1, b));
	else				
		return (_sqrt_recursion_real(n, a, numb - 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   
 *
 * @n: input number
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n == 1)		
		return (1);
	else if (n == 0)	
		return (0);
	else if (n < 0)		
		return (-1);
	else
		return (_sqrt_recursion_real(n, 1, n));
}
