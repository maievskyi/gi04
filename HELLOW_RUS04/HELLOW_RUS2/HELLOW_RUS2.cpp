// HELLOW_RUS2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <locale.h> /* ��� �������� ����� */

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL,"Rus"); /* ����������� ������ ���� ������ */
    char a1[100];
	std::cout<<"���������� ���� ���!\n";
	std::cout<<" 1  ���������� ���� ���!\n";
	std::cout<<"2  ���������� ���� ���!\n";
	std::cout<<"3  ���������� ���� ���!\n";
	std::cout<<"4  ���������� ���� ���!\n";
	cin>> a1;
	cout << a1 <<endl;
	system("pause");  //���: "��� ����������� ......."
	return 0;
}
