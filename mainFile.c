#include <stdio.h>
#include "MyStructures.h"

int main() {
    //Проверяем первую структуру
	AttackDMG DMG = {5, 3};
	printf("%d", FinalDMG(DMG.PlayerDMG, DMG.EnemyDFN));
}
