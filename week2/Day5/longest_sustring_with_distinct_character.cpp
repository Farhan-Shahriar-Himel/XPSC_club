#include<bits/stdc++.h>
using namespace std;

int longestSubstrDistinctChars (string s)
{
    int i = 0, j = -1;
    map < char, int > mp;
    int n = s.size(), ans = 0;
    
    for (auto ch : s) mp[ch] = -1;
    
    for (auto ch : s) {
    	cout << ch << " " << mp[ch] << " ";
        if (mp[ch] > j) 
            j = mp[ch];
        mp[ch] = i;
        ans = max(ans, i - j);
        cout << ans << endl;
        i++;
    }
    
    return ans;
}

int main() {
	string s; cin >> s;

	cout << longestSubstrDistinctChars(s);
}