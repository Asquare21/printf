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


*get_precision.c*

I define a function called `get_precision` which takes in three arguments: a const char pointer `format`, an integer pointer `i`, and a variable argument list `list` of type `va_list`. 

The purpose of this function is to calculate and return the precision for printing, which is specified in the format string. 

Here's a breakdown of what each line of code does:

- `#include "main.h"`: This line includes the header file "main.h" which contains declarations of functions, variables, and other things needed by the code.

- `int get_precision(const char *format, int *i, va_list list)`: This line defines the `get_precision` function, which takes in a const char pointer `format`, an integer pointer `i`, and a variable argument list `list` of type `va_list`, and returns an integer value representing the precision.

- `int curr_i = *i + 1;`: This line initializes an integer variable `curr_i` to the value of `i` dereferenced and incremented by 1.

- `int precision = -1;`: This line initializes an integer variable `precision` to -1.

- `if (format[curr_i] != '.') return (precision);`: This line checks if the character in `format` at position `curr_i` is not a '.', and if so, returns `precision` (which is still -1). This means that if there is no precision specified in the format string, the function returns -1.

- `precision = 0;`: This line sets `precision` to 0, indicating that a precision has been specified in the format string.

- `for (curr_i += 1; format[curr_i] != '\0'; curr_i++)`: This line starts a loop that iterates through the characters in `format` starting from the next character after the '.', and continues until the end of the string is reached.

- `if (is_digit(format[curr_i]))`: This line checks if the character in `format` at position `curr_i` is a digit.

- `precision *= 10; precision += format[curr_i] - '0';`: This line multiplies `precision` by 10 and adds the integer value of the current digit to it.

- `else if (format[curr_i] == '*')`: This line checks if the character in `format` at position `curr_i` is a '*', which indicates that the precision should be taken from the next argument in the variable argument list.

- `curr_i++; precision = va_arg(list, int); break;`: This line increments `curr_i` by 1, gets the next integer argument from `list`, and assigns it to `precision`. The `break` statement exits the loop since the precision has been found.

- `else break;`: This line breaks out of the loop if the character in `format` at position `curr_i` is neither a digit nor a '*'.

- `*i = curr_i - 1;`: This line updates the value of `i` to `curr_i` minus 1, so that the calling function knows which character in `format` was the last one used.

- `return (precision);`: This line returns the calculated precision value. If no precision was found in the format string, this value will be -1.

*get_size.c*


I define a function called `get_size` that takes in two parameters - a pointer to a character string called `format` and a pointer to an integer called `i`. The function returns an integer value which represents the size to cast the argument.

The first line `#include "main.h"` includes the header file "main.h" which likely contains necessary function prototypes and/or macro definitions.

The next few lines are comments that provide some documentation on the purpose and usage of the `get_size` function. The comments describe the parameters and return value of the function.

The function definition starts with `int get_size(const char *format, int *i)` which defines the function name and its parameters. The `const char *format` parameter is a pointer to a constant character string that contains the formatted string to be printed. The `int *i` parameter is a pointer to an integer that represents the current position of the argument list.

The function then declares two integer variables - `curr_i` and `size`. `curr_i` is initialized to the current position of the argument list plus one, while `size` is initialized to 0.

The code then checks if the character at `format[curr_i]` is 'l' or 'h' using an `if` statement. If it is 'l', `size` is assigned the value of a macro constant `S_LONG` (likely defined elsewhere in the code). If it is 'h', `size` is assigned the value of a macro constant `S_SHORT`. If neither of these conditions are met, `size` remains 0.

Finally, the code updates the value of `i` to `curr_i` if `size` is not equal to 0, and returns the value of `size`. If `size` is equal to 0, `i` is updated to `curr_i - 1`.

*get_width.c*


I define a function named `get_width` that takes three arguments: a `const char*` named `format`, an `int*` named `i`, and a `va_list` named `list`. The function returns an integer value.

The function calculates the width for printing based on the given format string. It starts by initializing a variable named `curr_i` to the value of the pointer `i` incremented by 1 and a variable named `width` to 0.

The function then iterates through the `format` string starting from the index `curr_i`. For each character in the string, it checks if the character is a digit using the `is_digit` function. If it is a digit, the function updates the `width` variable by multiplying it by 10 and adding the value of the current digit to it. If the character is a `*`, the function increments `curr_i`, reads the next argument from the `list` using the `va_arg` macro, assigns it to the `width` variable, and breaks out of the loop. Otherwise, if the character is not a digit or a `*`, the loop breaks.

Finally, the function assigns the value of `curr_i - 1` to `i` and returns the value of `width`.

The function assumes that the `is_digit` function is defined elsewhere in the program and correctly determines whether a given character is a digit. The function also assumes that the `va_arg` macro correctly reads the next argument of the given type from the `va_list`.

