#include <iostream>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian");
    using namespace std;
    while (true) {


        cout << "Введи число:" << endl;
        unsigned long long numbers;
        cin >> numbers;

        cout << "введи степень" << endl;
        unsigned long long degree;
        cin >> degree;

        if (numbers and degree == 0) {
            cout << "Неопределенность" << endl;
        }
        else if (numbers == 1) {
            cout << "Будет всегда 1!" << endl;
        }
        else if (degree == 0) {
            cout << "Будет всегда 1" << endl;
        }
        //else if (degree < 0) {
        //    long double a = 1 / numbers;           В РАЗРАБОТКЕ!!!!!!!
        //    long double result = a 
        //}
        else {
            ;
            for (int i = 1; i <= degree; i++) {
                unsigned long long result = pow(numbers, i);
                std::cout << result << " это " << i << " степень" << std::endl;
            }
        }

    }
    }