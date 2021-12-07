#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int n;
    cin >> n;
    float max;
    float array[n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    max= magg(array,n);
    cout << max << endl;
    return 0;
}
