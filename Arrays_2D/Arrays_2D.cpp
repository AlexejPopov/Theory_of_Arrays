#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

// ��������� ������� (��) ��� �������, � ������� ������ ������� ��������������� ����� ���������, �������� �� ������ � �� �������.

int main()
{
    system("chcp 1251");
    system("cls");

    /* ������ � ���������� ����������� ������� �������� �� ��������. � ����� � ������� �������� ��������� ������������� �� �����, ������� ������� �� �������� ������
    ������� � ������� ��� ��������. A[i] ��� ��������� � i-�� �������� �������. */
    int A[3] = { 10,20,30 };

    for (int i = 0; i < 3; i++)
    {
        cout << "A[" << i << "]=" << A[i] << ";";
        cout << endl;
    }
    cout << endl;
    system("pause");
    /* ����� ��������� ��� ������ ����� � ������ ����������, ������ ����� �������� �� ������ ������� �� �����, ������ F5 ��������. � ��������� � ���� ����� ����� �����-
    �� � ��� 0 * 000000503474f828 (����� ������ ������� � ������) � ��� ���������� 10, 20, 30. ��� ������� int[3] - �� ���� ��������� ���� int.

    ����� ���������� � ����������� ������ ���������� �������, ����� Debug -> Windows -> Memory � ����� �� ��������������� ������� ��������� (����� ����� ���� ��������
    ����� 4 ����� � ������. ������ ������ 1 � ����� ������ � ���� HEX. ����� ������� ��� ���-�� �������� ����� ����� ��� ������ � ����������� ������� ��� ����� ������ �
    �������� ����. �.�. ������ �������� int ����� 4-� ������� �����, ����� ��� � ���� HEX � ������ 4-� ������� ����� (��� ����� �����: 32 - float, 64 - double, ������,
    ANSI..). ����� ��� -> �������� ������������� (����� �����/�����.����� ���� � +/-). ����� ���� ����������� ����� ����� �������, �� ������ ����� � Locals. � Values,
    ���, ���������� ��������! �������� �������� � ������ ����� ������. ����� ��� ����� ������, Enter. ��� ������ ����� � ����� ������ �������� (+10, +20, +30) ���� ��
    ������, ������� �� 4 �����. ������ ���� ��������, �� ������ ������������ �� � ���� �������. ���� ���� ������ � ������ ������ ��� ���������, ��������� � ����� ����-
    ����� �������� � ������� �� ������! ����� ��� ���������� ����� ������ �� 0 � �� ����� ������������, �� ������� ������� ������ ���.

    ��� ����� ��, ��� �� ����� � ������, ��� ��������?
    �� ��� ������ ��������. �������� � ��� ��� � ��������, � ������� ���� ������� � �������. ������ � �� �������������� ����� ��������� �����. ������ ������� �� ������-
    �� ����� ���������, �������� �� ������ � �������� �� ������� (������ ������). �� ��� ����� ����� ������� ������ � ���� ������. ��������� �� ����� ��� � ����������
    �� ������ � ����� ��������. */
    int B[3][4] = {};    // 3 �������, 4 ������� (������ ��)
    /* ��-� ����� ����� ������� ���������� �� ��������� � ������� � ���� ��������. ������ ���������� ������ [15]. ����� ��������� �� 13 �������� ����� ��������� 13 ���-
    ����� (�� ������� �������� � ����� i++ ��������� ��� ���������� ��������). ���������� ���� ������ ��������� (3 ������ �� 5 ���������):
    1  2  3  4  5
    6  7  8  9 10
    11 12 13 14 15      
    ����� ��������� �� 13-�� �������� �� ����� ���������� �������� �� �������, �������� ��� ������� ��������� �� 2-� ������, 2-� ������� (���� ���� � 0), ������� 0-�
    ������, ����� 1-� � ������� �� 2-� ������, � � ��� ������� 2 �������� � ������ � ������ (����� 4 ��������, � �� 13). ��� ������ �������, ��� ���� �������. � ���� ��
    ������� ��� ����� �������� � ��������� ����� �� �����, � ���� ������� ������� ������ � ��������� ����, ��� ��������� ������ �� �������, ���-
    ���� 1-� ������, ����� 2-� � ��� �� ����� ������ ����. ���������� � ��������� ���� � ������ �������� �� �����, ����� ��, ������� � ����. ��� ������, �.�. �����-
    �� �� ������ � �� ������� ����� ��������� � ��� ��� � ����� �� ������. ��� ���, �� ����� ��� �������� ������, � �������� �� ����� �������� ��� � ��������. */

    for (int i = 0; i < 3; i++)                                             // ���� ������� �� �������
    {
        for (int j = 0; j < 4; j++)                                         // ���� ������� �� ����������� ������ (������� �� ��������)
        {
            B[i][j] = rand() % 100;                                         // ��������� � �������� 2D ������� �� ��� �������
            cout << "B[" << i << "][" << j << "]=" << B[i][j] << "\t";      // �� ��������� ������ �� ���������� � ������� �������� �������
        }
        cout << endl;
    }
    system("pause");
    system("cls");
    /* ���� ������� ��� ��������� ���. ��������, rand()%100 ���� ����� 0...99, rand()%100+1 ���� ����� � �������� �� 1 �� 100. � �������� � ���� ���� rand()%6+1 (�����
    �� ������� 0). �.�. � ������������� ���������������� ����� � ���� ��������, ������ ��� ������. ������� �������:

    - ���� � ������ 100: rand()%100-100, -100 �� ����� ������ ��������� � ������ [-100...-1]
    - ���� � ������  99: rand()%100-99, �� ������ �������� [-99...0]
                         rand()%200; ���� �������� [0...+199]
    - ���� � ������  99: rand()%200-99, �� ������ �������� [-99...+100]

    ������ rand()%199; ������ [0...198]. � ����� �������� ����� � �������� [-99...+99] ����� ������ 99 � �������� rand()%199-99 � ���������� [-99...+99].
    �������� � �������: rand()%(100+99)-99 [-99...+99], ���� ��� �������� rand()%(100-(-99))-99 [-99...+99]. ������� ��������� �� -1 � ����������� �������:

        rand()%(�-�)+�      [B...A-1];

    ��� � ��� ����� ��������� -1, � � ��� ������ ���������. ��� ������� ��� � ��������� �� � ������������ � �� �-1. �.�. �� -99 ������������ � �� 100-1.

    ������ 1: ���� � ���� ������������� ����� �� 137 �� 248, �� ������� ����� ��������� ���:
    rand()%(249-137)+137    [137..248]

    ������ 2: ���� � ���� ������������� ����� �� -27...-3,
    rand()%(-2+27)-27     [-27...-3]

    ��� ��� ��������? ���� ������������� ����� � rand()%(100-(-99))-99 � �������� ������, ������� rand()%199-99. ����� ������� ��� � ��������� ���: ������� � ����� -99
    ������������� ����� � 199 ��������, ������� �������� �� -99 �� 99 �������� (�������� � 199 ��������, ������� �� ����� -99). */

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            B[i][j] = rand() % (100 - (-99)) - 99;
            cout << "B[" << i << "][" << j << "]=" << B[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");
    system("cls");

    /* ���������� ��� ���������������� �� ���������� ����� ��� ��������, � ������ ������������� �������� ��� ���������. �.�. �� �������� � ��� ��� � ��������, � � ����-
    �� ��� ������� ����� � ��������, ����� ������ ��� ����� �� � ������. ��� ���������� � �� (���������/��������� �������������) ���������� �������������� ���������� ��
    �������: */
    int Mass1[2][3] = { 1,2,3,4,5,6 };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Mass1[" << i << "][" << j << "]=" << Mass1[i][j] << "\t";
        }
        cout << endl;
    }
    /* �������, ��� 1-� 3 �������� ����������� � ������ � �������� 0, � 2-� 3 �������� � � ������ � �������� 1, ����, �� ���� ������ �� ����� ��������� ������� � �����-
    ����������� �� ������� � ������������ �� ������� ��� ������ �������� ������.
    (!) ��� �������� � ��������� ������� ����� ���������������, ���� �� ������: ������� ������� �������, ����� ������,... */
    int Mass2[2][3] = { {1,2,3},{4,5,6} };                          // � ����������� �� ������� (������� ����������� ������� ������, ����� ������)
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Mass2[" << i << "][" << j << "]=" << Mass2[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");
    system("cls");

    /* �������� ����� �������� � ������ � ��������. ��� �� ����� �� � ���������? �� ������� Locals �� ����� ����� �����, ����� ������ �������, ����� ������ ������. ��-
    ��� ��� ��� int[2][3] (� Types). ��������� ���, ����� ��� ������, � ������ ������ �� 3 ��������. ������ ������ �������� ��� ����������� ���������� ������ (�����, 3
    ��������). ����, �� ������� �� ���������� ���������� ��������, ������� � ������ ����� ���������������, � ����, ��������� ������ ������������ ����� �������� � �� ���
    � ��������, � ������� ������� �� �������� ������������� ��������.
    ������ � ������ � ������ ������ 1 � ������: ��� -> ���������� �������� -> ��������� � ����� � ������� ��� ����� ������ (������ 4-� ������� �����) -> ���� ���� ���-
    ��� � ����� ������, ������ ������� �������, ����� ������.
    (!) �.�. ������� 1 � 2 ����������� �����, ��� � � ������ ����� ���� �����.
    (!) � ������ ��������� ������� � ������ ���������� ������� ������ ���������� ���������� ������ � ���� ������, �������� ��������� � �������, �� ��� �������� ���, ��-
    ����� ��������� ����� �����. */

    int Mass3[2][3] = { 1,2,3,4 };                      // ��������� ��� �������� ����� ������ � ������� � ��������� �������� ��������� ������ {1,2,3,4,0,0}
    int Mass4[2][3] = { {1,2},{3,4} };                  // ���� ���������� � ��������� ������� ������ ��� �� ���� {{1,2,0},{3,4,0}}

    /* (!) ���� �� �� ���������� �� ��������, ����������� �������� ������� � ��������� ����� �� ����� � ���� �����, � ����� �� ���������� �� ������� � � ������/�����-��
    ������ �� ������� �������, �� ����� � ��� ��������������� ������ ���������� ����. */

    int Mass5[2][3] = { 5 };

    /* ���� ������-�� ������ �������� ����� ���� ���� ��������, �������� '5', �� ��� ������ ���������� ��� ��� {5,0,0,0,0,0}. ������ ����� ������ ������ � �������� 0;0
    ������� �� ���� ������ � ����������� �����, ���������� ��������� ����� �������� ���������� ������ ������� ������. ��, ����� ��������� '5' �� ���� ���������� ����� �
    ������� (1-� ������, 1-� �������) ����� ������������� - ��������� ��������� ������ {{},{0,5}}. ��� ������������ ��� ���: {{0,0,0},{0,5,0}}. */

    int Mass6[2][3] = { {},{0,5} };

    /* ���� ������ ��������� ������� �������� � ������ ������, �� ���� �� �������, �� ���� ������ �����������. ����� ������ ������-�� �������� ������ ������ ��������
    ����� ���������� � ���� �� ������, �� ��� ��������. �.�. ���� ��� ����� ������ 1 ������� ��� ���������, ������ ������ ������ � ��������� � ������� �������� �� ���
    ��������: */

    int Mass7[2][3] = {};
    Mass7[1][1] = 5;                                    // ��� �������� �������� ������� ������ � ���� ������� ������� Mass7[1][1]
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Mass7[" << i << "][" << j << "]=" << Mass7[i][j] << "\t";
        }
        cout << endl;
    }

    /* ��� �������� �������? (��� � ���� �������� �������)
    ������� �������� ������� ����� ���������� ��������� ����� ��������� �� ������� ��������. ����� �� ����� [1][1] �� ������� ��� ����� ���������� 1 ������ � 1 �������
    � � ��������� ������ ������� � ������ ������. �.�. � ��� �������� ������� ����� ��������� ���� �� ������ (5-� ������� ��������� 5-� �� �������). ��� �� ��� ��� ��-
    ��������: [1][1] - ���������� ���� ������ � ��� ���� ������� � ������� � ���������. ������� ��������� � ���� ����� ��� ������ ���������. ���� � ��� ������� � �����-
    ���� [0][0], �� ������� � ������ ������� (0;0), � ������ ������� ������� � ������ �� ���������. ���� � ��� [0][3], ������ �� ������� ������ �� ���������, �� �����-
    ���� 3 �������� � � 4-� �������� ������ ��������.
    ��� �������� ����� ���������������, ����, ������ ���� �� ������ ������� � �� ������� ��������. ���������� ���������� � �������� � ������ �����, ���������� ��� ���-
    �����. �.�. ��� ����� �� ��������� ����������� � ������� ��������. ������� ����������� ������������ � �� ���������� ������ � ������ ������� � ����������� �����:
    [1][1] = 1*3 + 1 = 4
    (����� ���������� 1 ������ �� 3-� ��������� � ��� � ��� ���������� ���� ������� � ����� ������. �������� 4 ��������, � � 5-� ���������� ������� ���������)
    ��� ��� �������� ���� ��������� � �������, �� ��� ��� �������� �� �����. ��� �� ����� ������� ����� ������ � ������� � �������� � ������ �����. */
    system("pause");
    system("cls");

    // ������ min � max �������� � �������. �������� ���� ������� �������� ��������� ������� � ���� ������.
    const int rows = 10;
    const int columns = 6;
    int Array[rows][columns]{};
    int max = 0, min = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            do                                                              // ������� ���� ���� ��� ���������� ������������ ����� �� ���
            {
                Array[i][j] = rand() % (100 - (-99)) - 99;
                // ���� ������� ������������� ��� ��������� �� -9 �� +9 ������������
            } while (Array[i][j] > -10 && Array[i][j] < 10);
            cout << "A[" << i << "][" << j << "]=";
            if (Array[i][j] > 0)cout << " ";                                // ������� ������ ����� ������������� ������
            cout << Array[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");
    system("cls");
    /* (!) ����� 35 �������� 2 �����, � ����� -35 �������� 3 �����. ����� ������ ������ ����� ����� ���� ���� 3 �����.

    ��� �� ����� �������� � ��������? �.�. ��������� ������ ��� ������� �� ���� ���������, �� ����� �������� � ��� ���������� ������� �� ��������, �� ������� ������ ��
    ���������. ���������� ������. ��������� ����� � ������ ������� ������������ �������. ����� ��� ����� ����� ����� ��� ��� ���������� � ������� ������ �������� ����-
    ������ max, � ������ ������ ����� ������� �����-�� �� ����� ��������� �� ��������. � ������ ������� �� ���������� ������� j ������� �� ��������, � ����� � ���
    ������� ��� ���������� �������� � �������. ���� ������� �������� ������ ��� �������� ����� ��������, �� ��������� ������� ����� ��������� ������������. ����� ���
    ��� ����� ������ ������ ������ �� �������� �������� (��� ������ 'i-�' ������ ������� ������� ����� ��������� ������������). */

    for (int i = 0; i < rows; i++)
    {
        max = Array[i][0];                                                                  // � �������� j �� �� ����� ��� ����������, �� ����� ������ � ����� ����
        for (int j = 0; j < columns; j++)
        {
            if (Array[i][j] > max)max = Array[i][j];
        }
        cout << "������������ ������� " << i << "-� ������ ����� " << max << endl;          // �� ������� �� ������� ������������� ��������, � ��� ��������
    }
    cout << endl;
    /* ������ ����, ��� �� ����� �������� � �������� ���������, �� ����� ����� �������� � �������� � �� ��������. � ���� ����� ��� �������� 1-�� ������� � ����������,
    ����� 2-��, ����� 3-�� � �.�. ����� �� �������� � �������� ���������, �� ����� ������, ������� � �������� � ��� ����������� �������� ������ ������������. � ��� �
    ������ �������. � ������ ����� ����� �� ���������. ����� ������ ������� ������� � ���������� ����������� �������� ������ ����. ����� ��� ���������� ����� ����� ��-
    ������ �������. ���� � ������ ������ � ��� ������� ��� ���� ������� �� �������, � ���������� - ������ �� ��������� ����� ������. ������ �� ������ ���� ������ ����
    ������ ������� �� ��������, � ���������� �� �������, �����, ��� ������ �������� �� 0 �� rows, � ������� �� 0 �� columns.
    ������ � ������ ������� ���� ����������� ������� � ����� ����� ��������� ���������� �� ����������� ������� - ������ ������� � �������. ������ ������� � ������� ��-
    ��� ����� ������ ������ �� ������ 0, � �� ������� ������ ����� �������� (0,1,2...). */

    for (int j = 0; j < columns; j++)                       // ���� ������� �� ��������
    {
        min = Array[0][j];                                  // ��� ������� j-�� ������� � ������ ������� ����������� ������� � �������� 0 �� ������ (������ � �������)
        for (int i = 0; i < rows; i++)                      // ���� ������� �� ��������� ������ ������� (�� �������)
        {
            if (Array[i][j] < min)min = Array[i][j];
        }
        cout << "����������� ������� " << j << "-�� ������� ����� " << min << endl;
    }
    /* (!) ������� ������� ������� � ���������� �����, �� ����� �������� �� ��������, � �� �� �������. �� ������� �������, ��� ���������� ����� ���������������� ����-
    ������ rows, � ���������� �������� ���������� columns � � ���������� ������� Array[0][j] ������ ���� ������, � ����� �������. ������� ��������� ������ ������. ����-
    �� ������ ����������� ������ �� ������, � ������ ������ �� �������. � ���������� �������� �� ����� ��� ������: ����� ��� ������� (�� �������� ��� �� ��������). */
}