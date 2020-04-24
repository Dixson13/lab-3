using namespace std;                        //пространство стандартных имён.

#include"Book.h"                            //классы с методами и переменными, которые мы создали для работы с ними.
#include"Edition.h"

Book::Book() : Edition("none",0)            //делегирующий конструктор без параметров.
{
    setAuthor("none");
    setPages(0);
}
Book::Book(string Title_of_Editoin, int Year_of_Edition, string Author_Name, int Page_of_Book) : Edition(Title_of_Editoin,Year_of_Edition)    //делегирующий конструктор с параметрами.
{
    setAuthor(Author_Name);
    setPages(Page_of_Book);
}
void Book::setAuthor(string Author_Name)    //реализация метода setAuthor.
{
    this->Author = Author_Name;
}
void Book::setPages(int Page_of_Book)       //реализация метода setPages.
{
    if(Page_of_Book>=0)
        this->Pages = Page_of_Book;
    else
        this->Pages = 0;
}
string Book::getAuthor() const              //реализация метода getAuthor.
{
    return Author;
}
int Book::getPages() const                  //реализация метода getPages.
{
    return Pages;
}
void Book::print() const                    //реализация переопределённого метода print.
{
    cout<<"Title: "<<Title<<"."<<endl;
    cout<<"Year: "<<Year<<"."<<endl;
    cout<<"Author: "<<Author<<"."<<endl;
    cout<<"Pages: "<<Pages<<"."<<endl;
}
Book::Book(const Book &pp)                  //конструктор копирования.
{
    this->Title = pp.Title;
    this->Year = pp.Year;
    this->Author = pp.Author;
    this->Pages = pp.Pages;
}
Book Book::operator = (const Book &pp)      //перегрузка оператора присваивания (первый Book - тип возвращаемого значения, второй Book - указывает на то, что данный оператор принадлежит к классу Book, оператор константный, чтобы нельзя было изменить параметры внутри него).
    {
        if(&pp == this)
            return *this;
        return Book(this->Title = pp.Title,this->Year = pp.Year,this->Author = pp.Author,this->Pages = pp.Pages);
    }
Book::~Book()                               //деструктор без реализации (она не требуется, т.к. не выделяется динамическая память).
{

}
