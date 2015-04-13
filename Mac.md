# Introduction #

Mac OSX is a powerful and user-friendly operating system with a large and diverse customer base.

With the installation of developer tools, OSX becomes a versatile programming environment as well. These developer tools facilitate the creation and testing of numerous types of applications utilizing many different frameworks such as Cocoa, Apple's proprietary graphical framework.

With that said, C/C++ function very differently on OSX when compared with Windows. OSX is essentially a UNIX environment with a bunch of user-friendly add-ons.

# Coding for Mac #

In terms of our applications, the first question is "Can it be done?" The answer is yes. NCSpiral is a perfect example of a basic, pure C application that was initially written for Windows and "ported" to Mac by simply building it in XCode using the same, barely-modified source files.

But in terms of more complicated applications like GJSieve, the answer is still yes, but with strings attached.

## Differences ##

Assuming I was to undertake the task of re-writing GJSieve for Mac, here's what I'd have to take into account:

  * I would not use the MPIR library, but would rather have to compile GMP on Mac and link to the libary that generated
  * I could not use the Windows API, for obvious reasons
  * I would have to learn Cocoa
  * I would then have to use Cocoa and C++ in conjunction with each other

The current graphical frontend for GJSieve is built using pure Windows API (that is, without MFC or ATL). This is good and bad.

It's good because everything is created programatically, and thus converting to Cocoa is like translating English to Chinese - I am fluent in English but not quite fluent in Chinese, although I'm working on it.

It's bad because there's simply a lot more code to convert and therefore more to potentially go wrong or get lost in translation.

For starters, I have no idea if I even know _how_ to compile the GMP library on Mac!

If I could/did, that still leaves the issue that I don't know Cocoa at all.

# Pros and Cons #

The obvious pros of porting our applications to Mac OSX include a slightly larger target audience and the ability to be sure our code works on multiple platforms.

The cons are, if anything, much more obvious.

As I am essentially the only developer, coder, and tester, I would be faced with the task of simultaneously developing, coding, and testing for two separate platforms using two ultimately very different code bases.

This would be twice as much work.

As a full-time student, I am not entirely sure I can handle that. As an enthusiastic amateur programmer, however, I'd really like to say I can!

# Future Plans #

Nothing here should be taken as an absolute. Just because I say something is hard doesn't mean I won't try to do it anyway.

The fact is, I can't honestly say if I will work on a version of GJSieve for Mac or if I'll leave it as a purely Windows application.

There are even more alternatives, such as using Qt for multi-platform capability (ie an app that will run on Linux, Windows, and Mac with little to no modification).

NCSpiral was easy, since it's not graphical. GJSieve and MuPuPriNT would (will?) be much, much more difficult.

# Take This With You #

If you're going to take anything away from this, it should be

  * that I have no concrete plans to rewrite any of my applications for Mac
  * that I don't even know how to use Cocoa
  * that Cocoa is not high on my list of things to learn - yet.