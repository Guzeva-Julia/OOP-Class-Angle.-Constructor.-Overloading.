/*Copyright (C) 2022 Huzieva Iyliia*/
#include <iostream>
#include <math.h>

/*Завдання 2
У всіх завданнях, крім зазначених у завданні операцій, обов'язково
повинні бути реалізовані наступні методи:
• метод ініціалізації Init();
• метод введення із клавіатури Read();
• метод вивідення на екран Display();
• перетворення в рядок toString().
6. Створити клас Angle для роботи з кутами на площині, що задаються
завбільшки градусах і хвилинах. Обов'язково повинні бути реалізовані:
переклад у радіани, приведення до діапазону 0-360, збільшення й зменшення
кута на задану величину, одержання синуса, порівняння кутів.

Завдання 3
У всіх завданях, мовою С++, в класі реалізувати не менше 3 конструкторів. 
Для релізації конструкторів використовуємо проект, створений в лабораторній роботі №2 
*/

class Angle {
	
public:
	int degrees; //Значення градусів
	double minutes;  //Значення хвилин
	/*Розділення значень градусів і кутів було зроблено для зручного підрахунку значення кута в радіанах,
									бо значення хвилин рахується окремо. Хвилини треба поділити на 60. */
	Angle Init(int d, float m);
	Angle Read(int d, float m);
	void Display();
	char toString();
	
	Angle();
	Angle(const Angle& ref_angle);
	Angle(int m_degrees, double m_minutes);
	
	Angle& operator++ ();
	Angle& operator-- ();
	Angle operator+(const Angle& ref_angle);
	
private:
	
	float Radian();
	float constrainAngle360();
	float increaseAngle();
	float reductionAngle();
	float Sinus();
	float comparsionAngle();
	
};
