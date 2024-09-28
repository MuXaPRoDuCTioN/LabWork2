#include <stdio.h>
#include "MyStructures.h"

//��� ������� ������ ��������� �������� �����, ������� ������� ���������
int FinalDMG(int PlayerDMG, int EnemyDFN) {
    if (PlayerDMG - EnemyDFN < 0)
        return 0;
    return PlayerDMG - EnemyDFN;
}

//������� ������ ���������� �����
int AllDefence(int HelmDef, int CuirDef, int GlovDef, int GreaDef, int BootDef) {
    return HelmDef + CuirDef + GlovDef + GreaDef + BootDef;
}

//�������� ������ �����
void CreateBiome(char *Name, int *RecomendLevel, int *MaxMapSize) {
    printf("������� �������� �����: ");
    scanf("%s", Name);
    while (getchar() != '\n');

    printf("������� ������������� ������� � ������������ ������ ����� (� ���-�� ������): ");
    scanf("%d %d", RecomendLevel, MaxMapSize);
    while (getchar() != '\n');

    printf("�� ������� ������� ����!\n");
}

//������� �����, ������� ������� �� ����������� ���������
void CheckAttributes(int Strength, int Intelligence, int Agility) {
    printf("��� ����������� ����, ����������, �������� � %d %d %d, ��� ��������: ", Strength, Intelligence, Agility);

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

//�������� ������ �������
void CreateQuest(char *Title, char *Description, int *Rewards, int *IsCompleted) {
    printf("������� �������� �������: ");
    scanf("%s", Title);
    while (getchar() != '\n');

    printf("������� �������� �������: ");
    scanf("%s", Description);
    while (getchar() != '\n');

    printf("������� ������� � ���������� ������ �� �������: ");
    scanf("%d", Rewards);
    while (getchar() != '\n');

    *IsCompleted = 0;

    printf("�� ������� ������� �������!\n");
}

//�������� ������ ��������
void CreateItem(char *Name, char *ItemType, int *Value, int *Weight) {
    printf("������� �������� ��������: ");
    scanf("%s", Name);
    while (getchar() != '\n');

    printf("������� ��� ��������: ");
    scanf("%s", ItemType);
    while (getchar() != '\n');

    printf("������� ���� � ��� ��������: ");
    scanf("%d %d", Value, Weight);
    while (getchar() != '\n');

    printf("�� ������� ������� �������!\n");
}

//�������� ����� ���������� ����������
void CreateAttackSpell(char *Name, int *Damage, int *Radius, int *Element) {
    printf("������� �������� ����������: ");
    scanf("%s", Name);
    while (getchar() != '\n');

    do {
        printf("������� ����, ������ ������, ������ ���������� (0-2): ");
        scanf("%d %d %d", Damage, Radius, Element);
        while (getchar() != '\n');
    } while (*Element < 0 || *Element > 2);

    printf("�� ������� ������� ����������!n");
}

//����� ���������� �� ���������
void CheckInvenory(int MaxWeight, int ItemsWeight, int ItemsCount) {
    printf("� ��� ��� �������� %d �� � ���������, ����� ��������� � ��������� %d.\n", MaxWeight-ItemsWeight, ItemsCount);
}
