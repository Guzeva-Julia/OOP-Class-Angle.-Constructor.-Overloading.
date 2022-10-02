#include"OOP_2.h"
#include <iostream>
#include <math.h>
#include<string>
#include<cmath>
#define PI 3.141

using namespace std;

Angle Angle::Init(int d, float m) //²í³ö³àë³çàö³ÿ çàäàíèõ çíà÷åíü.
{
	Angle tmp;
	tmp.degrees = d; //Ãðàäóñè.
	tmp.minutes = m; //Õâèëèíè.
	
	return tmp;
}

Angle Angle::Read(int d, float m) //Ìåòîä ââåäåííÿ ³ç êëàâ³àòóðè.
{
	Angle tmp;
	cout << "degrees" << endl;
	cin >> tmp.degrees;
	cout << "minutes" << endl;
	cin >> tmp.minutes;
	return tmp;
}




void Angle::Display() //Âèâ³ä çíà÷åíü  õâèëèí òà ãðàäóñ³â.
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

float Angle::Radian() //Ïåðåâåäåííÿ ó ðàä³àíè.
{

	return (degrees + (minutes / 60)) * (PI / 180);
	
}

float Angle::constrainAngle360() //Ïðèâåäåííÿ äî ä³àïàçîíó 0 - 360
{
	return fmod(minutes + degrees, 360.0);
	if (minutes + degrees < 0.0)
		degrees += 360.0;
	
}

float Angle::increaseAngle()  //Çá³ëüøåííÿ êóòà íà 50 ãðàäóñ³â
{
	return minutes +degrees + 50;
	
}

float Angle::reductionAngle() //Çìåíüøåííÿ êóòà íà 50 ãðàäóñ³â.
{
	return minutes + degrees - 50;
	
}

float Angle::Sinus() //Ðîçðàõóíîê ñèíóñà êóòà.
{
	
	return sin(degrees+minutes);
	
}

float Angle::comparsionAngle() //Ïîð³âíÿííÿ êóòà.
{
	
	float Angle_1 = degrees + minutes;
	
		if (Angle_1 == 180)
			cout << "Straight Angle" << endl; //Ðîçâåðíåíèé êóò.
		else if (Angle_1 > 90 && Angle_1 < 180)
			cout << "Obtuse Angle" << endl;  //Òóïèé êóò.
		else if (Angle_1 > 0 && Angle_1 < 90)
			cout << "Acute Angle" << endl; //Ãîñòðèé êóò.
		else if (Angle_1 == 90)
			cout << "Right Angle" << endl; //Ïðÿìèé êóò.
		else
			cout << "Error in comparsion the Angle" << endl; //Ïîìèëêà ó ïîð³âíÿííÿ êóòà.
		return 0;
	
}

char Angle::toString() //Ïåðåòâîðåííÿ â ðÿäîê ðîçðàõîâàíèõ äàííèõ.
{
	cout << "Radian Angle = " << Radian() << endl;
	cout << "Span Angle 0-360 is" << constrainAngle360() << endl;
	cout << "Increase the Angle by 50 degrees = " << increaseAngle() << endl;
	cout << "Reduction the Angle by 50 degrees = " << reductionAngle() << endl;
	cout << "Sinus the Angle = " << Sinus() << endl;

	return 0;
	
	
	
}



