/* MODE

"r" -> open for reading
"rb" -> open for reading in binary
"w" -> open for writing // If the file exists, the contents will be
overwritten
"wb" -> open for writing in binary
"a" -> open for append // If the file does not exist, it will be created

*/


#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("filename.ext", "mode");
    fscanf(ptr, "format_specifier", &variable); // To input value

    return 0;
}

// To check if file exist or not
if (ptr == NULL)
    {
        printf("The file does not exists sorry!! \n");
    }

// To check EOF 
if (ch == EOF)
        {
            break;
        }