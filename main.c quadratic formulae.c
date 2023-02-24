#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("please enter the value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0)
        printf("roots are imaginary");
    else if(d==0)
    {
        printf("roots are equal and simply they are:");
        r1=(float)-b/(2*a);
        printf("%d",r1);
    }
    else
    {
        printf("the roots solved must be distinct and they are: ");
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("%f  %f",r1,r2);
    }
    getch();
    return 0;
}
