/*

Problem 6: Sum square difference
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025  385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,i,j;
    long long sum_of_squares=0;
    for(i=1;i<=100;i++)
    {
        sum_of_squares=sum_of_squares+(i*i);
    }

    //printf("\n sum of squares = %lld",sum_of_squares);


    for(j=1;j<=100;j++)
    {
        sum=sum+j;
    }

    sum=sum*sum;

    printf("\n difference  = %lld",sum-sum_of_squares);

    return 0;
}

