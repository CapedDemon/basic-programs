#include <iostream>
using namespace std;
class Distance
{
    double feet, inches;

public:
    void input()
    {
        cin >> feet >> inches;
    }
    void display()
    {
        cout << feet << "feet" << inches << "inches";
    }
    Distance operator+(int i)
    {
        Distance f;
        f.feet = feet;
        f.inches = i + inches;
        return f;
    }
    Distance operator+(Distance m)
    {
        Distance t;
        t.feet = feet + m.feet;
        t.inches = inches + m.inches;
        return t;
    }
};
int main()
{
    Distance t1, t2, t3, t4;
    t1.input();
    t2.input();
    t3 = t1 + t2;
    t3.display();
    int i;
    cout << "\nEnter integer:";
    cin >> i;
    t4 = t3 + i;
    t4.display();
    return 0;
}