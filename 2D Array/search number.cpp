#include<iostream> 
using namespace std; 

bool isPresent(int arr[][3], int target, int row, int col) {

  for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            
            if( arr[row][col] == target) {
                return 1;
            } 
        }
    }
    return 0;
}


int main() {

    //create 2 d array
    int arr[3][3];
   

    cout << "Enter the elements " <<  endl;
    //taking input -> row wise input
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cin >> arr[row][col];
        }
    }

    cout << "Printing the array " << endl;
    //print 
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout <<"Enter the element to search " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 3)) {
        cout <<"Element found " << endl;
    }
    else{
        cout <<"Not Found" << endl;
    }

    return 0;
}