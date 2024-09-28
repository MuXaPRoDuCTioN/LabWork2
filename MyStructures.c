#include <stdio.h>
#include "MyStructures.h"

//Эта функция просто вычисляет значение урона, который получит противник
int FinalDMG(int PlayerDMG, int EnemyDFN) {
    if (PlayerDMG - EnemyDFN < 0)
        return 0;
    return PlayerDMG - EnemyDFN;
}

//Считаем полный показатель брони
int AllDefence(int HelmDef, int CuirDef, int GlovDef, int GreaDef, int BootDef) {
    return HelmDef + CuirDef + GlovDef + GreaDef + BootDef;
}

//Создание нового биома
void CreateBiome(char *Name, int *RecomendLevel, int *MaxMapSize) {
    printf("Введите название биома: ");
    scanf("%s", Name);
    while (getchar() != '\n');

    printf("Введите Рекомендуемый уровень и Максимальный размер карты (в кол-ве блоков): ");
    scanf("%d %d", RecomendLevel, MaxMapSize);
    while (getchar() != '\n');

    printf("Вы успешно создали биом!\n");
}

//Выводит слово, которое зависит от показателей персонажа
void CheckAttributes(int Strength, int Intelligence, int Agility) {
    printf("При показателях Силы, Интеллекта, Ловкости в %d %d %d, ваш персонаж: ", Strength, Intelligence, Agility);

    if (Strength > 0 && Strength <= 25)
        printf("Хрупкий, ");
    else if (Strength > 25 && Strength <= 50)
        printf("Слабый, ");
    else if (Strength > 50 && Strength <= 75)
        printf("Крепкий, ");
    else if (Strength > 75 && Strength <= 100)
        printf("Могучий, ");

    if (Intelligence > 0 && Intelligence <= 25)
        printf("Слабоумный, ");
    else if (Intelligence > 25 && Intelligence <= 50)
        printf("Глупый, ");
    else if (Intelligence > 50 && Intelligence <= 75)
        printf("Знающий, ");
    else if (Intelligence > 75 && Intelligence <= 100)
        printf("Умный, ");

    if (Agility > 0 && Agility <= 25)
        printf("Неуклюжий.\n ");
    else if (Agility > 25 && Agility <= 50)
        printf("Неловкий.\n");
    else if (Agility > 50 && Agility <= 75)
        printf("Ловкий.\n");
    else if (Agility > 75 && Agility <= 100)
        printf("Изящный.\n");
}

//Создание нового задания
void CreateQuest(char *Title, char *Description, int *Rewards, int *IsCompleted) {
    printf("Введите название задания: ");
    scanf("%s", Title);
    while (getchar() != '\n');

    printf("Введите описание задания: ");
    scanf("%s", Description);
    while (getchar() != '\n');

    printf("Введите награду в количестве золота за задание: ");
    scanf("%d", Rewards);
    while (getchar() != '\n');

    *IsCompleted = 0;

    printf("Вы успешно создали задание!\n");
}

//Создание нового предмета
void CreateItem(char *Name, char *ItemType, int *Value, int *Weight) {
    printf("Введите название предмета: ");
    scanf("%s", Name);
    while (getchar() != '\n');

    printf("Введите тип предмета: ");
    scanf("%s", ItemType);
    while (getchar() != '\n');

    printf("Введите цену и вес предмета: ");
    scanf("%d %d", Value, Weight);
    while (getchar() != '\n');

    printf("Вы успешно создали предмет!\n");
}

//Создание новго атакуещего заклинания
void CreateAttackSpell(char *Name, int *Damage, int *Radius, int *Element) {
    printf("Введите название заклинания: ");
    scanf("%s", Name);
    while (getchar() != '\n');

    do {
        printf("Введите Урон, Радиус взрыва, Стихию заклинания (0-2): ");
        scanf("%d %d %d", Damage, Radius, Element);
        while (getchar() != '\n');
    } while (*Element < 0 || *Element > 2);

    printf("Вы успешно создали заклинание!n");
}

//Вывод информации об инвентаре
void CheckInvenory(int MaxWeight, int ItemsWeight, int ItemsCount) {
    printf("У вас еще свободно %d кг в инвентаре, всего предметов в инвентаре %d.\n", MaxWeight-ItemsWeight, ItemsCount);
}
