#ifndef MYSTRUCTURES_H_INCLUDED
#define MYSTRUCTURES_H_INCLUDED
#include <iostream>

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

    //����� �������� ���������
    void CheckAttributes();
};




//�5 ������ � ���� ���������� � �������
typedef struct {
    char Title[50];      // �������� �������
    char Description[200]; // �������� �������
    int Rewards;         // ������� �� ���������� (��������, ���� ��� ��������)
    int IsCompleted;     // ������ ���������� (0 - �� ���������, 1 - ���������)
} Quest;

//������� ��� �������� ��������� �5
void CreateQuest(char *Title, char *Description, int *Rewards, int *IsCompleted);


//�6 ������ � ���� ���������� �� ��������
typedef struct {
    char Name[50];        // �������� ��������
    char ItemType[20];   // ��� �������� (������, �����, ����� � �.�.)
    int Value;            // ��������� ��������
    int Weight;           // ��� ��������
} Item;

//������� ��� �������� ��������� �6
void CreateItem(char *Name, char *ItemType, int *Value, int *Weight);


//�7 �������� ���������� � ����������
typedef struct {
    char Name[50];       //�������� ����������
    int Damage;          //���� ����������
    int Radius;          //������ ������ ����������
    int Element;           //������ ���������� (0 - �����, 1 - ���, 2 - �������������)
} AttackSpell;

//������� ��� �������� ��������� �7
void CreateAttackSpell(char *Name, int *Damage, int *Radius, int *Element);


//�8 �������� ���������� �� ���������
typedef struct {
    int ItemsCount;        //����� ����� � ���������
    int MaxWeight;         //������������ ����������� ���
    int ItemsWeight;       //������� ���������� ����� � ���������
} Inventory;

//������� ��� �������� ��������� �8
void CheckInvenory(int MaxWeight, int ItemsWeight, int ItemsCount);

#endif // MYSTRUCTURES_H_INCLUDED
