#ifndef MYSTRUCTURES_H_INCLUDED
#define MYSTRUCTURES_H_INCLUDED

//’ранит в себе урон нападающего и защиту оборон€ющегос€
typedef struct
{
    int PersonalDMG;
    int EnemyDFN;
}AttackDMG;

//‘ункци€ дл€ проверки предыдущей структуры
int FinalDMG(int PersonalDMG, int EnemyDFN);

#endif // MYSTRUCTURES_H_INCLUDED
