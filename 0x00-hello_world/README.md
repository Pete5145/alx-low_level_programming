**This script runs a C file through the preprocessor and save the result into another file.** 0-preprocessor
#!/bin/bash
gcc -o c $CFILE -E  

**This script compiles a C file but does not link.** 1-compiler
#!/bin/bash
gcc -c $CFILE

**This script generates the assembly code of a C code and save it in an output file.** 2-assembler
#!/bin/bash
gcc -S $CFILE

**This script compiles a C file and creates an executable named cisfun.** 3-name
#!/bin/bash 
gcc $CFILE -o cisfun

**This is a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line** 4-puts.c
#include <stdio.h>                                                                                                                    
                                                                                                                                      
/**                                                                                                                                   
 * main - Entry point                                                                                                                 
 *                                                                                                                                    
 * Return: Always 0 (Success)                                                                                                         
*/                                                                                                                                    
int main(void)                                                                                                                        
{                                                                                                                                     
        puts("\"Programming is like building a multilingual puzzle");                                                                 
        return (0);                                                                                                                   
}     


**This C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.** 5-printf.c
#include <stdio.h>                                                                                                                    
                                                                                                                                      
/**                                                                                                                                   
 * main - Entry point                                                                                                                 
 *                                                                                                                                    
 * Return: Always 0 (Success)                                                                                                         
 */                                                                                                                                   
int main(void)                                                                                                                        
{                                                                                                                                     
        printf("with proper grammar, but the outcome is a piece of art,\n");                                                          
        return (0);                                                                                                                   
}  


**This C program that prints the size of various types on the computer it is compiled and run on.** 6-size.c
#include <stdio.h>                                                                                                                    
                                                                                                                                      
/**                                                                                                                                   
 * main - Entry point                                                                                                                 
 *                                                                                                                                    
 * Return: Always 0 (Success)                                                                                                         
 */                                                                                                                                   
int main(void)                                                                                                                        
{                                                                                                                                     
        int a;                                                                                                                        
        long int b;                                                                                                                   
        long long int c;                                                                                                              
        char d;                                                                                                                       
        float f;                                                                                                                      
                                                                                                                                      
        printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));                                                            
        printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));                                                            
        printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));                                                        
        printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));                                                   
        printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));                                                           
        return (0);                                                                                                                   
}   


**This script generates the assembly code (Intel syntax) of a C code and save it in an output file.** 100-intel

#!/bin/bash                                                                                                                           
gcc -S -masm=intel $CFILE  

**This is a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.** 101-quote.c





















