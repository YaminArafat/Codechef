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
    ll t, n, p, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> p >> k;
        if (k > n - 1)
        {
            cout << p + 1 << endl;
        }
        else
        {
            ll ans;
            if (k >= ((n + 1) / 2))
            {
                ll lim = (n - 1) % k + 1;
                if (p >= lim && p < k)
                {
                    // ans = (p % k) * 2 + 1;
                    ans = (lim * 2);
                    ans += (p - lim + 1);
                }
                else
                {
                    ans = (p % k) * 2 + 1;
                    // see3(ans, p, k);
                    if (p >= k)
                        ans++;
                }
            }
            else
            {
                ll xtra = n % k;
                ll curr = p % k;
                ll pos = p / k;
                if (curr < xtra)
                {
                    ans = curr - 0;
                    if (n % k)
                        xtra = 1;
                    else
                        xtra = 0;
                    ans *= ((n / k) + xtra);
                    // see2(curr, ans);
                    ans += pos + 1;
                }
                else
                {
                    if (n % k)
                        xtra = 1;
                    else
                        xtra = 0;
                    ans = (n % k) * ((n / k) + xtra);
                    ans += ((p % k) - (n % k)) * (n / k);
                    ans += pos + 1;
                }
                // ans = (p / k) + ((p % k) * ((n / k) + 1) + 1);
            }
            // if (n % 2 && k == n / 2)
            // {
            //     ans++;
            // }
            // ll ans = (p % k) * ((n/k)+1) + 1;
            // if (p >= k)
            //     ans+=n/k;
            // ll ans = (p / k) + ((p % k) * ((n / k) + 1) + 1);
            cout << ans << endl;
            // if (!p)
            // {
            //     cout << "1" << endl;
            // }
            // else if (p < k)
            // {
            //     cout << n - k + p + 1 << endl;
            // }
            // else
            //     cout << p - k + 2 << endl;
        }
    }
    return 0;
}