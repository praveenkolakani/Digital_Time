#include<stdio.h>

int main() {
   int x,i,j,k=0,l,n=0,m=0,r,t,d,s,a[10],hr=0,min=0,max=0,minute,second,m1=0,m2=0;
   for(i=0;i<9;i++)
   {
       scanf("%d,",&a[i]);
   }
   for(i=8;i>=0;i--)
   {
       if(a[i]==2)
       {
         n=2;
         a[i]=-1;
         break;
       }
        if(a[i]==1)
        {
        m=1;
        a[i]=-1;
        break;
        }
   }
   if(n==0&&m==0)
   {
   for(i=0;i<9;i++)
   {
     if(a[i]>a[m1])
     m1=i;
     if(a[i]<a[m2])
     m2=i;
   }
   max=a[m1];
   min=a[m2];
   a[m1]=-1;
   a[m2]=-1;
   }
 //  printf("%d %d %d %d\n",min,max,n,m);
   if(min==0||n!=0||m!=0)
   {
       if(n>0||m>0)
       {
           if(n>m)
            hr=n;
            else
            hr=m;
            for(i=8;i>=0;i--)
            {
                if(a[i]<4&&hr==2&&a[i]>0)
                {
                hr=hr*10+a[i];
                a[i]=-1;
                break;
                }
                if(a[i]<=9&&hr==1&&a[i]>0)
                {
                hr=hr*10+a[i];
                a[i]=-1;
                break;
                }
            }
       }
       else
       {
         hr=max;
       }
       for(i=8;i>=0;i--)
       {
           if(a[i]<6&&a[i]>=0)
           {
               minute=a[i];
               a[i]=-1;
               break;
           }
       }
      // printf("\n%d\n",minute);
       for(i=8;i>=0;i--)
       {
           if(a[i]<=9&&a[i]>=0)
           {
               minute=minute*10+a[i];
               a[i]=-1;
               break;
           }
       }
       for(i=8;i>=0;i--)
       {
           if(a[i]<6&&a[i]>=0)
           {
               second=a[i];
               a[i]=-1;
               break;
           }
       }
       for(i=8;i>=0;i--)
       {
           if(a[i]<=9&&a[i]>=0)
           {
               second=second*10+a[i];
               a[i]=-1;
               break;
           }
       }
       if(hr<=9&&minute<=9&&second<=9)
       printf("0%d:0%d:0%d",hr,minute,second);
       else if(minute<=9&&second<=9)
       printf("%d:0%d:0%d",hr,minute,second);
       else if(second<=9&&hr<=9)
       printf("0%d:%d:0%d",hr,minute,second);
       else if(hr<=9&&minute<=9)
        printf("0%d:0%d:%d",hr,minute,second);
        else if(hr<=9)
        printf("0%d:%d:%d",hr,minute,second);
        else if(minute<=9)
        printf("%d:0%d:%d",hr,minute,second);
        else if(second<=9)
        printf("%d:%d:0%d",hr,minute,second);
       else
         printf("%d:%d:%d",hr,minute,second);
   }
   else
   {
       printf("Impossible");
   }
   return 0;
}
