# rush02_piscine_42
Subject
Program name bsq
Turn in files Makefile and all the necessary files
Makefile Yes
Arguments File(s) in which to read the square
External functs. open, close, read, write, malloc, free, exit
Libft authorized Not applicable
Description Write a program that draws and print the biggest
possible square in the given area
• The biggest square :
◦ The aim of this project is to find the biggest square on a map, avoiding obstacles.
◦ A file containing the map will be provided. It’ll have to be passed as an
argument for your program.
◦ The first line of the map contains information on how to read the map :
∗ The number of lines on the map;
∗ The "empty" character;
∗ The "obstacle" character;
∗ The "full" character.
◦ The map is made up of ’"empty" characters’, lines and ’"obstacle" characters’.
◦ The aim of the program is to replace ’"empty" characters’ by ’"full"
characters’ in order to represent the biggest square possible.
◦ In the case that more than one solution exists, we’ll choose to represent the
square that’s closest to the top of the map, then the one that’s most to the
left.
◦ Your program must handle 1 to n files as parameters.
3
C Piscine’s final Project BSQ
◦ When your program receives more than one map in argument, each solution
or map error must be followed by a line break.
◦ Should there be no passed arguments, your program must be able to read on
the standard input.
◦ You should have a valid Makefile that’ll compile your project. Your Makefile
mustn’t relink.