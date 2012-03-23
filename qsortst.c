       #include <stdio.h>
       #include <stdlib.h>
       #include <string.h>
typedef struct ST 
{
	int aint;
	char achar;	
	struct ST *nest;
}ST;

       static int
       cmpstringp(const void *p1, const void *p2)
       {
	   ST *a = (ST *)p1;
	   ST *b = (ST *)p2;

	   if ( ( a->aint - b->aint ) > 0 ) 
		return 1;
	   else if (  a->aint == b->aint ) 
		return 0;
	   else 
		return -1;
       }

       int
       main(int argc, char *argv[])
       {
	   int j;
	   //char a[10][];
		ST *a;
	   qsort(a, 10, sizeof(ST), cmpstringp);

	   for (j = 1; j < 10; j++)
	       printf("%d\n",a->aint);
	   exit(EXIT_SUCCESS);
       }

