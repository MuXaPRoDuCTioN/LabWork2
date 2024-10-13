#include "MyStructures.h"

int main() {
    system("chcp 1251");

    //��������� ������ �����
    {
        AttackDMG DMG;
        DMG.setPlayerDMG(5);
        DMG.setEnemyDFN(3);
        cout << "��� ����� ������ " << DMG.getPlayerDMG() << " � ������ ���������� " << DMG.getEnemyDFN() << " �� ������� " << DMG.FinalDMG() << " ������� �����." << endl;
    }

    //��������� ������ �����
    Defence DFN;
    DFN.setDefence(3, 5, 1, 2, 1);
    cout << "��� ����������� �����: " << DFN.getHelmDefence() << ", " << DFN.getCuirDefence() << ", " << DFN.getGlovDefence() << ", " << DFN.getGreaDefence() << ", " << DFN.getBootDefence() << " ����� ���������� ����� " << DFN.AllDefence() << endl;


    //��������� ������ �����
    Biome Forest;
    Forest.CreateBiome();
    printf("\n");

    //��������� �������� �����
    Attributes Player;
    Player.setAttributes(58, 79, 31);
    Player.CheckAttributes();
    printf("\n");

    //��������� ����� �����
    Quest MyQuest;
    MyQuest.CreateQuest();
    printf("\n");

    //��������� ������ �����
    Item MyItem;
    MyItem.CreateItem();
    printf("\n");

    //��������� ������� �����
    AttackSpell MySpell;
    MySpell.CreateAttackSpell();
    printf("\n");

    //��������� ������� �����
    Inventory MyInvent;
    MyInvent.setItemsCount(3);
    MyInvent.setItemsWeight(29);
    MyInvent.setMaxWeight(90);
    MyInvent.CheckInvenory();
    printf("\n");
}
