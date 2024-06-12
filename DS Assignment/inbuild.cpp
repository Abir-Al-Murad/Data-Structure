#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int ar[]={55,88,9,7,5,6,3};
    int si = sizeof(ar)/sizeof(ar[0]);
    sort(ar,ar+si);
    reverse(ar,ar+si);
    for(int i =0;i<si;i++){

        cout<< ar[i]<<" ";
    }

return 0;
}
