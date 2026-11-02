#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void task_10();

int main() {
    setlocale(LC_CTYPE, "RUS");
    task_10();
    system("pause"); // çàäåğæêè ıêğàíà
    return 0;
}

void task_10() {
    int birth_day, birth_month, birth_year;
    int curr_day, curr_month, curr_year;
    int age;

    puts("Ââåäèòå äàòó ğîæäåíèÿ (ÄÄ ÌÌ ÃÃÃÃ):");
    scanf("%d %d %d", &birth_day, &birth_month, &birth_year);

    puts("Ââåäèòå òåêóùóş äàòó (ÄÄ ÌÌ ÃÃÃÃ):");
    scanf("%d %d %d", &curr_day, &curr_month, &curr_year);

    age = curr_year - birth_year;

    if (curr_month < birth_month || (curr_month == birth_month && curr_day < birth_day)) {
        age = age - 1;
    }

    printf("Âîçğàñò: %d ëåò\n", age);
}
