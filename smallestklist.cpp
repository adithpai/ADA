#include <bits/stdc++.h> 
  
using namespace std; 
  
#define N 5 
  
// array for storing the current index of list i 
int ptr[501]; 
  

void findSmallestRange(int arr[][N], int n, int k) 
{ 
    int i, minval, maxval, minrange, minel, maxel, flag, minind; 
  
    // initializing to 0 index; 
    for (i = 0; i <= k; i++) 
        ptr[i] = 0; 
  
    minrange = INT_MAX; 
  
    while (1) { 
        // for mainting the index of list containing the minimum element 
        minind = -1; 
        minval = INT_MAX; 
        maxval = INT_MIN; 
        flag = 0; 
  
        // iterating over all the list 
        for (i = 0; i < k; i++) { 
            // if every element of list[i] is traversed then break the loop 
            if (ptr[i] == n) { 
                flag = 1; 
                break; 
            } 
            // find minimum value among all the list elements pointing by the ptr[] array 
            if (ptr[i] < n && arr[i][ptr[i]] < minval) { 
                minind = i; // update the index of the list 
                minval = arr[i][ptr[i]]; 
            } 
            // find maximum value among all the list elements pointing by the ptr[] array 
            if (ptr[i] < n && arr[i][ptr[i]] > maxval) { 
                maxval = arr[i][ptr[i]]; 
            } 
        } 
  
        // if any list exhaust we will not get any better answer, so break the while loop 
        if (flag) 
            break; 
  
        ptr[minind]++; 
  
        // updating the minrange 
        if ((maxval - minval) < minrange) { 
            minel = minval; 
            maxel = maxval; 
            minrange = maxel - minel; 
        } 
    } 
  
    printf("The smallest range is [%d, %d]\n", minel, maxel); 
} 
  

int main() 
{ 
    int arr[][N] = { 
        { 4, 7, 9, 12, 15 }, 
        { 0, 8, 10, 14, 20 }, 
        { 6, 12, 16, 30, 50 } 
    }; 
  
    int k = sizeof(arr) / sizeof(arr[0]); 
  
    findSmallestRange(arr, N, k); 
  
    return 0; 
} 