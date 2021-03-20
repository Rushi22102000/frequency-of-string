#include<string.h>

//count individual
int count(char *s,char ch)
{
	int i=0,j=0,x[100];
	for(i=0;i<100;i++)
	{x[i]=1;}
for(i=0;i<strlen(s);i++){
		if(s[i]==ch)
		{j++;}			
}return j;}



main()
{
	int i=0,xx=1,u=0,b=0;
	char s[]="raamssar",m="",x[100];
	int arr[100],arr1[100];
	int l=strlen(s);
	int l1,l2=0;
	for(i=0;i<strlen(s);i++)
	{
		arr[i]=count(s,s[i]);
	}

//remove dupicates from counter
xx=1;i=0;

m=0;l2=sizeof(arr)/sizeof(int);


	while(l!=i)
	{
		if(xx>1&&m==arr[i])
		{
		u=i;
			while(i!=l2-1)
			{
				arr[i]=arr[i+1];i++;
			}
			arr[i]=0;
			i=u+1;
			xx=xx+1;
			b++;
		}
		
		if(arr[i]>1&&xx>=1)
		{
			xx=xx+1;
			m=arr[i];
		}
		
		i++;
		
	}
	

//remove duplicates from string
xx=1;i=0;
m=0;while(l!=i)
	{
		if(xx>1&&m==s[i])
		{
		u=i;
			while(i!=l-1)
			{
				s[i]=s[i+1];i++;
			}
			s[i]=NULL;
			i=u+1;
			xx=xx+1;
			b++;
		}
		
		if(count(s,s[i])>1&&xx>=1)
		{
			xx=xx+1;
			m=s[i];
		}
		
		i++;
		
	}

xx=1;i=0;

m=0;
	for(i=0;i<strlen(s);i++){
	x[i]=s[i];}
	l1=strlen(x);
	
	for(i=0;i<l2;i++){
	arr1[i]=arr[i];
}
l2=sizeof(arr1)/sizeof(int);
	for(i=0;i<l1-2;i++){printf("%c is %d times\n",x[i],arr1[i]);}
	
	
		
}

