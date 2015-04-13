# About #

GJSieve is a basic, user-controlled Proth number testing application designed to demonstrate how algorithms are tested and used to find Proth primes (and composites).

There are also **several** different versions of the application, as well as IsItPrime, a simple command-line test for primality of integers.

The most up-to-date version of the GJSieve standalone is [GJSieve 1.9.0](http://code.google.com/p/gjsieve/downloads/detail?name=gjsieve190.rar) with GUI.

This is also the home of other NullCoding projects, such as the [Multi-Purpose Prime Number Tester](http://code.google.com/p/gjsieve/wiki/MuPuPriNT) and [NCSpiral](http://code.google.com/p/gjsieve/wiki/NCSpiral). Information about their latest versions is on their respective Wiki pages.

_Please do note that the "Source" section of this project site is obsolete! We upload archives of full [source](http://code.google.com/p/gjsieve/wiki/Source) instead._

# News #

**22 August 2012**

[GJSieve 1.9.0](http://code.google.com/p/gjsieve/downloads/detail?name=gjsieve190.rar) is available. Be sure to check the [blog](http://ncprime.blogspot.com) for more regularly updated information - it is a decidedly better source of news.

**30 July 2012**

Not only is [MuPuPriNT v0.2a](http://code.google.com/p/gjsieve/wiki/MuPuPriNT) available, but now so is NCSpiral, a simple prime-spiral generator. Read more about it on its [wiki page](http://code.google.com/p/gjsieve/wiki/NCSpiral)!

**23 July 2012**

I updated the alpha release of gjsieve! This is officially GJS155\_GUI, or GJSieve 1.5.5. It is essentially a more finely-tuned GJSieve 1.5.1 with a graphical frontend. For now, check out the readme file included in the source package you can find [here](http://code.google.com/p/gjsieve/downloads/detail?name=GJSGUI_REL.rar).

A full changelog is forthcoming along with a few minor tweaks. Be aware that many (if not most) of the menu items currently _do nothing_. This is not so much intentional as it is unfortunate. They are either purely cosmetic or just for fun and their lack of functionality oughtn't to be a hindrance to use of the application.

This is quite exciting for me - it is finally, finally, finally stable and usable! As always, questions and comments are welcome via email.

**14 July 2012**

An early-alpha version of the frontend for gjsieve is now up on the Downloads page!

In terms of math, it _does_ work. However, it's a bit lacking in graphical functionality (not to mention actual content.) Normal usage is not affected, but the empty boxes could be a bit confusing.

As I have less than two days of experience with the Windows API, I welcome contributions to the source. You'll find that in Downloads as well.

**12 July 2012**

gjs15x64 (GJSieve 1.5 x64) is now available! Simply download the archive [here](http://code.google.com/p/gjsieve/downloads/detail?name=gjs15x64_release.rar) or from our Downloads page.

There is a lot to say about this release, so check the readmetext file after unarchiving!


**10 July 2012**

Our first major release in about two months! gjsieve11 is re-written completely to use arrays and conditionals to sequentially input and test numbers.

There are still some problems with this version. Please see the Issues section to know what not to do.

My big goal, as I am currently the only active developer, is to re-write the application to use a bigint library - that is, a C/C++ library for very large or huge floating-point integers, specifically something like MPIR or FFTW or gwnum, all of which are designed for highly accurate arbitrary multi-precision floating point arithmetic.

Hopefully I can continue development with these libraries in the very near future!

- J. B.

## Proth numbers ##

A Proth number, for our purposes, is a whole integer N where `N=k(2^n)-1`. k must be a positive, odd integer. n is a positive integer such that 2^n is greater than k.

## How to Use ##

_We are at a point where having directions here no longer makes sense. Instead, view the readme in each archive, as they explain everything!_

# Project contributors #

J. Boerner is an amateur programmer from Pennsylvania. He works as a computer technician at Dickinson College, where he is a second-year student majoring in East Asian Studies with a focus on Chinese.

G. Arico is an amateur programmer Pennsylvania. He works as a freelance musician and has composed music for the University of Pennsylvania's film studies program. He is currently a second-year student at Pennsylvania State University, where he majors in Industrial Engineering and also learning C++.