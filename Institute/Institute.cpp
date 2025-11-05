// Institute.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int factorial(int x) {
    if (x == 0) {
        return 1; // if number is '0' return '1'
    }
    else if (x == 1) {
        return x; // if number is '1' return '1'
    }
    else{
        return x * factorial(x - 1); //Recursion
    }
}
int fibonacсi(int x) {
    int last = x;
    double first = (1 + sqrt(5)) / 2; // is 1 + √5 / 2  φ (phi)
    double second = (1 - sqrt(5)) / 2; //is 1 - √5 / 2  Ψ (psi)

    int index = (pow(first,x) - pow(second,x)) / sqrt(5);

    return index;
}

int fibonacci_2(const int index) {
    vector<int> fibonacci_arr(index+1); //create array to index size
    fibonacci_arr[0] = 0; // first fibonacci digit
    fibonacci_arr[1] = 1; // second fibonacci digit
    for (int i = 2; i <= index; i++) {
        fibonacci_arr[i] = fibonacci_arr[i - 2] + fibonacci_arr[i - 1]; // Fibonacci formula  \(F_{n}=F_{n-1}+F_{n-2}\)
    }
    return fibonacci_arr[index];
}
int main()
{
    while(true){ 
        cout << "Input the task >> "; 
        string x; // empty variable 
        cin >> x; // input task name
        if (x == "fibonacci") { //if task name is fibonacci
            cout << "Input the digit(integer) >> "; //input 
            int digit; //empty variable for fibonacci function
            cin >> digit; // set inputed digit 
            int result= fibonacсi(digit); //call method 1
            int result2= fibonacci_2(digit); // call method 2
            printf("Result > %d | %d", result, result2); // print results
            break; // while break
        }
        else if (x == "factorial") { //if task name is factorial
            cout << "Input the digit(integer) >> "; //input
            int digit;// empty variable for factorial
            cin >> digit; // input digit
            int result = factorial(digit); // call method
            printf("Result is > %d", result); // print result
            break;
        }
        else {
            cout << "Task name incorrect , please try again \n"; // if task name incorrect or not registered
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
