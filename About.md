# Introduction #

gjsieve is a small experiment in Proth number testing. It is _not_ meant to be used for serious primality evaluation of large numbers. It probably never will be.

gjsieve has been copied and branched into several other [Versions](Versions.md).

# Details #

gjsieve is a C++ application to demonstrate Proth number functionality with the formula originally set down by French mathematician Francois Proth N = k(2^n)-1, where:

  * N is a Proth number
  * k is a positive, odd integer
  * n is a positive integer such that 2^n is greater than k

gjsieve is currently a work in progress, in alpha stage, although it is stable. It can currently not be built or run on Mac OS X 64-bit and is untested on Mac OS X 32-bit.

## Current Version ##

# gjsieve15 #

The application has been completely re-written. It still runs in a basic console. This version, however, is two applications. One creates an array in a text file. The gjsieve tester application then takes each line as input and tests it for factors.

This version accomplishes the same thing as previous versions. It is, however, still limited in the range of numbers it can test.


## Deprecated Versions ##

# Version 2 #

The application runs in a basic command prompt. The user enters a value of k, then a value of n. The application then performs a calculation of the Proth number N, and subsequently attempts to factor it. If the only factors found are 1 and N, the number is prime; if other factors exist, the number is composite.

The user is then given the option to either restart with new values or terminate the application.

# Version 3 #

The application runs in a basic command prompt. The user enters a lower and upper bound of n. The lower bound must be between 3 and 28, and the upper bound must be greater than the lower bound but less than 30. This is due to an unresolved overflow error. Work on rectifying that is in progress.

The application then performs a calculation of the Proth number N, and subsequently attempts to factor it. If the only factors found are 1 and N, the number is prime; if other factors exist, the number is composite. The calculation is repeated for each value of n in the range input by the user. The application then writes results of the calculations to results.txt and quits.

In order to run again with v3, the program must be restarted. It runs a loop, but only until the upper bound is reached. In future, the program can be run indefinitely at different ranges.

Version 3 is currently the most stable, _however_ it cannot handle N values larger than 10 digits and will ask the user (in a somewhat confusing manner) to re-enter the lower bound of n if k is too high for the lower n.

No version of gjsieve will currently run on Darwin kernel (OSX). Sorry.

# Version 3.1 #

Version 3.1 is identical to version 3 with the exception of formatting differences for results.txt (more information is provided) and the addition of a malloc function in attempts to allocate more memory to stack. This unfortunately does not mitigate the overflow errors.

Version 3.1 also is the basis for the Fermat, Cullen, and Woodall branches of gjsieve.