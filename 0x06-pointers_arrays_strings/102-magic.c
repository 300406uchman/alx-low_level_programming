#include <stdio.h>

int main(void)
{
	  int n;
	    int a[5];
	      int *p;

	        a[2] = 1024;
		  p = &n;
		    *(a + 2) = 98; /* Assign 98 to a[2] using pointer arithmetic */
		      printf("a[2] = %d\n", a[2]);
		        return (0);
}

