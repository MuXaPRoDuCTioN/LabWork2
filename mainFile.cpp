#include <locale.h>
#include "MyStructures.h"

int main() {
    setlocale(LC_ALL, "Rus");

    //Проверяем первый класс
    {
        AttackDMG DMG;
        DMG.setPlayerDMG(5);
        DMG.setEnemyDFN(3);
        cout << "При уроне игрока " << DMG.getPlayerDMG() << " и защите противника " << DMG.getEnemyDFN() << " он получит " << DMG.FinalDMG() << " единицы урона." << endl;
    }

    //Проверяем второй класс
    Defence DFN;
    DFN.setDefence(3, 5, 1, 2, 1);
    cout << "При показателях брони: " << DFN.getHelmDefence() << ", " << DFN.getCuirDefence() << ", " << DFN.getGlovDefence() << ", " << DFN.getGreaDefence() << ", " << DFN.getBootDefence() << " общий показатель равен " << DFN.AllDefence() << endl;


    //Проверяем третий класс
    Biome Forest;
    Forest.CreateBiome();
    printf("\n");

    //Проверяем четверый класс
    Attributes Player;
    Player.setAttributes(58, 79, 31);
    Player.CheckAttributes();
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
