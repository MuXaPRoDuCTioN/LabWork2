#include <locale.h>
#include "MyStructures.h"

int main() {
    setlocale(LC_ALL, "Rus");

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
