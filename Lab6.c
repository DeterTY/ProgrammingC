// Лабораторная работа №6. Задание:
// Создать текстовый файл с записями следующего вида:
// Иванов Петр Сергеевич 1975
// Сидоров Николай Андреевич 1981
// ….
// Воробьянинов Ипполит Матвеевич 1978
// Прочитать данные из этого файла и записать в другой только те строки, которые
// относятся к родившимся позднее 1980 года

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* in;
    FILE* out;
    
    char surname[];
    char name[];
    char patronymic[];
    int birthday;

    while(fscanf(in, "%s %s %s %d", surname, name, patronymic, &birthday) == 4) 
    {
        if(birthday > 1980) 
        {
            fprintf(out, "%s %s %s %d\n", surname, name, patronymic, birthday);
        }
    }

    fclose(in);
    fclose(out);

    return 0;
}
