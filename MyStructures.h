#ifndef MYSTRUCTURES_H_INCLUDED
#define MYSTRUCTURES_H_INCLUDED

//�1 ������ � ���� ���� ����������� � ������ ��������������
typedef struct {
    int PersonalDMG;
    int EnemyDFN;
}AttackDMG;

//������� ��� �������� ��������� �1
int FinalDMG(int PersonalDMG, int EnemyDFN);

//�2 ������ � ���� ����� ���������� �����
typedef struct {
    int HelmetDefence;
    int CuirassDefence;
    int GlovesDefence;
    int GreavesDefence;
    int BootsDefence;
}Defence;

//������� ��� �������� ��������� �2
int AllDefence(int HelmDef, int CuirDef, int GlovDef, int GreaDef, int BootDef);

//�3 �������� � ���� ���������� � �����
typedef struct {
    char Name[10];
    int RecomendLevel;
    int MapSize;
}Biome;

//������� ��� �������� ��������� �3
void CreateBiome(char *Name, int *RecomendLevel, int *MapSize);

//�4 �������� ���������� �� ���������
typedef struct {
    int Strength;
    int Intelligence;
    int Agility;
}Attributes;

//������� ��� �������� ��������� �4
void CheckAttributes(int Strength, int Intelligence, int Agility);

#endif // MYSTRUCTURES_H_INCLUDED
