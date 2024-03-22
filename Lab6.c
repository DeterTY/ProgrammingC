Создать текстовый файл с записями следующего вида:
Иванов Петр Сергеевич 1975
Сидоров Николай Андреевич 1981
….
Воробьянинов Ипполит Матвеевич 1978
Прочитать данные из этого файла и записать в другой только те строки, которые
относятся к родившимся позднее 1980 года.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input_file, *output_file;
    char first_name[50], last_name[50], middle_name[50];
    int birth_year;

    // Открываем файл для чтения
    input_file = fopen("input.txt", "r");
    if(input_file == NULL) 
    {
        printf("Ошибка при открытии файла для чтения.\n");
        return 1;
    }

    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if(output_file == NULL) 
    {
        printf("Ошибка при открытии файла для записи.\n");
        return 1;
    }

    // Считываем данные из файла и записываем нужные строки в другой файл
    while(fscanf(input_file, "%s %s %s %d", last_name, first_name, middle_name, &birth_year) == 4) 
    {
        if(birth_year > 1980) 
        {
            fprintf(output_file, "%s %s %s %d\n", last_name, first_name, middle_name, birth_year);
        }
    }

    // Закрываем файлы
    fclose(input_file);
    fclose(output_file);

    return 0;
}
