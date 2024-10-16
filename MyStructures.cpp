#include "MyStructures.h"

//��� ������� ������ ��������� �������� �����, ������� ������� ���������
int AttackDMG::FinalDMG() {
    if (PlayerDMG - EnemyDFN < 0)
        return 0;
    return PlayerDMG - EnemyDFN;
}

//������� ������ ���������� �����
int Defence::AllDefence() {
    return HelmetDefence + CuirassDefence + GlovesDefence + GreavesDefence + BootsDefence;
}

//�������� ������ �����
void Biome::CreateBiome() {
    printf("������� �������� �����: ");
    getline(cin, Name);

    printf("������� ������������� ������� � ������������ ������ ����� (� ���-�� ������): ");
    scanf("%d %d", &RecomendLevel, &MaxMapSize);
    while (getchar() != '\n');

    printf("�� ������� ������� ����!\n");
}

//������� �����, ������� ������� �� ����������� ���������
void Attributes::CheckAttributes() {
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
void Quest::CreateQuest() {
    printf("������� �������� �������: ");
    getline(cin, Title);

    printf("������� �������� �������: ");
    getline(cin, Description);

    cout << "������� � ������� �� �������: " << Reward->getName() << endl;

    IsCompleted = false;

    printf("�� ������� ������� �������!\n");
}

//�������� ������ ��������
void Item::CreateItem() {
    printf("������� �������� ��������: ");
    getline(cin, Name);

    printf("������� ��� ��������: ");
    getline(cin, ItemType);

    printf("������� ���� � ��� ��������: ");
    scanf("%d %d", &Value, &Weight);
    while (getchar() != '\n');

    printf("�� ������� ������� �������!\n");
}

//�������� ����� ���������� ����������
void AttackSpell::CreateAttackSpell() {
    printf("������� �������� ����������: ");
    getline(cin, Name);

    do {
        printf("������� ����, ������ ������, ������ ���������� (0-2): ");
        scanf("%d %d %d", &Damage, &Radius, &Element);
        while (getchar() != '\n');
    } while (Element < 0 || Element > 2);

    printf("�� ������� ������� ����������!\n");
}

//����� ���������� �� ���������
void Inventory::CheckInventory() {
    printf("���������� ����� � ���������: %d\n", MaxItems-ItemsCount);
}
