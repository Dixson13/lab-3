using namespace std;                                //пространство стандартных имён.

#include"Newspaper.h"                               //классы с методами и переменными, которые мы создали для работы с ними.
#include"Edition.h"

Newspaper::Newspaper() : Edition("none",0)          //делегирующий конструктор без параметров.
{
    setFormat("none");
    setColor("none");
}
Newspaper::Newspaper(string Title_of_Editoin, int Year_of_Edition, string Format_Newspaper, string Color_Newspaper) : Edition(Title_of_Editoin,Year_of_Edition)   //делегирующий конструктор с параметрами.
{
    setFormat(Format_Newspaper);
    setColor(Color_Newspaper);
}
void Newspaper::setFormat(string Format_Newspaper)  //реализация метода setFormat.
{
    this->Format = Format_Newspaper;
}
void Newspaper::setColor(string Color_Newspaper)    //реализация метода setColor.
{
    this->Color = Color_Newspaper;
}
string Newspaper::getFormat() const                 //реализация метода getFormat.
{
    return Format;
}
string Newspaper::getColor() const                  //реализация метода getColor.
{
    return Color;
}
void Newspaper::print() const                       //реализация переопределённого метода print.
{
    cout<<"Title: "<<Title<<"."<<endl;
    cout<<"Year: "<<Year<<"."<<endl;
    cout<<"Format: "<<Format<<"."<<endl;
    cout<<"Color: "<<Color<<"."<<endl;
}
Newspaper::Newspaper(const Newspaper &pp)           //конструктор копирования.
{
    this->Title = pp.Title;
    this->Year = pp.Year;
    this->Format = pp.Format;
    this->Color = pp.Color;
}
Newspaper Newspaper::operator = (const Newspaper &pp)       //перегрузка оператора присваивания (первый Book - тип возвращаемого значения, второй Book - указывает на то, что данный оператор принадлежит к классу Book, оператор константный, чтобы нельзя было изменить параметры внутри него).
    {
        if(&pp == this)
            return *this;
        return Newspaper(this->Title = pp.Title,this->Year = pp.Year,this->Format = pp.Format,this->Color = pp.Color);
    }
Newspaper::~Newspaper()                             //деструктор без реализации (она не требуется, т.к. не выделяется динамическая память).
{

}
