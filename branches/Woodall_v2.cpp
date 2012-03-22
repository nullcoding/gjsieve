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

uint64_t lower, upper;
char answer, Q;


 cout << "Woodall Tester v0.1a by J. Boerner (c) 2012.\n\n";
    cout << "Please input a lower bound for n." <<endl;

 cin >> lower;

    while ( lower < 0) {

        cout << "Nope. n must be non-negative. Try again." <<endl;

        cin >> lower;

        }

 cout << "Please input an upper bound for n." <<endl;

    cin >> upper;

    while ( upper<lower )
    {

        cout << "That doesn't work. Upper bound must be greater than lower bound." <<endl;

        cin >> upper;

    }

 cout << "You chose " << lower << " as your lower bound and " << upper << " as your upper bound.\n\n";

 {
        //here's where it writes to results.txt

        ofstream myfile;
        myfile.open ( "results.txt");
        if (myfile.is_open())
        {


{
            myfile << "Woodall Tester v0.1a by J. Boerner (c) 2012.\n\n";
            myfile << "You chose " << lower << " as your lower bound and " << upper << " as your upper bound.\n\n";
            myfile << "Here are the results...\n\n"; //ignore the somewhat ugly formatting - it works

            for(uint64_t j = lower; j <=upper; j++)
            {

                uint64_t quotient, N;
                uint64_t i = 2;

                N = j*(pow(2,(uint64_t)j))-1;

                do
                {

                    quotient = N/i;


                    i = i++;

                }
                while ((N%i) != 0);

                quotient = N/i;

                cout << N <<" is divisible by " << i <<" and has the factors " << i <<" and " << quotient <<"."  <<endl;
                myfile << N <<" is divisible by " << i <<" and has the factors " << i <<" and " << quotient <<".\n"  <<endl;

                /*basically, if N is the only factor of N (besides 1) that is found, it will be displayed first; thus, we can safely
                assume that if i = N, the number has only two factors - 1 and itself - and is therefore prime. */


                if ( i == N)
                {

                    cout << N << " is prime!\n";
                    myfile << "n is " << j << ", and " << j << "*2^" << j << "-1 is " << N << ".\n\n";
                    myfile << N << " is prime!\n\n\n";
                }

                else
                {

                    cout << N << " appears to be composite.\n" <<endl;
                    myfile << "n is " << j << ", and " << j << "*2^" << j << "-1 is " << N << ".\n\n";
                    myfile << N << " appears to be composite.\n\n" <<endl;

                }

                cout <<"OK\n\n" <<endl;
            }


            cout <<"Done. Please check results.txt for output!\n\n" <<endl;
            cout <<"Press any key (then Enter) to quit.\n\n";
            cin >> answer;

            myfile <<"All done here." <<endl;
            myfile.close();



    }}}}


