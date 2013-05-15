#include <stdio.h>
#include <stdlib.h>

float fact(float a);
float powa (float a, float b);

int main()
{
    float radian, i,sine;
    int j=0;

   
    printf("enter the radian value\n");

    scanf("%f",&radian);

    printf("thank you!!");
    sine=radian;

    for(i=3;i<50;i+=2)
    {
        if(j==0){
        sine-=powa(radian,i)/fact(i);
        j=1;
        }
        else{
        sine+=powa(radian,i)/fact(i);
        j=0;
        }
    }
    printf("\n%f",sine);
return 0;
}

float fact(float a)
{
    float res;
    if(a==1)
    res= 1;
    else
    res=a*fact(a-1);
    return res;

}

float powa (float a, float b)
{
    float res=1;
    float i=0;

    for(i=0;i<b;i++)
    {
        res*=a;
    }
    return res;
}

