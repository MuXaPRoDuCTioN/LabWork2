#ifndef MYSTRUCTURES_H_INCLUDED
#define MYSTRUCTURES_H_INCLUDED

//№1 Хранит в себе урон нападающего и защиту обороняющегося
typedef struct {
    int PersonalDMG;
    int EnemyDFN;
}AttackDMG;

//Функция для проверки структуры №1
int FinalDMG(int PersonalDMG, int EnemyDFN);

//№2 Хранит в себе общий показатель брони
typedef struct {
    int HelmetDefence;
    int CuirassDefence;
    int GlovesDefence;
    int GreavesDefence;
    int BootsDefence;
}Defence;

//Функция для проверки структуры №2
int AllDefence(int HelmDef, int CuirDef, int GlovDef, int GreaDef, int BootDef);

//№3 Содержит в себе информацию о биоме
typedef struct {
    char Name[10];
    int RecomendLevel;
    int MapSize;
}Biome;

//Функция для проверки структуры №3
void CreateBiome(char *Name, int *RecomendLevel, int *MapSize);

//№4 Содержит информацию об атрибутах
typedef struct {
    int Strength;
    int Intelligence;
    int Agility;
}Attributes;

//Функция для проверки структуры №4
void CheckAttributes(int Strength, int Intelligence, int Agility);

#endif // MYSTRUCTURES_H_INCLUDED
