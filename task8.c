#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 
int chislaA(int n, int m)
{
	//static int i = 1;
	if (n >= m)
	{
		printf ("%d ", n);
		n--;
		chislaA(n, m);	
	}	
return 0;
}
int chislaB(int n, int m)
{
	//static int i = 1;
	if (n <= m)
	{
		printf ("%d ", n);
		n++;
		chislaB(n, m);	
	}	
return 0;
}

int main(void)
{
	int32_t a, b; 
	 
	scanf ("%d %d", &a, &b);
	
	if (a >= b)
	chislaA(a, b);
	else
	chislaB(a, b);
			
return 0;		
}
