#include <iostream>

using namespace std;

int main() {
	setlocale (LC_ALL, "Russian");
	int n;
	tryAgain:
	cout <<"¬ведите число от 2 до 10000"<<endl; cin >> n;
if(n>=2 && n<=10000){
	
	int *arr=new int[n];
	
	for(int i=0;i<n;i++)
		cin >> arr[i];
		
	for (int i=n; i>=0; i--)    
        for (int j=n; j>=1; j--)
        	if(arr[j]%2==0 && arr[j-1]!=0)
        		swap(arr[j], arr[j-1]);
   	cout<<endl;
	/*for (int i=0; i<n; i++)
		cout<<arr[i];
	cout<<endl;    	*/	
	
	for (int i=0; i<n; i++)
		for(int j=0;j<n-1;j++)
			if(arr[j]%2!=0 && arr[j+1]%2!=0){			
				if(arr[j]<arr[j+1])
					swap(arr[j], arr[j+1]);
					
			}else if((arr[j]%2==0 || arr[j]==0) && (arr[j+1]%2==0 || arr[j+1]==0))
				if(arr[j]>arr[j+1])
					swap(arr[j], arr[j+1]);
	cout<<endl;		
	for (int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	
	
} else goto tryAgain;
	return 0;
}
