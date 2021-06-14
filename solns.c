#include <stdio.h>
#include <assert.h>


int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  
  assert (min(x, 7) == -3);

 
  assert (min(y, 1) == 5);
  printf("Min: passed\n");

  
  assert ((average(x, 7) - 4.7142) < 0.001);

  
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");

  int z[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(z, 12) == 4));

  
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");


  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
  }

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

