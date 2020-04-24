#ifndef NEWSPAPER_H_INCLUDED                    //директива препроцессора: осуществл€ет условную компил€цию при неопределЄнности символической константы.
#define NEWSPAPER_H_INCLUDED                    //директива препроцессора: задаЄт макроопределение (макрос) или символическую константу.

using namespace std;                            //пространство стандартных имЄн.

#include<iostream>                              //заголовочный файл с классами, функци€ми и переменными дл€ организации ввода-вывода в €зыке программировани€ C++.
#include<string>                                //класс с методами и переменными дл€ организации работы со строками в €зыке программировани€ C++.
#include"Edition.h"                             //класс с методами и переменными, который мы создали дл€ работы с ним.

class Newspaper : public Edition                //объ€влени€ класса Newspaper, наследуемый класс Edition.
{
private:                                        //модификатор доступа private: доступ открыт самому классу (т.е. функци€м-членам данного класса) и друзь€м (friend) данного класса - как функци€м, так и классам.
    string Format;                              //объ€вление полей класс.
    string Color;
public:                                         //модификатор доступа public: доступ открыт всем, кто видит определение данного класса.
    Newspaper();                                //объ€вление конструктора без параметров.
    Newspaper(string Title_of_Editoin, int Year_of_Edition, string Format_Newspaper, string Color_Newspaper);       //объ€вление конструктора с параметрами.
    void setFormat(string Format_Newspaper);    //объ€вление метода setFormat.
    void setColor(string Color_Newspaper);      //объ€вление метода setColor.
    string getFormat() const;                   //объ€вление метода getFormat.
    string getColor() const;                    //объ€вление метода getColor.
    void print() const override;                //объ€вление переопределЄнного метода print
    Newspaper(const Newspaper &pp);             //объ€вление конструктора копировани€.
    Newspaper operator = (const Newspaper &pp); //объ€вление перегрузки оператора присваивани€ (=).
    ~Newspaper();                               //объ€вление деструктора.
};                                              //—пецификатор override: указывает, что метод класса потомка переопредел€ет метод родительского класса.

#endif // NEWSPAPER_H_INCLUDED                  //директива препроцессора: конец ветки условной компил€ции.
