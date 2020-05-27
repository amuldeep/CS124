//\begin{sourcecode}
#include "Quicksort.h"
extern void swap(int &a, int &b);
int Quicksort::split(int a[],int n)
{   int p = n/2;
    int pivot = a[p];
    int i =0;
    int j=n-1;
    while (i<= j)
      if(a[i] <= pivot) i++;
      else if(a[j] >= pivot) j--;
      else {swap(a[i],a[j]); i++;j--;}
    if(p<j) {swap(a[p],a[j]); p=j;}
    else if(p>i) {swap (a[p],a[i]); p=i;}
    return p;}
void Quicksort::sort(int a[],int n){
    if(n<=2)
    {
      if(n==2 and a[1]<a[0]) swap(a[0],a[1]);
  }else {
    int p = split(a,n);   //find a pivot
    sort(a,p);   //sorting the left subsection of a
    sort(&a[p+1], n-p-1);   
    } //sorting the right subsection
}
//\end{sourcecode}
