//Search for an element in an Array

#include<iostream>
using namespace std;

int main(){

int input[100],count,i,num;

cout<<"Enter Number of Elements in Array\n";
cin>>count;

cout<<"Enter "<<count<<" number\n";

//Read array elements

for(i=0;i<count;i++){
    cin>>input[i];
}

cout<<"Enter a number to search in Array\n";
cin>>num;

//search num in inputArray from index 0 to elementCount-1
for(i=0;i<count;i++){
    if(input[i]==num){
        cout<<"Element found at index"<<i;
        break;
    }
}

if(i==count){
    cout<<"Element not present in input Array\n";
}
    return 0;
}