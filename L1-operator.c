#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int y ;
    x=10.0;
    y=4.0;
    printf("x + y = %d \n",x + y) ;
    printf("x - y = %d \n",x - y) ;
    printf("x * y = %d \n",x * y)  ;
    printf("x / y = %f \n",(float)x / (float)y) ;
    printf("x %% y = %d ",x % y );
    system("PAUSE");
    return 0;
}
