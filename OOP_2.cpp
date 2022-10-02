#include"OOP_2.h"
#include <iostream>
#include <math.h>
#include<string>
#include<cmath>
#define PI 3.141

using namespace std;

Angle Angle::Init(int d, float m) //Ініціалізація заданих значень.
{
	Angle tmp;
	tmp.degrees = d; //Градуси.
	tmp.minutes = m; //Хвилини.
	
	return tmp;
}

Angle Angle::Read(int d, float m) //Метод введення із клавіатури.
{
	Angle tmp;
	cout << "degrees" << endl;
	cin >> tmp.degrees;
	cout << "minutes" << endl;
	cin >> tmp.minutes;
	return tmp;
		
}




void Angle::Display() //Вивід значень  хвилин та градусів.
{
	cout << "Minutes the Angle =" << minutes << endl;
	cout << "Degrees the Angle =" << degrees << endl;

	Radian();
	constrainAngle360();
	increaseAngle();
	reductionAngle();
	Sinus();
	comparsionAngle();
	toString();

	}

float Angle::Radian() //Переведення у радіани.
{

	return (degrees + (minutes / 60)) * (PI / 180);
	
}

float Angle::constrainAngle360() //Приведення до діапазону 0 - 360
{
	return fmod(minutes + degrees, 360.0);
	if (minutes + degrees < 0.0)
		degrees += 360.0;
	
}

float Angle::increaseAngle()  //Збільшення кута на 50 градусів
{
	return minutes +degrees + 50;
	
}

float Angle::reductionAngle() //Зменьшення кута на 50 градусів.
{
	return minutes + degrees - 50;
	
}

float Angle::Sinus() //Розрахунок синуса кута.
{
	
	return sin(degrees+minutes);
	
}

float Angle::comparsionAngle() //Порівняння кута.
{
	
	float Angle_1 = degrees + minutes;
	
		if (Angle_1 == 180)
			cout << "Straight Angle" << endl; //Розвернений кут.
		else if (Angle_1 > 90 && Angle_1 < 180)
			cout << "Obtuse Angle" << endl;  //Тупий кут.
		else if (Angle_1 > 0 && Angle_1 < 90)
			cout << "Acute Angle" << endl; //Гострий кут.
		else if (Angle_1 == 90)
			cout << "Right Angle" << endl; //Прямий кут.
		else
			cout << "Error in comparsion the Angle" << endl; //Помилка у порівняння кута.
		return 0;
	
}

char Angle::toString() //Перетворення в рядок розрахованих данних.
{
	cout << "Radian Angle = " << Radian() << endl;
	cout << "Span Angle 0-360 is" << constrainAngle360() << endl;
	cout << "Increase the Angle by 50 degrees = " << increaseAngle() << endl;
	cout << "Reduction the Angle by 50 degrees = " << reductionAngle() << endl;
	cout << "Sinus the Angle = " << Sinus() << endl;

	return 0;
	
	
	
}



