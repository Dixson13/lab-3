#ifndef MAGAZINE_H_INCLUDED                     //��������� �������������: ������������ �������� ���������� ��� ��������������� ������������� ���������.
#define MAGAZINE_H_INCLUDED                     //��������� �������������: ����� ���������������� (������) ��� ������������� ���������.

using namespace std;                            //������������ ����������� ���.

#include<iostream>                              //������������ ���� � ��������, ��������� � ����������� ��� ����������� �����-������ � ����� ���������������� C++.
#include<string>                                //����� � �������� � ����������� ��� ����������� ������ �� �������� � ����� ���������������� C++.
#include"Edition.h"                             //����� � �������� � �����������, ������� �� ������� ��� ������ � ���.

class Magazine : public Edition                 //���������� ������ Magazine, ����������� ����� Edition.
{
private:                                        //����������� ������� private: ������ ������ ������ ������ (�.�. ��������-������ ������� ������) � ������� (friend) ������� ������ - ��� ��������, ��� � �������.
    int Number;                                 //���������� ���� ������.
public:                                         //����������� ������� public: ������ ������ ����, ��� ����� ����������� ������� ������.
    Magazine();                                 //���������� ������������ ��� ����������.
    Magazine(string Title_of_Editoin, int Year_of_Edition, int Journal_Number);     //���������� ������������ � �����������.
    void setNumber(int Journal_Number);         //���������� ������ setNumber.
    int getNumber() const;                      //���������� ������ getNumber.
    void print() const override;                //���������� ���������������� ������ print
    Magazine(const Magazine &pp);               //���������� ������������ �����������.
    Magazine operator = (const Magazine &pp);   //���������� ���������� ��������� ������������ (=).
    ~Magazine();                                //���������� �����������.
};                                              //������������ override: ���������, ��� ����� ������ ������� �������������� ����� ������������� ������.

#endif // MAGAZINE_H_INCLUDED                   //��������� �������������: ����� ����� �������� ����������.
