using namespace std;                        //������������ ����������� ���.

#include"Book.h"                            //������ � �������� � �����������, ������� �� ������� ��� ������ � ����.
#include"Edition.h"

Book::Book() : Edition("none",0)            //������������ ����������� ��� ����������.
{
    setAuthor("none");
    setPages(0);
}
Book::Book(string Title_of_Editoin, int Year_of_Edition, string Author_Name, int Page_of_Book) : Edition(Title_of_Editoin,Year_of_Edition)    //������������ ����������� � �����������.
{
    setAuthor(Author_Name);
    setPages(Page_of_Book);
}
void Book::setAuthor(string Author_Name)    //���������� ������ setAuthor.
{
    this->Author = Author_Name;
}
void Book::setPages(int Page_of_Book)       //���������� ������ setPages.
{
    if(Page_of_Book>=0)
        this->Pages = Page_of_Book;
    else
        this->Pages = 0;
}
string Book::getAuthor() const              //���������� ������ getAuthor.
{
    return Author;
}
int Book::getPages() const                  //���������� ������ getPages.
{
    return Pages;
}
void Book::print() const                    //���������� ���������������� ������ print.
{
    cout<<"Title: "<<Title<<"."<<endl;
    cout<<"Year: "<<Year<<"."<<endl;
    cout<<"Author: "<<Author<<"."<<endl;
    cout<<"Pages: "<<Pages<<"."<<endl;
}
Book::Book(const Book &pp)                  //����������� �����������.
{
    this->Title = pp.Title;
    this->Year = pp.Year;
    this->Author = pp.Author;
    this->Pages = pp.Pages;
}
Book Book::operator = (const Book &pp)      //���������� ��������� ������������ (������ Book - ��� ������������� ��������, ������ Book - ��������� �� ��, ��� ������ �������� ����������� � ������ Book, �������� �����������, ����� ������ ���� �������� ��������� ������ ����).
    {
        if(&pp == this)
            return *this;
        return Book(this->Title = pp.Title,this->Year = pp.Year,this->Author = pp.Author,this->Pages = pp.Pages);
    }
Book::~Book()                               //���������� ��� ���������� (��� �� ���������, �.�. �� ���������� ������������ ������).
{

}
