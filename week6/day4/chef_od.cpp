#include <iostream>
using namespace std;
#define int long long 

void __() {

	int n, k; cin >> n >> k;

	int odd;

	if(n % 2 == 0)
	    odd = n / 2;
	else
	    odd = n / 2 + 1;
	  
	if(n >= 2 * k) {

	    int ans = odd - k;

	    if(ans % 2 == 0) cout << "YES\n";
	    
	    else cout << "NO\n";

	}
	  
	else cout << "NO\n";
	  

}

int32_t main() {

	int t; cin >> t;

	while(t--)
		__();

	return 0;
}
