#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main(){
    vector<int> a = {0,1,2,3,4};
    //this is a range based iterator
    for(int i:a){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}