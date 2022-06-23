#include<iostream>
using namespace std;

void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}

bool linearSearch(int arr[], int size, int k ) {
    print(arr,size);
    //base case
    if(size == 0) 
        return false;

    if(arr[0] == k) {
        return true;
    }
    else {
        bool remainingPart = linearSearch(arr+1, size-1, k );
        return remainingPart;
    }
}

int main() {

    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 6;
    bool ans = linearSearch(arr, size, key);

    if(ans ){
        cout << "Present " << endl;
    }
    else{
        cout << "absent " << endl;
    }

    return 0;
}

//Input : 3

//Output

/*Size of array is 5
11 32 74 6 33 
Size of array is 4
32 74 6 33 
Size of array is 3
74 6 33 
Size of array is 2
6 33 
Size of array is 1
33 
Size of array is 0

Not Found*/
