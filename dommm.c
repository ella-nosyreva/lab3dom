#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void task_10();

int main() {
    setlocale(LC_CTYPE, "RUS");
    task_10();
    system("pause"); // задержки экрана
    return 0;
}

void task_10() {
    int birth_day, birth_month, birth_year;
    int curr_day, curr_month, curr_year;
    int age;

    puts("Введите дату рождения (ДД ММ ГГГГ):");
    scanf("%d %d %d", &birth_day, &birth_month, &birth_year);

    puts("Введите текущую дату (ДД ММ ГГГГ):");
    scanf("%d %d %d", &curr_day, &curr_month, &curr_year);

    age = curr_year - birth_year;

    // Проверка: если день рождения в этом году еще не наступил, вычитаем 1 год
    if (curr_month < birth_month || (curr_month == birth_month && curr_day < birth_day)) {
        age = age - 1;
    }

    printf("Возраст: %d лет\n", age);
}