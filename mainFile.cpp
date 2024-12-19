#include "MyStructures.h"
int Attributes::totalInputCounting;

int main() {

    system("chcp 1251");
    srand(time(0));
    cout << endl;
    Calculator calc;

    //Проверяем первый класс
    {
        AttackDMG DMG;
        DMG.setPlayerDMG(5);
        DMG.setEnemyDFN(3);
        cout << "При уроне игрока " << DMG.getPlayerDMG() << " и защите противника " << DMG.getEnemyDFN() << " он получит " << calc.FinalDMG(DMG) << " единицы урона." << endl;
    }

    //Проверяем второй класс
    Defence DFN;
    int Res;
    DFN.setDefence(3, 5, 1, 2, 1);
    calc.AllDefence(DFN, &Res);
    cout << "При показателях брони: " << DFN.getHelmDefence() << ", " << DFN.getCuirDefence() << ", " << DFN.getGlovDefence() << ", " << DFN.getGreaDefence() << ", " << DFN.getBootDefence() << " общий показатель равен " << Res << endl;


    //Проверяем третий класс
    Biome Forest;
    Forest.CreateBiome();
    printf("\n");

    //Проверяем четверый класс
    Attributes Player;
    int STR = 1, INT = 1, AGL = 1;
    char userResponse;

    try {
    do {
        cout << "Введите значение силы: ";
        cin >> STR;

        cout << "Введите значение интеллекта: ";
        cin >> INT;

        cout << "Введите значение ловкости: ";
        cin >> AGL;

        Player.setAttributes(STR, INT, AGL);
        Player.CheckAttributes();

        cout << "Хотите повторить? (д/н): ";
        cin >> userResponse;
        printf("\n");
    } while (userResponse == 'д');
    }
    catch (const std::exception& e) {
        cerr << "Непредвиденная ошибка: " << e.what() << endl;
    }

    cout << "Успешных вводов атрибутов: " << Player.getTotalInputCounting() << endl;
    printf("\n");

    //Проверяем шестой класс
    Item MyItem;
    MyItem.CreateItem();
    printf("\n");

    //Проверяем пятый класс
    Quest MyQuest(&MyItem);
    MyQuest.CreateQuest();
    printf("\n");

    //Проверяем седьмой класс
    AttackSpell MySpell;
    MySpell.CreateAttackSpell();
    printf("\n");

    //Проверяем восьмой класс
    Inventory *MyInvent1 = new Inventory(30);
    MyInvent1->setItemsCount(4);

    MyInvent1->fillInv();
    MyInvent1->showInv();

    MyInvent1->CheckInventory();

    Inventory *MyInvent2(MyInvent1);
    MyInvent2->CheckInventory();
    printf("\n");

    //Проверка производных классов
    Usable UsableItem;
    UsableItem.CreateItem();
    printf("\n");

    //Проверка контейнеров
    NewInventory Invent;

    Invent.addItem(make_unique<Item>(MyItem));
    Invent.addItem(make_unique<Usable>(UsableItem));

    Invent.sortItems();
    Invent.displayItems();
}

