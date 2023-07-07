#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[]={4,5,2,25};
    int n=5;
    for(int i=0;i<4;i++){
        if(a[i]==5){
            
            for(int k=i+1;k<4;k++){
                if(a[k]>n){
                    cout<<a[k]<<endl;
                    break;
                }
            }
        }
        
    }
    return 0;
}
