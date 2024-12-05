#include "MyStructures.h"


//Эта функция просто вычисляет значение урона, который получит противник
int Calculator::FinalDMG(AttackDMG& DMG) {
    if (DMG.PlayerDMG - DMG.EnemyDFN < 0)
        return 0;
    return DMG.PlayerDMG - DMG.EnemyDFN;
}


//Считаем полный показатель брони
void Calculator::AllDefence(Defence& DFN, int* res) {
    *res = DFN.HelmetDefence + DFN.CuirassDefence + DFN.GlovesDefence + DFN.GreavesDefence + DFN.BootsDefence;
}

//Создание нового биома
void Biome::CreateBiome() {
    printf("Введите название биома: ");
    getline(cin, Name);

    printf("Введите Рекомендуемый уровень и Максимальный размер карты (в кол-ве блоков): ");
    scanf("%d %d", &RecomendLevel, &MaxMapSize);
    while (getchar() != '\n');

    printf("Вы успешно создали биом!\n");
}

//Выводит слово, которое зависит от показателей персонажа
void Attributes::CheckAttributes() {
    printf("При показателях Силы, Интеллекта, Ловкости в %d %d %d, ваш персонаж: ", STR, INT, AGL);

    if (STR > 0 && STR <= 25)
        printf("Хрупкий, ");
    else if (STR > 25 && STR <= 50)
        printf("Слабый, ");
    else if (STR > 50 && STR <= 75)
        printf("Крепкий, ");
    else if (STR > 75 && STR <= 100)
        printf("Могучий, ");

    if (INT > 0 && INT <= 25)
        printf("Слабоумный, ");
    else if (INT > 25 && INT <= 50)
        printf("Глупый, ");
    else if (INT > 50 && INT <= 75)
        printf("Знающий, ");
    else if (INT > 75 && INT <= 100)
        printf("Умный, ");

    if (AGL > 0 && AGL <= 25)
        printf("Неуклюжий.\n ");
    else if (AGL > 25 && AGL <= 50)
        printf("Неловкий.\n");
    else if (AGL > 50 && AGL <= 75)
        printf("Ловкий.\n");
    else if (AGL > 75 && AGL <= 100)
        printf("Изящный.\n");
}

//Создание нового задания
void Quest::CreateQuest() {
    printf("Введите название задания: ");
    getline(cin, Title);

    printf("Введите описание задания: ");
    getline(cin, Description);

    cout << "Предмет в награду за задание: " << Reward->getName() << endl;

    IsCompleted = false;

    printf("Вы успешно создали задание!\n");
}

//Создание нового предмета
void Item::CreateItem() {
    printf("Введите название предмета: ");
    getline(cin, Name);

    printf("Введите тип предмета: ");
    getline(cin, ItemType);

    printf("Введите цену и вес предмета: ");
    scanf("%d %d", &Value, &Weight);
    while (getchar() != '\n');

    printf("Вы успешно создали предмет!\n");
}

//Создание новго атакуещего заклинания
void AttackSpell::CreateAttackSpell() {
    printf("Введите название заклинания: ");
    getline(cin, Name);

    do {
        printf("Введите Урон, Радиус взрыва, Стихию заклинания (0-2): ");
        scanf("%d %d %d", &Damage, &Radius, &Element);
        while (getchar() != '\n');
    } while (Element < 0 || Element > 2);

    printf("Вы успешно создали заклинание!\n");
}

//Вывод информации об инвентаре
void Inventory::CheckInventory() {
    printf("Свободного места в инвентаре: %d\n", MaxItems-ItemsCount);
}

