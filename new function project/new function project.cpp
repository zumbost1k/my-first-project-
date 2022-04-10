//Индивидуальное задание:
//Пользователь вводит массив из целых чисел.
//Найти:
//Максимальный простой элемент массива.
//Наибольший общий делитель первого и последнего элементов массива.
//Количество делителей первого двухзначного элемента массива.
//При разработке программы использовать функции.


#include <iostream>
using namespace std;
void vvod()
{
	cout << "введите размерность массива" << endl;
}
int prost(int a)
{
	int delitel = 0;
	for (int i = 1;i <= a;i++)
	{
		if (a % i == 0) { delitel++; }
	} if (delitel == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}


}
int NOD(int a, int b)
{
	int nod = 0;
	for (nod = a; nod > 0; nod--)
	{
		if (a % nod == 0 && b % nod == 0)
		{
			break;
		}
	}
	return nod;
}

int colvodel(int a)
{
	int kolvo = 0;
	for (int i = 1;i < a;i++)
	{
		if (a%i == 0)
		{
			kolvo++;

		}


	}
	return kolvo + 1;
}









int main()
{
	setlocale(LC_ALL, "RUS");
	int n, j;
	int massiv[1000];
	vvod();
	cin >> n;
	for (j = 0;j < n;j++)
	{
		cout << "введите целое число в массив:" << endl;
		cin >> massiv[j];

	}
	int  max = -99;
	for (j = 0;j < n;j++)
	{
		if (prost(massiv[j]) == 1 && massiv[j] > max)
		{
			max = massiv[j];
		}

	}
	cout << "Максимальный простой элемент массива: " << max << endl;

	cout << "Наибольший общий делитель первого и последнего элементов массива:" << NOD(massiv[0], massiv[n - 1]) << endl;

	int perv = 0;
	for (j = 0;j < n;j++)
	{
		if (massiv[j] > 9 && massiv[j] < 100)
		{
			perv = massiv[j];
			break;
		}
	}
	cout << "Количество делителей первого двухзначного элемента массива: " << colvodel(perv) << endl;






}