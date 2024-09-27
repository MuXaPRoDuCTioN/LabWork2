#include <stdio.h>
#include "MyStructures.h"

int FinalDMG(int PersonalDMG, int EnemyDFN) {
    if (PersonalDMG - EnemyDFN < 0)
        return 0;
    return PersonalDMG - EnemyDFN;
};
