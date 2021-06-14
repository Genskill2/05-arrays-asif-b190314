#include <stdio.h>

int max(int array[], int n)
{
int x=array[0]-1;
for(int i=0;i<n;i++)
{
if(array[i]>x)
{
x=array[i];
}
}
return x;
}

int min(int array[],int n)
{
int x=array[0]+1;
for(int i=0;i<n;i++)
{
if(array[i]<x)
{
x=array[i];
}
}
return x;
}

float average(int array[],int n)
{
float x=0;
for(int i=0;i<n;i++)
{
x=x+array[i];
}
x=x/n;
return x;
}

int mode(int array[],int n)
{
        int min=array[0]+1;
        int max=array[0]-1;
        for(int i=0;i<n;i++)
        { if(array[i]>max){max=array[i];}
          if(array[i]<min){min=array[i];}
                                            }
                                                                    
        int a=max-min+1;
                                                                    
        int array2[a];
        for(int i=0;i<a;i++)
        {array2[i]=min+i;}
                                                                    
                                                                     
        int array3[a];
        for(int i=0;i<a;i++)
        {array3[i]=0;}
        

        for(int i=0;i<a;i++)
        {
        for(int j=0;j<a;j++)
        {
        if(array[j]==array2[i])
        {
        array3[i]=array3[i]+1;
        }}}
                                                                    

        int maximum=0;
        int z=0;
        for(int i=0;i<a;i++)
        {
        if(array3[i]>maximum)
        {
        maximum=array3[i];
        z=i;
        }}
                                                                    
        int y=array2[z];
        return y;
        




}


int factors(int n,int sol[])
{
//int n=400;
int c=0;
int array[n];
int arr[n];
int k=0;
    
    for(int i=0;i<n;i++)
    {
        array[i]=0;
        arr[i]=0;
    }





    for(int i=2;i<=n;i++)
    {
        c=0;
        for(int j=1;j<=i;j++)
        {
            
            if(i%j==0)
            {
            c=c+1;
            }
        }
            if(c==2)
            {
            array[k]=i;
            k=k+1;
            }
         
    }

                                                    
    
    int z;
    z=n;
    for(int i=0;i<z;i++)
    {
        for(int j=0;j<z;j++)
        {
            if(array[j]!=0)
            {
                if(n%array[j]==0) 
                {
                    n=n/array[j];
                    arr[i]=array[j];
                    break;
                }
            }
        }
    }
                    








                                          
int l=0;
for(int i=0;i<z;i++)
{
if(arr[i]==0)
{
l=i;
break;
}
}


for(int i=0;i<l;i++)
{
sol[i]=arr[i];
}
                                           

return l;
}

