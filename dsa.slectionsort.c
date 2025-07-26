void main(){

int a[]={45,54,88,1,66,77,2,1};

 for(int i=0;i<8;i++)
    {
    int min = a[i];
    int index= i;
    for(int j=i+1;j<8;j++){
        if (min > a[j]){
            min=a[j];
            index = j;
        }
    }
    int temp = a[i];
    a[i]=a[index];
    a[index]=temp;

}
for (int i =0;i<8;i++){
    printf("%d  ",a[i]);
}





}
