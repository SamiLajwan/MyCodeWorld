#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void insertionSort(vector<int> &v){
    int n = v.size();

    for(int i=0; i<n; i++){
        int key = v[i];
        int j = i - 1;

        while(j>=0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}
void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> v = {1,2,4,5,3};
    insertionSort(v);
    print(v);
    return 0;
}

