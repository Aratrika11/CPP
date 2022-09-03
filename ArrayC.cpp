#include <iostream>
using namespace std;

class Array
{
public:
    void input(int arr[])
    {
        for (int i = 0; i < 10; i++)
        {
            printf("Enter arr[%d]: ", i);
            cin >> arr[i];
        }
        return;
    }
    void display(int arr[])
    {
        cout<<"Array created: ";
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        return;
    }
    int add(int arr[])
    {
        int sum = 0;
        for (int i = 0; i < 10; i++)
            sum += arr[i];
        return sum;
    }
};

int main()
{
    Array myArray;
    int arr[10];
    myArray.input(arr);
    myArray.display(arr);
    int sum = myArray.add(arr);
    cout << "\nThe sum is: " << sum << endl;
    return 0;
}