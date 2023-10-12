#include<bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map < int , int > mp;
        mp[0] = -1;
        int ans = 0, sum = 0;
        for (int i = 0; i < N; i++) {
            sum += A[i];
            
            if (mp.find(sum - K) != mp.end()) ans = max(ans, i - mp[sum-K]);
            
            if (mp.find(sum) == mp.end()) mp[sum] = i;
        }
        
        return ans;
    } 

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) cin >> a[i];

	int k; cin >> k;


	cout << lenOfLongSubarr(a, n, k) << endl;

	
}