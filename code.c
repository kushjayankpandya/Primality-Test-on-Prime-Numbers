#include<stdio.h>
#include<math.h>
#include<time.h>


void func1(int n)
{
	
	int prime=0;
	clock_t start,end;
	long double time;
	int k=0,order=1;
	int t=0,j=0,i=2;
	
	
	for( k=1;k<8;k++)
	{
		
		
		order=pow(10,k);
		prime=0;
		start=clock();

		for( j=2;j<order;j++)
		{
			t=0;
			for( i=2;i<=sqrt(j);i++)
				if(j%i==0)
				{
					//printf("Not a prime");
					t++;
					break;
				}
	
			if(t==0)
				prime++;
				//printf("%d ",j);
		}
		
		printf(" Order :- %d",k);
		
		printf(" No of prime :- %-8d",prime);
		
		end=clock();
	
		time = ((long double)(end-start))/CLOCKS_PER_SEC;
	
		printf("  Time taken = %Lf \n",time);
	}
	
	printf("\n\n Func 1 End");
}


void func2(int n)
{
	
	int prime=0;
	clock_t start,end;
	long double time;
	int k=0,order=1;
	int j=0,i=2,t=0;
	
	for( k=1;k<8;k++)
	{
		
		
		order=pow(10,k);
		prime=1;
		start=clock();

		for( j=2;j<order;j++)
		{
			t=0;
			
			if(j%2==0)
			{
				t++;
				
			}
			else
			{
				for( i=3;i<=sqrt(j);i+=2)
					if(j%i==0)
					{
						//printf("Not a prime");
						t++;
						break;
					}
			}
	
			if(t==0)
				prime++;
				//printf("%d ",j);
		}
		
		printf(" Order :- %d",k);
		
		printf(" No of prime :- %-8d",prime);
		
		end=clock();
	
		time = ((long double)(end-start))/CLOCKS_PER_SEC;
	
		printf("  Time taken = %Lf \n",time);
	}
	
	printf("\n\n Func 2 End");
}



void func2b(int n)
{
	
	int prime=0;
	clock_t start,end;
	long double time;
	int k=0,order=1;
	int j=0,i=2,t=0;
	
	for( k=1;k<8;k++)
	{
		
		
		order=pow(10,k);
		prime=1;
		start=clock();

		for( j=2;j<order;j++)
		{
			t=0;
			
			if(j%2==0)
			{
				t++;
				
			}
			else
			{
				for( i=3;i<=sqrt(j);i+=4)				
					if((j%i==0)||(j%(i+2)==0))
					{
						//printf("Not a prime");
						t++;
						break;	
					
					}
			}
	
			if(t==0)
				prime++;
				//printf("%d ",j);
		}
		
		printf(" Order :- %d",k);
		
		printf(" No of prime :- %-8d",prime);
		
		end=clock();
	
		time = ((long double)(end-start))/CLOCKS_PER_SEC;
	
		printf("  Time taken = %Lf \n",time);
	}
	
	printf("\n\n Func 2 End");
}




void func3(int n)
{
	
	int prime=0;
	clock_t start,end;
	long double time;
	int k=0,order=1;
	int j=0,i=2,t=0;
	for( k=1;k<8;k++)
	{
		
		
		order=pow(10,k);
		prime=11;
		start=clock();

		for( j=36;j<order;j++)
		{
			t=0;
			
			if(j%2==0||j%3==0)
			{
				t++;
				
			}
			else
			{
				for( i=6;i<=sqrt(j)+1;i+=6)
					if(j%(i+1)==0||j%(i-1)==0)
					{
						//printf("Not a prime");
						t++;
						break;
					}
			}
	
			if(t==0)
				prime++;
				//printf("%d ",j);
		}
		
		printf(" Order :- %d",k);
		
		printf(" No of prime :- %-8d",prime);
		
		end=clock();
	
		time = ((long double)(end-start))/CLOCKS_PER_SEC;
	
		printf("  Time taken = %Lf \n",time);
	}
	
	printf("\n\n Func 3 End");
}



void func3b(int n)
{
	
	int prime=0;
	clock_t start,end;
	long double time;
	int k=0,order=1;
	int j=0,i=2,t=0;
	for( k=1;k<8;k++)
	{
		
		
		order=pow(10,k);
		prime=11;
		start=clock();

		for( j=36;j<order;j++)
		{
			t=0;
			
			if(j%2==0||j%3==0)
			{
				t++;
				
			}
			else
			{
				for( i=6;i<=sqrt(j)+1;i+=12)
					if(j%(i+1)==0||j%(i-1)==0||j%(i+5)==0||j%(i+7)==0)
					{
						//printf("Not a prime");
						t++;
						break;
					}
			}
	
			if(t==0)
				prime++;
				//printf("%d ",j);
		}
		
		printf(" Order :- %d",k);
		
		printf(" No of prime :- %-8d",prime);
		
		end=clock();
	
		time = ((long double)(end-start))/CLOCKS_PER_SEC;
	
		printf("  Time taken = %Lf \n",time);
	}
	
	printf("\n\n Func 3 b End");
}



