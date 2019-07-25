# !Deadfish~
Pronounced "not Deadfish Tilde". Code is in the file [`notdft.c`](https://github.com/a-stone-arachnid/Not-Deadfish-Tilde/blob/master/notdft.c)

Commands:
---
!Deadfish~ includes some of the standard Deadfish~ commands:

|Command|Function|
|:---:|:---|
|`i`|increment accumulator|
|`d`|decrement accumulator|
|`s`|square accumulator|
|`o`|output accumulator|
|`c`|print accumulator as character|
|`{`...`}`|do the *...* part 10 times|
|`w`|say "Hello, World!"|

!Deadfish~ also has some stuff of its own:

|Command|Function|
|:---:|:---|
|`0`|halt|
|`a`|set the accumulator to 65|
|`b`|set the accumulator to 97|
|`v` *x*|set the variable *x* to the accumulator|
|`g` *x*|set the accumulator to the variable *x*|
|`~`|throw an error saying `This is NOT Deadfish~`|
|`!`|make the accumulator negative|
|`z`|print 256 digits of π if the accumulator is 256|
|`x`|input a number, and set the accumulator to 34 if it's prime|

The characters `` `125789@$-_=+ `` are valid for variable names. All variables start as 0 by default.

All unknown characters are ignored. Case-sensitive, so `iDoO` results in `1`

Like in predecessors, the accumulator can never be equal to -1 or 256!

If the accumulator is -1 or 256, it resets to 0 before the next command.

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

Print 256:
```
iisiv1sog1io
```
