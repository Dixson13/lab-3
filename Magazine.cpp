using namespace std;                            //пространство стандартных имён.

#include"Magazine.h"                            //классы с методами и переменными, которые мы создали для работы с ними.
#include"Edition.h"

Magazine::Magazine() : Edition("none",0)        //делегирующий конструктор без параметров.
{
    setNumber(0);
}
Magazine::Magazine(string Title_of_Editoin, int Year_of_Edition, int Journal_Number) : Edition(Title_of_Editoin,Year_of_Edition)  //делегирующий конструктор с параметрами.
{
    setNumber(Journal_Number);
}
void Magazine::setNumber(int Journal_Number)    //реализация метода setNumber.
{
    if(Journal_Number>=0)
        this->Number = Journal_Number;
    else
        this->Number = 0;
}
int Magazine::getNumber() const                 //реализация метода getNumber.
{
    return Number;
}
void Magazine::print() const                    //реализация переопределённого метода print.
{
    cout<<"Title: "<<Title<<"."<<endl;
    cout<<"Year: "<<Year<<"."<<endl;
    cout<<"Number: "<<Number<<"."<<endl;
}
Magazine::Magazine(const Magazine &pp)          //конструктор копирования.
{
    this->Title = pp.Title;
    this->Year = pp.Year;
    this->Number = pp.Number;
}
Magazine Magazine::operator = (const Magazine &pp)      //перегрузка оператора присваивания (первый Book - тип возвращаемого значения, второй Book - указывает на то, что данный оператор принадлежит к классу Book, оператор константный, чтобы нельзя было изменить параметры внутри него).
    {
        if(&pp == this)
            return *this;
        return Magazine(this->Title = pp.Title,this->Year = pp.Year,this->Number = pp.Number);
    }
Magazine::~Magazine()                                   //деструктор без реализации (она не требуется, т.к. не выделяется динамическая память).
{

}
