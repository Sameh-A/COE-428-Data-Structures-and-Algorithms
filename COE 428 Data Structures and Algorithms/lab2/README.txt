Sameh Ahmed
500907041
My towers of hanoi main class fixes  all the errors
specified in the 2nd part of the lab. One thing left
out in the lab is entering two parameters. Seeing as
this leaves ambiguity for the destination tower I 
assumed two parameters to be an error. All errors
should provide an errormessage.

1.	the tower will recursively call towers(4,2,1).
Where 4 is the number of plates, 2 is from tower and
1 is the destination tower.

2. 	5 recursive calls to towers before reaching
the initial invocation

3. 	printout-> 2 3 
this means from tower 2 to tower 3 one piece is moved.

4. 	the second recursive call will be to
 towers(3,2,3) Where 3 is the number of plates,
 2 is from tower and 3 is the destination tower.

5. 255 lines will be printed to stdout.