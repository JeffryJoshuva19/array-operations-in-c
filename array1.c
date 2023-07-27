#include<stdio.h>
#include<stdlib.h>

int n;
void traverse(int arr[]){
    //function for array traverse;
       for(int i=0;i<n;i++){
            printf("%d",arr[i]);
            printf("\n");
       }
}
int present(int arr[],int l){
    //function to check the element is present or not;
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]==l){
            x=1;
        }
    }
    return x;
    }
void search(int arr[]){
    //search an element in an array;
    int y,x=0;
    printf("Enter your key element: ");
    scanf("%d",&y);
    for(int i=0;i<n;i++){
        if(arr[i]==y){
            printf("your key element: %d\n""Index number of key element: %d",arr[i],i) ;
            x=1;
            break;
        }

    }
    if(x==0){
        printf("key element not found");
    }

}
void delete(int arr[]){
    //delete the element in an array.
    int s;
    printf("Delete by Position - 1\nDelete by Element -2\n");
    scanf("%d",&s);
    if(s==1){
        //delete the element by it's position.
        int b;
        printf("\nEnter the position : ");
        scanf("%d",&b);
        for(int i=b-1;i<n;i++){
            arr[i]=arr[i+1];
        }
    }
    else if(s==2){
        //delete the element that should be deleted.
        int e,f=0;
        printf("\nWhich element you wnant to delete : ");
        scanf("%d",&e);
        if(present(arr,e)){
            for(int i=0;i<n;i++){
                if(arr[i]==e){
                f=1;
                }
                if(f==1){
                    arr[i]=arr[i+1];
                }
            }

        }
    }
    else{
        printf("\nInvalid");
        return;
    }
    printf("\n");
    n--;
    printf("After deletion: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}
void merge(int arr[]){
    //merge the element in an array;
    printf("Enter How many element you want to merge in to the array: ");
    int g;
    scanf("%d",&g);
    int arr2[g];
    int o=n+g;
    printf("Enter which array element you need to add: ");
    for(int i=0;i<g;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0,j=n;j<o;i++,j++){
            arr[j]=arr2[i];

    }
    printf("After mearging your array is: ");
    for(int i=0;i<o;i++){
        printf("%d ",arr[i]);
    }
    n=n+g;


}
void insert(int arr[]){
    //insert an element.
    printf("insertion beging-1\ninsertion end-2\nInsertion any position-3\n\n\n");
    int q;
    printf("Select your option: ");
    scanf("%d",&q);
    if(q==1){
        //insert the element in begining.
       int e;
       printf("Enter the element to be inserted: ");
       scanf("%d",&e);
       for(int i=0;i<n+1;i++){
            int t=arr[i];
            arr[i]=e;
            e=t;
        }
    }
    else if(q==2){
        //insert the element in the end of the array.
        int e;
        printf("Enter the element to be inserted: ");
        scanf("%d",&e);
        for(int i=0;i<n+1;i++){
            if(i==n){
               arr[i]=e;
            }
        }
    }
    else if(q==3){
        //insert the element at selected position.
        int P,e,t;
        printf("Enter the postion : ");
        scanf("%d",&P);
        printf("\nEnter the element : ");
        scanf("%d",&e);
        for(int i=P-1;i<n+1;i++){
            int t=arr[i];
            arr[i]=e;
            e=t;
        }
    }
    printf("After insertion: ");
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    n++;
}
void sort(int arr[]){
    //sorting the element in an array.
    int t;
    printf("Sort in the ascending order-1\nSort in decending order-2\n");
    int o;
    printf("Select your opinion: ");
    scanf("%d",&o);
    if(o==1){
        //sorting in ascending order.
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}
    else if(o==2){
        //sorting in descending order.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int Continue(){
    char k;
    printf("\n\nDo you want to continue(yes/no) : ");
    scanf("\n%c",&k);
 
    if(k=='yes'){
        return 1;
        
    }
    else{
        return 0;
    }
}

int main()
{  
   printf("Enter the size of the array:\n");
   int c;
   scanf("%d",&n);
   int arr[n*2];
   printf("Enter the elements of the array:\n");
   for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }
    do{
        printf("\n");
        printf("Operation list:\n\n");
        printf("Array Traversing-1\nArray Searching-2\nArray Deletion-3\nArray Merging-4\nArray Inserting-5\nArrar sorting-6\n\n\n");
        printf("Ener your choise: ");
        scanf("%d",&c);
        switch(c){
            case 1:
               traverse(arr);
               break;
            case 2:
               search(arr);
               break;
            case 3:
               delete(arr);
               break;
            case 4:
               merge(arr);
               break;
            case 5:
               insert(arr);
               break;
            case 6:
               sort(arr);
               break;
            default:
               printf("Invalid");
               break;
        }

    }
    while(Continue());
    printf("Welcome");
       return 0;


}
//jeffry joshuva amalan j
