/*
   CH-230-A
   a9_p8.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

/* The function to find the maximum value and
to subtract it from all the elements of the array */
void subtract_max (int a[], int n) {
       int i;
       int max = a[0];

       for (i = 0; i < n; i++) {
           if (max < a[i]) {
               max = a[i];
           }		
	   }

       for (i = 0; i < n; i++) {
		   a[i] -= max;
       }
}

/* The function to release the memory */
void deallocate (int a[]) {
	delete [] a;
}

int main () {
	cout << "Size of the array: "; 
	int n;
	cin >> n; /* Get input */

	int* a = new int[n];
	int i;
	for (i = 0; i < n; i++) {
		cin >> a[i];		
	}
	
	subtract_max (a, n); /* Call the function */
	
    cout << "After subtractiong the maximum value, the array is: " <<endl;
    for (int i = 0; i < n; i++){
		cout << a[i] << " ";
    }
	cout << endl;
	
	deallocate(a);
	return 0;	
}