// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void sum(int x)
{
    int p = 1;
    while (x > 1) {

        p += x % 10;
        x /= 10;
    }
   
    std::cout << "Сумма цифр, введенного натурального числа, равна: = " << p << std::endl;
   
}

void proizv(int x)
{
    int p = 1;
    while (x > 1 ) {

        p *= x % 10;
        x /= 10;
    }
   
    std::cout << "Произведение цифр, введенного натурального числа, равно: = " << p << std::endl;


}

void zadanie2()
{
    int x;    

    std::cout << "Введите натуральное число \n";
    std::cin >> x;
    
    sum(x);
    proizv(x);
}


void zadanie1()
{
    int x;
    int y;
    float srznach;
    std::cout << "Введите значение для первого числа \n";
    std::cin >> x;
    std::cout << "Введите значение для второго числа \n";
    std::cin >> y;

    srznach = (float)(x + y) / 2;
    std::cout << "Среднее значение двух чисел равно: = " << srznach << std::endl;
}


int main()
{ 
    setlocale(LC_ALL,"Russian");
    int z;
    std::cout << "Введите номер задания (1 или 2) \n";
    std::cin >> z;
    if (z == 1)
    {
        zadanie1();
    }
    else if (z == 2)
    {
        zadanie2();
    }
    else
    {
        std::cout << "Неправильный ввод!\n";
       
    }
}
