#ifndef MYSTRUCTURES_H_INCLUDED
#define MYSTRUCTURES_H_INCLUDED
#include <iostream>
#include <string>
#include<cstdlib>

using namespace std;

//�1 ������ � ���� ���� ����������� � ������ ��������������
class AttackDMG
{
private:
    int PlayerDMG;           //���� ������
    int EnemyDFN;            //������ ����������

public:
    AttackDMG()         //�����������
    {
        cout << "������ ������������" << endl;
        PlayerDMG = 0;
        EnemyDFN = 0;
    }

    ~AttackDMG()         //����������
    {
        cout << "������ �����������" << endl;
    }

    //������ ��������� �������� ����� � ������ �����
    void setPlayerDMG(int DMG)
    {
        PlayerDMG = DMG;
    }

    void setEnemyDFN(int DFN)
    {
        EnemyDFN = DFN;
    }

    //������ ��������� �������� ����� � ������ �����
    int getPlayerDMG() const
    {
        return PlayerDMG;
    }

    int getEnemyDFN() const
    {
        return EnemyDFN;
    }

    //����� ������� ���������� �����
    int FinalDMG();
};

//�2 ������ � ���� ����� ���������� �����
class Defence
{
private:
    int HelmetDefence;        //���������� ������ �����
    int CuirassDefence;         //���������� ������ �������
    int GlovesDefence;         //���������� ������ ��������
    int GreavesDefence;          //���������� ������ �������
    int BootsDefence;           //���������� ������ �����

public:
    Defence()         //�����������
    {
        HelmetDefence = 0;
        CuirassDefence = 0;
        GlovesDefence = 0;
        GreavesDefence = 0;
        BootsDefence = 0;
    }

    ~Defence()         //����������
    {

    }

    //����� ��������� �������� ������ �����
    void setDefence(int Helm, int Cuir, int Glov, int Grea, int Boot)
    {
        HelmetDefence = Helm;
        CuirassDefence = Cuir;
        GlovesDefence = Glov;
        GreavesDefence = Grea;
        BootsDefence = Boot;
    }

    //������ ��������� �������� ����� � ������ �����
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

    //����� ������� ������ �����
    int AllDefence();
};

//�3 �������� � ���� ���������� � �����
class Biome
{
private:
    string Name;                 //�������� �����
    int RecomendLevel;             //������������� �������
    int MaxMapSize;                //������������ ������ �����

public:
    Biome()                  //�����������
    {
        Name = "\0";
        RecomendLevel = 1;
        MaxMapSize = 1;
    }

    ~Biome()                   //����������
    {

    }

    //����� �������� �����
    void CreateBiome();

    //��������� ���������� � �����
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




//�4 �������� ���������� �� ���������
class Attributes
{
private:
    int Strength;          //���������� ����
    int Intelligence;       //���������� ����������
    int Agility;            //���������� ��������

public:
    Attributes()             //�����������
    {
        Strength = 1;
        Intelligence = 1;
        Agility = 1;
    }

    ~Attributes()            //����������
    {

    }

    //����� ��������� �������� ���������
    void setAttributes(int STR, int INT, int AGL)
    {
        Strength = STR;
        Intelligence = INT;
        Agility = AGL;
    }

    //����� ��������� �������� ���������
    int getStregth()  const
    {
        return Strength;
    }

    int getIntelligence()  const
    {
        return Intelligence;
    }

    int getAgility()  const
    {
        return Agility;
    }

    //����� �������� ���������
    void CheckAttributes();
};




//�5 ������ � ���� ���������� � �������
class  Quest
{
private:
    string Title;      // �������� �������
    string Description; // �������� �������
    int Rewards;         // ������� �� ���������� (��������, ���� ��� ��������)
    bool IsCompleted;     // ������ ���������� (0 - �� ���������, 1 - ���������)

public:
    Quest()      //�����������
    {
        Title = "\0";
        Description = "\0";
        Rewards = 0;
        IsCompleted = false;
    }

    ~Quest()     //����������
    {

    }

    //������ ��� ��������� �������� �������
    string getTitle()  const
    {
        return Title;
    }

    string getDescription() const
    {
        return Description;
    }

    int getRewards() const
    {
        return Rewards;
    }

    bool getComplited() const
    {
        return IsCompleted;
    }

    //����� ��� �������� �������
    void CreateQuest();
};



//�6 ������ � ���� ���������� �� ��������
class Item
{
private:
    string Name;        // �������� ��������
    string ItemType;   // ��� �������� (������, �����, ����� � �.�.)
    int Value;            // ��������� ��������
    int Weight;           // ��� ��������

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

    //������ ��� ��������� �������� ��������
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

    //����� �������� ��������
    void CreateItem();
};


//�7 �������� ���������� � ����������
class AttackSpell
{
private:
    string Name;       //�������� ����������
    int Damage;          //���� ����������
    int Radius;          //������ ������ ����������
    int Element;           //������ ���������� (0 - �����, 1 - ���, 2 - �������������)

public:
    AttackSpell()     //�����������
    {
        Name = "\0";
        Damage = 0;
        Radius = 0;
        Element = 0;
    }

    ~AttackSpell()       //����������
    {

    }

    //������ ��������� ��������
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

    //����� �������� ���������� �����������
    void CreateAttackSpell();
};

//�8 �������� ���������� �� ���������
class Inventory
{
private:
    int ItemsCount;        //����� ����� � ���������
    int MaxWeight;         //������������ ����������� ���
    int ItemsWeight;       //������� ���������� ����� � ���������

public:
    Inventory()
    {
        ItemsCount = 0;
        ItemsWeight = 0;
        MaxWeight = 0;
    }

    ~Inventory()
    {

    }

    void setMaxWeight(int MWeight)
    {
        MaxWeight = MWeight;
    }

    void setItemsWeight(int ItWeight)
    {
        ItemsWeight = ItWeight;
    }

    void setItemsCount(int ItCount)
    {
        ItemsCount = ItCount;
    }

    int getItemsCount() const
    {
        return ItemsCount;
    }

    int getItemsWeight() const
    {
        return ItemsWeight;
    }

    int gwtMaxWeight() const
    {
        return MaxWeight;
    }

    //����� �������� ���������
    void CheckInvenory();
};

#endif // MYSTRUCTURES_H_INCLUDED
