//\begin{sourcecode}
class Mergesort{
private:
    int* work;
    void merge(int a1[], int n1, int a2[], int n2);
public:
    Mergesort (int n) {work = new int[n];};
    ~Mergesort () {delete [] work;};
    void sort(int[],int); //array and size
};
//\end{sourcecode}
