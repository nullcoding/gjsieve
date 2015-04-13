## Overview ##

GJSieve for Mac is a side project of mine as I learn Objective-C and the Cocoa API.

Find the current version [here](http://code.google.com/p/gjsieve/downloads/detail?name=gjsmac_v02.zip).

## Issues ##

  * the program will crash if you put in numbers greater than 10 million for n. Maybe there is a fix. Maybe not.
  * only with _small_ numbers: some of them are false-positive for primality, and the program may also report that 2-digit numbers in fact have 3. I am not sure why! It's right with big or huge numbers.
  * it's an early alpha that I wrote in about a day and a half

## To-Do ##

  * operate progress bar on a different thread if at all possible

## Note ##

See the readme included in the ZIP for full information and documentation.