#include <bits/stdc++.h>
using namespace std;


int main() 
{
  string s;
  cin>> s;
  
  string sec;
  cin>>sec; 
  
  // cin.ignore();
  
  // string out;
  // vector<string>v;
  // getline(cin , out);
  // istringstream k(out);
  // string word;
  // while(k >> word)
  // {
  //   v.push_back(word);
  // }
  
  int ans = 0;
  string res;
  for(int i=0; i<sec.size(); i++)
  {
    res += s[i];
  }
  if(res == sec) ans++;
  for(int i=sec.size(); i<s.size(); i++){
    res += s[i];
    res.erase(res.begin());
    if(res == sec) ans++;
  }
  //cout << ans << endl;
  if(ans > 0){
    cout << "2nd string is  a substring of the 1st string." <<endl;
    //for(auto it : v)cout << it << endl;
  }
  else{
    cout << "2nd string is not a substring of the 1st string." <<endl;
  }

    return 0;
}