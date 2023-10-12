#include<bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k) {
    // your code here
        int i = 0, j = 0;
        map < char, int > fr;
        int unq = 0, ans = -1;
        int n = s.size();
        
        while (j < n) {
            fr[s[j]]++;
            if (fr[s[j]] == 1) unq++;
            
            while (unq > k) {
                fr[s[i]]--;
                if (fr[s[i]] == 0) unq--;
                i++;
            }
            
            if (unq == k) ans = max(ans, j - i + 1);
            j++;
        }
        
        return ans;
    }
    
int main() {

	string s; cin >> s;
	int k; cin >> k;

	cout << longestKSubstr(s, k) << endl;

	return 0;
}