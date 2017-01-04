/*	Main.cpp  ������� ����

=====================================================================================
								����������� �������:
=====================================================================================
����������� ����� Complex ��� ������ � ������������ �������.
����������� ����� �������������� ����� �������������� ����� (a, b), ���
a � �������������� �����, b � ������ �����.
  ����������� ��������:
	- �������� [add]
	- ��������� [sub]
	- ��������� [mul]
	- ������� [div]
	- ��������� [equ]
	- ���������� [conj]
*/

#include "stdafx.h"
#include "Utils.h"
#include "Complex.h"

HANDLE h;


int main(int argc, char *argv[])
{
	init();
	
	execute();
    cout<<"������������ ������ ��������\n";
    cout<<"(2+4j)+(2-7j)= ";
    Rational A,B,C;
    A=Rational(2,4);
    B=Rational(2,-7);
    C=A+B;
    C.Display();
    cout<<"\n������������ ������ ���������\n";
    cout<<"(2+4j)-(2-7j)= ";
    C=A-B;
    C.Display();
    cout<<"\n������������ ������ ���������\n";
    cout<<"(2+4j)*(2-7j)= ";
    C=A*B;
    C.Display();
    Rational R,T,Y;
    R=Rational(-2,3);
    T=Rational(7,1);
    cout<<"\n������������ ������ �������\n";
    cout<<"(-2+3j)/(7+1j)= ";
    Y=R/T;
    Y.Display();
    cout<<"\n������������ ������ ������������ �����\n";
    cout<<"-2+3j= ";
    Y=R.conj();
    Y.Display();
    cout<<"\n������������ ������ ���������\n";
    cout<<"(-2+3j)==(7+1j)= ";
    if(R==T) 
        cout<<"���������� ����� �����\n";
    else cout<<"���������� ����� �� �����\n";
    system("pause");
    system("cls");
    cout<<"\n   -------------------------------------------------------\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
    choise();
	
	return 0;
} // main



