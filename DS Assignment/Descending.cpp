#include <iostream>
using namespace std;

int main()
{
    cout << "Enter size of the array: ";
    int n;
    cin >> n;
    int ar[n];
    cout<<"Enter "<<n<<" integers: ";
    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
    }
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(ar[j]<ar[j+1]){
                int tmp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = tmp;
            }
        }
    }

    cout<<"Descending Order: ";
    for(int i  =0 ;i<n;i++){
        cout<<ar[i]<<" ";
    }
return 0;
}
