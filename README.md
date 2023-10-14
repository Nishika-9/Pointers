Algorithm: Pointers

Start

Declare an integer variable i to be used as a counter.

Declare a character array str of size 20 and a character pointer ptr to point to the array.

Display "Enter your name:"

Read up to 19 characters (or until a newline or EOF is encountered) from the user input into the str array using cin.get().

Display the entered name by printing the contents of the str array.

Initialize i to 0 to use it as a character count.

Enter a loop to count the number of characters in the name:
a. While the character pointed to by ptr is not '\0':

Increment i by 1.
Move ptr to the next character in the array.
Display "The number of characters are: " and then print the value of i, which represents the count of characters in the name.

End
