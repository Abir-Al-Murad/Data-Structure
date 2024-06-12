#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Array size: ";
    cin>> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int f;
    cout<<"Enter the digit that you wants to search: \n-->";
    cin>>f;
    int flag = 0;
    for(int i =0 ; i<n;i++){
        if(f==arr[i]){
                if(flag == 0){
                    cout<<"Found at index position: ";
                    flag++;
                }

            cout<<" "<<i;


        }

    }
    if(flag == 0){
        cout<<"Not Found"<<endl;
    }

return 0;
}
