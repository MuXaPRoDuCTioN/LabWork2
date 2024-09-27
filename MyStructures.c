#include <stdio.h>
#include "MyStructures.h"

int FinalDMG(int PersonalDMG, int EnemyDFN) {
    if (PersonalDMG - EnemyDFN < 0)
        return 0;
    return PersonalDMG - EnemyDFN;
}

int AllDefence(int HelmDef, int CuirDef, int GlovDef, int GreaDef, int BootDef) {
    return HelmDef + CuirDef + GlovDef + GreaDef + BootDef;
}

void CreateBiome(char *Name, int *RecomendLevel, int *MapSize) {
    scanf("%s %d %d", Name, RecomendLevel, MapSize);
}

void CheckAttributes(int Strength, int Intelligence, int Agility) {
    printf("��� ��������: ");

    if (Strength > 0 && Strength <= 25)
        printf("�������, ");
    else if (Strength > 25 && Strength <= 50)
        printf("������, ");
    else if (Strength > 50 && Strength <= 75)
        printf("�������, ");
    else if (Strength > 75 && Strength <= 100)
        printf("�������, ");

    if (Intelligence > 0 && Intelligence <= 25)
        printf("����������, ");
    else if (Intelligence > 25 && Intelligence <= 50)
        printf("������, ");
    else if (Intelligence > 50 && Intelligence <= 75)
        printf("�������, ");
    else if (Intelligence > 75 && Intelligence <= 100)
        printf("�����, ");

    if (Agility > 0 && Agility <= 25)
        printf("���������.\n ");
    else if (Agility > 25 && Agility <= 50)
        printf("��������.\n");
    else if (Agility > 50 && Agility <= 75)
        printf("������.\n");
    else if (Agility > 75 && Agility <= 100)
        printf("�������.\n");
}
