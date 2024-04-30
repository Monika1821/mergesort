#include <iostream>
using namespace std;



void mergesort(int x, int y);
int a[10]={1,9,7,3,7,0,2,5,6,3};
int x[10];
int main(){
    int i;
    mergesort(0,9);
    cout<<"uporzadkowana tablica: \n";
    for(i=0;i<=9;i++){
        cout<<a[i]<<" ";
    }
}
void mergesort(int beg, int end){
    int m,i,j,k;
    if(beg < end){
        m=(beg+end)/2;
        mergesort(beg,m);
        mergesort(m+1,end);

        for(i=beg;i<=m;i++){
            x[i]=a[i];
        }
        for(i=m+1;i<=end;i++){
            j=end + m + 1 - i;
            x[j]=a[i];
        }
        i=beg;
        j=end;
        for(k=beg;k<=end;k++) {
            if (x[i] < x[j]) {
                a[k] = x[i];
                i++;
            } else {
                a[k] = x[j];
                j--;
            }
        }
    }
}
