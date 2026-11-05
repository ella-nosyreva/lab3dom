#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> // Подключаем для функции fabs() (модуль числа)

// Прототипы функций
float area_rhombus(float d1, float d2);
void definition_rhombus();
void draw_rhombus(int size, char symbol);
int is_point_in_rhombus(float x, float y, float d1, float d2);

int main()
{
    setlocale(LC_ALL, "RUS");

    int choice;
    float d1, d2, area;
    int size;
    char symbol;

    do
    {
        printf("\n=== МЕНЮ (Фигура: Ромб) ===\n");
        printf("1. Рассчитать площадь\n");
        printf("2. Вывести определение фигуры\n");
        printf("3. Нарисовать фигуру\n");
        printf("4. Проверить, попадает ли точка в ромб\n"); // Новый пункт
        printf("0. Выход\n");
        printf("Выберите действие: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Введите первую диагональ ромба: ");
            scanf("%f", &d1);
            printf("Введите вторую диагональ ромба: ");
            scanf("%f", &d2);
            area = area_rhombus(d1, d2);
            printf("Площадь ромба: %.2f\n", area);
            break;

        case 2:
            definition_rhombus();
            break;

        case 3:
            printf("Введите размер ромба (например, 4): ");
            scanf("%d", &size);
            printf("Введите символ для рисования: ");
            // Пробел перед %c нужен, чтобы пропустить оставшийся Enter от предыдущего ввода
            scanf(" %c", &symbol); 
            draw_rhombus(size, symbol);
            break;

        case 4:
            {
                float x, y, d1_test, d2_test;
                printf("Введите координату X точки: ");
                scanf("%f", &x);
                printf("Введите координату Y точки: ");
                scanf("%f", &y);
                printf("Введите горизонтальную диагональ ромба (по оси X): ");
                scanf("%f", &d1_test);
                printf("Введите вертикальную диагональ ромба (по оси Y): ");
                scanf("%f", &d2_test);

                if (is_point_in_rhombus(x, y, d1_test, d2_test)) {
                    printf("Результат: Точка (%.2f, %.2f) ПОПАДАЕТ в ромб.\n", x, y);
                }
                else {
                    printf("Результат: Точка (%.2f, %.2f) НЕ ПОПАДАЕТ в ромб.\n", x, y);
                }
            }
            break;

        case 0:
            printf("Выход из программы.\n");
            break;

        default:
            printf("Неверный выбор. Попробуйте снова.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}

// Функция вычисления площади
float area_rhombus(float d1, float d2)
{
    return (d1 * d2) / 2.0;
}

// Функция вывода определения
void definition_rhombus()
{
    printf("\nРомб - это параллелограмм, у которого все стороны равны.\n");
    printf("Площадь ромба равна половине произведения его диагоналей.\n");
}

// Функция отрисовки ромба
void draw_rhombus(int size, char symbol)
{
    printf("\n");

    // Верхняя половина ромба
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++) printf(" ");
        for (int j = 0; j < 2 * i + 1; j++) printf("%c", symbol);
        printf("\n");
    }

    // Нижняя половина ромба
    for (int i = size - 2; i >= 0; i--)
    {
        for (int j = 0; j < size - 1 - i; j++) printf(" ");
        for (int j = 0; j < 2 * i + 1; j++) printf("%c", symbol);
        printf("\n");
    }
    printf("\n");
}

// Новая функция проверки попадания точки в ромб (центр в 0,0)
int is_point_in_rhombus(float x, float y, float d1, float d2)
{
    // Проверка, чтобы диагонали были положительными
    if (d1 <= 0 || d2 <= 0) {
        return 0;
    }

    // Используем уравнение ромба через модули
    float check = (fabs(x) / (d1 / 2.0f)) + (fabs(y) / (d2 / 2.0f));

    // Если результат <= 1, точка внутри или на границе
    if (check <= 1.0f) {
        return 1;
    }
    return 0;
}
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

Исходный код программы: [dommm.c](dommm.c)

## 3. Результаты работы программы

<img width="534" height="137" alt="image" src="https://github.com/user-attachments/assets/5e809e4d-b4f4-4864-83bc-88c104edd3ba" />

## 4. Информация о разработчике
Носырева Элла бОТИ-261
