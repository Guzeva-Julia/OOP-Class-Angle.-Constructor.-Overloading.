/*Copyright (C) 2022 Huzieva Iyliia*/
#include <iostream>
#include <math.h>

/*� ��� ���������, ��� ���������� � ������� ��������, ����'������
������ ���� ��������� ������� ������:
� ����� ����������� Init();
� ����� �������� �� ��������� Read();
� ����� �������� �� ����� Display();
� ������������ � ����� toString().
6. �������� ���� Angle ��� ������ � ������ �� ������, �� ���������
��������� �������� � ��������. ����'������ ������ ���� ���������:
�������� � ������, ���������� �� �������� 0-360, ��������� � ���������
���� �� ������ ��������, ��������� ������, ��������� ����.
*/

class Angle {
	
public:
	int degrees; //�������� �������
	double minutes;  //�������� ������
	//double kyt = degrees + minutes; 
	/*��������� ������� ������� � ���� ���� �������� ��� �������� ��������� �������� ���� � �������,
									�� �������� ������ �������� ������. ������� ����� ������� �� 60. */
	Angle Init(int d, float m);
	Angle Read(int d, float m);
	void Display();
	char toString();
private:
	
	float Radian();
	float constrainAngle360();
	float increaseAngle();
	float reductionAngle();
	float Sinus();
	float comparsionAngle();
	
};