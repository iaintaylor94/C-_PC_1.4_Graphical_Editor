# Programming Challenges C++
## Problem 1.5 Graphical Editor[^1]
### Problem description
This program simulates a bitmap based image processor. An image is an array of pixels, each colour is represented by a capital letter. The image can be altered using commands from the terminal (or a file). Images can also be created and saved to a file.

The commands are of the form:
1. I M N - Create a new (M x N) image with all pixels coloured white (O)
2. C - Set all pixels white
3. L X Y C - Colour pixel (X,Y) in colour (C)
4. V X Y1 Y2 C - Draw a vertical segment of colour (C) in collumn X, between the rows Y1 and Y2 inclusive
5. H X1 X2 Y C - Draw a horizontal segment of colour (C) in row Y, between the collumns X1 and X2 inclusive
6. K X1 Y1 X2 Y2 C - Draw a filled rectangle of colour (C), where (X1, Y1) is the upper-left and (X2, Y2) is the lower-right corner
7. F X Y C - Fill the region (R) with the colour (C). R is the region (X, Y) + any adjacent pixels with colour (C) (recursive)
8. S name - Write the name plus the image to stdout
9. X - Terminate the session


### Example 
>**Input**                                                                 
>I 5 6                                                          
>L 2 3 A                                              
>S one.bmp
>G 2 3 J
>F 3 3 J
>V 2 3 4 W
>H 3 4 2 Z
>S two.bmp
>X                                                                                                                                                                                

>**Output**
>one.bmp
>OOOOO
>OOOOO
>OAOOO
>OOOOO
>OOOOO
>OOOOO
>two.bmp
>JJJJJ
>JJZZJ
>JWJJJ
>JWJJJ
>JJJJJ
>JJJJJ                                              


### Problem solution
1. The program will read in each line from the input file.
2. The image will be processed according to the rules of the command invoked.
3. The program will terminate when (X) command used.


### Bug Checklist
- [1] Fill border orthogonal/vertical
- [2] Fill (C) must not be the previous colour of the pixel

[^1]: Programming Challenges By S.Skienna and M.Revilla, page 19