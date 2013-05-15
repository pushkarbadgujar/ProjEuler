/*

Problem 7: 10001st prime
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int prime_index=0;
    int i=0,j,fact=0;

    while(prime_index!=10001)
    {
        i++;
        for(fact=0,j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                fact++;
            }

        }
        if(fact==2)
        {
            prime_index++;
        }


    }
    printf("%d is the %dst prime number",i,prime_index);
    return 0;
}

