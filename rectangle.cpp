#include <iostream>
#include <cmath>

using namespace std;
// подсчет периметра
int perimeter(int length, int width){
	return (length*2 + width*2);
}
// расчет площади
int square(int length, int width){
	return length*width;
}
// расчет длинны диагонали
double diagonal_length(int length, int width){
	return sqrt(length*length + width * width);
}
bool checkValue(int value){
	if (value > 0 ){
		return 1;
	}
	else {
		return 0;
	}
}
int main(){
	cout << "Необходимо выбрать какой параметр прямоугольника вы хотети узнать: \n1)Периметр\n2)Площадь\n3)Длина диагонали\n";
	int a = 0;
	int width = 0;
	int length = 0;
	// Ввод и проверка на число
	cin >> a;
	if (a != 1 && a != 2 && a != 3){
		cout << "Wrong value\n";
		return 0;
	}
	cout << "Введите длинну вашего прямоугольника: ";
	cin >> length;
	if (checkValue(length) == 0){
		cout << "Wrong value\n";
		return 0;
	}
	cout << "Введите ширину вашего прямоугольника: ";
	cin >> width;
	if (checkValue(width) == 0){
		cout << "Wrong value\n";
		return 0;
	}
	// Switch с выбором действия
	switch(a){
		case 1:
			cout << "Периметр: "<< perimeter(length, width) << endl;
			break;
		case 2:
			cout << "Площадь: "<< square(length, width) << endl;
			break;
		case 3:
			cout << "Длинна диагонали: " << diagonal_length(length, width) << endl; 
			break;
	}
	return 0;
}
