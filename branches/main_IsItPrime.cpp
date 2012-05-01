#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

inline uint64_t pow(uint64_t x, uint64_t y)
{
    return pow((uint64_t)x,(uint64_t)y);
}

uint64_t size = 4096;

void* malloc(size_t size);

int main()

{

uint64_t N;
int y = 1;
int n = 0;

 cout << "Prime Tester v0.2a by J. Boerner (c) 2012.\n\n";

for (int answer = y or n; answer == y ; )


{

   {

    cout << "Ok, give me a number to test..." <<endl;

 cin >> N;
   }

     {

       ofstream myfile;
        myfile.open ( "results.txt");
        if (myfile.is_open())

{
            myfile << "Prime Tester v0.1a by J. Boerner (c) 2012.\n\n";
            myfile << "You chose " << N << " to be tested.\n\n";
            myfile << "Here are the results...\n\n";

            {


                uint64_t quotient;
                uint64_t i = 2;

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
                    myfile << N << " is prime!\n\n\n";
                }

                else
                {

                    cout << N << " appears to be composite.\n" <<endl;
                    myfile << N << " appears to be composite.\n\n" <<endl;

                }

                cout <<"OK\n\n" <<endl;


            }
}
            cout <<"Done. Please check results.txt for output!\n\n" <<endl;
            cout <<"Do you want to test another? (y/n)\n\n";

            cin >> answer;
            cout <<"\n\n";


            myfile <<"All done here." <<endl;
            myfile.close();
     }

if (answer == n ) {
    break;
    }

} //FOR LOOP
} //MAIN
