#include <stdio.h>
#include <assert.h>


int factors(int, int []);

int main(void) {
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
