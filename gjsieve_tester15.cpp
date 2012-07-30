/*

This DOES work! It accepts input from a file (arrays) generated by the arraymaker program. It still asks for k, but in the future 
this too shall be automated.

There is one small problem, however. Still. Sorry.

It crashes on large numbers. Surprise! Not like I rewrote the program specifically to avoid that or anything!

note the malloc = for any number c = 2^n (in this case from arrays.txt) memory allocated in int buffer is c+1 bytes. 

Since it is mathematically impossible for a sequentially decreasing list of factors to exceed the size of the number 
of which they are factors, it is meant to be quite nearly fail-safe.  

Clearly it is not. When it begins listing negative numbers as factors, kill it. 

*/

#include "stdafx.h"

using namespace std;

inline long double pow(long double x, long double y);


int _tmain(int argc, _TCHAR* argv[])
{
		//hey let's initialize some stuff

int i = 1;
int t = 2;
int s = 2;
int factor = 0;
long double m = 2;
int u = 0;
int k;
__int64 X, N;
string line;
__int64 c;

cout << "Welcome to GJSieve version 1.1 testing alpha!\n";
cout << "This version is based on gjsieve 0.3a by G. Arico and J. Boerner\n";
cout << "and also somewhat similar to gjsieve1.0, which never left alpha.\n";
cout << "Read the documentation if you want to know more.\n\n";
cout << "For now: Enter a positive, odd integer!\nPlease, not more than 30, you've been warned...\n\n input: ";
kay: cin >> k;
Sleep (100);

if (k < 30 )
{
cout << k << ", huh? Interesting..."<<endl;
}
else 
{
ah:	cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA YOU BROKE IT!!!!!!!!!!!";
	Sleep (100);
	goto ah;
}

		ofstream results;
        results.open ( "results.txt");
        if (results.is_open())
		{

			results << "gjsieve v1.1a by J. Boerner (c) 2012.\n\n";
            results << "You chose " << k << " as your value of k.\n";
            results << "Here are the results...\n\n"; 

ifstream arrfile; 
arrfile.open ( "arrays.txt", ios::in );
	if (arrfile.is_open())
{

    while ( !arrfile.eof() )
    {
	
	  arrfile >> c;
	  int mem = c;
	  int * buffer;
	  buffer = (int*) malloc (mem+1);
      cout << "\n" << c << " is the current value of 2^n.\n" <<endl;
	  results << "\n" << c << " is the current value of 2^n.\n" <<endl;
	  Sleep (1000);

			X = k * c;
			N = X - 1;

		cout << k << " * " << c << " - 1 is " << N << ".\n" <<endl;
		results << k << " * " << c << " - 1 is " << N << ".\n" <<endl;

		cout << "Preparing to test " << N << "...\n"<<endl;
		Sleep (500);


		for (factor = 0, t = 2; t < N ; t++)
	{
		
		if (N%t == 0)
		{

			cout << t << " is a factor...\n";
			results << t << " is a factor - " << N << " is not prime. :( \n";
			factor++;
	
		}

		}

		if (factor == 0)
		{
			cout << N << " might be prime.";
			results << N << " might be prime.";
			
		}
		
                cout << "\nOkay, next!\n\n" <<endl;
				free (buffer);
				Sleep(500);
			
		int factor = 0;
    }
    arrfile.close();
}

  else cout << "Unable to open file"; 
  Sleep (2000);
  results.close();
	
}//results ofile
}//main