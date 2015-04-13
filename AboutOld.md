# How to use #

The program asks for a lower bound and an upper bound for n. It then asks for k. If it finds that n(lower) is not greater than k, you must re-enter the lower bound.

The program then tests N at k for all values of n from n(lower) to n(upper).

It will quit when finished, having written the results of its calculations to a neatly formatted text file (results.txt) in the application directory.

# How not to use #

gjsieve, as of version 3, uses uint64\_t (unsigned long), which allows for outputs of N greater than (2^31)-1. HOWEVER, it _cannot_ handle numbers longer than 11 digits, and we are still working on fixing it.