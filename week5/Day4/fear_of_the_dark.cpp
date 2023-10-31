#include<bits/stdc++.h>
using namespace std;
#define sq(n) (n)*(n)
 
void __() {
 
    auto dist = [&](double a, double b, double c, double d) {return sqrt(sq(a - c) + sq(b - d));}; 
 
    int px, py, ax, ay, bx, by;
    cin >> px >> py >> ax >> ay >> bx >> by;
 
    double pa = dist(px, py, ax, ay);
    double pb = dist(px, py, bx, by);
    double oa = dist(0, 0, ax, ay);
    double ob = dist(0, 0, bx, by);
    double ab = dist(ax, ay, bx, by);
 
    double ans = 1e9;
 
    ans = min(ans, max(pa, oa));
    ans = min(ans, max(pb, ob));
    ans = min(ans, max({ab / 2, pa, ob}));
    ans = min(ans, max({ab / 2, pb, oa}));
    
    cout << setprecision(10) << fixed << ans << '\n';
 
}
 
int32_t main() {
 
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); cout.tie(nullptr);
 
    int _; cin >> _;
    while (_--) 
        __();
 
    return 0;
}