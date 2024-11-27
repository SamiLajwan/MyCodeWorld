#include<iostream>
using namespace std;

int getlength(char arr[], int size){
    int count = 0;
    int index = 0;

    while(arr[index] != '\0'){
        //jab tak array me null character nhi milta
        //tab tak aage baddho
        count++; 
        index++;
    }
    return count;
}

 int main(){
        char arr[100];
        cin >> arr;
        cout << getlength(arr, 100) << endl;
        return 0;
    }