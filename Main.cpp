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
