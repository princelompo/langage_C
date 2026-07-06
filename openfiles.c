#include<stdio.h>
#include<stdlib.h>
int main()
{
    /*
    fopen(file, mode) is used to open a file.
    fclose(file) is used to close the file.
    w mode is used to write to a file.
    r mode is used to read from a file.
    a mode is used to append to a file.
    w+ mode is used to read and write to a file.
    r+ mode is used to read and write to a file.        
    a+ mode is used to read and append to a file.
    fgets(string, size, file) is used to read a string from a file.
    */  


    FILE *file = fopen("example.txt", "r");
    int letter=0;
    if(file == NULL) {
       exit(1);
    }
    while(1) {
        letter = fgetc(file);
        if(letter == EOF) {
            break;
        }
        printf("%c", letter);
    }
       

    fclose(file);

    return 0;

    system("pause");

}