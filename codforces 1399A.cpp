#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;

        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        bool flg=false;
        for(int i=1; i<n; i++)
        {
            if(abs(v[i]-v[i-1])>1)
            {
                flg=true;
                break;
            }
        }
        if(flg)cout<<"NO\n";
        else cout<<"YES\n";

    }
    return 0;
}
