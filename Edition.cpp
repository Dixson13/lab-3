using namespace std;                                                //пространство стандартных имЄн.

#include"Edition.h"                                                 //класс с методами и переменными, который мы создали дл€ работы с ним.

Edition::Edition()                                                  //конструктор без параметров.
{
    setTitle("none");
    setYear(0);
}
Edition::Edition(string Title_of_Editoin, int Year_of_Edition)      //конструктор с параметрами.
{
    setTitle(Title_of_Editoin);
    setYear(Year_of_Edition);
}
void Edition::setTitle(string Title_of_Editoin)                     //реализаци€ метода setTitle.
{
    this->Title = Title_of_Editoin;
}
void Edition::setYear(int Year_of_Edition)                          //реализаци€ метода setYear.
{
    if(Year_of_Edition>=0)
        this->Year = Year_of_Edition;
    else
        this->Year = 0;
}
string Edition::getTitle() const                                    //реализаци€ метода getTitle.
{
    return Title;
}
int Edition::getYear() const                                        //реализаци€ метода getYear.
{
    return Year;
}
Edition::Edition(const Edition &pp)                                 //конструктор копировани€.
{
    this->Title = pp.Title;
    this->Year = pp.Year;
}
Edition::~Edition()                                                 //деструктор без реализации (она не требуетс€, т.к. не выдел€етс€ динамическа€ пам€ть).
{

}
