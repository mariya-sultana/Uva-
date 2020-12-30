#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(gcd(a, b) == 1)
            printf("%10d%10d    Good Choice\n", a, b);
        else
            printf("%10d%10d    Bad Choice\n", a, b);
        puts("");
    }
    return 0;
}
