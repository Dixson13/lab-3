#ifndef EDITION_H_INCLUDED                                      //директива препроцессора: осуществл€ет условную компил€цию при неопределЄнности символической константы.
#define EDITION_H_INCLUDED                                      //директива препроцессора: задаЄт макроопределение (макрос) или символическую константу.

using namespace std;                                            //пространство стандартных имЄн.

#include<iostream>                                              //заголовочный файл с классами, функци€ми и переменными дл€ организации ввода-вывода в €зыке программировани€ C++.
#include<string>                                                //класс с методами и переменными дл€ организации работы со строками в €зыке программировани€ C++.

class Edition                                                   //объ€влени€ класса Edition.
{
protected:                                                      //модификатор доступа protected: доступ открыт классам, производным от данного.
    string Title;                                               //объ€вление полей класс.
    int Year;
    Edition(string Title_of_Editoin, int Year_of_Edition);      //объ€вление конструктора с параметрами.
public:                                                         //модификатор доступа public: доступ открыт всем, кто видит определение данного класса.
    Edition();                                                  //объ€вление конструктора без параметров.
    void setTitle(string Title_of_Editoin);                     //объ€вление метода setTitle.
    void setYear(int Year_of_Edition);                          //объ€вление метода setYear.
    string getTitle() const;                                    //объ€вление метода getTitle.
    int getYear() const;                                        //объ€вление метода getYear.
    virtual void print() const = 0;                             //чисто виртуальна€ функци€ (метод) print.
    Edition(const Edition &pp);                                 //объ€вление конструктора копировани€.
    ~Edition();                                                 //объ€вление деструктора.
};

#endif // EDITION_H_INCLUDED                                    //директива препроцессора: конец ветки условной компил€ции.
