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
class Defence
{
private:
    int HelmetDefence;        //показатель защиты шлема
    int CuirassDefence;         //показатель защиты кирассы
    int GlovesDefence;         //показатель защиты перчаток
    int GreavesDefence;          //показатель защиты поножей
    int BootsDefence;           //показатель защиты сапог

public:
    Defence()         //Конструктор
    {
        HelmetDefence = 0;
        CuirassDefence = 0;
        GlovesDefence = 0;
        GreavesDefence = 0;
        BootsDefence = 0;
    }

    ~Defence()         //Деструктор
    {

    }

    //Метод установки значений защиты извне
    void setDefence(int Helm, int Cuir, int Glov, int Grea, int Boot)
    {
        HelmetDefence = Helm;
        CuirassDefence = Cuir;
        GlovesDefence = Glov;
        GreavesDefence = Grea;
        BootsDefence = Boot;
    }

    //Методы получения значений урона и защиты извне
    int getHelmDefence() const
    {
        return HelmetDefence;
    }

    int getCuirDefence() const
    {
        return CuirassDefence;
    }

    int getGlovDefence() const
    {
        return GlovesDefence;
    }

    int getGreaDefence() const
    {
        return GreavesDefence;
    }

    int getBootDefence() const
    {
        return BootsDefence;
    }

    //Метод расчета полной брони
    int AllDefence();
};

//№3 Содержит в себе информацию о биоме
class Biome
{
private:
    string Name;                 //название биома
    int RecomendLevel;             //рекомендуемый уровень
    int MaxMapSize;                //максимальный размер карты

public:
    Biome()                  //Конструктор
    {
        Name = "\0";
        RecomendLevel = 1;
        MaxMapSize = 1;
    }

    ~Biome()                   //Деструктор
    {

    }

    //Метод создания биома
    void CreateBiome();

    //Получение информации о биоме
    string getName()
    {
        return Name;
    }

    int getRecLvl()
    {
        return RecomendLevel;
    }

    int getMaxMapSize()
    {
        return MaxMapSize;
    }
};




//№4 Содержит информацию об атрибутах
class Attributes
{
private:
    int Strength;          //показатель силы
    int Intelligence;       //показатель интеллекта
    int Agility;            //показатель ловкости

public:
    Attributes()             //Конструктор
    {
        Strength = 1;
        Intelligence = 1;
        Agility = 1;
    }

    ~Attributes()            //Деструктор
    {

    }

    //Метод установки значений атрибутов
    void setAttributes(int STR, int INT, int AGL)
    {
        Strength = STR;
        Intelligence = INT;
        Agility = AGL;
    }

    //Метод получения значений атрибутов
    int getStregth()
    {
        return Strength;
    }

    int getIntelligence()
    {
        return Intelligence;
    }

    int getAgility()
    {
        return Agility;
    }

    //Метод проверки атрибутов
    void CheckAttributes();
};




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
