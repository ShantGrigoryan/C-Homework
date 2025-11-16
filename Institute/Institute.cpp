// Institute.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <random>
#include <ctime>

using namespace std;



// fibonacci and factorial function start
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
void homework1();
// fibonacci and factorial function end

//homework 2 start
class student {
    private :char name[10];
            char last_name[20];
            int age;
            double avg_point;
    public:
        void name_seter() {
            cout << "Input student name ";
            cin >> name; //set name in console
        }
        void last_name_seter() {
            cout << "Input student lastname ";
            cin >> last_name; // set lastname in console
        }
        void age_seter() {
            cout << "Input student age ";
            cin >> age; // set age in console
        }
        void avg_point_seter() {
            avg_point = static_cast<double>(rand()) / RAND_MAX * 10.0; 
            /*gpt(es chgitem esi im hamar ancanot er)
                zut random tver a generacnum
            */
        }

    //getters
        char* name_getter() {
            return name;
        }
        char* last_name_getter() {
            return last_name;
        }
        int age_getter() {
            return age;
        }
        double avg_point_getter() {
            return avg_point;
        }
        
};



void homework2();
void sort_student(student* students);

int main()
{
   
}

void homework1() {
    while (true) {
        cout << "Input the task >> ";
        string x; // empty variable 
        cin >> x; // input task name
        if (x == "fibonacci") { //if task name is fibonacci
            cout << "Input the digit(integer) >> "; //input 
            int digit; //empty variable for fibonacci function
            cin >> digit; // set inputed digit 
            int result = fibonacсi(digit); //call method 1
            int result2 = fibonacci_2(digit); // call method 2
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

void homework2() {
    student students[3]; //create students array
    for (int i = 0; i < 3; i++) { //set students 1, 2 , 3 index values
        cout << "Student " << i + 1;
        cout << "\n";
        students[i].name_seter();
        students[i].last_name_seter();
        students[i].age_seter();
        students[i].avg_point_seter();
    }
   
    for (student i : students) { //print array on foreach
        cout << i.name_getter() << " ";
        cout << i.last_name_getter() << " ";
        cout << i.age_getter() << " ";
        cout << i.avg_point_getter() << "\n";
    }
    cout << "\n";
    sort_student(students); // call sort method inputed parameter - array

}
void sort_student(student* students) {
    for (int pos = 0; pos <3 ; pos++) {
        bool swapped = false; // flag
        int max_age = students[pos].age_getter(); //student 0 index age
        int max_index = pos;

    
        for (int i = pos + 1; i < 3; ++i) {
            if (students[i].age_getter() > max_age) {
                max_age = students[i].age_getter();
                max_index = i;
                swapped = true; // ete students arrayi i andamy pahpanac max_age ic mec a , save enq anum indeqy u droshy "barcacnum enq"
            }
        }

    
        if (swapped) {//ete droshy barcr a , poxum enq 
            student temp = students[pos];
            students[pos] = students[max_index];
            students[max_index] = temp;
        }
        else {//ete che durs enq galis ciklic
            break;
        }
        }
    for (int i = 0; i < 3; i++) {//print
        cout << students[i].name_getter() << " ";
        cout << students[i].last_name_getter() << " ";
        cout << students[i].age_getter() << " ";
        cout << students[i].avg_point_getter() << "\n";
    }


}
