#include <bits/stdc++.h>

using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)
#define sz(v) v.size()
signed main(){

    int a; cin >> a;
    if(a > 90 && a <= 100) cout << 'A';
    else if(a > 80) cout << 'B';
    else if(a > 70) cout << 'C';
    else if(a > 60) cout << 'D';
    else if(a > 50) cout << 'E';
    else cout << 'F';
    
}