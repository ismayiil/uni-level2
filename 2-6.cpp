#include <bits/stdc++.h>

using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)
#define sz(v) v.size()
signed main(){

    int a; cin >> a;
    if(a < 1 || a > 12) cout << "Not a season number(Ilin feli deyil)";
    else if(a == 12 || a <= 2) cout << "Winter";
    else if(a >= 3 && a <= 5) cout << "Spring";
    else if(a >= 6 && a <= 8) cout << "Summer";
    else cout << "Autumn";
    
}