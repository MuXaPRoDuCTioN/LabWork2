#include <stdio.h>
#include "MyStructures.h"

int main() {
    //��������� ������ ���������
	AttackDMG DMG = {5, 3};
	printf("%d", FinalDMG(DMG.PlayerDMG, DMG.EnemyDFN));
}
