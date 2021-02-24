Question Link: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating/0

#include <cmath> 
#include <iostream> 
  
using namespace std; 
  

 void findNumbers(int arr[], int n) 
    { 
        int sum = 0, sumSq = 0, i; 
  
        int sumN = (n * (n + 1)) / 2; 
  
        int sumSqN = (n * (n + 1) * (2 * n + 1)) / 6; 
  

        for (i = 0; i < n; i++) { 
            sum += arr[i]; 
            sumSq = sumSq + (pow(arr[i], 2)); 
        } 
  
        int X = (((sumSq - sumSqN) / (sum - sumN)) + sumN - sum) / 2; 
        int Y = sum - sumN + X; 
         cout << "Missing = " ; 
         cout << X << endl; 
         cout << "Repeating= " ; 
         cout << Y << endl; 
    } 
  
int main() { 
        int arr[] = { 1, 3, 3}; 
        int n = sizeof(arr)/sizeof(arr[0]); 
        findNumbers(arr, n); 
    return 0; 
}
