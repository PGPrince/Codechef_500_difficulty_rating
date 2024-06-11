/*
    ##******************************************************************##
    ##******************************************************************##
    **                             Author:                              **
    **                          Prince Ghosh                            ||
    ||                    Email: ghoshprince999@gmail.com               **
    **                  BGC Trust University, Bangladesh                ||
    ||                      Country: Bangladesh                         **
    **                                                                  ||
    ||******************************************************************##                                                                 **
    ##******************************************************************##
                   Programming is a journey, not a destination.
*/
#include <bits/stdc++.h>
using namespace std;

// Define commonly used macros for quick typing
#define ll long long
#define pb push_back
#define mp make_pair
#define main int main()


void solveTestCase() {
    int week[4], cnt = 0;

    for(int i=0; i<4; i++) {
        cin>> week[i];
    }

    for(int i=0; i<4; i++) {
        if(week[i]>=10) {
            cnt++;
        }
    }

    cout<< cnt<< "\n";
}

main {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    int t;
//    cin>> t;
//
//    while (t--) {
//        solveTestCase();
//    }

    solveTestCase();

    return 0;
}


