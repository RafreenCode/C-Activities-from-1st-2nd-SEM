#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int x, y, result1, result2;
    float a, b, result3, result4;
    
    scanf("%d, %d", &x, &y);
    result1 = x + y;
    result2 = x - y;
    printf("%d, %d\n", result1, result2);
    
    scanf("%f, %f", &a, &b);
    result3 = a + b;
    result4 = a - b;
    printf("%.1f, %.1f", result3, result4);
    
    
    
    
    return 0;
}