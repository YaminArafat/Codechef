#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
           count+=2;
           if(i*i==n)
           {
               count--;
           }
        }
    }
    cout<<count<<endl;
}
