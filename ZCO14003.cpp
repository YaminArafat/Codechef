#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,temp,ind,mx=0;
    scanf("%lld",&n);
    long long arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n);
    for(i=0; i<n; i++)
    {
        ind=n-i;
        if(arr[i]*ind>mx)
        {
            mx=arr[i]*ind;
        }
    }
    printf("%lld\n",mx);
    return 0;
}
