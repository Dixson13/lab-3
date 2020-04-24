using namespace std;                                //������������ ����������� ���.

#include"Newspaper.h"                               //������ � �������� � �����������, ������� �� ������� ��� ������ � ����.
#include"Edition.h"

Newspaper::Newspaper() : Edition("none",0)          //������������ ����������� ��� ����������.
{
    setFormat("none");
    setColor("none");
}
Newspaper::Newspaper(string Title_of_Editoin, int Year_of_Edition, string Format_Newspaper, string Color_Newspaper) : Edition(Title_of_Editoin,Year_of_Edition)   //������������ ����������� � �����������.
{
    setFormat(Format_Newspaper);
    setColor(Color_Newspaper);
}
void Newspaper::setFormat(string Format_Newspaper)  //���������� ������ setFormat.
{
    this->Format = Format_Newspaper;
}
void Newspaper::setColor(string Color_Newspaper)    //���������� ������ setColor.
{
    this->Color = Color_Newspaper;
}
string Newspaper::getFormat() const                 //���������� ������ getFormat.
{
    return Format;
}
string Newspaper::getColor() const                  //���������� ������ getColor.
{
    return Color;
}
void Newspaper::print() const                       //���������� ���������������� ������ print.
{
    cout<<"Title: "<<Title<<"."<<endl;
    cout<<"Year: "<<Year<<"."<<endl;
    cout<<"Format: "<<Format<<"."<<endl;
    cout<<"Color: "<<Color<<"."<<endl;
}
Newspaper::Newspaper(const Newspaper &pp)           //����������� �����������.
{
    this->Title = pp.Title;
    this->Year = pp.Year;
    this->Format = pp.Format;
    this->Color = pp.Color;
}
Newspaper Newspaper::operator = (const Newspaper &pp)       //���������� ��������� ������������ (������ Book - ��� ������������� ��������, ������ Book - ��������� �� ��, ��� ������ �������� ����������� � ������ Book, �������� �����������, ����� ������ ���� �������� ��������� ������ ����).
    {
        if(&pp == this)
            return *this;
        return Newspaper(this->Title = pp.Title,this->Year = pp.Year,this->Format = pp.Format,this->Color = pp.Color);
    }
Newspaper::~Newspaper()                             //���������� ��� ���������� (��� �� ���������, �.�. �� ���������� ������������ ������).
{

}
