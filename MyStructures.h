#ifndef MYSTRUCTURES_H_INCLUDED
#define MYSTRUCTURES_H_INCLUDED
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

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

    //Методы получения значений урона и защиты извне (возврат с  помощью ссылки)
    const int& getPlayerDMG() const
    {
        return PlayerDMG;
    }

    const int& getEnemyDFN() const
    {
        return EnemyDFN;
    }

    //Дружественный класс, в котором содержаться вычисления
    friend class Calculator;
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

    //Дружественный класс, в котором содержаться вычисления
    friend class Calculator;
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
    string getName()  const
    {
        return Name;
    }

    int getRecLvl()  const
    {
        return RecomendLevel;
    }

    int getMaxMapSize()  const
    {
        return MaxMapSize;
    }
};

//№4 Содержит информацию об атрибутах
class Attributes
{
private:
    int STR;          //показатель силы
    int INT;       //показатель интеллекта
    int AGL;            //показатель ловкости
    static int totalInputCounting;    //показывает, сколько раз вводили данные
    static const int MIN_ATR = 1;    //минимальная граница
	static const int MAX_ATR = 100;   //максимальная граница

public:
    Attributes()             //Конструктор
    {
        STR = 1;
        INT = 1;
        AGL = 1;
    }

    ~Attributes()            //Деструктор
    {

    }

    //Метод установки значений атрибутов
    void setAttributes(int STR, int INT, int AGL)
    {
        //Проверка введенных данных
        try {
            if (STR < MIN_ATR || STR > MAX_ATR)
                throw runtime_error("Введено неверное значение силы");
            this->STR = STR;

            if (INT < MIN_ATR || INT > MAX_ATR)
                throw runtime_error("Введено неверное значение интеллекта");
            this->INT = INT;

            if (AGL < MIN_ATR || AGL > MAX_ATR)
                throw runtime_error("Введено неверное значение ловкости");
            this->AGL = AGL;

            totalInputCounting++;
        }
        catch (const runtime_error& e) {
            cerr << "Ошибка ввода: " << e.what() << endl;
        }
    }

    //Метод получения значений атрибутов
    int getStregth()  const
    {
        return STR;
    }

    int getIntelligence()  const
    {
        return INT;
    }

    int getAgility()  const
    {
        return AGL;
    }

    //Метод проверки атрибутов
    void CheckAttributes();

    //Статический метод для получения статического значения
    static int getTotalInputCounting()
	{
		return totalInputCounting;
	}
};

//№6 Хранит в себе информацию об предмете
class Item
{
private:
    string Name;        // название предмета
    string ItemType;   // тип предмета (оружие, броня, зелье и т.д.)
    int Value;            // стоимость предмета
    int Weight;           // вес предмета

public:
    Item()
    {
        Name = "\0";
        ItemType = "\0";
        Value = 0;
        Weight = 0;
    }

    ~Item()
    {

    }

    //Методы для получения значений предмета
    string getName()  const
    {
        return Name;
    }

    string getItemType() const
    {
        return ItemType;
    }

    int getValue() const
    {
        return Value;
    }

    bool getWeight() const
    {
        return Weight;
    }

    //Метод создания предмета
    void CreateItem();
};

//№5 Хранит в себе ифнормацию о задании
class Quest
{
private:
    string Title;      // название задания
    string Description; // описание задания
    Item* Reward;       //Награда за выполнение задания
    bool IsCompleted;     // статус выполнения (0 - не выполнено, 1 - выполнено)

public:
    Quest(Item* item)      //Конструктор
    {
        Title = "\0";
        Description = "\0";
        IsCompleted = false;

        Reward = item;
    }

    ~Quest()     //Деструктор
    {

    }

    //Методы для получения значений задания
    string getTitle()  const
    {
        return Title;
    }

    string getDescription() const
    {
        return Description;
    }

    bool getComplited() const
    {
        return IsCompleted;
    }

    //Метод для создания задания
    void CreateQuest();
};

//№7 Содержит информацию о заклинании
class AttackSpell
{
private:
    string Name;       //название заклинания
    int Damage;          //урон заклинания
    int Radius;          //радиус взрыва заклинания
    int Element;           //стихия заклинания (0 - огонь, 1 - лед, 2 - электричество)

public:
    AttackSpell()     //Конструктор
    {
        Name = "\0";
        Damage = 0;
        Radius = 0;
        Element = 0;
    }

    ~AttackSpell()       //Деструктор
    {

    }

    //Методы получения значений
    string getName() const
    {
        return Name;
    }

    int getDamage() const
    {
        return Damage;
    }

    int getRadius() const
    {
        return Radius;
    }

    int getElement() const
    {
        return Element;
    }

    //Метод создания атакующего заклинаиния
    void CreateAttackSpell();
};

//№8 Содержит информацию об инвентаре
class Inventory
{
private:
    int ItemsCount;        //число вещей в инвентаре
    int MaxItems;         //максимальное число вещей в инвентаре
    int *Invent;          //здесь будут храниться ID предметов

public:
    Inventory(int MxItems)       //Конструктор
    {
        ItemsCount = 0;
        MaxItems = MxItems;

        Invent = new int[MaxItems];
        for (int i = 0; i < MaxItems; i++)
        {
            Invent[i] = 0;
        }
    }

    Inventory(const Inventory& Other)    //Конструктор копии
    {
        ItemsCount = Other.ItemsCount;
        MaxItems = Other.MaxItems;

        Invent = new int[MaxItems];
        for (int i = 0; i < MaxItems; i++)
        {
            Invent[i] = Other.Invent[i];
        }
    }

    ~Inventory()             //Деструктор
    {
        delete [](Invent);
    }

    //Перегрузка оператора присваивания
    Inventory& operator=(const Inventory& Other)
    {
        if (this != &Other)
        {
            ItemsCount = Other.ItemsCount;
            MaxItems = Other.MaxItems;

            Invent = new int[MaxItems];
            for (int i = 0; i < MaxItems; i++)
            {
                Invent[i] = Other.Invent[i];
            }
        }
    }

    //Методы установки значений
    void setMaxItems(int MItems)
    {
        MaxItems = MItems;
    }

    void setItemsCount(int ItCount)
    {
        ItemsCount = ItCount;
    }

    //Методы получения значений
    int getItemsCount() const
    {
        return ItemsCount;
    }

    int getMaxItems() const
    {
        return MaxItems;
    }

    void fillInv()
    {
        for (int i = 0; i < ItemsCount; i++)
        {
            Invent[i] = rand();
        }
    }

    void showInv()
    {
        for (int i = 0; i < ItemsCount; i++)
        {
            cout << Invent[i] << " ";
        }
        cout << endl;
    }

    //Метод проверки инвентаря
    void CheckInventory();
};

//Класс, в котором содержатся вычисления выражений
class Calculator
{
public:
    //Метод расчета наносимого урона
    int FinalDMG(AttackDMG& DMG);

    //Метод расчета полной брони (возврат с помощью указателя)
    void AllDefence(Defence& DFN, int* res);
};

#endif // MYSTRUCTURES_H_INCLUDED
