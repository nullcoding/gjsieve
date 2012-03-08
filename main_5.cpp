//reformatted, now uses uint64_t.
//WARNING: inputting an upper bound too large (no specific parameters yet for what is too large) will cause the program to hang...

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

inline uint64_t pow(uint64_t x, uint64_t y)
{
    return pow((uint64_t)x,(uint64_t)y);
}

int main()
{

    char answer;

    uint64_t lower, k, upper;

    cout << "gjsieve v0.3a by G. Arico and J. Boerner (c) 2012.\n\n";
    cout << "Please input a lower bound for n." <<endl;

    cin >> lower;

    /* while ( lower<2 || lower > 28) {

        cout << "That doesn't work." <<endl;

        cin >> lower;

        }

    */
    cout << "Please input an upper bound for n." <<endl;

    cin >> upper;

    while ( upper<lower /*|| upper > 29 */)
    {

        cout << "That doesn't work." <<endl;

        cin >> upper;

    }

    cout << "Please input a positive, odd integer k (greater than 1):" <<endl;

    cin >> k;

    while (k%2 == 0 || k <= 0)
    {

        cout << "That doesn't work. Input a positive, odd integer for k:" <<endl;

        cin >> k;

    }

    while ((std::pow(2,lower)) < k)
    {

        cout << "That doesn't work. Input a positive integer n where 2^n is greater than k:" <<endl;

        cin >> lower;

    }

    cout << "You chose " << lower << " as your lower bound and " << upper << " as your upper bound.\n\n";
    cout << "You chose " << k << " as your value of k.\n";

    {
        //here's where it writes to results.txt

        ofstream myfile;
        myfile.open ( "results.txt");
        if (myfile.is_open())
        {
            myfile << "gjsieve v0.3a by G. Arico and J. Boerner (c) 2012.\n\n";
            myfile << "You chose " << k << " as your value of k.\n";
            myfile << "You chose " << lower << " as your lower bound and " << upper << " as your upper bound.\n\n";
            myfile << "Here are the results...\n\n"; //ignore the somewhat ugly formatting - it works

            for(uint64_t j = lower; j <=upper; j++)
            {

                uint64_t quotient, N;
                uint64_t i = 2;

                N = ((k*(pow((long double)2,(long double)j))-1));

                do
                {

                    quotient = N/i;


                    i = i++;

                }
                while ((N%i) != 0);

                quotient = N/i;

                cout << N <<" is divisible by " << i <<" and has the factors " << i <<" and " << quotient <<"."  <<endl;
                myfile << k <<"*2^" << j <<"-1 is " << N <<".\n" <<endl;
                myfile << N <<" is divisible by " << i <<" and has the factors " << i <<" and " << quotient <<".\n"  <<endl;

                /*basically, if N is the only factor of N (besides 1) that is found, it will be displayed first; thus, we can safely
                assume that if i = N, the number has only two factors - 1 and itself - and is therefore prime. */


                if ( i == N)
                {

                    cout << N << " is prime!\n";
                    myfile << N << " is prime!\n\n\n";
                }

                else
                {

                    cout << N << " appears to be composite.\n" <<endl;
                    myfile << N << " appears to be composite.\n\n" <<endl;

                }

                cout <<"OK\n\n" <<endl;

            }

            myfile <<"All done." <<endl;
            myfile.close();
        }

        cout <<"All done here." <<endl;

    }
}

