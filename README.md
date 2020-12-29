# Sum-Mean-Percentage-for-Course-using-class
Write a C++ program which calculate the sum. the mean and the percentage of the marks of a student in 5 courses namely Visual Basic (vb), C++ programing (cpp), Kinyarwanda (kiny), Mathematics (Math), and Physics(phy), The user shall be asked to enter the name and surname of the student then the marks obtained by that student in those 5 courses, the program will then calculate the sum, mean and the percentage of that student.

## Instructions
Use the concepts preserved by the Object Oriented Programming, by creating a class which is called **result** and an object called **test**. Create 4 functions namely **readident**, **readmarks**, **calculate** and finally **display**.

## Define the methods inside the class
1. The function readident will be used to read the name and surname of the student.
2. The function readmarks will receive the marks of 5 courses in parameters and assign the value of these 5 marks to 5 variable called **VB**, **CPP**, **KINYARWANDA**, **MATH** and **PHYSICS** respectively.
3. The function calculate will be used to calculate the sum, mean and the percentage, use the following variables to store the values: **sum**, **mean** and **percent**.
4. The function display will be used to display the name, surname, courses studied by the students and the marks obtained by the students in those 5 courses out of 20 marks in each course then the sum, mean and the percentage.
5. The user shall be asked to enter the name and surname.

```c++
#include <iostream>
using namespace std;

class Result{
    public:
        char name[20];
        char surname[20];

        int VB, CPP, KINYARWANDA, MATH, PHYSICS;
        int sum, mean;

        float percent;

        void readident(){
            cout <<"Enter your name: ";
            cin >> name;
            cout <<"Enter your surname: ";
            cin >> surname;
        }

        void readmarks(int vb, int cpp, int kiny, int math, int phy){
            VB = vb;
            CPP = cpp;
            KINYARWANDA = kiny;
            MATH = math;
            PHYSICS = phy;
        }

        void calculate(){
            sum = (VB + CPP + KINYARWANDA + MATH + PHYSICS);

            mean = (sum / 5);

            percent = ((sum * 100) / 100);
        }

        void display(){
            cout <<"==========================" <<endl;
            cout <<name <<" " <<surname <<endl;
            cout <<"==========================" <<endl;
            cout <<"VB: " <<VB <<endl;
            cout <<"CPP: " <<CPP <<endl;
            cout <<"KINYARWANDA: " <<KINYARWANDA <<endl;
            cout <<"MATH: " <<MATH <<endl;
            cout <<"PHYSICS: " <<PHYSICS <<endl;
            cout <<"--------------------------" <<endl;
            cout <<"Sum: " <<sum <<endl;
            cout <<"Mean: " <<mean <<endl;
            cout <<"Percentage: " <<percent <<endl;
            cout <<"--------------------------" <<endl;
        }
};

int main(){
    Result test;
    int vb, cpp, kiny, math, phy;

    test.readident();

    cout <<endl;
    cout <<"-------------------------------------------------------" <<endl;
    cout <<"Start Entering marks obtained in this subject out of 20" <<endl;
    cout <<"-------------------------------------------------------" <<endl;
    cout <<endl;
    cout <<"Enter marks of VB: ";
    cin >> vb;
    cout <<"Enter marks of CPP: ";
    cin >> cpp;
    cout <<"Enter marks of KINYARWANDA: "; 
    cin >> kiny;
    cout <<"Enter marks of MATH: ";
    cin >> math;
    cout <<"Enter marks of PHYSICS: ";
    cin >> phy;

    cout <<endl;

    test.readmarks(vb, cpp, kiny, math, phy);
    test.calculate();
    test.display();

    return 0;
}

```
