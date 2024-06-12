#include <iostream>
using namespace std;
int main()
{
    cout << "Enter size of the array: ";
    int n;
    cin >> n;
    int ar[n];
    cout << "Enter Values of Array: ";
    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
    }
    n++;
    cout << "\nWhere do you want to insert??(Enter Index Number(index starts from 0))\n-->";
    int x, y;
    cin >> x;
    cout << "Enter Value: ";
    cin >> y;
    // int index = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     index++;
    // }
    // cout << index;
    if (x != n - 1)
    {

        for (int i = n-1; i >= x; i--)
        {
            ar[i+1] = ar[i];
        }
        ar[x] = y;
    }else{

        ar[x] = y;
    }
    cout<<"Modified Array:";

    for (int i = 0; i < n; i++)
    {

        cout << ar[i] << " ";
    }
    cout<<endl;

    return 0;
}
