#include<iostream>
using namespace std;
void say_the_number(int n,string arr[]){
    if(n==0)
    return;
    int digit=n%10;
    n=n/10;
    say_the_number(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    int number=54120;
    string str[10]={"zero","one","two","three","four",
                    "five","six","seven","eight","nine"};
    say_the_number(number,str);
    return 0;
}