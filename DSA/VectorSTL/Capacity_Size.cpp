#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v){
    int size = v.size();
    for(int i = 0; i < size ; i++){
        cout << v[i] << endl;
    }
}

int main()
{
    //in vector, dont tell size of vector.
    //jsut keep inserting , vectr will manage the allocations
    vector<int>v;
    
    while(1){
        int d; cin >> d;
        v.push_back(d);
        cout <<  " Capacity: " << v.capacity() << " Size: " << v.size() << endl;
    }
}