#include <stdio.h>
#include <string.h>

int main() {
    char str[80];
    int i;
    fgets(str, 80, stdin);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == 'a' or str[i] == 'b') 
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
    return 0;
}
