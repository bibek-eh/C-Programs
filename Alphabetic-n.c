#include <stdio.h>
#include <string.h>
void main()
{
    char name[100][15], temp[15];
    int i, j, n ;
    printf("How many names?: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Enter names : ");
        scanf("%s", name[i]);
    }
    for(i=0; i<n; i++){
       strcpy( name[i],strupr(name[i]));
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(strcmp(name[i],name[j]) > 0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    
    printf("The names are in ascending order :-\n");
    for(i=0; i<n; i++){
        printf("%d.%s\n",i+1,name[i]);
    }
}