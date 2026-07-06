#include<stdio.h>
#include<string.h>
int main() {

    // strlen: Get the length of a string
    // strcmp: Compare two strings
    // strcpy: Copy one string to another   
    // strcat: Concatenate two strings
    // sprintf: Print formatted output
    // sscanf: Read formatted input from a string
    // fgetc(file): Read a character from a file
    // fgets(file): Read a string from a file
    // fputs(file): Write a string to a file    


    char str[]="HELLOWORLD";
    char str2[]="WORLD";
    printf("La concatenation est : %s \n", strcat(str, str2)); // Concatenate str2 to str
    printf("La comparaison est : %d \n", strcmp(str, str2)); // Compare str and str2
    printf("La longueur d   es deux concatenés est : %zu \n", strlen(str)); // Get the length of str
   

    char *pos = strstr(str, str2); // Find the first occurrence of str2 in str1
    printf("La position de la sous-chaîne est : %s \n", pos); // Print the position

    
   
    
    return 0;
}