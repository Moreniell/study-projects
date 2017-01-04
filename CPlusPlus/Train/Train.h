#pragma once
#include "Time.h"

/**
1. ���������� ����� � ������ TRAIN, ���������� ��������� ����:
	� �������� ������ ����������;
	� ����� ������;
	� ����� �����������.
���������� ������ ������� � ���� ����� � ������������� �������� ���������� � ������� ��� �������� ���� TRAIN.
2. �������� ���������, ����������� ��������� ��������:
	� ���� � ���������� ������ � ������, ��������� �� ������ �������� ���� TRAIN;
	  ������ ������ ���� ��������� � ���������� ������� �� ��������� ������� ����������;
	� ����� �� ����� ���������� � �������, �������������� ����� ���������� � ���������� �������;
	� ���� ����� ������� ���, ������ �� ������� ��������������� ���������.
**/

class Train
{
	string serial;
	string nameStation;
	Time time_a;
public:
	Train();
	Train(string ser, string name, Time time);
	Train(const Train & obj);
	~Train();

	// �������
	void setSerial(string s);
	void setNameStation(string ns);
	void setH(int h);
	void setM(int m);

	// �������
	string getSerial()		const { return serial; }
	string getNameStation() const { return nameStation; }
	int getH()				const { return time_a.getH(); }
	int getM()				const { return time_a.getM(); }

	// ������
	void Input(UINT n);
	void Show(UINT n);
	void Randomize();

	int Compare(Time ti) { return time_a.Compare(ti); }
};

