/*
Problem 5: Smallest multiple
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
ans = 232792560;
*/

#include <stdio.h>
#include <stdlib.h>
long long gcd(long long a, long long b);
long long lcm(long long p ,long long q);
int main()
{
   int input[20],i,j;
   long long ans=1;
 //printf("gcd(24,18) = %d\n",gcd(24,18)); //test case
 //printf("lcm(24,18) = %d",lcm(24,18));   // test case

   for(i=0;i<20;i++)
   {
       input[i]=i+1;
   }

   printf("lcm of ");
   for(i=0;i<20;i++)
   {
       printf(" %d ",input[i]);

   }

   printf(" is ");
   for(i=0;i<20;i++)
   {
       ans=lcm(ans,input[i]);
   }

printf("%lld", ans);
 return 0;

}


long long gcd(long long a, long long b)
{
    long long rem=1;
    while(rem>0)
    {
    rem=a%b;
    a=b;
    b=rem;
    }
    return a;
}
long long lcm(long long p , long long q)
{
    int res;
    res=(p*q)/gcd(p,q);
    return res;

}

