#include<stdio.h>
int main(){
	int key,check,length;
	int array[]={1,2,3,4,5};
	length=sizeof(array)/sizeof(array[0]);
	printf("hay nhap gia tri can kiem tra!:");
	scanf("%d",&key);
	for(int i=0;i<length;i++){
		if(array[i]==key){
			printf("phan tu %d co trong mang\nla phan tu thu %d cua mang",key,i);
			check=1;
		}
		
	}
	if(!check){
		printf("phan tu ban nhap vao khong co trong mang");
	}
	
	
	
	return 0;
}
