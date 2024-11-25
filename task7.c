#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 
int chisla(int n)
{
	//static int i = 1;
	if (n > 0)
	{
		printf ("%d ", n);
		n--;
		chisla(n--);	
	}	
return 0;
}

int main(void)
{
	int32_t a; 
	 
	scanf ("%d", &a);
	
	chisla(a);
			
return 0;		
}
