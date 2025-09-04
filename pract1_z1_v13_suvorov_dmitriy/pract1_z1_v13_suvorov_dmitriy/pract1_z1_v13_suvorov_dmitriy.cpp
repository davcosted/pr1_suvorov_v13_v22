#include <iostream>

int main()
{   //v13
    setlocale(LC_ALL, "russian");
    //int n, i, j = 0, max = 0;
    //std::cout << "Введите число\n";
    //std::cin >> n;
    //for (i = n; i!= 0; j++) 
    //{
    //    int b = i % 10;
    //    i = i / 10;
    //        if (max < b) 
    //        {
    //            max = b;
    //        }
    //}
    //std::cout << "Максимальная цифра в этом числе: ";
    //std::cout << max;
    
    //v21
    int n;
    std::cout << "Введите число\n";
    std::cin >> n;
    if (n % 2 == 0) {
        std::cout << "Число чётное";
    }
    else {
        std::cout << "Число нечётное";
    }
}

