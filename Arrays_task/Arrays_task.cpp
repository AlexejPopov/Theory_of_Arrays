#include <iostream>;
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	srand(time(NULL));
	const int temperature = 30;
	int Array[temperature]{};
	int variable = 0, check = 0;
	cout << "-------------------------------------------------------��������� ��� ����������������------------------------------------------------------------" << endl;
	for (int i = 0; i < temperature; i++)
	{
		Array[i] = rand() % 20;
		variable += Array[i];
	}

	cout << "������� ����������� �� ����� ����� " << variable / 30 << " ��������." << endl;
	cout << "������� ����������� �� 20 �������� ��� �������: "; cin >> check;
	variable = 0;
	cout << "����������� ���������� ���� " << check << " �������� � ��������� ���: ";
	for (int i = 0; i < temperature; i++)
	{
		if (Array[i] < check)
		{
			cout << i + 1 << "-�� ";
			variable++;
		}
	}
	cout << "������." << endl;
	cout << "����������� ���������� ���� " << check << " �������� " << variable << " ����." << endl;
}

/* 1. C������ ������ �� 30 ��������� ����� �� 0 �� 20 (��� ����� �����������) ok

   2. ��������� ������ ���������� �������, ������������� ����������� �� ������ ���� ������ (30 ����� ��������������� ��������� �������) ok

   3. � ���� ������� ���������� ������� ����������� �� ����� (������� ��� �������� � �������� �� �� ����������) ok

   4. ���������� ������� ��� ����������� �������� ���������� ���� ��������� ����� (�.�. ������������ ������ � ���������� �����, �������� 15 �������� � ��������� �������
   ��� ����������� ���������� ���� 15 �������� � ������������ ���).

   �.�. ����������� �������� ��������� �������, �������� ������� ������ 15 (�� �������� � ����� �� ��������� � ������� ���� �������� ������ ��� ��������� �������������,
   �� ������� �� ����� ��� ������ (������ +1) ����� ���� ����� ����� ���� (3-�� ������, 5-�� ������...) � ���������� ����� ����, ������� ��� ����������� ���������� ����
   �������. */