// HELLOW_RUS2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <locale.h> /* Для русского языка */

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL,"Rus"); /* Обязательно должно быть первым */
    char a1[100];
	std::cout<<"Здравствуй весь мир!\n";
	std::cout<<" 1  Здравствуй весь мир!\n";
	std::cout<<"2  Здравствуй весь мир!\n";
	std::cout<<"3  Здравствуй весь мир!\n";
	std::cout<<"4  Здравствуй весь мир!\n";
	cin>> a1;
	cout << a1 <<endl;
	system("pause");  //выв: "для продолжения ......."
	return 0;
}
