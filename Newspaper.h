#ifndef NEWSPAPER_H_INCLUDED                    //��������� �������������: ������������ �������� ���������� ��� ��������������� ������������� ���������.
#define NEWSPAPER_H_INCLUDED                    //��������� �������������: ����� ���������������� (������) ��� ������������� ���������.

using namespace std;                            //������������ ����������� ���.

#include<iostream>                              //������������ ���� � ��������, ��������� � ����������� ��� ����������� �����-������ � ����� ���������������� C++.
#include<string>                                //����� � �������� � ����������� ��� ����������� ������ �� �������� � ����� ���������������� C++.
#include"Edition.h"                             //����� � �������� � �����������, ������� �� ������� ��� ������ � ���.

class Newspaper : public Edition                //���������� ������ Newspaper, ����������� ����� Edition.
{
private:                                        //����������� ������� private: ������ ������ ������ ������ (�.�. ��������-������ ������� ������) � ������� (friend) ������� ������ - ��� ��������, ��� � �������.
    string Format;                              //���������� ����� �����.
    string Color;
public:                                         //����������� ������� public: ������ ������ ����, ��� ����� ����������� ������� ������.
    Newspaper();                                //���������� ������������ ��� ����������.
    Newspaper(string Title_of_Editoin, int Year_of_Edition, string Format_Newspaper, string Color_Newspaper);       //���������� ������������ � �����������.
    void setFormat(string Format_Newspaper);    //���������� ������ setFormat.
    void setColor(string Color_Newspaper);      //���������� ������ setColor.
    string getFormat() const;                   //���������� ������ getFormat.
    string getColor() const;                    //���������� ������ getColor.
    void print() const override;                //���������� ���������������� ������ print
    Newspaper(const Newspaper &pp);             //���������� ������������ �����������.
    Newspaper operator = (const Newspaper &pp); //���������� ���������� ��������� ������������ (=).
    ~Newspaper();                               //���������� �����������.
};                                              //������������ override: ���������, ��� ����� ������ ������� �������������� ����� ������������� ������.

#endif // NEWSPAPER_H_INCLUDED                  //��������� �������������: ����� ����� �������� ����������.
