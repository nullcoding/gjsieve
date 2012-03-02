//re-formatted, nested

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

inline float pow  (float x, float y) {return pow((double)x,(double)y);}


int main() {

    char answer;

    do {
        int x =0; int N, n, k, quotient, factor; int i = 2;

        cout << "Please input a positive, odd integer k (greater than 1):" <<endl;

        cin >> k;

        while (k%2 == 0 || k <= 0) {

            cout << "That doesn't work. Input a positive, odd integer for k:" <<endl;

            cin >> k;

            }

        cout << "Please input a number n, such that 2^n is greater than k:" <<endl;

        cin >> n;

        while ((std::pow(2,n)) < k) {

            cout << "That doesn't work. Input a positive integer n where 2^n is greater than k:" <<endl;

            cin >> n;

            }

        N = ((k*(pow(2,n))+1));

        do {

            quotient = N/i;


            i = i++;

            } while ((N%i) != 0);

        quotient = N/i;

        cout << N <<" is divisible by " << i <<" and has the factors " << i <<" and " << quotient <<"."  <<endl;

        /*basically, if N is the only factor of N (besides 1) that is found, it will be displayed first; thus, we can safely
        assume that if i = N, the number has only two factors - 1 and itself - and is therefore prime. */

        if ( i == N) {

            cout << N << " is prime!\n";

            }

        else {

            cout << N << " appears to be composite.\n" <<endl;

            }

        cout << "Would you like to run again?\n";

        cin >> answer; //if the user wants to test more values of k and n, input y || Y; inputting anything else exits the loop.

    }

    while (answer == 'y'|| answer == 'Y');
}
