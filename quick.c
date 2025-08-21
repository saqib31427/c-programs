void quick(int a[],int n,int beg,int end,int *loc)
{
    int left ,right,temp;
    left=beg;
    right=end;
    *loc=beg;

  step1:  while(a[*loc]<=a[right] && right !=*loc)
    {
        right--;
    }
    if (right==*loc)
    {
        return;
    }
    if (a[*loc]>a[right])
    {
        temp=a[*loc];
        a[*loc]=a[right];
        a[right]=temp;
        *loc=right;
    }
     goto step2;
      step2:  while(a[*loc]>=a[left] && left!=*loc)
    {
        left++;
    }
    if (left==*loc)
    {
        return;
    }
    if (a[*loc]<a[left])
    {
        temp=a[*loc];
        a[*loc]=a[left];
        a[left]=temp;
        *loc=left;
    }
goto step1;
}

void quick_sort(int a[],int n)
{
int beg ,end , top=-1,loc;
int lower[10],upper[10];
if(n>1)
{
    top++;
    lower[top]=0;
    upper[top]=n-1;
}
while (top!=-1)
{
    beg=lower[top];
    end=upper[top];
    top--;
    quick(a,n,beg,end,&loc);
    if(beg<loc-1)
    {
        top++;
        lower[top]=beg;
        upper[top]=loc-1;

    }
    if(loc+1<end){
        top++;
        lower[top]=loc+1;
        upper[top]=end;
    }
}
}

void main(){
    int a[]={5,88,22,4,66,88,7,11,3,44,55,52,55};
    int n=13;
    quick_sort(a,n);
    printf("the sorted array is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


    }
