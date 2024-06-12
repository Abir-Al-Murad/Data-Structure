#include<iostream>
using namespace std;

int main(){
    cout << "Enter size of arrays: ";
    int n;
    cin >> n;
    int ar[n];
    int ar2[n];
    int ar3[n];
    cout << "Enter Values of Array-1: ";
    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
    }
    cout << "Enter Values of Array-2: ";
    for (int i = 0; i < n; i++)
    {

        cin >> ar2[i];
    }

    cout << "\nSo, the Values of Array-3: ";

    for(int i =0;i<n;i++){
        ar3[i]=(ar[i]+ar2[i]);
        cout<< ar3[i]<<" ";
    }
    cout<<endl;





return 0;
}
