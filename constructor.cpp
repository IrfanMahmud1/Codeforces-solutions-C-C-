#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    double gpa;
    void display()
    {
        cout << id << "     " << gpa << endl;
    }
    student(int x,double y)
    {
        id = x;
        gpa = y;
    }

};
int main()
{
    student irfan(103,3.50);
    irfan.display();

    student shamun(105,3.89);
    shamun.display();

}
