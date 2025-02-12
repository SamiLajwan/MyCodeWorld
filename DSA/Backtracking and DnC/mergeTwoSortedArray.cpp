#include<bits/stdc++.h>
using namespace std;

void mergeSortedArrays(int arr[], int sizeArr, int brr[], int sizeBrr, vector<int>& ans){
    int i=0; 
    int j=0;

    while(i < sizeArr && j < sizeBrr){
        if(arr[i] < brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }

    // there might be two possible ways
    // Case 1: arr me still elements bache hain
    while(i < sizeArr){
        ans.push_back(arr[i]);
        i++;
    }

    //Case 2: brr me still elements bache hain
    while(j < sizeBrr){
        ans.push_back(brr[j]);
        j++;
    }
}
int main(){
    int arr[] = {10,30,50,70};
    int sizeArr = 4;

    int brr[] = {20,40,60,80,90,100};
    int sizeBrr = 6;

    vector<int> ans;

    mergeSortedArrays(arr, sizeArr, brr, sizeBrr, ans);

    for(int nums: ans){
        cout<< nums << " " ;
    }

    return 0;
}