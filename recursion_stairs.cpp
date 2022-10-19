#include<iostream>
using namespace std;
int way_to_stairs(int stairs){
    if (stairs<0){
        return 0;
    }
    if(stairs==0){
        return 1;
    }
    int ans=way_to_stairs(stairs-1)+
            way_to_stairs(stairs-2);
    return ans;
}
int main(){
    int stairs=5;
    int ans=way_to_stairs(stairs);
    cout<<ans;
    return 0;
}