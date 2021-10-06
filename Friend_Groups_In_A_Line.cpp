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
// #ifndef ONLINE_JUDGE
//     rw;
// #endif
    int t, n, k;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> n >> k;
        cin >> s;
        vi v;
        int ans;
        for0(i, n, 1)
        {
            if (s[i] == '1')
                v.pb(i + 1);
        }
        ans = v.size();
        // if (k == 0)
        //     cout << ans << endl;
        // else
        //     cout << "1" << endl;
        bool fixed[n + 5] = {false}, used[n + 5] = {false};
        for0(i, v.size() - 1, 1)
        {
            if ((v[i + 1] - v[i]) < k)
            {
                // v[i + 1] += min(1, n - v[i + 1]);
                if (v[i + 1] + 1 <= n)
                {
                    v[i + 1]++;
                    used[v[i + 1]] = true;
                    if ((v[i + 1] - v[i]) == k)
                    {
                        fixed[v[i + 1]] = true;
                    }
                }
                ans--;
            }
            else if ((v[i + 1] - v[i]) == k)
            {
                if (!fixed[v[i]] && !used[v[i]])
                {
                    if (v[i + 1] + 1 <= n)
                    {
                        v[i + 1]++;
                        used[v[i] + 1] = true;
                        used[v[i + 1]] = true;
                    }
                }
                fixed[v[i + 1]] = true;
                // v[i] += min(1, n - v[i]);
                ans--;
            }
            else
            {
                if ((v[i + 1] - (v[i] + 1)) == k)
                {
                    if (!fixed[v[i]] && !used[v[i]])
                    {
                        ans--;
                        fixed[v[i + 1]] = true;
                        used[v[i] + 1] = true;
                    }
                    else if (!fixed[v[i + 1]] && !used[v[i + 1]])
                    {
                        v[i + 1]--;
                        fixed[v[i + 1]] = true;
                        used[v[i + 1]] = true;
                    }
                }
                else if (((v[i + 1] - 1) - (v[i] + 1)) == k)
                {
                    if (!fixed[v[i]] && !used[v[i + 1]] && !used[v[i]])
                    {
                        ans--;
                        fixed[v[i + 1] - 1] = true;
                        v[i + 1]--;
                        used[v[i + 1]] = true;
                        used[v[i] + 1] = true;
                    }
                }
            }
            // if (v[i + 1] + 1 <= n && ((v[i + 1] + 1) - v[i]) <= k)
            //     v[i + 1]++, ans--;
            // else if (v[i] > 0 && (v[i + 1] - (v[i] - 1)) <= k)
            // {
            //     v[i]--, ans--;
            // }
            // else if ((v[i + 1] - (v[i] + 1)) <= k)
            // {
            //     v[i]++, ans--;
            // }
            // else if (((v[i + 1] - 1) - v[i]) <= k)
            // {
            //     v[i + 1]--, ans--;
            // }
            // else
            //     break;
        }
        cout << ans << endl;
    }
    return 0;
}