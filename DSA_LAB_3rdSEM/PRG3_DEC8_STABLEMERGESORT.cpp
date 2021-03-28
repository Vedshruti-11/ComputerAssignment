#include<iostream>
using namespace std;
int comp=0,pass=1;
struct num
{
    int val,index;
};

void display(num *arr, int size) {
   for(int i = 0; i<size; i++)
      cout <<"number:-> "<<arr[i].val << " "<<"index:-> "<<arr[i].index<<" ";
   cout << endl;
}

void merge(num *arr,int left,int mid,int right){
    int n=right-left+1;
    num result[n];
    int p=0,i=left,j=mid+1;
    while((i<=mid&&(++comp))&&(j<=right&&(++comp))){
        if(arr[i].val<=arr[j].val){
            result[p].val=arr[i].val;
            result[p].index=arr[i].index;
            p++;
            i++;

        }
        else{
                result[p].val=arr[j].val;
                result[p].index=arr[j].index;
            p++;j++;
        }
    }
    while(i<=mid){
        result[p].val=arr[i].val;
            result[p].index=arr[i].index;
            p++;
            i++;
    }
    while(j<=right){
        result[p].val=arr[j].val;
                result[p].index=arr[j].index;
            p++;j++;
    }
    for(int k=0;k<n;k++){
        //arr[left++]=reslt[k];
        arr[left].val=result[k].val;
        arr[left].index=result[k].index;
        left++;
    }
    cout<<"\nPASS "<<pass<<": ";
    ++pass;
    display(arr,n);

}
void mergeSort(num arr[], int left,int mid, int right) {
   if(left< right) {
      int mid1=(left+mid)/2;
      int mid2=(mid+1+right)/2;
      mergeSort(arr,left,mid1,mid);
      mergeSort(arr,mid+1,mid2,right);
      merge(arr,left,mid,right);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   num arr[n];
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i].val;
      arr[i].index=i;
   }
   cout << "Array before Sorting: \n";
   display(arr, n);
   int mid=n/2;
   mergeSort(arr, 0,mid, n-1);
   cout << "\nArray after Sorting: \n";
   display(arr, n);
   cout<<"\nTotal comparisons: "<<comp<<endl;
}

