#include <stdio.h>
#include <locale.h>
#include "MyStructures.h"

int main() {
    setlocale(LC_ALL, "Rus");

    //Проверяем первую структуру
	AttackDMG DMG = {5, 3};
	printf("При атаке игрока %d и защите противника %d противник получит урон равный %d\n",DMG.PlayerDMG, DMG.EnemyDFN, FinalDMG(DMG.PlayerDMG, DMG.EnemyDFN));
	printf("\n");

    //Проверяем вторую структуру
    Defence PlayerDefence = {2, 4, 1, 3, 2};
    printf("При таких показателях защиты (%d, %d, %d, %d, %d) общая защита будет равна %d\n",PlayerDefence.HelmetDefence, PlayerDefence.CuirassDefence, PlayerDefence.GlovesDefence, PlayerDefence.GreavesDefence, PlayerDefence.BootsDefence, AllDefence(PlayerDefence.HelmetDefence, PlayerDefence.CuirassDefence, PlayerDefence.GlovesDefence, PlayerDefence.GreavesDefence, PlayerDefence.BootsDefence));
    printf("\n");

    //Проверяем третью структуру
    Biome Forest;
    CreateBiome(Forest.Name, &Forest.RecomendLevel, &Forest.MaxMapSize);
    printf("\n");

    //Проверяем четверую структуру
    Attributes Player = {59, 35, 78};
    CheckAttributes(Player.Strength, Player.Intelligence, Player.Agility);
    printf("\n");

    //Проверяем пятую структуру
    Quest MyQuest;
    CreateQuest(MyQuest.Title, MyQuest.Description, &MyQuest.Rewards, &MyQuest.IsCompleted);
    printf("\n");

    //Проверяем шестую структуру
    Item MyItem;
    CreateItem(MyItem.Name, MyItem.ItemType, &MyItem.Value, &MyItem.Weight);
    printf("\n");

    //Проверяем седьмую структуру
    AttackSpell MySpell;
    CreateAttackSpell(MySpell.Name, &MySpell.Damage, &MySpell.Radius, &MySpell.Element);
    printf("\n");

    //Проверяем восьмую структуру
    Inventory MyInvent = {18, 340, 267};
    CheckInvenory(MyInvent.MaxWeight, MyInvent.ItemsWeight, MyInvent.ItemsCount);
    printf("\n");

}
