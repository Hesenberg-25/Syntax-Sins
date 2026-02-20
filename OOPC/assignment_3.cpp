#include <iostream>
using namespace std;

class average
{
private:
    int n;
    float *arr;
    float sum;
    float av;

public:
    void input_number()
    {
        cout << "Enter the number of Students: ";
        cin >> n;

        arr = new float[n];
        sum = 0;
    }

    void input_marks()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the Marks of Student " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    void avg()
    {
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[j];
        }

        av = sum / n;
        cout << "Average Marks are: " << av << endl;
    }
    ~average()
    {
        delete[] arr;
    };

};
    
int main()
    {
        average obj;

        obj.input_number();
        obj.input_marks();
        obj.avg();

        return 0;
    }
