Algorithm: 

A) String Pointer-

1. Start
2. Declare an integer variable i to be used as a counter.
3. Declare a character array str of size 20 and a character pointer ptr to point to the array.
4. Display "Enter your name:"
5. Read up to 19 characters (or until a newline or EOF is encountered) from the user input into the str array using cin.get().
6. Display the entered name by printing the contents of the str array.
7. Initialize i to 0 to use it as a character count.
8. Enter a loop to count the number of characters in the name:
a. While the character pointed to by ptr is not '\0':
9. Increment i by 1.
10. Move ptr to the next character in the array.
11. Display "The number of characters are: " and then print the value of i, which represents the count of characters in the name.
12. End

B) Data types in pointer-

1. Start
2. Include the necessary header files.
3. Declare a float variable var1 and initialize it with the value 3.46.
4. Declare a pointer variable ptr of type float and set it to point to the address of var1.
5. Display the following information:
a. The value of var1 using cout.
b. The value stored at the address pointed to by ptr using *ptr.
c. The address of var1 using &var1.
d. The value of the pointer ptr.
e. The address of the pointer ptr using &ptr.
6. End

C) Array Pointer-

1. Start
2. Include the necessary header files.
3. Declare an integer variable i to use as a loop counter.
4. Declare an integer array var with 5 elements and initialize it with values [1, 2, 3, 4, 5].
5. Declare an integer pointer ptr and set it to point to the address of the first element of the array (var[0]).
6. Start a for loop with the loop variable i from 0 to 4 (inclusive).
a. Inside the loop, print the value pointed to by ptr using *ptr.
b. Increment the ptr to point to the next element in the array using ptr++.
7. End of the loop.
8. End
