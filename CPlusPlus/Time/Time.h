#pragma once

class Date
{
	WORD hour;
	WORD minute;
	WORD second;
	
	// ������:
	// ����������
	WORD TimeToMin();
	Date MinToTime(WORD JDN);
	
	// ����������
	bool IsValidDate(WORD hour, WORD minute, WORD second);
	
	// ���������
	int NPK(int numb,int mult);
public:
	// ������������ � ����������
	Date(WORD hh = 0, WORD mm = 0, WORD ss = 0);
	Date(const Date &date);
	~Date();

	// ������:
	// ��������������
	Date add(WORD days); // ��������
	Date sub(WORD days); // ���������
	Date diff(Date x);  // ������� ����� ��������
	
	// ����������
	bool equal(Date x);        // �����?
	bool greate(Date x);       // ������?
	bool less(Date x);         // ������?
	
	// ������� � �������
	WORD getHour();
	WORD getMinute();
	WORD getSecond();
	void setHour(WORD hour);
	void setMinute(WORD minute);
	void setSecond(WORD second);
	void setTime(WORD hour, WORD minute, WORD second);
	void coutTime();
	
	// �������������
	void Init();
	void Init(a, b);
};

