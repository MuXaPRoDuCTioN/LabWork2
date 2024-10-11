#include <stdio.h>
#include <locale.h>
#include "MyStructures.h"

int main() {
    setlocale(LC_ALL, "Rus");

    //��������� ������ ���������
	AttackDMG DMG = {5, 3};
	printf("��� ����� ������ %d � ������ ���������� %d ��������� ������� ���� ������ %d\n",DMG.PlayerDMG, DMG.EnemyDFN, FinalDMG(DMG.PlayerDMG, DMG.EnemyDFN));
	printf("\n");

    //��������� ������ ���������
    Defence PlayerDefence = {2, 4, 1, 3, 2};
    printf("��� ����� ����������� ������ (%d, %d, %d, %d, %d) ����� ������ ����� ����� %d\n",PlayerDefence.HelmetDefence, PlayerDefence.CuirassDefence, PlayerDefence.GlovesDefence, PlayerDefence.GreavesDefence, PlayerDefence.BootsDefence, AllDefence(PlayerDefence.HelmetDefence, PlayerDefence.CuirassDefence, PlayerDefence.GlovesDefence, PlayerDefence.GreavesDefence, PlayerDefence.BootsDefence));
    printf("\n");

    //��������� ������ ���������
    Biome Forest;
    CreateBiome(Forest.Name, &Forest.RecomendLevel, &Forest.MaxMapSize);
    printf("\n");

    //��������� �������� ���������
    Attributes Player = {59, 35, 78};
    CheckAttributes(Player.Strength, Player.Intelligence, Player.Agility);
    printf("\n");

    //��������� ����� ���������
    Quest MyQuest;
    CreateQuest(MyQuest.Title, MyQuest.Description, &MyQuest.Rewards, &MyQuest.IsCompleted);
    printf("\n");

    //��������� ������ ���������
    Item MyItem;
    CreateItem(MyItem.Name, MyItem.ItemType, &MyItem.Value, &MyItem.Weight);
    printf("\n");

    //��������� ������� ���������
    AttackSpell MySpell;
    CreateAttackSpell(MySpell.Name, &MySpell.Damage, &MySpell.Radius, &MySpell.Element);
    printf("\n");

    //��������� ������� ���������
    Inventory MyInvent = {18, 340, 267};
    CheckInvenory(MyInvent.MaxWeight, MyInvent.ItemsWeight, MyInvent.ItemsCount);
    printf("\n");

}
