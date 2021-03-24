#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,ans=0;
    string str,s="chef";
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        cin>>str;
        for(j=0; j<str.size(); j++)
        {
            if((str[j]=='c'&&str[j+1]=='h')||(str[j]=='h'&&str[j+1]=='e')||(str[j]=='e'&&str[j+1]=='f'))
            {
                ans++;
                break;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
