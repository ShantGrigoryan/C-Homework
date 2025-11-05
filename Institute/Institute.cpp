// Institute.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int factorial(int x) {
    if ( == 0) {
        return 1;
    }
    else if (x == 1) {
        return x;
    }
    else{
        return x * factorial(x - 1); //Recursion
    }
}
int fibonachi(int x) {
    int last = x;
    double first = (1 + sqrt(5)) / 2;
    double second = (1 - sqrt(5)) / 2;

    int index = (pow(first,x) - pow(second,x)) / sqrt(5);

    return index;
}

int fibonacci_2(const int index) {
    vector<int> fibonacci_arr(index+1);
    fibonacci_arr[0] = 0;
    fibonacci_arr[1] = 1;
    for (int i = 2; i <= index; i++) {
        fibonacci_arr[i] = fibonacci_arr[i - 2] + fibonacci_arr[i - 1];
    }
    return fibonacci_arr[index];
}
int main()
{
    while(true){
        cout << "Input the task >> ";
        string x;
        cin >> x;
        if (x == "fibonacci") {
            cout << "Input the digit(integer) >> ";
            int digit;
            cin >> digit;
            int result= fibonachi(digit);
            int result2= fibonacci_2(digit);
            printf("Result > %d | %d", result, result2);
            break;
        }
        else if (x == "factorial") {
            cout << "Input the digit(integer) >> ";
            int digit;
            cin >> digit;
            int result = factorial(digit);
            printf("Result is > %d", result);
            break;
        }
        else {
            cout << "Task name incorrect , please try again \n";
        }
    }
}




// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
