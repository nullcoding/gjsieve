# Other Versions #

In our Source section, you will find a branches subsection of SVN. There are several programs there.

  * Fermat numbers (2<sup>(2</sup>n)-1)
  * Woodall numbers (2•(2^n)-1)
  * Cullen numbers (2•(2^n)+1)
  * Mersenne numbers ((2^n)-1)

These programs all work. However, some notes about each:

  * Fermat tester works only up to n = 5. Because it calls a power function, rather than multiplication, the resulting integers overflow quickly.
  * Woodall tester works only up to n = 28.
  * Cullen tester works only up to n = 63. **However** this is proof that our program(s) can handle output larger than 11 digits.

# IsItPrime #

IsItPrime is a simple command-line test of a number's prime or composite properties.

It is in the process of being re-written, but is theoretically capable of testing numbers up to 2^64 -1.