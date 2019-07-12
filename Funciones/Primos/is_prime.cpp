#include<bits/stdc++.h>
typedef long long ll;
const int MAXN = 10000000;

using namespace std;

bool is_prime(int m){
  for(int a=2; a*a<=m; a++){
    if(m%a==0)
      return false;
  }
  return true;
}

int main(){
	return 0;
}
