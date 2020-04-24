using namespace std;                            //������������ ����������� ���.

#include"Magazine.h"                            //������ � �������� � �����������, ������� �� ������� ��� ������ � ����.
#include"Edition.h"

Magazine::Magazine() : Edition("none",0)        //������������ ����������� ��� ����������.
{
    setNumber(0);
}
Magazine::Magazine(string Title_of_Editoin, int Year_of_Edition, int Journal_Number) : Edition(Title_of_Editoin,Year_of_Edition)  //������������ ����������� � �����������.
{
    setNumber(Journal_Number);
}
void Magazine::setNumber(int Journal_Number)    //���������� ������ setNumber.
{
    if(Journal_Number>=0)
        this->Number = Journal_Number;
    else
        this->Number = 0;
}
int Magazine::getNumber() const                 //���������� ������ getNumber.
{
    return Number;
}
void Magazine::print() const                    //���������� ���������������� ������ print.
{
    cout<<"Title: "<<Title<<"."<<endl;
    cout<<"Year: "<<Year<<"."<<endl;
    cout<<"Number: "<<Number<<"."<<endl;
}
Magazine::Magazine(const Magazine &pp)          //����������� �����������.
{
    this->Title = pp.Title;
    this->Year = pp.Year;
    this->Number = pp.Number;
}
Magazine Magazine::operator = (const Magazine &pp)      //���������� ��������� ������������ (������ Book - ��� ������������� ��������, ������ Book - ��������� �� ��, ��� ������ �������� ����������� � ������ Book, �������� �����������, ����� ������ ���� �������� ��������� ������ ����).
    {
        if(&pp == this)
            return *this;
        return Magazine(this->Title = pp.Title,this->Year = pp.Year,this->Number = pp.Number);
    }
Magazine::~Magazine()                                   //���������� ��� ���������� (��� �� ���������, �.�. �� ���������� ������������ ������).
{

}
