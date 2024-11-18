#include "MyStructures.h"

//Эта функция просто вычисляет значение урона, который получит противник
int AttackDMG::FinalDMG() {
    if (PlayerDMG - EnemyDFN < 0)
        return 0;
    return PlayerDMG - EnemyDFN;
}

//Считаем полный показатель брони
void Defence::AllDefence(int* res) {
    *res = HelmetDefence + CuirassDefence + GlovesDefence + GreavesDefence + BootsDefence;
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
