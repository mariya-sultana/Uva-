#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long c,r;
    while(cin>>c>>r && c && r)
    {
        double x,Ans,ans,count=1;

        x=c;
        ans=c-r;

        if(ans>r)
            ans=r;

        while(ans>0)
        {
            Ans=x/ans;
            count = count*Ans;
            x--;
             ans--;
        }
        cout<<c<<" things taken "<<r<<" at a time is "<<count<<" exactly."<<endl;
    }
    return 0;
}
