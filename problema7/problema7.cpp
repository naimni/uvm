#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    int hashes = 1;
    int spaces = n - 1;
    
    for(int init = 0; init < n; init++) {
        
        for(int j = 0; j < spaces; j++)
            cout << " ";
        
        for(int i = 0; i < hashes; i++)
            cout << "#";
        
        hashes++;
        spaces--;
        cout << endl;
    }
    
    
    
    return 0;
}
