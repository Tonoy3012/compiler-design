#include<bits/stdc++.h>
using namespace std;

void solve()
{

    string s;
    getline(cin , s);
    int len = s.size();
    for(int i = 0; i < s.size();i++)
    {
        if(s[i] == '/' and s[i+1] == '/')
        {
            cout << "Single line comment found" << endl;
            return;
        }
        else if((s[i] == '/' and s[i+1] == '*') and (s[len -1] == '/' and s[len - 2] == '*'))
        {
           cout << "Multipule line comment found" << endl;
           return;
        }
        else
        {
            continue;
        }
    }
    cout << "This is not an comment" << endl;

}

int main()
{

    solve();

    return 0;
}