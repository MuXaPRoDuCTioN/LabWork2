#include "MyStructures.h"

int main() {
    system("chcp 1251");

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

    //Проверяем пятый класс
    Quest MyQuest;
    MyQuest.CreateQuest();
    printf("\n");

    //Проверяем шестой класс
    Item MyItem;
    MyItem.CreateItem();
    printf("\n");

    //Проверяем седьмой класс
    AttackSpell MySpell;
    MySpell.CreateAttackSpell();
    printf("\n");

    //Проверяем восьмой класс
    Inventory MyInvent;
    MyInvent.setItemsCount(3);
    MyInvent.setItemsWeight(29);
    MyInvent.setMaxWeight(90);
    MyInvent.CheckInvenory();
    printf("\n");
}
