#include <iostream>

void MyFunc(int a, ...) 							//Так объявляется функция с заранее неизвестным числом параметров
{
    int *P=&a; 									//Взятие адреса у первого параметра
  
    while (*P) 									//Пока встречаются параметры и параметр не равен 0
    {
        std::cout << *P << " ";							//Вытаскиваем значение с адреса по которому живет параметр 
        P++; 										//Адресная арифметика. Смена текущего адреса на следующий
    }
 
}
 
int main()
{
    MyFunc(100,200,300,400,0); 					//В функцию передается 4 параметра и пятый как идентификатор того, что параметры кончились
}