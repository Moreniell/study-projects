#include "stdafx.h"
#include "Utils.h"
#include "Application.h"

Application::Application(): pObj1(nullptr), pObj2(nullptr)
{
} // Application::Application


Application::~Application()
{
	if (pObj1 != nullptr) delete pObj1;
	if (pObj2 != nullptr) delete pObj2;
} // Application::~Application


// ������� ����� ���������� - ��������� ������ ������������  
void Application::run()
{
	UINT cmd;                // ������� ����
	bool flagExit = false;   // ���� ������ �� ������������ �����
	char *szMenu = "\t*** � � � � ***\n"
			"1. �������. ��������. �����������. �����������\n"
			"2. ������������. ��������. �����������. �����������\n"
			"3. ������������ �������� ������������ ���������� ������ IsIntersect()\n"
			"0. �����\n"
			"   ��� ����� (0, ..., 2)? ";

	while (true) {
		Clear();
	
		cmd = getUINT(szMenu, 0, 3);

		switch (cmd) {
		case 1:
			testQuadrat();
			break;
		case 2:
			testPentagon();
			break;
		case 3:
			testIsIntersect();
			break;
		case 0:
			flagExit = true;
			break;
		} // switch
		if (flagExit) break;
		GotoXY(0, 24);
		system("pause");
	} // while

	// ���������� ����������� ��� ����
	// ������ 80 � 25, ����� ������� �� ������ ����
	SetWindow(80, 25, 0x07);
	Clear();
	WriteXY(34, 12, "����� ������");
	GotoXY(0, 24);
} // Application::run


void Application::testQuadrat()
{
	WriteXY(5, 10, "������������ ������ Quadrat");

	Point pVertex[] = { { 1., 2. },{ 1., 5. },{ 4., 5. },{ 4., 2. } };
	
	pObj1 = new Square(pVertex);

	WriteXY(5, 12, "�������:");  
	GotoXY(5, 13); cout << *pObj1;

	pObj1->Move(10., -10.);
	WriteXY(5, 15, "����������� �� 10., -10:"); 
	GotoXY(5, 16);  cout << *pObj1;

	Point pVertex2[] = { { 2., 3. },{ 2., 6. },{ 5., 6. },{ 5., 3. } };
} // Application::testQuadrat


void Application::testPentagon()
{
	WriteXY(5, 10, "������������ ������ Pentagon");
	Point pVertex[] = { { 1., 2. },{ 1., 5. },{ 4., 5. },{ 4., 2. }, {2.5, -2.} };
	
	pObj2 = new Pentagon(pVertex);

	WriteXY(5, 12, "������������:");
	GotoXY(5, 13); cout << *pObj2;

	pObj2->Move(10., -10.);
	WriteXY(5, 15, "����������� �� 10., -10:");
	GotoXY(5, 16);  cout << *pObj2;

} // Application::testPentagon

void Application::testIsIntersect()
{
	
		WriteXY(5, 10, "������������ IsIntersect �� �����������! (��������� ������������)");
		return;

		Point pVertex[] = { { 1., 2. },{ 1., 5. },{ 4., 5. },{ 4., 2. } };

		pObj1 = new Square(pVertex);

		Point pVertex1[] = { { 1., 2. },{ 1., 5. },{ 4., 5. },{ 4., 2. },{ 2.5, -2. } };

		pObj2 = new Pentagon(pVertex1);
		pObj2->Move(1., -1.);

		cout << "\npObj1<Square> � pObj2<Pentagon> ������������ ?: " /*boolalpha*/; // << Shape::IsIntersect(pObj1, pObj2);
}


