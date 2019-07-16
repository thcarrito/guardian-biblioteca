#include <bits/stdc++.h>
using namespace std;
#define dprint(v) cerr << #v"=" << v << endl //;)
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fst first
#define snd second
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;

int main(){
  int N;
  cin >> N;
  forn(i, N){
    ll WX, WY, WZ, XY, ZX, YZ;
    ll V, A, r, SWYZ, SWZX, SWXY, SXYZ, WYZ, WZX, WXY, XYZ;
    cin >> WX >> WY >> WZ >> XY >> ZX >> YZ;
    V = (sqrt((4 * WX * WX * WY * WY * WZ * WZ) - (WX * WX * (WY * WY + WZ * WZ - YZ * YZ) * (WY * WY + WZ * WZ - YZ * YZ)) - (WY * WY * (WX * WX + WZ * WZ - ZX * ZX) * (WX * WX + WZ * WZ - ZX * ZX)) - (WZ * WZ * (WX * WX + WY * WY - XY * XY) * (WX * WX + WY * WY - XY * XY)) + ((WY * WY + WZ * WZ - YZ * YZ) * (WX * WX + WZ * WZ - ZX * ZX) * (WX * WX + WY * WY - XY * XY)))) / 12;
    SWYZ = (WY + YZ + WZ) / 2;
    SWZX = (WZ + ZX + WX) / 2;
    SWXY = (WX + XY + WY) / 2;
    SXYZ = (XY + YZ + ZX) / 2;
    WYZ = sqrt(SWYZ * (SWYZ - WY) * (SWYZ - YZ) * (SWYZ - WZ));
    WZX = sqrt(SWZX * (SWZX - WZ) * (SWZX - ZX) * (SWZX - WX));
    WXY = sqrt(SWXY * (SWXY - WX) * (SWXY - XY) * (SWXY - WY));
    XYZ = sqrt(SXYZ * (SXYZ - XY) * (SXYZ - YZ) * (SXYZ - ZX));
    A = WYZ + WZX + WXY + XYZ;
    r = (3 * V) / A;
    cout << fixed;
    cout << setprecision(4);
    cout << r << endl;
  }
}