void func4(int n)
{
	
	int prime=0;
	clock_t start,end;
	long double time;
	int k=0,order=1;
	int j=0,i=2,t=0;
	for( k=3;k<8;k++)
	{
		
		order=pow(10,k);
		prime=11;
		start=clock();

		for( j=900;j<order;j++)
		{
			t=0;
			
			if(j%2==0||j%3==0||j%5==0)
			{
				t++;
				
			}
			else
			{
				for(int i=30;i<=sqrt(j)+29;i+=30)
				if(j%(i-23)==0||j%(i-19)==0||j%(i-13)==0||j%(i-17)==0||j%(i-11)==0||j%(i-7)==0||j%(i-1)==0||j%(i+1)==0)
					{
						//printf("Not a prime");
						t++;
						break;
					}
			}
	
			if(t==0)
				prime++;
				//printf("%d ",j);
		}
		
		printf(" Order :- %d",k);
		
		printf(" No of prime :- %-8d",prime);
		
		end=clock();
	
		time = ((long double)(end-start))/CLOCKS_PER_SEC;
	
		printf("  Time taken = %Lf \n",time);
	}
	
	printf("\n\n Func 4 End");
}



int trsk(int n[],int k,int chk,int c)
{
	int t=0;
	
	for(int i=0;i<=k;i++)
	{
		if(chk%(c+n[i])==0)
		{
			return 1;
		}
	}
	
	return 0;
}



void func5()
{
		
	int a=210;
	int n[50];
	int l=0;
	int prime=0;
	clock_t start,end;
	int order,i,j;
	int t;
	long double time;
	
	for( j=9;j<a;j++)
	{
		
		t=0;
		
		
		if((j%2!=0)&&(j%3!=0)&&(j%5!=0)&&(j%7!=0))
		{
			n[l++]=j;
			printf("(j%%(i+%d)== 0)||",j);
		}
		
		
		/*
		for(i=2;i<=sqrt(j);i++)
		{
			if(j%i==0)
			{	
				t++;
				break;
			}
		}
		
		if(t==0)
		{
			n[l++]=j;
			printf(" %d",j);
		}*/
	
	}
	
	//printf("%d  ",l);	
		
	for(int k=4;k<8;k++)
	{
		
		order=pow(10,k);
		prime=4+124;
		start=clock();

		for( j=210;j<order;j++)
		{
			t=0;
			
			if((j%2==0)||(j%3==0)||(j%5==0)||(j%7==0))
			{
				t++;
				
			}
			else
			{
				for(int i=0;i<=sqrt(j);i+=210)
					if((j%(i+11)== 0)||(j%(i+13)== 0)||(j%(i+17)== 0)||(j%(i+19)== 0)||(j%(i+23)== 0)||(j%(i+29)== 0)||(j%(i+31)== 0)||(j%(i+37)== 0)||(j%(i+41)== 0)||(j%(i+43)== 0)||(j%(i+47)== 0)||(j%(i+53)== 0)||(j%(i+59)== 0)||(j%(i+61)== 0)||(j%(i+67)== 0)||(j%(i+71)== 0)||(j%(i+73)== 0)||(j%(i+79)== 0)||(j%(i+83)== 0)||(j%(i+89)== 0)||(j%(i+97)== 0)||(j%(i+101)== 0)||(j%(i+103)== 0)||(j%(i+107)== 0)||(j%(i+109)== 0)||(j%(i+113)== 0)||(j%(i+121)== 0)||(j%(i+127)== 0)||(j%(i+131)== 0)||(j%(i+137)== 0)||(j%(i+139)== 0)||(j%(i+143)== 0)||(j%(i+149)== 0)||(j%(i+151)== 0)||(j%(i+157)== 0)||(j%(i+163)== 0)||(j%(i+167)== 0)||(j%(i+169)== 0)||(j%(i+173)== 0)||(j%(i+179)== 0)||(j%(i+181)== 0)||(j%(i+187)== 0)||(j%(i+191)== 0)||(j%(i+193)== 0)||(j%(i+197)== 0)||(j%(i+199)== 0)||(j%(i+209)== 0))
					{
						
						t++;
						break;
					}
			}
	
			if(t==0)
				prime++;
				//printf("%d ",j);
		}
		
		printf(" Order :- %d",k);
		
		printf(" No of prime :- %-8d",prime);
		
		end=clock();
	
		time = ((long double)(end-start))/CLOCKS_PER_SEC;
	
		printf("  Time taken = %Lf \n",time);
	}
	
	printf("\n\n Func 5");
}																				
	
	

	
	
	
	
	

void main()
{
	int n;
	scanf("%d",&n);
	/*
	printf("\n\n Func 1 Start  \n\n");
	func1(n);*/
	printf("\n\n Func 2 a Start  \n\n");
	func2(n);
	printf("\n\n Func 2 b Start  \n\n");
	func2b(n);
	printf("\n\n Func 3 Start  \n\n");
	func3(n);
	printf("\n\n Func 3 Start  \n\n");
	func3b(n);
	printf("\n\n Func 4 Start  \n\n");
	func4(n);
	printf("\n\n Func 5 Start  \n\n");
	func5(n);
	
}
