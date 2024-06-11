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
    int a, b, c, d;
    cin>> a>> b>> c>> d;
    if((a*2+b) == (c*2+d)) {
    	cout<< "Equal\n";
    } else if((a*2+b) > (c*2+d)) {
    	cout<< "Messi\n";
    } else if((a*2+b) < (c*2+d)) {
    	cout<< "Ronaldo\n";
    }
}

main {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;

    while (t--) {
        solveTestCase();
    }

    //solveTestCase();

    return 0;
}


