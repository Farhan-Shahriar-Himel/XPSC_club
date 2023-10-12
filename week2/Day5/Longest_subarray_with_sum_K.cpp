#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here

    int i = 0, j = 0;
    long long sum = 0;

    int n = a.size();
    int ans = 0;

    while (j < n) {
        sum += a[j];

        if (sum > k) {
            while(sum > k) {
                sum -= a[i];
                i++;
            }
        }

        if (sum == k) ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	vector < int > a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	int k; cin >> k;

	cout << longestSubarrayWithSumK(a, k) << endl;
}