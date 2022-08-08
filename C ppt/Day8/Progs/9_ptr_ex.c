/* A program which shows a simple demo on pointer variables */
#include<stdio.h>
int main( )
{
	int U = 3, v;
	int *pu;    /* pointer t o an integer */
	int *pv;    /* pointer t o an integer */
	pu = &U; /* assign address of U t o pu */
	v = *pu;  /* assign value of U t o v */
	pv = &v; /* assign address of v t o pv */
	printf("\nu=%d &u=%p pu=%p *pu=%d", U, &U, pu, *pu);
	printf("\n\nv=%d &v=%p pv=%p *pv=%d", v, &v, pv, *pv);
return 0;
}

