#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n' 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415926535897932384626433832795
#define lpz(i, a, b) for (int i=a; i<b; i++)
#define lp(i, a, b) for (int i=a; i<=b; i++)
#define test() int t; cin>>t; while(t--)
#define ull unsigned long long



void solve()
{
    string s;
    getline(cin , s);
    int al = 0 , dig = 0 , sp = 0 , sc = 0;
    for(int i = 0;i < s.size();i++)
    {
        if(isalpha(s[i]))al++;
        else if(isdigit(s[i]))dig++;
        else if(isspace(s[i]))sp++;
        else
        {
            sc++;
        }
    }
    cout << al << nl;
    cout << dig << nl;
    cout << sp << nl;
    cout << sc << nl;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();

    return 0;
}