#include<stdio.h>
int main(){
	int	temp,length;	
	int array[]={5,2,3,4,1,6,8,9,7,0,9,5,100};
	length=sizeof(array)/sizeof(array[0]);
    for(int j=1;j<length;j++){
    	temp=array[j];
    	int i=j-1;
    	while(i>=0&&array[i]>temp){
    		array[i+1]=array[i];
			i--;
		}
		array[i+1]=temp;
	}
    	
	
		for(int i =0 ;i<length;i++){
			printf("%d ",array[i]);
		}

	
	return 0;
}
