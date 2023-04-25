ALX SWE GROUP PRINTF PROJECT

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm
 a Spur for life                                                                    
Write a function that produces output according to a format.                        
                                                                                    
                                                                                    
1. Education is when you read the fine print. Experience is what you get if you don'
t                                                                                   
Handle the following conversion specifiers:

2. With a face like mine, I do better in print                                      
Handle the following custom conversion specifiers:                                  
                                                                                    
3. What one has not experienced, one will never understand in print                 
Handle the following conversion specifiers:                                         
                                                                                    
4. Nothing in fine print is ever good news                                          
Use a local buffer of 1024 chars in order to call write as little as possible.      
                                                                                    
5. My weakness is wearing too much leopard print                                    
Handle the following custom conversion specifier:                                   
                                                                                    
6. How is the world ruled and led to war? Diplomats lie to journalists and believe t
hese lies when they see them in print                                               
Handle the following conversion specifier: p.                                       
                                                                                    
7. The big print gives and the small print takes away                               
Handle the following flag characters for non-custom conversion specifiers:          
                                                                                    
8. Sarcasm is lost in print                                                         
Handle the following length modifiers for non-custom conversion specifiers:         
                                                                                    
l                                                                                   
h                                                                                   
Conversion specifiers to handle: d, i, u, o, x, X                                   
                                                                                    
9. Print some money and give it to us for the rain forests                          
Handle the field width for non-custom conversion specifiers.                        
                                                                                    
10. The negative is the equivalent of the composer's score, and the print the perfor
mance                                                                               
Handle the precision for non-custom conversion specifiers.                          
                                                                                    
11. It's depressing when you're still around and your albums are out of print       
Handle the 0 flag character for non-custom conversion specifiers.                   
                                                                                    
12. Every time that I wanted to give up, if I saw an interesting textile, print what
 ever, suddenly I would see a collection                                            
Handle the - flag character for non-custom conversion specifiers.                   
                                                                                    
13. Print is the sharpest and the strongest weapon of our party                     
Handle the following custom conversion specifier:                                   
                                                                                    
14. The flood of print has turned reading into a process of gulping rather than savo
ring                                                                                
Handle the following custom conversion specifier:                                   
                                                                                    
15. *                                                                               
All the above options work well together.

**Collaborator Task** 
*write_holder.c*

This is a C language program consisting of several functions that handle printing of characters, numbers, and other values. These functions take in arguments such as the value to be printed, a buffer to handle the output, the width and precision of the output, and various flags that modify how the output is printed. The code appears to be part of a larger program, as there is a reference to a "main.h" header file at the beginning of the code.

The first function, "handle_write_char", takes in a character to print, a buffer array to hold the output, and several other arguments such as the width and precision of the output. It first sets the padding character to ' ' unless the F_ZERO flag is set, in which case it sets it to '0'. It then stores the character to print in the buffer array, with padding on the right side of the character. If the width argument is greater than 1, it adds additional padding characters to the buffer on the left side, either before or after the character depending on whether the F_MINUS flag is set. Finally, it returns the number of characters printed, which is either 1 or the width of the output.

The "write_number" function takes in an integer value to print, along with a variety of other arguments similar to "handle_write_char". It first sets some variables based on whether the number is negative, whether the F_ZERO, F_PLUS, or F_SPACE flags are set, etc. It then calls the "write_num" function, which handles printing the number based on these variables and the width/precision arguments.

The "write_num" function takes in the same arguments as "write_number", along with the starting index in the buffer array where the number will be stored. It first checks if the number is zero and the precision is zero, in which case it returns 0 (since no characters will be printed). It then sets the padding character based on the F_ZERO flag and other variables. If the precision is greater than the length of the number, it adds additional padding characters to the left side of the number in the buffer. If an extra character (such as a + or - sign) needs to be added to the output, it is placed at the leftmost side of the buffer. Finally, the function returns the number of characters printed.
The "write_unsgnd" function is similar to "write_number", but it takes in an unsigned integer instead of a signed one. It calls "write_num" to handle the actual printing of the number.

*utils.c*

This code defines several functions related to character manipulation and number conversion:

1. `is_printable`: This function takes a character as input and returns 1 if it is a printable character (ASCII code 32-126), and 0 otherwise.

2. `append_hexa_code`: This function appends the ASCII code of a character in hexadecimal format to a given character buffer. It takes the ASCII code as input along with the buffer and the index at which to start appending. The function returns the number of characters added to the buffer, which is always 3.

3. `is_digit`: This function takes a character as input and returns 1 if it is a digit (ASCII code 48-57), and 0 otherwise.

4. `convert_size_number`: This function takes a number and a size as input, and casts the number to the specified size. The size is represented by an integer constant defined in the main header file, which can take on the values of `S_LONG`, `S_SHORT`, or `S_DEFAULT`. The function returns the casted value of the number.

5. `convert_size_unsgnd`: This function is similar to `convert_size_number`, but it is used for unsigned numbers. It takes an unsigned number and a size as input, and casts the number to the specified size. The function returns the casted value of the number.


*handle_print.c*

This is a C function that handles the printing of formatted output, based on a given format string (`fmt`) and a variable argument list (`list`). The function takes in several arguments:

- `fmt`: A formatted string in which to print the arguments.
- `ind`: A pointer to the current index of `fmt`.
- `list`: A variable argument list containing the arguments to be printed.
- `buffer`: A buffer array to handle the print.
- `flags`: A set of active flags that determine how the output should be formatted.
- `width`: The width of the output.
- `precision`: The precision of the output.
- `size`: The size of the output.

The function starts by declaring some variables and an array `fmt_types[]` that holds a mapping between format specifiers (such as `%c` or `%s`) and their corresponding printing functions. Each element in the array is of type `fmt_t`, which is a struct that contains a format specifier `fmt` and a function pointer `fn` to the corresponding printing function.

The function then loops through the `fmt_types[]` array to find the corresponding printing function for the current format specifier in `fmt`. If a matching format specifier is found, the corresponding printing function is called with the provided arguments and its return value is returned by the function.

If no matching format specifier is found, the function checks if the current character in `fmt` is a null terminator (`\0`). If it is, the function returns `-1` to indicate that the end of the string has been reached. If it is not, the function prints a percent sign (`%`) and the current character in `fmt`, and returns the number of characters printed.

Finally, if no matching format specifier was found and no character was printed, the function returns `-1` to indicate an error.


