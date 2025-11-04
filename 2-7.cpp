#include <bits/stdc++.h>

using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)
#define sz(v) v.size()
signed main(){

    double a,b; char c; cin >> a >> c >> b;
    double ans;
    switch(c){
        case '+':
        ans = a + b;
        break;
        case '-':
        ans = a - b;
        break;
        case '*':
        ans = a * b;
        break;
        case '/':
        ans = a / b;
        break;
    }
    cout << ans;
    
}