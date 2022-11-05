#include <iostream>

using namespace std;

int main(void){
	int num, i, j;
	
	cin >> num;
	
	int val[num];
	
	for(i=0; i<num; i++){
		cin >> val[i];			
	}
	
	for(i=0; i<num; i++){
		for(j=i+1; j<=num; j++){
			if(val[i] == val[j]){
				val[j] = 0;
			}
		}
	}
	
	for(i=0; i<num; i++){
		if(val[i] != 0){
			printf("%d ", val[i]);
		}
	}	
    return 0;
}
