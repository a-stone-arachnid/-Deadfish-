# !Deadfish~
Pronounced "not Deadfish Tilde".

Commands:
---
!Deadfish~ includes the standard Deadfish~ commands:

|Command|Function|
|:---:|:---|
|`i`|increment accumulator|
|`d`|decrement accumulator|
|`s`|square accumulator|
|`o`|output accumulator|
|`c`|print accumulator as character|
|`(`|if accumulator is 0, skip to the next `)`|
|`{`...`}`|do the *...* part 10 times|
|`w`|print "Hello, World!"|
|`h`|halt|

!Deadfish~ also has some stuff of its own:

|Command|Function|
|:---:|:---|
|`n`|set the accumulator to a number from input|
|`a`|set the accumulator to 65|
|`b`|set the accumulator to 97|
|`v` *x*|set the variable *x* to the accumulator|
|`g` *x*|set the accumulator to the variable *x*|
|`~`|throw an error - this is NOT Deadfish~|
|`!`|make the accumulator negative|

The characters `` `1234567890@#$%^&*-_=+ `` are valid for variable names. All variables start as 0 by default.

Like Deadfish and Deadfish~, the accumulator can never be equal to -1 or 256!

Examples
---

Hello World:
```notdft
w
```

Alphabet:
```notdft
ac{icic}cicicicicic
```
