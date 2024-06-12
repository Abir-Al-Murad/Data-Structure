#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Array size: ";
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2 != 0){
            sum = sum+arr[i];
        }
    }
    cout<< "Summation of ODD Numbers: "<< sum<<endl;


return 0;
}
