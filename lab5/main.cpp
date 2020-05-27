//\begin{sourcecode}
#include <iostream>
#include <chrono>
using namespace std::chrono;
#include "Quicksort.h"
#include "Mergesort.h"
const int N = 1000000;const int MAX = 10000; int original[N]; int a[N];
void copy(int a[], int b[]){
    for(int i = 0; i < N; i++) b[i] = a[i];}
int main(){srand(time(0)); for(auto &e : original) e = rand() % MAX; 
    copy(original,a); auto t0 = high_resolution_clock::now();
    auto t1 = high_resolution_clock::now(); copy(original,a);
    Quicksort q;t0 = high_resolution_clock::now();
    q.sort(a,N);t1 = high_resolution_clock::now();
    std::cout << "Quick Sort: " << duration_cast<nanoseconds>(t1-t0).count() <<" Nanoseconds" << std::endl;
    //for(auto e:a) std::cout << e << "\t"; //print array
    std::cout << std::endl; copy(original,a); Mergesort m(N);
    t0 = high_resolution_clock::now();
    m.sort(a,N);
    t1 = high_resolution_clock::now();
    std::cout << "Merge Sort: " << duration_cast<nanoseconds>(t1-t0).count() <<" Nanoseconds" << std::endl;
    //for(auto e:a) std::cout << e << "\t"; //print array
    std::cout << std::endl;
}
//\end{sourcecode}
