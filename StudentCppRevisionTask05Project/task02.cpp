#include "tasks.h"

/*	Task 02. Palindrome Number (������������ ����� ��� �����-���������)
*
*	���� �������������� ����� ��� ������. ����������, �������� �� ��� �����������.
*
*	����������
*	1) ������������� ����� ��������� �� �������� �����������.
*	2) �� �������� ��� "������ �� ������": �������� ���������� �������� ������ ���� �� 0 �� 9999
*	3) ��� ���������� ��������� ������� ���������� ������������ ������ ���������� �������� ����� �/�++.
*
*	������ ������� ������ [input]
*	������� ��������� ����� ����� � ��������� ���� int.
*
*	������ �������� ������ [output]
*	������� ���������� ��������������� �������� ���������� ����,
*	� ���� ������ ������ �����������, �� ���������� ���������� �������� false.
*
*	[ input 1]: 2002
*	[output 1]: true
*
*	[ input 2]: 2008
*	[output 2]: false
*
*	[ input 3]: 2
*	[output 3]: true
*
*	[ input 4]: -8
*	[output 4]: false
*
*	[ input 5]: 55255
*	[output 5]: false
*/

bool task02(int number) {
    if (number < 0 || number > 9999) {
        return false;
    }

    int repeat = 0;

    if (number > 9 && number < 1000) {
        repeat = 1;
    }
    else if (number > 999 && number < 10000) {
        repeat = 2;
    }

    for (int i = repeat; i > 0; i--) {

        int num_1 = number % 10;
        int num_2 = number / pow(10, repeat + 1);

        if (num_1 != num_2) {
            return false;
        }

        number /= 10;
        int n = pow(10, repeat + 1);
        number = number % n;
        cout << "1 - " << number << endl;
    }

    return true;
}