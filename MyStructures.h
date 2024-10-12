#ifndef MYSTRUCTURES_H_INCLUDED
#define MYSTRUCTURES_H_INCLUDED
#include <iostream>

using namespace std;

//№1 Хранит в себе урон нападающего и защиту обороняющегося
class AttackDMG
{
private:
    int PlayerDMG;           //урон игрока
    int EnemyDFN;            //защита противника

public:
    AttackDMG()         //Конструктор
    {
        cout << "Работа конструктора" << endl;
        PlayerDMG = 0;
        EnemyDFN = 0;
    }

    ~AttackDMG()         //Деструктор
    {
        cout << "Работа деструктора" << endl;
    }

    //Методы установки значений урона и защиты извне
    void setPlayerDMG(int DMG)
    {
        PlayerDMG = DMG;
    }

    void setEnemyDFN(int DFN)
    {
        EnemyDFN = DFN;
    }

    //Методы получения значений урона и защиты извне
    int getPlayerDMG() const
    {
        return PlayerDMG;
    }

    int getEnemyDFN() const
    {
        return EnemyDFN;
    }

    //Метод расчета наносимого урона
    int FinalDMG();
};

//№2 Хранит в себе общий показатель брони
typedef struct {
    int HelmetDefence;        //показатель защиты шлема
    int CuirassDefence;         //показатель защиты кирассы
    int GlovesDefence;         //показатель защиты перчаток
    int GreavesDefence;          //показатель защиты поножей
    int BootsDefence;           //показатель защиты сапог
} Defence;

//Функция для проверки структуры №2
int AllDefence(int HelmDef, int CuirDef, int GlovDef, int GreaDef, int BootDef);


//№3 Содержит в себе информацию о биоме
typedef struct {
    char Name[10];                 //название биома
    int RecomendLevel;             //рекомендуемый уровень
    int MaxMapSize;                //максимальный размер карты
} Biome;

//Функция для проверки структуры №3
void CreateBiome(char *Name, int *RecomendLevel, int *MaxMapSize);


//№4 Содержит информацию об атрибутах
typedef struct {
    int Strength;          //показатель силы
    int Intelligence;       //показатель интеллекта
    int Agility;            //показатель ловкости
} Attributes;

//Функция для проверки структуры №4
void CheckAttributes(int Strength, int Intelligence, int Agility);


//№5 Хранит в себе ифнормацию о задании
typedef struct {
    char Title[50];      // название задания
    char Description[200]; // описание задания
    int Rewards;         // награды за выполнение (например, опыт или предметы)
    int IsCompleted;     // статус выполнения (0 - не выполнено, 1 - выполнено)
} Quest;

//Функция для проверки структуры №5
void CreateQuest(char *Title, char *Description, int *Rewards, int *IsCompleted);


//№6 Хранит в себе информацию об предмете
typedef struct {
    char Name[50];        // название предмета
    char ItemType[20];   // тип предмета (оружие, броня, зелье и т.д.)
    int Value;            // стоимость предмета
    int Weight;           // вес предмета
} Item;

//Функция для проверки структуры №6
void CreateItem(char *Name, char *ItemType, int *Value, int *Weight);


//№7 Содержит информацию о заклинании
typedef struct {
    char Name[50];       //название заклинания
    int Damage;          //урон заклинания
    int Radius;          //радиус взрыва заклинания
    int Element;           //стихия заклинания (0 - огонь, 1 - лед, 2 - электричество)
} AttackSpell;

//Функция для проверки структуры №7
void CreateAttackSpell(char *Name, int *Damage, int *Radius, int *Element);


//№8 Содержит информацию об инвентаре
typedef struct {
    int ItemsCount;        //число вещей в инвентаре
    int MaxWeight;         //максимальный переносимый вес
    int ItemsWeight;       //занятое предметами место в инвентаре
} Inventory;

//Функция для проверки структуры №8
void CheckInvenory(int MaxWeight, int ItemsWeight, int ItemsCount);

#endif // MYSTRUCTURES_H_INCLUDED
