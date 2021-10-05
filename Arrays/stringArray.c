#include <stdio.h>
#include <string.h>
void string_functions(char *str);

int main(){

    char str[5];
    printf("enter a string ? ");
    gets(str);
    printf("the string is = %s\n", str);
    string_function(str);
    return 0;
}
void string_function(char *str){
    int length = strlen(str);
    char str2[5];
    printf("the length of the string is = %d\n",length);
    strcpy(str2, str);
    printf("copying the string to str2 gives = %s\n", str2);
    
}
