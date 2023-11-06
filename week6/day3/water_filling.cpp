#include<bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); cout.tie(nullptr);

    auto __ = [&]() -> string {

            int a, b, c; cin >> a >> b >> c;
            int cnt = 0;

            if (a) cnt++;
            if (b) cnt++;
            if (c) cnt++;

            if (cnt <= 1) return "Water filling time";
            
            return "Not now";
    };  

    int _; cin >> _;
    while (_--) 
        cout << __() << "\n";

    return 0;
}