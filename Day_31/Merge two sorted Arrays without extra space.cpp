question Link: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0

#define ll long long

class Solution{
    public:
        void merge(int arr1[], int arr2[], int n, int m) 
        { 
          ll i = n-1;  //initialisation last index of first array
          ll j = 0;    //initialisation first index of second array
          
          for(; i>=0 && j<m ; i-- , j++){
              if(arr1[i] >= arr2[j])   //comparing first array elements with second array elements
              swap(arr1[i], arr2[j]);  //swapping elements if statement is true.
              else
              break;
          }
          
          sort(arr1, arr1+n); //sorting individual array arr1
          sort(arr2 , arr2+m); //sorting individual array arr2
        } 
};
