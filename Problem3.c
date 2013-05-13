/*

Problem 3: Largest prime factor
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    long long inpt=600851475143LL;
    int temp;
    int k=0;
    int factors[50];

    for(i=2;i<=inpt;i++)
    {
        if(inpt%i==0)
        {
            factors[k]=i;
            k++;
            inpt=inpt/i;
            i=2;
        }
    }


    for(j=0;j<=k;j++){

    for(i=0;i<=k;i++){
    if(factors[i]<factors[i+1])
    {
        temp=factors[i];
        factors[i]=factors[i+1];
        factors[i+1]=temp;
    }
    }
    }





    printf("the largest factor is %d ",factors[0]);
    /*while(factors[k]!='\0')
    {
        printf(" %d ",factors[k]);
        k++;
    }
    */
    return 0;
}

