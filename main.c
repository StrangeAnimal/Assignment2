#include <stdio.h>


double p;
double i;
double r;
int loop =1;

double P(double i,double r){
    
    return (i*i*r);
    
    
    }
double I(double p,double r){
    
    return sqrt(p/r);
    }
double R(double p,double i){
    
    return p/(i*i);
    }

int main()
{

while(loop ==1){
    
	printf("Enter P\n");
    scanf("%lf",&p);
    printf("Enter I\n"); //inputting the values
    scanf("%lf",&i);
    printf("Enter R\n");
    scanf("%lf",&r);
    
    if(p ==0 && i>0 && r>0) loop =0;  //check that one of the values is 0 if not loop
    if(i ==0 && p>0 && r>0) loop =0;  //only one must be zero to prevent x/0 errors
    if(r ==0 && i>0 && p>0) loop =0;
	
	if(!((p ==0 && i>0 && r>0)||(i ==0 && p>0 && r>0)||(r ==0 && i>0 && p>0))){
	
	printf("Error please re enter the values\n");
	
	}
}

if(p==0){
    printf("P = %.4lfW",P(i,r));
    }
if(i==0){
    printf("I = %.4lfA",I(p,r));
    
    }
    if(r==0){
    printf("R = %.4lfΩ",R(p,i));
    
    }

    return 0;
}
