/*
    ##******************************************************************##
    ##******************************************************************##
    **                             Author:                              **
    **                          Prince Ghosh                            |
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
   int x;
   cin>> x;
   if(x<=70) {
       cout<< "0\n";
   } else if(x>70 && x<=100) {
       cout<< "500\n";
   } else if(x>100) {
       cout<< "2000\n";
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


