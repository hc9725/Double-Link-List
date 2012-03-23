       #include <stdio.h>
       #include <stdlib.h>
       #include <string.h>

       static int
       cmpstringp(const void *p1, const void *p2)
       {
	   int a = **(int *)p1;
	   int b = **(int *)p2;

	   if ( ( a - b ) > 0 ) 
		return 1;
	   else if (  a == b ) 
		return 0;
	   else 
		return -1;
       }

       int
       main(int argc, char *argv[])
       {
	   int j;
	   int b[10][];
	   int **a;

	   qsort(a, 10, sizeof(int), cmpstringp);

	  // for (j = 1; j < 10; j++)
	    
	    printf("%s\n",a[j][]);
	   exit(EXIT_SUCCESS);
       }

