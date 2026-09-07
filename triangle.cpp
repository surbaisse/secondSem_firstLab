#include <iostream>
#include <cmath>
using namespace std;
// прорка на существование треугольника
bool CheckOfExistence(int s1, int s2, int s3){
	if (s1+s2 < s3 || s1+s3 < s2 || s2+s3 < s1 || s1 < 0 || s2 < 0 || s3 < 0){
		return 0;
	}
	return 1;
}
// подсчет периметра
int Perimeter (int s1, int s2, int s3) {
	return s1 + s2 + s3;
}
// подсчет площади по формуле Герона 
double Square (int a, int b, int c) {
    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
}
// Проверка на равнобедренность
bool IsoscelesCheck (int s1, int s2, int s3){
	if (s1 == s2){
		return 1;
	}
	if (s1 == s3){
        return 1;
    }
    if (s2 == s3){
        return 1;
    }
	return 0;

}
int main(){
	cout << "Необходимо выбрать какой параметр треугольника вы хотети узнать: \n1)Периметр \n";
	cout << "2)Площадь по формуле Герона\n3)Проверка на равнобедренность\n";
	int a = 0;
	cin >> a;	
	int side1 = 1;
    int side2 = 1;
	int side3 = 1;
	// ввод параметров треугольника	
	cout << "Введите положительную длинну первой стороны треугольника: ";
	cin >> side1;
	cout << "Введите положительную длинну второй стороны треугольника: ";
	cin >> side2;
	cout << "Введите положительную длинну третьей стороны треугольника: ";
	cin >> side3;
	
	if (CheckOfExistence(side1, side2, side3) == 0){
		cout << "Wrong value, try again.\n\n";
		return 0;
	}
	// выбор действия
	switch(a){
        case 1:
            cout << "Периметр: "<< Perimeter(side1, side2, side3) << endl;
            break;
        case 2:
            cout << "Площадь по формуле Герона: "<< Square(side1, side2, side3) << endl;
            break;
        case 3:
			if (IsoscelesCheck)
            cout << "Ответ: "<< IsoscelesCheck(side1, side2, side3) << endl;
            break;

    }
    return 0;

}	
