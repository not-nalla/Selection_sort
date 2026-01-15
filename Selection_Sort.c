// Selection Sort for Elements
#include<stdio.h>
int main(){
    int n,a[100];
    int temp;

    printf("Enter the no of Elements :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter Element %d :",i+1);
        scanf("%d",&a[i]);
    }

    printf("---Before Sorting---\n");
    for(int i=0;i<n;i++){
        printf("Element %d: %d\n",i+1,a[i]);
    }

    //Selection Sort Logic
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("---After Sorting---\n");
    for(int i=0;i<n;i++){
        printf("Element %d : %d\n",i+1,a[i]);
    }
    return 0;
}


// Selection Sort for String
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char temp[50],a[50][100];

    printf("Enter the no of String :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter String %d :",i+1);
        scanf("%s",a[i]);
    }

    printf("---Before Sorting---\n");
    for(int i=0;i<n;i++){
        printf("String %d: %s\n",i+1,a[i]);
    }

    //Selection Sort Logic
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(a[i],a[j]) > 0){
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }

    printf("---After Sorting---\n");
    for(int i=0;i<n;i++){
        printf("Element %d : %s\n",i+1,a[i]);
    }
    return 0;
}