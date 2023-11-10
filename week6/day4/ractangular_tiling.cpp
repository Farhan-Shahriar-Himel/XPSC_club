#include<bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while (t--) {

        int a, b; 
        scanf("%d %d", &a, &b);

        if ((a & 1) and (b & 1))
            printf("NO\n");
        else printf("YES\n");

    }
    return 0;
}