#ifndef MYSTRUCTURES_H_INCLUDED
#define MYSTRUCTURES_H_INCLUDED

//������ � ���� ���� ����������� � ������ ��������������
typedef struct
{
    int PersonalDMG;
    int EnemyDFN;
}AttackDMG;

//������� ��� �������� ���������� ���������
int FinalDMG(int PersonalDMG, int EnemyDFN);

#endif // MYSTRUCTURES_H_INCLUDED
