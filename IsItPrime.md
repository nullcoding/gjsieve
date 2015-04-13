## About ##

I was sitting in class one day and decided to write a program that simply took input, performed a basic factorization, and told you if it was (maybe) prime or not.

We abbreviate it IIP, mainly because this Wiki interprets IsItPrime as a link to the wiki page. (see?)

## History ##

Versions 0.1 through 0.8 (which existed sequentially) were all incredibly simplistic and the only changes seen in each successive version were major stability fixes. Most of these versions were terrible memory leaks.

Version 0.9 actually gave you the ability to enter y or n to test another number of your choosing (or quit). This, like the versions before it, was highly limited by standard C libraries.

Version 1.5 is technically the same code as previous versions, except it uses the MPIR fork of GMP (like the other applications here do now). It also operates with a graphical frontend as a pure Windows application.

Currently, IIP version 1.5 is part of MuPuPriNT. I plan to make a standalone version as well.