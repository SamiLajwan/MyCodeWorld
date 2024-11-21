#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void SelectionSort(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
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
    SelectionSort(v);
    print(v);
    return 0;
}