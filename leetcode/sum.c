/*
 *Given an array of integers,return indices of the two numbers such
 that they add up to a specific target.

Example:
    Given nums={2,7,11,15},target=9;
    Beacuse nums[0]+num[1]=2+7=9;
    return [0,1]


Author:GXTAO

Data:10/8/2017


 * */
#include<stdio.h>

void sum(int *a,int n);

int main(int argc,const char*argv[]){
    //已知数组；
    int a[]={55,50,99,80,1,30,70};
    //对已知数组进行快速排序
    int a_sort[]={1,30,50,55,70,80,99};
    sum(a_sort,7);
    
    return 0;
}
/**
 *    算法实现过程
 *（1）对已知数组进行快速排序
 *（2）对排序后的数组头部[0]和数组尾部[length]相加，判断是否等于100；是，打印；否，执行（3）（4）
 *（3）若相加<100,则i++;若和>100,则j--;
 * (4)i==j,退出程序
 * */
void sum(int *a,int n){
    for(int i=0,j=n-1;i!=j;){
        int sum=a[i]+a[j];
        if(sum==100){
            printf("%d %d\n",a[i],a[j]);
            i++;
            j--;
        }
        else if(sum<100){
        i++;
            }
        else if(sum>100){
            j--;
        }
    }
}
/**
 *时间复杂度:o(n)
 *
 * */
