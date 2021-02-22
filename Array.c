#include<stdio.h>
#include<conio.h>
#include<windows.h>

void main(){
int a[15];
int i=0;
int point=0;
int rep=0;
int repElement=0;
int choice=0;
int indexPos=0;
int insert=0;
int now=0;
int prev=0;
int next=0;
int len=0;
printf("Enter The length of array\n");
scanf("%d",&len);
printf("Enter the elements\n");
        for(i=0;i<len;i++){
            scanf("%d",&a[i]);
        }

        for(i=0;i<len;i++){
            printf("%d ",a[i]);
        }
printf("\nEnter choice \n1.point\n2.index replace\n3.element search\n4.insert\n");
scanf("%d",&choice);
system("cls");
for(i=0;i<len;i++){
            printf("%d ",a[i]);
        }
 switch(choice){
case 1:
    //To point a particular  statement.
printf("\nTo point an array element\n\n");
scanf("%d",&point);
printf("%d",a[point]);
break;
 case 2:
//To replace a particular statement with Index
printf("\nTo replace a particular  element with index\n");
printf("Enter the index\n");
scanf("%d",&rep);
printf("\n%d",a[rep]);
printf("\nEnter the no. to be replaced with\n");
scanf("%d",&a[rep]);
printf("\n");
for(i=0;i<len;i++){
            printf("%d ",a[i]);
        }
break;
case 3:
//3.To replace a particular statement without Index
printf("\nEnter the no. to be searched\n");
scanf("%d",&repElement);
for(i=0;i<len;i++){
            if(repElement==a[i])
          {
              printf("position(index+1) of %d is %d\n\n\n",repElement,i+1);
          }
}
break;
case 4:
    //To insert a no. in the Array
printf("\n\nEnter the Index(position-1) where the no to be inserted\n");
scanf("%d",&indexPos);
printf("\nEnter the no to be inserted\n");
scanf("%d",&insert);

        for(i=(len+1);i>=0 ;i--){
            if((i)!=indexPos){
               a[i]=a[i-1];
            }
            else{
             a[i]=insert;
             break;
            }
        }
        for(i=0;i<len+1;i++){
            printf("%d ",a[i]);
        }

break;
default:printf(insert);
break;
 }
}
