#include <string.h>
// gets()
// puts()
// strlen()
// strcpy()
// strcat()
// strcmp()


gets() --> gets can be used to /*input*/ a multiple string.
char st[30];
gets(st);


puts() --> puts can be used to /*output*/ a string.
puts(st); 


strlen(st) --> This function is used to /*count*/ the number of characters in the string excluding the null
               (‘\0’) characters.
int length = strlen(st);


strcpy() --> This function is used to /*copy*/ the content of second string into first string passed to it.
char source[] = "harry";
char target[30];
strcpy (target,source);


strcat() --> This function is used to /*concatenate*/ two strings.
char s1[12] = "hello";
char s2[] = "harry";
strcat(s1,s2);


strcmp() --> This function is used to compare two strings. 
0 if equal
negative value if mismatching character's ASCII value is less than the second string's 
positive value if mismatching character's ASCII value is greater than the second string's 
strcmp("far", "joke"); // Negative value (f<j)
strcmp("joke", "far"); // Positive value (j>f)