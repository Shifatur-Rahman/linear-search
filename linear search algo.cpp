#include <iostream>
using namespace std;
int main(){

int arr[6] = {5,2,10,6,7,13};
int n = 6;
int s_data = 8;

int found = 0;
for(int i=0; i<n; i++){
	if(arr[i] == s_data){
		cout<<"Index = "<<i<<endl;
		found++;
		break;
	}
}

if(found==0){
	cout<<"Data not found"<<endl;
}

}
