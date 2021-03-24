#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,i,ans=0,sum=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            sum+=arr[i];
        }
        for(i=0;i<n;i++)
        {
            if((arr[i]+k)>(sum-arr[i]))
            {
                ans++;
            }
        }
        printf("%lld\n",ans);
        ans=0;
    }
    return 0;
}
