/*
	gjsieve is designed to test primality of Proth numbers - numbers of the form N = (k * 2^n) -1 
	where k = positive integer greater than 1, and
	where n = positive integer such that 2^n is not less than k.
	
	This is the program responsible for creating arrays from which GJsieve 1.5 will draw its input.
	
	It asks for user input, then creates an array in a text file called arrays.txt.
	
	THIS PROGRAM creates an input file for 2^n, which GJsieve in turn interprets as c in (k*c)-1. 
*/

#include "stdafx.h"
#include "largepowers.h"

using namespace std;
       
int _tmain(int argc, _TCHAR* argv[])

{

__int64 m = 2;
__int64 u = 0;

ofstream arrfile;
arrfile.open ( "arrays.txt");

cout << "gjsieve v1.5a by J. Boerner (c) 2012. Testing alpha.\n"<<endl;
cout << "Array generator for 2^n\n"<<endl;

cout << "Generating array for 2^n\n\n"; 
/*Sleep(1000);
cout << ".";
Sleep(1000);
cout << ".";
Sleep(1000);
cout << ".";*/

std::array<__int64,61> narray;

  for (u=0; u<60; u++, m++) narray.at(u) = power(2,m);

//        actually writing this time

        if (arrfile.is_open())
        {

	for (u=0; u<60; u++) arrfile << narray.at(u) << "\n" ;
		}

arrfile.close();

cout << "array generated.\n\n" <<endl;

        cout <<"All done here. Thanks for using GJsieve. Check array.txt in the application directory.\n\n Ready to test shortly..." <<endl;

		Sleep(3000);

    return 0;
	}



