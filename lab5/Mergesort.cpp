//\begin{sourcecode}
#include "Mergesort.h"
void swap(int& a, int& b){a = a^b; b = a^b; a = a^b;}
void Mergesort::merge (int a1[], int n1, int a2[], int n2){
    int i1=0,i2=0;
    for(int i = 0; i < n1+n2; i++){
        if(i1 < n1 and i2 < n2)
        {if(a1[i1] < a2[i2]) {work[i] = a1[i1]; i1++;}
        else {work[i] = a2[i2]; i2++;}}
        else if(i1< n1) {work[i] = a1[i1]; i1++;}
        else{work[i] = a2[i2]; i2++;}}
    for(int i = 0; i < n1+n2; i++)
        a1[i] = work[i];}
void Mergesort::sort(int a[],int n){int n1, n2; int* a2;
    n1 = n/2;  n2 = n - n1; a2 = &a[n1];
    //base case
    if(n <= 2){
        if((n == 2) && (a[1] < a[0]))
        swap(a[0],a[1]);}
    else{sort(a,n1);   //sort the left half
        sort(a2,n2); //sort the right half
        merge(a,n1,a2,n2);}}
//\end{sourcecode}
