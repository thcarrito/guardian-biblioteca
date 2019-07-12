#include<bits/stdc++.h>
typedef long long ll;
const int MAXN = 1000000000;

using namespace std;

ll gcd(ll a, ll b){
  if(b<a) swap(a,b);
  if(a==0) return b;
  else{
    return gcd(b%a,a);
  }
}

ll mcm(ll a, ll b){
  return (a/gcd(a,b))*b;
}

int main(){  
  return 0;
}
