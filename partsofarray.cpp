#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ull unsigned long long
#define pb push_back
#define ff first
#define ss second
#define mod 1000000007
#define endl "\n" 
//Manish Rai
inline void fast()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
  fast();
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  ll i=-1,j=n,sum1=0,sum2=0;
  ll res=0,sum=0;
  while(i<j)
  {
   if(sum1>sum2)
    {
      sum2+=v[--j];
    }
    else if(sum1<sum2)
    {
      sum1+=v[++i];
    }
    else if(sum1==sum2)
    {
      res=max(res,sum1);
      sum1+=v[++i];
      sum2+=v[--j];
    }
  }
  cout<<res;
}
