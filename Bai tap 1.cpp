// in so nghich dao 
//cach nay dai qua thay!!!!

#include<stdio.h>
    int main(){
    int n;
    printf("Nhap so nguyen duong n can tim so nghich dao ");
    scanf("%d",&n);
	
    if((n>0)&& (n<10000)){
    printf("So nghich dao cua so n la ");
    int c=n%10;
    printf("%d",c);
    
    int k=n/10;
    if((k>0)&&(k<1000)){
    	int d=k%10;
    	printf("%d",d);
    }	
    int i=k/10;
    if((i>0)&&(i<100)){
    	int e=i%10;
    	printf("%d",e);
    }	
    int j=i/10;
    if((j>0)&&(j<10)){
    	int f=j%10;
    	printf("%d",f);
    }
    
} else{
	printf("Nhap khong hop le");
}
}
