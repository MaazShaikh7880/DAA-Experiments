#include <stdio.h>
#include <math.h>

float func1(int n);//(3/2)^n function
float func2(int n);// n cube function
int func3(int n);// n(linear) function
float func4(int n);// 2^n function
double func5(double n);//logn function
int func6(int n);//2^2^n+1 function
double func7(double n);//n*logn function
double func8(double n);//log(log(n)) function
double func9(double n);//2^logn function
double func10(double n);//n^log(log(n)) function
double factorial(int n);//Factorial function



float func1(int n){
    return pow(1.5,n);
}

float func2(int n){
    return n*n*n;
}

int func3(int n){
    return n;
}

float func4(int n){
    return pow(2,n);
}

double func5(double n){
    return (log(n))/log(2);
}

int func6(int n){
    return pow(2,pow(2,n+1));
}

double func7(double n){
    return n*(log(n));
}

double func8(double n){
    return log(log(n));
}

double func9(double n){
    return pow(2,log(n));
}

double func10(double n){
    return pow(n,log(log(n)));

}

double factorial(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
    
}

int main(){
    int n;
    float output;
    int choice;
    
    
    do{
    printf("\nEnter 1 for (3/2)^n function\nEnter 2 for n^3(cubic) function\nEnter 3 for n(linear) function\nEnter 4 for 2^n function\nEnter 5 for lgn function\nEnter 6 for 2^2^n+1 function\nEnter 7 for nlogn function\nEnter 8 for loglogn function\nEnter 9 for 2^logn function\nEnter 10 for n^loglogn function\nEnter 11 for n! function\nEnter 0 for exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:printf("Input\toutput\n");
               for(int n=0;n<=100;n+=10){
                     output=func1(n);
                     printf("%d\t%0.2f\n",n,output);
                   }
               break;
        case 2:printf("Input\toutput\n");
               for(int n=0;n<=100;n+=10){
                     output=func2(n);
                     printf("%d\t%0.2f\n",n,output);
                   }
               break;
        case 3:printf("Input\toutput\n");
               for(int n=0;n<=100;n+=10){
                     output=func3(n);
                     printf("%d\t%0.2f\n",n,output);
                   }
                break;
        case 4:printf("Input\toutput\n");
               for(int n=0;n<=100;n+=10){
                     output=func4(n);
                     printf("%d\t%0.2f\n",n,output);
                   }
                break;
       case 5:printf("Input\toutput\n");
              for(int n=0;n<=100;n+=10){
                     output=func5(n);
                     printf("%d\t%0.2f\n",n,output);
                   }
              break;
       case 6:printf("Input\toutput\n");
              for(int n=0;n<=100;n+=10){
                     output=func6(n);
                     printf("%d\t%0.2f\n",n,output);
                   }
              break;
       case 7:printf("Input\toutput\n");
              for(int n=0;n<=100;n+=10){
                     output=func7(n);
                     printf("%d\t%0.2f\n",n,output);
                   }
              break;
        case 8:printf("Input\toutput\n");
               for(int n=0;n<=100;n+=10){
                     output=func8(n);
                     printf("%d\t%0.2f\n",n,output);
                   }
              break;
        case 9:printf("Input\toutput\n");
               for(int n=0;n<=100;n+=10){
                     output=func9(n);
                     printf("%d\t%0.2f\n",n,output);
                   }
              break;
        case 10:printf("Input\toutput\n");
                for(int n=0;n<=100;n+=10){
                     output=func10(n);
                    printf("%d\t%0.2f\n",n,output);
                   }
              break;
        case 11:printf("Input\toutput\n");
                for(int i=0;i<=20;i+=2){
                   output=factorial(i);
                   printf("%d\t%0.2f\n",i,output);
                } 
                break;
       default: printf("program finished");
              break;
        
    }}while(choice!=0);
    return 0;
    



}

