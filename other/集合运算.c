#include<stdio.h> 
#include<stdlib.h>
int a[50]={0},b[50]={0},c[50]={0},d[50]={0},e[50]={0};

//��ʾ���
void show (){    
 printf("1---���뼯��A�ͼ���B\n");
 printf("2---�󼯺�A��B\n");
 printf("3---�󼯺�A��B\n");
 printf("4---�󼯺�A-B\n");
 printf("�˳�������һ��������");

}

//���뼯��A��B 
void input(int x,int y){ 
 int i,j;
 printf("������A��Ԫ��");
 for(i=0;i<x;i++){     
  scanf("%d",&a[i]);
  getchar();
  for(j=0;j<i;j++){    //ͨ��ѭ���жϽ��в��� 
   if(a[i]==a[j]){    
    printf("�����������������");
    a[i]=0;
    i-- ;
   }
  }
 }  
 printf("������B��Ԫ��");
 for(i=0;i<y;i++){     
  scanf("%d",&b[i]);
  getchar();
  for(j=0;j<i;j++){    //ͨ��ѭ���жϽ��в��� 
   if(b[i]==b[j]){    
    printf("�����������������");
    b[i]=0; 
   }
  }
 } 
}
 //�󼯺�A��B����Ϊ��������ʹ�ã���������ֿ��� 
int hand(int x,int y){
 int i,j,k=0;
 for(i=0;i<x;i++){
  for(j=0;j<y;j++){
   if(a[i]==b[j]){
    c[k]=a[i];
    k++;
   }
  }
 }
 return k;
} 

//�������
void outhand(int k){
 int i;
 printf("A��B={");
 for(i=0;i<k-1;i++){
  printf("\t %d,",c[i]);
 } 
 printf("\t %d}\n",c[k-1]);
} 
//�󼯺�A��B
void combine(int x,int y,int k){
 int i,j,m=0,n;
 int com[50]={0}; 
 for(i=0;i<x;i++){
  d[m]=a[i];
  m++;
 }
 for(i=0;i<y;i++){
  d[m]=b[i];
  m++;   //mΪa��b���ϵ��ܵ�Ԫ�ظ��� 
 }
 /*
 for(i=0;i<x+y-k;i++){    //x+y-kΪ������ʵ��Ԫ�ظ��� ,�Ҹ�ѭ����ȥ�ظ�Ԫ�� 
  for(j=m;j>i;j--){
   if(d[j]==d[i]){
    d[j]=d[j+1]; //���ظ�Ԫ�غ�һλԪ�ظ��Ǹ�Ԫ�� 
    i--;   //���½��и���ѭ����������һ�������Ķ��Ԫ���ظ���Ӱ�� 
    break;   //�������forѭ�� 
   }
  }
 }
 */
for(i=0;i<x+y-k;i++){    //x+y-kΪ������ʵ��Ԫ�ظ��� ,�Ҹ�ѭ����ȥ�ظ�Ԫ�� 
  for(j=i+1;j<m;j++){
   if(d[j]==d[i]){
    for(n=j;n<m;n++){
     d[n]=d[n+1];
    }
    break;
   }
  }
 }
 printf("A��B={");
 for(i=0;i<x+y-k-1;i++){
  printf("\t %d,",d[i]);
 } 
 printf("\t %d}\n",d[x+y-k-1]);
}
 //�󼯺�A-B 
void reduce(int x,int k){
 int i,j,m;
 for(i=0;i<x;i++){
  e[i]=a[i];
 }
 for(i=0;i<x-k;i++){  //˼·ͬ�����г�ȥ�ظ�Ԫ�� 
  for(j=0;j<k;j++){
   if(e[i]==c[j]){
    for (m=i;m<x;m++){  //���ظ�������Ԫ��ǰ�� 
     e[m]=e[m+1]; 
    }
    i--;
    break;
   }
  }
 }
 printf("A-B={");
 for(i=0;i<x-k-1;i++){
  printf("\t %d,",e[i]);
 } 
 printf("\t %d}\n",e[x-k-1]);
}
int main(){
 int x,y,i,j,k,choice;
 while(1){
  show();
  printf("��ѡ������Ҫ���еĲ���\n");
  scanf("%d",&choice);
  if(choice<0){
   printf("���˳���");
   return 0;
  }else{
   switch(choice){
    case 1:
     printf("������A������Ԫ�ظ���\n");
     scanf("%d",&x);
     printf("������B������Ԫ�ظ���\n");
     scanf("%d",&y);
     input(x,y);
     k=hand(x,y);
     printf("�밴�س�������\n");
     getchar();
     system("cls");
     break;
    case 2:
     outhand(k);
     printf("�밴�س�������\n");
     getchar();
     getchar();
     system("cls");
     break;
    case 3:
     combine(x,y,k);
     printf("�밴�س�������\n");
     getchar();
     getchar();
     system("cls");
     break;
     case 4:
     reduce(x,k);
     printf("�밴�س�������\n");
     getchar();
     getchar();
     system("cls");
     break;
    default :
     printf("��������\n");
     printf("�밴�س�������\n");
     getchar();
     getchar();
     system("cls");
     break;
   }
  }
 }
 return 0;
}
