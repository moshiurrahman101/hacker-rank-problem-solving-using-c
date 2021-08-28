// Task : Sum and Difference of Two Numbers
// Author: Rm Hridoy

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int m,n;
    float p, q;

    // Get input from console
    scanf("%d %d", &m, &n);
    scanf("%f %f", &p, &q);

    printf("%d %d\n", m+n, m-n);
    printf("%.1f %.1f", p+q, p-q);
    
    
    return 0;
};