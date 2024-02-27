#include <stdio.h>

int main()
{
    char s[80];
    fread(s, sizeof(s));????
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'a')
            s[i] = 'A';
        else if (s[i] == 'b')
            s[i] = 'B';
        i++;
    }
    printf("%s\n", s);
}
