#include <iostream>
 
using namespace std;
 
int main() {
 
   	int N;
	int i, i1, i2;
	int V[1000];
	
	cin >> N;
	
	V[0]=0;
	V[1]=1;
	
	for(i=2;i<N;i++){
		
		i1 = i-1;
		i2 = i-2;
		V[i] = V[i1] + V[i2];
		
    }
    
    for(i=0;i<(N-1);i++)
    	cout << V[i] << " ";
    
    cout << V[i] << endl;
 
    return 0;
}