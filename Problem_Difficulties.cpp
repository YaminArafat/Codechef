#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for0(i, n, incr) for (int i = 0; i < (int)(n); i+=incr) 
#define for1(i, n, incr) for (int i = 1; i <= (int)(n); i+=incr) 
#define forc(i, l, r, incr) for (int i = (int)(l); i <= (int)(r); i+=incr) 
#define forcr(i, r, l, decr) for (int i = (int)(r); i >= (int)(l); i-=decr)
#define forr0(i, n, decr) for (int i = (int)(n) - 1; i >= 0; i-=decr)
#define forr1(i, n, decr) for (int i = (int)(n); i >= 1; i-=decr) 
#define see(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define see2(x,y) cout<<"\n"<<#x<<" = "<<(x)<<" "<<#y<<" = "<<(y)<<'\n'
#define see3(x,y,z) cout<<"\n"<<#x<<" = "<<(x)<<" "<<#y<<" = "<<(y)<<" "<<#z<<" = "<<(z)<<'\n'
#define clr(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
#define fio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define rw freopen("input.txt","r",stdin);freopen("output.txt","w",stdout); 
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    int t, n;
    cin >> t;
    while (t--)
    {
        // set<int> s;
        int arr[5], cnt = 0, f = 0;
        for0(i, 4, 1)
        {
            cin >> arr[i];
            // s.insert(n);
        }
        for0(i, 4, 1)
        {
            cnt = 0;
            for0(j, 4, 1)
            {
                if (arr[i] == arr[j])
                    cnt++;
            }
            if (cnt == 2)
            {
                cout << cnt << endl;
                f = 1;
                break;
            }
            else if (cnt == 3)
            {
                cout << "1" << endl;
                f = 1;
                break;
            }
            else if (cnt == 4)
            {
                cout << "0" << endl;
                f = 1;
                break;
            }
        }
        if (!f)
            cout << "2" << endl;
        // sort(arr, arr + 4);
        // bool mark[5] = {false};
        // for0(i, 3, 1)
        // {
        //     if (mark[i])
        //         continue;
        //     forcr(j, 3, i + 1, 1)
        //     {
        //         if (mark[j])
        //             continue;
        //         if (arr[i] != arr[j])
        //         {
        //             mark[i] = true;
        //             mark[j] = true;
        //             cnt++;
        //             break;
        //         }
        //     }
        // }
        // cout << cnt << endl;
        // if (arr[0] != arr[1] && arr[2] != arr[3])
        //     cout << "2" << endl;
        // else if (arr[0] != arr[1] || arr[2] != arr[3])
        //     cout << "1" << endl;
        // else
        //     cout << "0" << endl;
        // if (s.size() > 3)
        //     cout << "2" << endl;
        // else if(s.size)
    }
    return 0;
}