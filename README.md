# Домашнее задание к работе 3
## Условие задачи
Написать и отладить программу пересчета заданного в секундах временного интервала в часы, минуты и секунды.

## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Объявить переменные:
   - `total_seconds` — вводимый временной интервал в секундах (целое число).
   - `hours` — количество часов.
   - `minutes` — количество минут.
   - `seconds` — остаток секунд.
3. Запросить у пользователя значение `total_seconds`.
4. Вычислить количество часов: `hours = total_seconds / 3600`.
5. Вычислить остаток секунд после вычитания часов: `rem_seconds = total_seconds % 3600`.
6. Вычислить количество минут: `minutes = rem_seconds / 60`.
7. Вычислить оставшиеся секунды: `seconds = rem_seconds % 60`.
8. Вывести результаты расчетов на экран.
9. **Конец**

### Блок-схема

<img width="453" height="653" alt="Диаграмма без названия drawio (5)" src="https://github.com/user-attachments/assets/da44daf3-668b-42f7-9d28-316dca3c78e7" />

## 2. Реализация программы
```
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void task_10();

int main() {
    setlocale(LC_CTYPE, "RUS");
    task_10();
    system("pause");
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

    if (curr_month < birth_month || (curr_month == birth_month && curr_day < birth_day)) {
        age = age - 1;
    }

    printf("Возраст: %d лет\n", age);
}
```
## 3. Результаты работы программы

<img width="534" height="137" alt="image" src="https://github.com/user-attachments/assets/5e809e4d-b4f4-4864-83bc-88c104edd3ba" />

## 4. Информация о разработчике
Носырева Элла бОТИ-261
