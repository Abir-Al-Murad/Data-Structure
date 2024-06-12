#include<iostream>
using namespace std;




int main(){
    cout << "Enter size of the array: ";
    int n,flag=0;
    cin >> n;
    int ar[n];
    cout<<"Enter "<<n<<" integers: ";
    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
    }
    int x;
    cout<< "Which integer do you want to update??\n-->";
    cin>>x;
    int u;
    cout<< "Enter Updated Value:\n-->";
    cin>>u;
    for(int i =0 ; i<n;i++){
        if(ar[i]==x){
            ar[i] = u;
            flag=1;
        }
    }
    if(flag!=0){
        cout<<"Updated Array: ";
        for(int i =0;i<n;i++){
            cout<<ar[i]<<" ";

        }
        cout<<endl;
    }else{
        cout<<x<<" Not Found!"<<endl;
    }




return 0;
}
