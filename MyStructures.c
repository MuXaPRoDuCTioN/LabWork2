#include <stdio.h>
#include "MyStructures.h"

int FinalDMG(int PlayerDMG, int EnemyDFN) {
    if (PlayerDMG - EnemyDFN < 0)
        return 0;
    return PlayerDMG - EnemyDFN;
}

int AllDefence(int HelmDef, int CuirDef, int GlovDef, int GreaDef, int BootDef) {
    return HelmDef + CuirDef + GlovDef + GreaDef + BootDef;
}

void CreateBiome(char *Name, int *RecomendLevel, int *MaxMapSize) {
    scanf("%s %d %d", Name, RecomendLevel, MaxMapSize);
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

void CreateQuest(char *Title, char *Description, int *Rewards, int *IsCompleted) {

}

void CreateItem(char *Name, char *ItemType, int *Value, int *Weight) {

}

void CreateAttackSpell(char *Name, int *Damage, int *Radius, int *Element) {

}
