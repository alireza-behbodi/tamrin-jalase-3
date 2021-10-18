#include <iostream>

using namespace std;
int main()
{
    int students, grade, max, min;
    float avrage = 0, sum = 0;
    min = 20;
    max = 0;

    cout << "how many students??";
    cin >> students;

    for (int i = 0; i < students; i++)
    {
        cin >> grade;
       
        sum = grade + sum;
      
        if (grade > min)
        {
            max = grade;
        }
        if (grade < max)
        {
            min = grade;
          
        } 
        avrage = sum / students;
    }
    cout << "min =" << min << endl;
    cout << "max =" << max << endl;
    cout << "avrage =" << avrage << endl;
    
    
}