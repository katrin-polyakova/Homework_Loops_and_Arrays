//
//  main.c
//  Homework_Loops_and_Arrays
//
//  Created by Kate Polyakova on 10/27/14.
//  Copyright (c) 2014 Kate Polyakova. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void Output_of_Tree_Numbers (int limit);
void Odd_Sequence (int N);
int Sum_Numbers (int N);
void Print_Numbers (int N, int M);
int Multiply_Numbers13 ();
int Sum_of_Numbers_5_7 (int M, int N);

void Array_Fist_Element_Bigger_A (int A);
void Array_Find_Originality ();
void Array_Sum_of_Square ();
void Array_Counter ();
int Array_Sign_Change ();
int Array_Average ();
void Array_of_Fibonacci ();

int main()
{
    Output_of_Tree_Numbers (9);
    printf("\n");
    Odd_Sequence (15);
    printf("\n");
    Sum_Numbers (20);
    printf("\n");
    Print_Numbers (6, 150);
    printf("\n");
    Multiply_Numbers13 ();
    printf("\n");
    Sum_of_Numbers_5_7 (4, 50);
    printf("\n");
    
    Array_Fist_Element_Bigger_A(15);
    printf("\n");
    Array_Find_Originality ();
    printf("\n");
    Array_Sum_of_Square ();
    printf("\n");
    Array_Counter ();
    printf("\n");
    Array_Sign_Change ();
    printf("\n");
    Array_Average ();
    printf("\n");
    Array_of_Fibonacci ();
    printf("\n");
    
    return 0;
}

