#include <stdio.h>
#include <string.h>

int main() 
{
    char str[80];
    int i;
    printf("Введите строку (<= 80 символов): ");
    fgets(str, 80, stdin);
    printf("Программа заменяет все маленькие символы 'a' и 'b' на заглавные и ! на ?.\n");
    for (i = 0; i < 81; i++) 
    {
        if(str[i] == 'a' || str[i] == 'b') 
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] == '!')
        {
            str[i] = str[i] + 30;
        }
    }
    printf("Полученная строка: %s", str);
    return 0;
}
