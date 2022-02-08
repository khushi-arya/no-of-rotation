#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++){
        cout<<"  "<<arr[i];
    }
    int n=5,k;
    cout<<"\nenter the num of rotation: \n";
   cin>>k;
   int temp[n];
   for(i=0;i<n;i++){
      temp[(i+k)%n]=arr[i];
   }
   int d[n];
  for(i=0;i<5;i++){
        cout<<"  "<<temp[i];
   }
    int min=temp[0],min_ind;
    for(i=0;i<5;i++){
        if(min>temp[i]){
           min=temp[i];
           min_ind=i;
        }
    }
    cout<<"\nno of rotation is:  "<<min_ind;
    
    return 0;
}