void Output_of_Tree_Numbers (int limit)
{
    for (int i=1; i<=limit; i++)
    {
        for (int a=1; a<=i; a++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    // или
//    int i=1;
//    while (i<=limit)
//    {
//        int a=1;
//        while (a<=i)
//        {
//            printf("%d ",i);
//            a++;
//        }
//        printf("\n");
//        i++;
//    }
}
void Odd_Sequence (int N)
{
    int a=0;
    for (int i=1; i<=999; i=i+2)
    {
        a=a+1;
        if (a<=N)
        {
            printf("%d ",i);
        }
        
    }
    printf("\n");
    // или
//    int a=0;
//    int i=1;
//    while (i<=999)
//    {
//        a++;
//        if (a<=N)
//        {
//            printf("%d ",i);
//        }
//        i=i+2;
//    }
//    printf("\n");
}
int Sum_Numbers (int N)
{
    int a=0;
    for (int i=1; i<=N; i++)
    {
        a=a+i;
    }
    printf("%d\n",a);
    // или
//    int a=0;
//    int i=1;
//    while (i<=N)
//    {
//        a=a+i;
//        i++;
//    }
//    printf("%d\n",a);
    return a;
}
void Print_Numbers (int N, int M)
{
    for (int i=N; i<=M; i++)
    {
        if (!(i%3)&&(i%5))
        {
            printf("%d ",i);
        }
    }
    // или
//    int i=N;
//    do
//    {
//        if (!(i%3)&&(i%5))
//        {
//            printf("%d ",i);
//        }
//        i++;
//    }
//    while (i<=M);
    printf("\n");
}
int Multiply_Numbers13 ()
{
    int result=1;
    
    for (int i=10; i<=99; i++)
    {
        if (!(i%13)&&(i%2))
        {
            result=result*i;
            printf("%d ",i);
        }
    }
    // или
//    int i=10;
//    do
//    {
//        if (!(i%13)&&(i%2))
//        {
//            result=result*i;
//            printf("%d ",i);
//        }
//        i++;
//    }
//    while (i<=99);
    
    printf("\nMultiplay = %d\n",result);
    return result;
}
int Sum_of_Numbers_5_7 (int M, int N)
{
    int Result=0;
    for (int i=M; i<=N; i++)
    {
        if ((!(i%5))||(!(i%7)))
        {
            printf("%d ",i);
            Result=Result+i;
        }
    }
    // или
//    int Result=0;
//    int i=M;
//    do
//    {
//        if ((!(i%5))||(!(i%7)))
//        {
//            printf("%d ",i);
//            Result=Result+i;
//        }
//        i++;
//    }
//    while (i<=N);
    
    printf("\nSum = %d\n",Result);
    return Result;
    
}


void Array_Fist_Element_Bigger_A(int A)
{
    int arr [16] = {12,0,7,31,5,82,43,3,24,0,7,8,2,0,14,9};
    int a=0;
    do
    {
        if (arr[a]<A)
        {
            a++;
        }
        else
        {
            printf("at index %d element %d > %d\n", a, arr [a], A);
            break;
        }
    }
    while (a<16);
}
void Array_Find_Originality ()
{
    int arr [16] = {0,1,1,2,2,2,3,4,4,5,7,8,8,10,14,14};
    int res [16] = {0};
    int n=0;
    if (arr[0]!=arr[1])
    {
        printf("%d ", arr [0]);
        res[0]=arr[0];
        int n=1;
        for (int a=1; a<16; a++)
        {
            if ((arr[a-1]!=arr[a])&&(arr[a]!=arr[a+1]))
            {
                printf("%d ", arr [a]);
                res[n]=arr[a];
                n++;
            }
        }
    }
    else
    {
        for (int a=0; a<16; a++)
        {
            if ((arr[a-1]!=arr[a])&&(arr[a]!=arr[a+1]))
            {
                printf("%d ", arr [a]);
                res [n]=arr [a];
                n++;
            }
        }
    }
    printf("\nArray of originality elements:\n");
    for (int n=0; n<16; n++)
    {
        printf("%d ",res[n]);
    }
    printf("\n");
}
void Array_Sum_of_Square ()
{
    float arr [16] = {-2.3,0,-7.6,1,5.9,-8,13.4,3.6,-24.4,0,4.1,8.3,-2,0,14,9.9};
    float result=0;
    for (int a=0; a<16; a++)
    {
        if ((fabs(arr[a]))<=5)
        {
            printf("%.1f ", arr[a]);
            result=result+arr[a]*arr[a];
        }
    }
    printf("\n%.2f\n", result);
}
void Array_Counter ()
{
    int arr [16] = {12,-3,0,25,-6,0,43,5,-29,51,3,7,-36,-11,9,0};
    int res_0=0;
    int res_pos=0;
    int res_neg=0;
    
    for (int a=0; a<16; a++)
    {
        if (arr[a]<0)
        {
            res_neg++;
        }
        else if (arr[a]>0)
        {
            res_pos++;
        }
        else
        {
            res_0++;
        }
    }
    printf("Array has:\n positive elements: %d\n negative elements: %d\n 0: %d\n", res_pos, res_neg, res_0);
    
}
int Array_Sign_Change ()
{
    int arr [16] = {1,0,-6,4,-3,2,0,-2,-4,-5,1,3,-9,-5,2,5};
    int counter=0;
    for (int a=0; a<16; a++)
    {
        if ( ( (arr[a]>=0) && (arr[a+1]<0) ) || ( (arr[a]<0) && (arr[a+1]>=0) ) )
             {
                 // printf("%d i %d; ",arr[a], arr[a+1]);
                 counter++;
             }
    }
    printf("Sign chahges %d times\n", counter);
    return counter;
}
int Array_Average ()
{
    int arr [16] = {12,0,7,31,5,82,43,3,24,0,7,8,2,0,14,9};
    float Result=0;
    for (int a=0; a<16; a++)
    {
        Result=Result+arr[a];
    }
    printf("Average of elements = %f\n", Result/16);
    
    return Result/16;
}
void Array_of_Fibonacci ()
{
    int arr [15] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int a=1;
    int n1=0;
    int n2=1;
    int result=0;
    for (int i=1; i<15; i++)
    {
        result=n1+n2;
        
        n1=n2;
        n2=result;
        
        arr[a]=result;
        a++;
        // printf("%d ", result);
    };
    printf("15 first Fibonacci numbers:\n");
    for (int a=0; a<15; a++)
    {
        printf("%d ", arr[a]);
    }
}






