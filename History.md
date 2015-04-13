## Why? ##

This was spawned from the Source page because it turned into a narrative essay!

## There are a lot of versions of GJSieve ##

Yep. And this is a good example, since GJSieve is what started my coding adventures months ago. See, it's like this:

  * gjsieve v0.1 - this was an incredibly basic, ~100 line program that was incapable of displaying numbers longer than 11 digits. It was also sometimes wrong about a number being prime. So yeah. Along came:
  * gjsieve v0.2 - correct, at least, but still highly limited!
  * gjsieve v0.3 - compact and efficient, but still kind of useless because it couldm't calculate big or even sort-of-big numbers.

Versions less than 1 were written mostly by G. Arico. That is certainly not to say he made mistakes. And who cares if he did? I've written way more code than he has. Therefore, I have made exponentially more mistakes!

That was early 2012. Around June/July, we got these:

  * gjsieve v1.0 - totally re-written (though still highly limited) and very stable by comparison. However, it was not perfect.
  * gjsieve v1.1 - even better and faster and smoother and generally all-around great little program that still couldn't display (let alone calculate) large numbers because of stdlib limitations.

And then along came external libraries:

  * gjsieve v1.5 - re-written again, though not entirely. Uses the MPIR fork of GMP for very large integer calculations. Rough alpha.
  * gjsieve v1.5.1 - release testing alpha. Considerably more stable and very efficient. Capable of and observed calculating numbers with thousands of digits. Theoretically capable of calculating numbers up to 980M digits.

And then I realized a simple console executable did not afford the user quite enough control, so along came:

  * gjsieve v1.5.4 - essentially the same programatically as 1.5.1, but operates as a pure Windows application with a straightforward but efficient graphical frontend.
  * gjsieve v1.5.5 - more highly optimized number testing - more accurately, compositeness testing - with a cleaner and more organized GUI

## Forthcoming ##

  * gjsieve v1.7.0 - not different enough in terms of code to merit a re-designation of v2, yet graphically sleeker, more streamlined, and decidedly more feature-rich.

Note that gjsieve v1.7.0 _is_ currently implemented in MuPuPriNT! I just haven't gotten around to upgrading the standalone program to reflect the many changes made in the version used in MuPuPriNT.

## MuPuPriNT ##

Besides gjsieve v1.7.0, MuPuPriNT includes the following, all of which are based directly on gjsieve v1.5.5 and use the same graphical framework as v1.7.0:

  * gjsieveC v1.0 - tests Cullen numbers
  * gjsieveW v1.0 - tests Woodall numbers
  * gjsievePY v1.1 - tests Pythagorean numbers

Finally, IsItPrime v1.5 is included in MuPuPriNT.