#include<bits/stdc++.h>
using namespace std;

int getPaintingWays(int ports, int colors){
    if(ports == 1){
        return colors;
    }
    if(ports == 2){
        return colors + colors*(colors-1);
    }

    int ans = (colors - 1) * (getPaintingWays(ports-1, colors) + getPaintingWays(ports-2, colors));
    return ans;
}

int main(){
    int ports = 3;
    int colors = 3;

    int ans = getPaintingWays(ports, colors);
    cout << "Total ans: " << ans << endl;
    return 0;
}