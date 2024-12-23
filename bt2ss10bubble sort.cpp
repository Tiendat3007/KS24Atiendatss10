#include<stdio.h>
int main(){
	int	temp,length;
	int array[]={5,2,3,4,1,6,8,9,7,0,9,5,100};
	length=sizeof(array)/sizeof(array[0]);
    for(int j=0;j<length-1;j++){
	for(int i =0 ;i<length-j-1;i++){
		if(array[i]>array[i+1]){
			temp=array[i];
			array[i]=array[i+1];
		    array[i+1]=temp;
		}
	}
}
		for(int i =0 ;i<length;i++){
			printf("%d ",array[i]);
		}

	
	return 0;
}
