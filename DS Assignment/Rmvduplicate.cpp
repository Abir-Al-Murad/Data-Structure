#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Array Size: ";
    cin >> num;
    int ar[num];
    for (int i = 0; i < num; i++)
    {

        cin >> ar[i];
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1;j<num; j++)
        {
            if (ar[i] == ar[j])
            {
                for (int k = j; k<num-1; k++)
                {
                    ar[j] = ar[k + 1];
                }
                    num--;
                j--;
            }
        }
    }
    for (int i = 0; i<num; i++)
    {
        cout << ar[i]<<" ";
    }

    return 0;
}
