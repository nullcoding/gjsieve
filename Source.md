## What's Source Control? ##

Source Control is a way to manage source code for an application.

Several versions/methods come to mind: SVN, Mercurio, Git...

In our case, we have several very different applications and having just one repository would make things a bit crowded and hard to find.

Plus, since the newest versions of our projects typically contain more than a single source code file, it makes considerably more sense to have a dependencies folder in the project directory, reference all of that in our IDE, and then compile locally.

## And your source is where? ##

When we release a new version of an application, like most software developers, we let you know, usually on [our blog](http://ncprime.blogspot.com).

The Downloads section of this Google Code project contains a lot of different things - executables and archives mainly - relating to our applications and projects.

Our naming convention is pretty simple. We give the project a name and a version number. That's about it.

But the important part - and answer to this question - is that when we release a new program/version of a program, _we release it as an archive_ - and they have a predictable and easily-understood format:

  * either a single executable, or
  * a folder called bin with multiple executables;
  * a readme text file;
  * a folder called VS2010, which contains full working source

By "full working source," I don't mean that it's huge in size or that it's functional (although it obviously should be and usually is).

This means, rather, that I simply archive the project folder used by my IDE. This happens to be Visual Studio 2010 Professional, which means to compile my projects from source, you either

  * should have Visual Studio 2010, or
  * should check out this thing called MSBuild that's like a makefile for .sln (VS Solution) files

And if this explanation wasn't detailed enough, you can definitely count on the readme file included in _every_ archive release!

And this Wiki. This Wiki is pretty informative as well.

## Are you in, like, perpetual alpha, or what? ##

Kind of, but not really.

I call most things "v0.1a" when I release them for the first time ever in the history of forever. That's just good practice, since then people won't get all confused and say "where's version 1? was there a version 1? did this even exist before?" should I start off by calling something "version 2" or "version 3.5.4" just because that's how much I feel I've edited it.

As with most programming, a version number less than 1 generally indicates any number of the following things:

  * the program may be unstable
  * the program has not been tested to a great extent
  * it's not ready for public consumption...yet
  * it's the first (or second, whatever, depending on the number) version we've ever released

Once I feel confident enough in a certain program - and that doesn't come about easily - I upgrade its version number, provided there have actually been significant changes made to the program!

## There are a lot of versions of GJSieve ##

Yep. See [here](http://code.google.com/p/gjsieve/wiki/History).

## Can I modify your code? ##

You certainly _can_, but with several conditions:

  * you must tell me
  * you must retain all identifying information (that is, don't change comments and the like to credit yourself with writing the program!)
  * you must improve it
  * you must share your modified program under the GNU GPL v3, the same under which all of my original work is licensed

To elaborate...

You must tell me not because of any kind of legal permission-requesting mumbo-jumbo, but rather because I like to know when someone thinks they can improve my work! I am _not_ an expert programmer and won't be for some time. So if you are an expert, or at least closer than I am, and you see something I did (or didn't do) that needs work (or needs added), **do it**!

Just let me know. I'd love to see whatever you do. I learn by example.

This leads me to the third point (as the second is fairly self-explanatory):

If you insist on taking a free, open source application and modifying the very fiber of its being, it better be for a good reason.

That said, most people who would actually be interested in my source code are likely much better programmers than I, and therefore would probably glance at it and see only my mistakes or oversights (which I admit probably still exist even after lots of testing).

Essentially, "improving the program" means making it do exactly what it's meant to do in a safer, more stable, or more efficient manner.

If it can be done, then like I said - **do it**!

Oh, and of course, **share alike**! You have absolutely no rights to any of my programs other than the ones I tell you that you have, in addition, obviously, to the **many** rights granted you by the GPL.

Attempting to share or redistribute this program under a different license (namely, one that attempts to or does give rights of copyright and ownership to you and/or take them away from me) is against the terms of the GPL and generally not very nice.

I have to say that here because I totally forgot to include a LICENSE.txt in every single source archive I've ever uploaded since I guess I just assumed no one would try to steal a prime-testing program.

If it clears the air any more, you should probably be aware there are much more powerful (and more resource-intensive) prime-testing programs out there that are also FOSS. Mine are FUN.