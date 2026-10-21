#include<stdio.h>
int main(){
	int matA[2][3]={{2,4,6},{1,3,5}};
	int matB[3][4]={{2,1,3,1},{4,3,1,0},{6,5,2,1}};
	int Ans[4][2];
	int prod=0, sum=0;
	for (int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			sum=0;
			prod=0;
			for(int x=0;x<3;x++){
				prod=matA[i][x]*matB[x][i];
				sum=sum+prod;
				
			}
			Ans[i][j]=sum;
		}
	}
	for (int row=0;row<2;row++){
		for(int col=0;col<4;col++){
			printf("%d\t",Ans[row][col]);
			
		}
		printf("\n");
		
	}
}
