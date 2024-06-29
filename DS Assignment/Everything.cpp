#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of Elements -> ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
     cin>>arr[i];
    }
    insrt:
    int x,v;
    cout<<"Where do you want to insert element[1(first)/2(middle)/3(last)->";
    cin>>x;
    cout<<"Enter Value: ";
    cin>>v;

    if(x == 3){
     arr[n] = arr[n-1];
     arr[n-1] = v;
    }else if(x == 2){
       int mid = n/2;
       for(int i = n;i>=mid;i--){
           arr[i] = arr[i-1];
       }
       arr[mid]= v;
    }else if(x==1){
        for(int i =n;i>=0;i--){
           arr[i] = arr[i-1];
        }
        arr[0] = v;
    }else{
        cout<<"Invalid Input! \n";
        goto insrt;
    }

    for(int i =0 ;i<=n;i++){
     cout<<arr[i]<<" ";
    }
    cout<<"\n";



    //sorting
    int flag = 0;
    for(int i = 0 ;i<=n-1;i++){
      for(int j = 0;j<=n-i-1;j++){
          if(arr[j]>arr[j+1]){
            int tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tmp;
            flag = 1;
          }

      }
      if(flag == 0){
           cout<<"Array is already sorted"<<endl;
           break;
          }

    }
    cout<<"Sorted Array: ";
    for(int i =  0 ;i <=n ; i++){
      cout<<arr[i]<<" ";
    }
    cout<<"\n";



    //Delete
    dele:
    cout<<"Do you want delete any element??( Press 1(yes) or Press any other key(No) ) -> ";
    cin>>x;
    int check = 0;
    if(x==1 ){
        cout<<"Which element do you want to delete??-> ";
        cin>>v;
        int index=0;
        for(int i =0 ;i <=n;i++){
            if(arr[i] == v){
                check = 1;
                break;

            }
            index++;
        }
        if(check==0){
            cout<<"Invalid Input!! \n";
            goto dele;
        }
        if(index != n){
            for(int j = index ;j<=n;j++){
                arr[j]=arr[j+1];
            }
        }
        cout<<"Modified Array: ";
        for(int i =0;i<n;i++){

            cout<< arr[i]<<" ";
        }
        cout<<"\n";


    }

    // Large and smallest number
    int index,index2;
    int large = arr[0];
    int small = arr[0];
    for(int i =1;i<n;i++){
        if(large<arr[i]){
            large = arr[i];
            index = i;
        }
        if(small>arr[i]){
            small = arr[i];
            index2 = i;
        }
    }
    cout<<"Largest Number of this array is "<<large<<" at index "<<index<<"\n";
    cout<<"Smallest Number of this array is "<<small<<" at index "<<index2<<"\n";

return 0;
}
