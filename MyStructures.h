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
typedef struct {
    int HelmetDefence;        //���������� ������ �����
    int CuirassDefence;         //���������� ������ �������
    int GlovesDefence;         //���������� ������ ��������
    int GreavesDefence;          //���������� ������ �������
    int BootsDefence;           //���������� ������ �����
} Defence;

//������� ��� �������� ��������� �2
int AllDefence(int HelmDef, int CuirDef, int GlovDef, int GreaDef, int BootDef);


//�3 �������� � ���� ���������� � �����
typedef struct {
    char Name[10];                 //�������� �����
    int RecomendLevel;             //������������� �������
    int MaxMapSize;                //������������ ������ �����
} Biome;

//������� ��� �������� ��������� �3
void CreateBiome(char *Name, int *RecomendLevel, int *MaxMapSize);


//�4 �������� ���������� �� ���������
typedef struct {
    int Strength;          //���������� ����
    int Intelligence;       //���������� ����������
    int Agility;            //���������� ��������
} Attributes;

//������� ��� �������� ��������� �4
void CheckAttributes(int Strength, int Intelligence, int Agility);


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
