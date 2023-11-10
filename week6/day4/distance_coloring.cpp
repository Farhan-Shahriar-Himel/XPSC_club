#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9+7;

int __() {

    int n, k;
    scanf("%lld %lld", &n, &k);
    int cnt = 1;

    for(int i = 0; i < n; i++) {
        
        if(k > 0) {
            cnt = (cnt*k)%MOD;
            k--;
        }
        else break;

    }
    return cnt;

}



int32_t main() 
{
	int _; cin >> _;
    while (_--) 
        printf("%lld\n", __());
    
	return 0;
}
