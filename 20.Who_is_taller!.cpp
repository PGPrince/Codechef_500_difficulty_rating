#include <bits/stdc++.h>
using namespace std;

#define main int main()

main {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;
    while(t--) {
        int x, y;
        cin>> x>> y;
        if(x<y) {
            cout<< "B\n";
        } else {
            cout<< "A\n";
        }
    }

    return 0;
}

