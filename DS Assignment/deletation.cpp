#include <iostream>
using namespace std;

int main()
{
    cout << "Enter size of the array: ";
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
    }
    cout << "Which digit do you want to delete: ";
    int d;
    cin >> d;
    int index = 0;

    for (int i = 0; i < n; i++)
    {

        if (ar[i] != d)
        {
            index++;
        }
        else
        {
            break;
        }
    }
    cout<< "Index of " << d << " is "<< index<<"."<<endl;

    if (ar[n - 1] == d)
    {
        n--;
    }
    else
    {
        for (int i = index; i < n; i++)
        {
            ar[i] = ar[i + 1];
        }
        n--;
    }
    cout <<"After Deletation : ";

    for (int i = 0; i < n; i++)
    {

        cout<< ar[i] << " ";
    }

    return 0;
}
