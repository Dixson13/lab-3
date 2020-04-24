#ifndef EDITION_H_INCLUDED                                      //��������� �������������: ������������ �������� ���������� ��� ��������������� ������������� ���������.
#define EDITION_H_INCLUDED                                      //��������� �������������: ����� ���������������� (������) ��� ������������� ���������.

using namespace std;                                            //������������ ����������� ���.

#include<iostream>                                              //������������ ���� � ��������, ��������� � ����������� ��� ����������� �����-������ � ����� ���������������� C++.
#include<string>                                                //����� � �������� � ����������� ��� ����������� ������ �� �������� � ����� ���������������� C++.

class Edition                                                   //���������� ������ Edition.
{
protected:                                                      //����������� ������� protected: ������ ������ �������, ����������� �� �������.
    string Title;                                               //���������� ����� �����.
    int Year;
    Edition(string Title_of_Editoin, int Year_of_Edition);      //���������� ������������ � �����������.
public:                                                         //����������� ������� public: ������ ������ ����, ��� ����� ����������� ������� ������.
    Edition();                                                  //���������� ������������ ��� ����������.
    void setTitle(string Title_of_Editoin);                     //���������� ������ setTitle.
    void setYear(int Year_of_Edition);                          //���������� ������ setYear.
    string getTitle() const;                                    //���������� ������ getTitle.
    int getYear() const;                                        //���������� ������ getYear.
    virtual void print() const = 0;                             //����� ����������� ������� (�����) print.
    Edition(const Edition &pp);                                 //���������� ������������ �����������.
    ~Edition();                                                 //���������� �����������.
};

#endif // EDITION_H_INCLUDED                                    //��������� �������������: ����� ����� �������� ����������.
