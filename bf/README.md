Brainfuck is an esoteric programming language created in 1993 by Urban Müller.[1]
Notable for its extreme minimalism, the language consists of only eight simple commands, a data pointer and an instruction pointer. While it is fully Turing complete, it is not intended for practical use, but to challenge and amuse programmers. Brainfuck requires one to break commands into microscopic steps.

History
In 1992, Urban Müller, a Swiss physics student, took over a small online archive for Amiga software.[2] The archive grew more popular, and was soon mirrored around the world. Today, it is the world's largest Amiga archive, known as Aminet.

Müller designed Brainfuck with the goal of implementing the smallest possible compiler,[3] inspired by the 1024-byte compiler for the FALSE programming language.[4] Müller's original compiler was implemented in machine language and compiled to a binary with a size of 296 bytes. He uploaded the first Brainfuck compiler to Aminet in 1993. The program came with a "Readme" file, which briefly described the language, and challenged the reader "Who can program anything useful with it? :)". Müller also included an interpreter and some quite elaborate examples. A second version of the compiler used only 240 bytes.[5] There are currently many brainfuck compilers in the web.

As Aminet grew, the compiler became popular among the Amiga community, and in time it was implemented for other platforms.

P′′: Brainfuck's formal "parent language"
Except for its two I/O commands, Brainfuck is a minor variation of the formal programming language P′′ created by Corrado Böhm in 1964, which in turn is explicitly based on the Turing machine. In fact, using six symbols equivalent to the respective Brainfuck commands +, -, <, >, [, ], Böhm provided an explicit program for each of the basic functions that together serve to compute any computable function. So the first "Brainfuck" programs appear in Böhm's 1964 paper – and they were sufficient to prove Turing completeness.

Commands
The eight language commands each consist of a single character:

Character	Meaning
>	Increment the data pointer (to point to the next cell to the right).
<	Decrement the data pointer (to point to the next cell to the left).
+	Increment (increase by one) the byte at the data pointer.
-	Decrement (decrease by one) the byte at the data pointer.
.	Output the byte at the data pointer.
,	Accept one byte of input, storing its value in the byte at the data pointer.
[	If the byte at the data pointer is zero, then instead of moving the instruction pointer forward to the next command, jump it forward to the command after the matching ] command.
]	If the byte at the data pointer is nonzero, then instead of moving the instruction pointer forward to the next command, jump it back to the command after the matching [ command
