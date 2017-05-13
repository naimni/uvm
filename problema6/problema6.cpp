#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    double positive_count=0, negative_count=0, zero_count=0;
    
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if (arr[arr_i] > 0)
           positive_count++;
       else if (arr[arr_i] < 0)
           negative_count++;
       else
           zero_count++;   
    }
    printf("%.6f\n", positive_count/n);
    printf("%.6f\n", negative_count/n);
    printf("%.6f\n", zero_count/n);
    
    return 0;
}