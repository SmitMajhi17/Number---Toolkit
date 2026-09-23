#include <iostream>
using namespace std;

int main()
{
    int rollno, n, marks, i;
    float total = 0, per;
    string name, sub;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your roll no: ";
    cin >> rollno;

    cout << "Enter number of subjects: ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        cout << "Enter subject " << i << " name: ";
        cin >> sub;

        cout << "Enter marks in " << sub << ": ";
        cin >> marks;

        total = total + marks;

        cout << sub << ": " << marks << endl;
    }

    cout << "--- RESULT ---" << endl;
    cout << "Name of student: " << name << endl;
    cout << "Roll No.: " << rollno << endl;

    per = (total / (n * 100)) * 100;

    cout << "Total Marks: " << total << " / " << n * 100 << endl;
    cout << "Percentage: " << per << "%" << endl;

    if(per >= 90)
        cout << "Grade: A+" << endl;
    else if(per >= 80)
        cout << "Grade: A" << endl;
    else if(per >= 70)
        cout << "Grade: B" << endl;
    else if(per >= 60)
        cout << "Grade: C" << endl;
    else if(per >= 40)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}
