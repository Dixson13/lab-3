using namespace std;                                                //������������ ����������� ���.

#include"Edition.h"                                                 //����� � �������� � �����������, ������� �� ������� ��� ������ � ���.

Edition::Edition()                                                  //����������� ��� ����������.
{
    setTitle("none");
    setYear(0);
}
Edition::Edition(string Title_of_Editoin, int Year_of_Edition)      //����������� � �����������.
{
    setTitle(Title_of_Editoin);
    setYear(Year_of_Edition);
}
void Edition::setTitle(string Title_of_Editoin)                     //���������� ������ setTitle.
{
    this->Title = Title_of_Editoin;
}
void Edition::setYear(int Year_of_Edition)                          //���������� ������ setYear.
{
    if(Year_of_Edition>=0)
        this->Year = Year_of_Edition;
    else
        this->Year = 0;
}
string Edition::getTitle() const                                    //���������� ������ getTitle.
{
    return Title;
}
int Edition::getYear() const                                        //���������� ������ getYear.
{
    return Year;
}
Edition::Edition(const Edition &pp)                                 //����������� �����������.
{
    this->Title = pp.Title;
    this->Year = pp.Year;
}
Edition::~Edition()                                                 //���������� ��� ���������� (��� �� ���������, �.�. �� ���������� ������������ ������).
{

}
