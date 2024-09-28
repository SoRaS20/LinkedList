#include <bits/stdc++.h>

using namespace std;


void merge(vector<int>& arr, int left, int mid, int right){
	cout<<left<<" "<<mid<<" - "<<mid+1<<" "<<right<<endl;
	int n1 = mid - left + 1;
	int n2 = right-mid;
	vector<int> L(n1), R(n2);

	for(int i=0;i<n1;i++){
		L[i] = arr[left+i];
	}
	for(int j=0;j<n2;j++){
		R[j] = arr[mid+1+j];
	}

	int i = 0, j = 0;
	int k = left;
/*	cout<<i<<" "<<n1<<" s "<<j<<" "<<n2<<endl;;
*/
	while(i<n1 and j<n2){
/*		cout<<i<<" "<<n1<<"  inner  "<<j<<" "<<n2<<endl<<endl;
*/		if(L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k] = R[j];
		j++;
		k++;
	}
}

void printarr(vector<int>& arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void mergeSort(vector<int>& arr, int left, int right){
	if(left>=right){
		return;
	}
	int mid = left + (right-left)/2;
	mergeSort(arr,left,mid);
	mergeSort(arr,mid+1,right);
	merge(arr,left,mid,right);
/*	cout<<left<<" "<<mid<<" - "<<mid+1<<" "<<right<<endl;
*/}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    std::vector<int> arr = {38,27,43,3,9,82,10};
    int n = arr.size();
    mergeSort(arr,0,n-1);
    printarr(arr,n);

    return 0;
}
