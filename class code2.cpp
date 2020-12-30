#include<bits/stdc++.h>
using namespace std;
//#define MAX 100

//int primes[MAX+1];

int main()

{

    int i,j,MAX;
    cin>>MAX;
    int  primes[MAX];
    primes[0]=0;
    primes[1]=0;

    for (i = 2; i <= MAX; i++)

        primes[i] = 1;

    for (i = 2; i <= MAX; i++)
    {

        if (primes[i])
        {
            for (j = i; i + j <= MAX; j++)

                primes[i + j] = 0;
                primes[i + j-1] = 1;

        }


    }

    printf("\nPrime numbers between 1 to 100 are:\n");

    for (i = 2; i <= MAX; i++)

        if (primes[i])

            printf("%d\n", i);

    return 0;

}
