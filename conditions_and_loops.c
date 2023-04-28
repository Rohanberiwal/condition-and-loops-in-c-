//code for printing odd numbers 
#include <stdio.h>

int main(){
    int x ;
    printf("enter the number;");
    scanf("%d",&x);
    for (int i=1 ; i<=x ; i++){
        if (i%2!=0){
            printf("%d\n",i);
            
        }
    }
    return 0;
}

//table for a n input number 
#include <stdio.h>

int main(){
    int n ;
    printf("enter the table for n ;");
    scanf("%d", &n);
    for (int i = 0; i<=10*n; i = i+n){
        printf("%d\n",i);
    }
    return 0;
}


// ap of the number by usesr inputs 
#include <stdio.h>

int main(){
    int a , d, n;
    printf("enter the value for a ");
    scanf("%d", &a);
    printf("enter the value for n ");
    scanf("%d", &n);
    printf("enter the value for d ");
    scanf("%d", &d);
    for (int i =0;i<=n ; i++){
        int m ;
        m = a +(i-1)*d;
        printf("%d\n", m );
    }
    return 0;
}



// annomoyous code 
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("enter the value for a");
    scanf("%d", &n );
    for (int i =1 ;i<=n;i++){
        printf("%d\n", pow(2,i));
        
    }
    return 0;
}




// decreasign gp 
// Online C compiler to run C program online
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main(){
    int a , n , d;
    printf("enter the value ");
    scanf("%d", &a);
    printf("enter the value ");
    scanf("%d", &n);
    printf("enter the value ");
    scanf("%d", &d);
    int z ;
    z = a ;
    for (int i=1; i<=n; i=i+1){
        printf("%d\n",z +(i-1)*d);
    }
    return 0;
}


// discarding the terms 
#include <stdio.h>
#include <math.h>
int main(){
    int a , n , d;
    printf("enter the value ");
    scanf("%d", &a);
    printf("enter the value ");
    scanf("%d", &n);
    printf("enter the value ");
    scanf("%d", &d);
    int z ;
    z = a ;
    for (int i=1; i<=n; i=i+1){
        if (z + (n-1)*d >=0){
            printf("%d\n",z+(n-1)*d);
        }
        
    }
    return 0;
}

//prime in c
#include <stdio.h>
#include <math.h>
int main(){
    int prime , i=2;
    printf("enter a number to check if it is prime ;");
    scanf("%d", &prime );
    for (i=2;  i<prime-1 ;i++){
        if (prime%i==0){
            printf("no not prime\n ");
            break ;
            
        }
        else{
            printf("yes\n");
            break ;
            
        }
        
    }
    return 0;
}

//even number from 1--->100
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main(){
int even ;
printf("enter ;");
scanf("%d ",&even);
    for (int i =1 ; i<=100; i++){
        if (i%2==0){
            printf("%d", i);
    
    }
    else{
        continue ;
    }
}

    return 0;
}

//factorial notation 

#include <stdio.h>
int main()
{
    int num , var =1 ;
    printf("enter the number ;");
    scanf("%d", &num);
    for (int i = 1 ; i<= num ;i=i+1)
    {
        var  = var*i;
        
    }
    printf("the factorial of the number is %d",var);
    return 0;
}

// the factroiL ofr n number 
#include <stdio.h>
int main()
{
    int nums , var=1 ;
    printf("enter the number u want to find the factorial  of ");
    scanf("%d", &nums);
    for (int i = 1 ; i<= nums ; i++)
    {
        var = var*i ;
        printf("the fact of the number %d is %d\n ", i , var);
    }
    return 0;
}


// number and power 


#include <stdio.h>
#include <math.h>

int main()
{
    int a , b , ch ;
    printf("enter the choice ");
    scanf("%d",&ch);
    printf("enter number a");
    scanf("%d",&a);
    printf("enter the number b");
    scanf("%d",&b);
    int z ;
    if (ch==1)
    {
        z = pow(a,b) ;
        printf("the power of the number is %d",z);
        
    }
    else if (ch == 2) 
    {
        z = pow(b,a) ;
        printf("the power of the number is %d", z );
        
    }
    else
    {
        printf("INVALID CHOICE");
    }
    return 0; 
    
}


// ascii value of any number or value 
#include <stdio.h>

int main() 
{
    char choice ;
    printf("enter the choice of alphabets ");
    scanf("%c", &choice);
    printf("the ascii value of the given choice is %d", choice);
    return 0;
}

// amstrong number ka code 

#include <stdio.h>
#include <math.h>
int main() 
{
    int arm=0 , sum=0  , z , num, count , arm_arm ;
    printf("enter the value you wanna find if is  amstrong or not ");
    scanf("%d",&arm );
    num = arm ;
    arm_arm = arm ;
    
    while (arm>0)
    {
        arm = arm/10;
        count = count+1; 
    }

    while (arm_arm>0)
    {
        z = arm_arm%10 ;
        arm_arm = arm_arm/10 ;
        sum = sum + pow(z,count);
        z = 0 ;
    }
    printf("%d, %d",sum, count );
    if (count==1)
    {
        printf("\nAMSTRONG NUMBER");
    }
    else if (num == sum  )
    {
        printf("\namstrong number");
        
    }
    else
    {
        printf("\nNOT AN AMSTRONG NUMBER ");
    }
    return 0;
}

//ASSIGNMENT-->1 
//Q1 AND Q2 
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() 
{
    int a=0, b=0, z=0 ;
    printf("enter");
    scanf("%d",&a);
    printf("enter");
    scanf("%d",&b);
    z = pow(a,b);
    printf("%d", z );
    return 0;
    
}


//q3,4,5 coombined programmmne 
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() 
{
    int ch ;
    printf("enter the choice of the number");
    scanf("%d",&ch);
    if (ch ==1)
    {
        int b , h , x ;
        printf("enter the base ");
        printf("enter the height ");
        scanf("%d",&b);
        scanf("%d",&b);
        x = (b*h)/2 ;
        printf("the area of the triangle is %d", x );
        
        
        
    }
    else if (ch ==2)
    {
        int a, area  ;
        
        printf("enter the dimesion for square");
        scanf("%d", &a);
        area  = pow(a,2);
        printf("%d is the area of sqaure ", area);
    }
    else if (ch ==3)
    {
        int r , pi = 3.14 , area ;
        printf("enter the radius ");
        scanf("%d", &r);
        
        area = pi*r*r;
        printf("%d is the area of the circle ",area );
        
        
    }
    else 
    {
        printf("the number is not valid ");
    }
    return 0;
    
}

// q6

#include <stdio.h>
#include <math.h>
int main() 
{
    int r , h   ;
    float z ;
    printf("enter the radius ");
    scanf("%d", &r);
    printf("enter the height ");
    scanf("%d", &h);
    z = (3.14)*r*r*h;
    printf("the volume of the cylinder is %f", z );
    return 0;
    
}


// time questions 
#include <stdio.h>
#include <math.h>
int main() 
{
    float t ;
    int ch;
    printf("enter the choice");
    scanf("%d", &ch);
    printf("enter time ");
    scanf("%f", &t);
    if (ch ==1) 
    {
        float min , hrs  ;
        min = t*60 ;
        hrs = min * 60 ;
        printf("the time in second , minutes and hrs are %f , %f, %f", t , min , hrs);
        
    }
    else 
    {
        printf("invalid choice ");
    }
    return 0;
}


// code 8
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() 
{
    float day ;
    int ch;
    printf("enter the choice");
    scanf("%d", &ch);
    printf("enter  number of days  ");
    scanf("%f", &day );
    if (ch ==1) 
    {
        float  wk , month , year  ;
        wk  = day / 7  ;
        month = wk/4 ;
        year = month / 12 ;
        printf("the days  in week  , month  and years  are %f\n , %f\n, %f\n", wk , month  ,year );
        
    }
    else 
    {
        printf("invalid choice ");
    }
    return 0;
}

// foot to inchez and same back logic 
#include <stdio.h>
#include <math.h>
int main() 
{
    
    int ch;
    printf("enter the choice");
    scanf("%d", &ch);
    if (ch ==1 ){
        float  feet, in;
        printf("enter  number of feet ");
        scanf("%f", &feet);
        in = feet*12 ;
        printf("the inches are %f",in);
        
    }
    else if (ch ==2 ) 
    {
        float  inches , feet;
        printf("enter the inches u want to convet " );
        scanf("%f",inches);
        feet = inches/12;
        printf("the conversion says %f ", feet);
        
        
        
        
    }
    else 
    {
        printf("invalid choice ");
    }
    return 0;
}


// code for sqrt 
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() 
{
    
    float n , z  ;
    printf("enter ");
    scanf("%f",&n);
    
    z = sqrt(n);
    printf("the sqrt of the number is %f ", z );
    
    return 0;
}

// si codes 
#include <stdio.h>
#include <math.h>
int main() 
{
    
    float t , p , r , intres;
    printf("enter time ");
    scanf("%f",&t);
    printf("enter principal  ");
    scanf("%f",&p);
    printf("enter rate ");
    scanf("%f",&r);
    intres = (p*r*t)/100;
    printf("intreast is %f", intres);
    
    return 0;
}


// ci code 
#include <stdio.h>
#include <math.h>
int main() 
{
    
    float t , p , r , intres;
    printf("enter time ");
    scanf("%f",&t);
    printf("enter principal  ");
    scanf("%f",&p);
    printf("enter rate ");
    scanf("%f",&r);
    intres = p*(1+r/100)*t - p;
    printf("intreast is %f", intres);
    
    return 0;
}



// herons formula q14

#include <stdio.h>
#include <math.h>
int main() 
{
    
    float a,b,c, ans ;
    printf("enter a  ");
    scanf("%f",&a);
    printf("enter b ");
    scanf("%f",&b);
    printf("enter c ");
    scanf("%f",&c);
    float s ;
    s = (a+b+c)/2 ;
    
    ans = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("herons formula is %f", ans);
    
    return 0;
}

// random 15 

#include <stdio.h>
#include <math.h>
int main() 
{
    
    float a,b,c,d, ans ;
    printf("enter a  ");
    scanf("%f",&a);
    printf("enter b ");
    scanf("%f",&b);
    printf("enter c ");
    scanf("%f",&c);
    printf("enter d ");
    scanf("%f",&d);
    float x ;
    ans = (a+b)*(c-d)/(a+d); 
    printf("%f", ans);
    return 0;
}

// swapping the varibales 
#include <stdio.h>
#include <math.h>
int main() 
{
    
    int  a,b ,c ;
    printf("enter a  ");
    scanf("%d",&a);
    printf("enter b ");
    scanf("%d",&b);
    c = a  ;
    a = b ;
    printf("the  swapped variables are a =%d  and b = %d  ",b , c  );
    
    return 0; 
}
//without swapping 

#include <stdio.h>
#include <math.h>
int main() 
{
    
    int  a,b ,c ;
    printf("enter a  ");
    scanf("%d",&a);
    printf("enter b ");
    scanf("%d",&b);
    a,b=b,a;
    
    printf("the  swapped variables are a =%d  and b = %d  ",b,a  );
    
    return 0; 
}

//q-17 
#include <stdio.h>
#include <math.h>
int main() 
{
    int a ,b , y ;
    printf("enter a  ");
    scanf("%d",&a);
    printf("enter b ");
    scanf("%d",&b);
    y = (pow(a,2)+pow(b,3)) / (a-b) ;
    printf("the answer is %d", y);
    return 0; 
}



// code 
#include <stdio.h>
#include <math.h>
int main() 
{
    int x,y,z,w, P ;
    printf("enter x  ");
    scanf("%d",&x);
    printf("enter y ");
    scanf("%d",&y);
    printf("enter z  ");
    scanf("%d",&z);
    printf("enter w  ");
    scanf("%d",&w);
    P=(w+x)/(y-z);
    printf("the answer is %d",P);
    return 0; 
}


// gallon ---> cubic feets 
#include <stdio.h>
#include <math.h>
int main() 
{
    float  g , f ;
    printf("enter gallon  ");
    scanf("%f",&g);
    f = g*0.133681;
    
    printf("the answer is %f",f);
    return 0; 
}


// code for next 4 alphabets in the given entrance 
#include <stdio.h>
#include <math.h>
int main() 
{
    char choice  ;
    printf("enter the character: ");
    scanf("%c",&choice );
    for (int i=1 ; i<=6 ; i++)
    {
        printf("%c\n", choice  );
        choice = choice + 1;
        
    }
    return 0;
}

//remainder and quotient 
#include <stdio.h>
#include <math.h>
int main() 
{
    int a ,b , r,q ;
    printf("enter a  ");
    scanf("%d",&a);
    printf("enter b ");
    scanf("%d",&b);
    r = a%b ;
    q = a/b ;
    printf("remainder is %d and quotient is %d ",r,q);
    return 0;
}
// code 22
#include <stdio.h>

int main() 
{
    char choice ;
    printf("enter the choice ");
    scanf("%c", &choice);
    printf("the ascii value is : %d ", choice);
    
    

    return 0;
}


// salary quuestions
// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int choice , age;
    printf("enter the age ");
    scanf("%d",&age);
    printf("enter if he is experienced or not ");
    scanf("%d",&choice);
    if (age > 35 && choice ==1)
    {
        int z ;
        z = 6000;
        
        printf("the amount is %d",z );
        
    }
    else if (35>age>28 && choice ==1)
    {
        int z = 4800;
        printf("the amount %d",z);
        
    }
    else if (choice == 1)
    {
       int  z = 3000;
       printf("the amount is %d",z);
       
    }
    else if (choice ==0)
    {
        int z = 2000 ;
        printf("wage is %d ", z);
    }
    else
    {
        printf("INVALID");
    }
    return 0;
}

// code 24 
#include <stdio.h>

int main() 
{
    int team , team_no , left ;
    printf("enter the number of players ");
    scanf("%d", &team);
    printf("enter how much player you want in single team",team_no);
    scanf("%d",&team_no);
    int z ;
    z = team/ team_no ;
    printf("total teams are %d ",z);
    printf("\nleft over are %d",team-(z*team_no));
    
    return 0;
}
// code 25
#include <stdio.h>
#include <math.h>
#define e 2.71828 

int main() 
{
    int y ;
    printf("enter y value ");
    scanf("%d",&y);
    float value ;
    value = 2-y*y*pow(e,2) + 4*y;
    printf("answer is %f ",value);
    
    return 0;
}
//code 26 
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() 
{
    float x , n ;
    printf("enter the value for x ");
    scanf("%f",&x);
    printf("enter the value for n ");
    scanf("%f",&n);
    float z ;
    z = x*n ;
    printf("the value is %f", z);
    return 0;
}

// code 27
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() 
{
    int x ;
    printf("enter the number");
    scanf("%d",&x);
    if (x%2!=0 && x>0)
    {
        int z ;
        z = sqrt(z);
        printf("%d",z);
        
    }
    else if (x%2==0)
    {
        int z ;
        z = pow(x,5);
        printf("number is %d",z);
        
    }
    else
    {
        printf("INVALID NUMBER ");
    }
    return 0;
}


// code 29
// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() 
{
    int x , y, z;
    printf("enter");
    scanf("%d",&x);
    printf("enter");
    scanf("%d",&y);
    printf("enter");
    scanf("%d",&z);
    if (x>y && x>z)
    {
        printf("%d greatest",x);
    }
    else if (y>z && y>x)
    {
        printf("%d is the greatest",y );
        
    }
    else 
    {
        printf("%d is the greatest", z);
    }
    return 0;
    
}


// code 30
#include <stdio.h>
#include <math.h>

int main() 
{
    char x ;
    int choice;
    printf("enter");
    scanf("%c",&x);
    printf("enter choice");
    scanf("%d",&choice);
    if (choice == 1){
    printf("%c", toupper(x));
    }
    else if (choice ==2 ){
    printf("%c", tolower(x));
    }
    return 0;
   
}
// code 31
#include <stdio.h>
#include <math.h>

int main() 
{
    int x ;
    scanf("%d", &x);

    if (x>0)
    {
        printf("POSITIVE");
        
    }
    else
    {
        printf("NEGEATIVE");
    }
    return 0;
    
    
    
}

// code 32
#include <stdio.h>
#include <math.h>

int main() 
{
    int x ;
    printf("enter the number ");
    scanf("%d",&x);
    if (x >33)
    {
        printf("pass ");
    }
    else
    {
        printf("fail dude");
    }
    return 0;
}

// code 33
#include <stdio.h>
#include <math.h>

int main() 
{
    int x ;
    printf("enter the salary  ");
    scanf("%d",&x);
    if (x<5000)
    {
        printf("bonus is 500");
    }
    else
    {
        printf("bonus is 1000");
    }
    return 0;
}

// code 34 
#include <stdio.h>
#include <math.h>

int main() 
{
    int x ;
    printf("enter the number ");
    scanf("%d",&x);
    if (x%3==0 && x%5 == 0)
    {
        printf("square");
    }
    else
    {
        printf("square root");
    }
    return 0;
}


// CODE 35
// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int calls ;
    printf("enter the number of calls ");
    scanf("%d", &calls );
    if (calls<200)
    {
        printf("the rent is 1.80/call");
        int rent , total ;
        rent = calls * 1.80;
        total = (rent)*107/100;
        printf("the total is %d", total);
    }
    else if (calls>200 && calls <500)
    {
        printf("the rent is 1.60/call");
        int rent , total ;
        rent = calls * 1.80;
        total = (rent)*107/100;
        printf("the total is %d", total);
    }
    else
    {
        printf("WE DONT HAVE ANY VALUE FRO THAT ");
    }

    return 0;
}



/// code for hra and da ERROR 
#include <stdio.h>
int main()
{
    int sal ;
    printf("enter the amount");
    scanf("%d",&sal);
    if (sal>5000)
    {
        float hra , da ;
        hra = sal*(5/100);
        da = sal *(7/100);
        printf("the hra is %f and da is %f ", hra , da);
        
    }
    else if (10000>sal>5000)
    {
        float hra , da ;
        hra = sal*(6/100);
        da = sal *(8/100);
        printf("the hra is %f and da is %f ", hra , da);
    }
    return 0;
    
}



/// cdoe to write the number in string form 
#include <stdio.h>
int main()
{
    int x , count;
    printf("enter the number");
    scanf("%d", &x);
    while (x> 0)
    {
        x = x/10;
        count = count+1 ;
    }
    printf("%d", count);

    for (int i = 1 ;  i <= count; i++)
    {
        int x ;
        if ( x == 1 )
        {
            printf("one");
            
        }
        else if (x==2 )
        {
            printf("two");
        }
        else if (x ==3 )
        {
            printf("three");
        }
        else if (x ==4 )
        {
            printf("four");
        }
        else if (x ==5 )
        {
            printf("five");
        }
        else if (x ==6 )
        {
            printf("six");
        }
        else if (x ==7 )
        {
            printf("seven");
            
        }
        
        else if (x==8 )
        
        {
            printf("eight");
        }
        
        else if (x ==9 )
        {
            printf("nine");
            
        }
        else 
        {
            printf("zero");
        }
    }
    return 0;
    
}


// code for quadratic roots 
#include <stdio.h>
#include <math.h>

int main()
{
    int x ,a , b ,c  ;
    printf("enter a ");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c ");
    scanf("%d",&c);
    printf("the quadratic eq is ----> %d x2 + %d x + %d ", a, b , c);
    float x1, x2 ;
    x1 = (-b+ sqrt((pow(b,2))-4*a*c))/(2*a);
    x2 = (-b-  sqrt((pow(b,2))-4*a*c))/(2*a);
    printf("two roots are %f and %f", x1 ,x2);
    return 0;
    
    
}
#include <stdio.h>
#include <math.h>

int main()
{
    int row , column;
    printf("enter the row ");
    scanf("%d",&row);
    printf("enter the columns");
    scanf("%d",&column);
    for (int i =1 ; i <=row ; i=i+1)
    {
        for (int j =1 ; j<=column ; j = j+1)
        {
            printf("%d",j);
        }
        printf("\n");
        }
    return 0;
    
}


//code for star patttern 
#include <stdio.h>
#include <math.h>

int main()
{
    int row , col ;
    printf("enter the number");
    scanf("%d",&row);
    printf("enter the number");
    scanf("%d",&col);
    for (int i = 1; i<=row; i++)
    {
        for (int j = 1 ; j<=i ;j++)
        {
            printf("*");
            
        }
        printf("\n");
    }
    
    return 0;
    
}
//code for inverted star 
#include <stdio.h>
#include <math.h>

int main()
{
    int row , col ;
    printf("enter the number");
    scanf("%d",&row);
    printf("enter the number");
    scanf("%d",&col);
    for (int i = 1; i<=row ; i++)
    {
        for (int j = 1 ; j<=row+1-i ;j++)
        {
            printf("* ");
            
        }
        printf("\n");
    }
    
    return 0;
    
}


// code for number printing 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    printf("enter the number");
    scanf("%d",&row);
    for (int  i = 1 ; i<=row ; i++)
    {
        for (int j = 1 ; j<= i ; j =j+1)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
    
}

// code for inverted version of number 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    printf("enter the number");
    scanf("%d",&row);
    for (int  i = 1 ; i<=row ; i++)
    {
        for (int j = 1 ; j<= row + 1 - i ; j =j+1)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
    
}


// code for odd versionn 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    printf("enter the number");
    scanf("%d",&row);
    for (int  i = 1 ; i<=2*row ; i=i+2)
    {
        for (int j = 1 ; j<= i ; j =j+2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
    
}


// alphabet square 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    char choice ;
    printf("enter the choice");
    scanf("%c",&choice);
    printf("enter the number");
    scanf("%d",&row);
    for (int  i = 1 ; i<=row ; i=i+1)
    {
        for (int j = 1 ; j<= row ; j =j+1)
        {
            printf("%c ",choice);
            choice = choice + 1 ;
        }
        printf("\n");
    }
    
    return 0;
    
}


// code alphabet triangle 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    char choice ;
    printf("enter the choice");
    scanf("%c",&choice);
    printf("enter the number");
    scanf("%d",&row);
    for (int i=1 ; i<=row ; i++)
    {
        for (int j = 1 ; j<= i ; j++)
        {
            printf("%c",choice);
            choice = choice + 1 ; 
        }
        printf("\n");
    }
    
    return 0;
    
}

// combination fo aplahbets and numbers 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    char choice ;
    printf("enter the choice");
    scanf("%c",&choice);
    printf("enter the number");
    scanf("%d",&row);
    for (int i=1 ; i<=row ; i++)
    {
        for (int j = 1 ; j<= i ; j++)
        {
            if (i%2 != 0)
            {
                printf("%d",j);
            }
            else if (i%2 == 0)
            {
            printf("%c",choice);
            choice = choice + 1 ; 
            } 
        }
        printf("\n");
    }
    
    return 0;
    
}


// code for horizontal star 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    printf("enter the number");
    scanf("%d",&row);
    for (int i = 1; i<=row ; i++)
    {
        for (int j = 1 ; j <=row ;j++)
        
        {
            int z = row/2 + 1;
            if (j==z  || i == z)
            {
                printf("*");
                
            }
            else
            {
                printf("$");
            }
        }
        printf("\n");
    }
    return 0;
    
}

// single star code same above 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    printf("enter the number");
    scanf("%d",&row);
    for (int i = 1; i<=row ; i++)
    {
        for (int j = 1 ; j <=row ;j++)
        
        {
            int z = row/2 + 1;
            if (j==z  && i == z)
            {
                printf("*");
                
            }
            else
            {
                printf("$");
            }
        }
        printf("\n");
    }
    return 0;
    
}

//  code star + &'s 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    printf("enter the number");
    scanf("%d",&row);
    for (int i =1 ; i<= row  ; i++)
    {
        for (int j = 1 ; j<=row+1-i ; j++)
        {
            if ((i==1 || j ==1) || (i==row && j==row ))
            {
                printf("*");
                
            }
            else
            {
                printf("&");
            }
        }
        printf("\n");
    }
    return 0;
    
}


// code for printing T
#include <stdio.h>
#include <math.h>

int main()
{
    int row , col  ;
    printf("enter the number");
    scanf("%d",&row);
    printf("enter the number");
    scanf("%d",&col);
    for (int i =1 ; i<= row  ; i++)
    {
        for (int j = 1 ; j<=col  ; j++)
        {
            if (i == 1 || j == col   ) printf("* ");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
    
}   


// code for non hollow figuers the code work if we put some figues in it but dont work for spaces 

 #include <stdio.h>
#include <math.h>

int main()
{
    int row , col  ;
    printf("enter the number");
    scanf("%d",&row);
    printf("enter the number");
    scanf("%d",&col);
    for (int i =1 ; i<= row  ; i++)
    {
        for (int j = 1 ; j<=col  ; j++)
        {
            if ((i == 1 || i == row ) || (j == 1 || j == col) ) printf("* ");
            else printf("& ");
        }
        printf("\n");
    }
    return 0;
    
}

// code for cross pritinign at 45 degree 
#include <stdio.h>
#include <math.h>

int main()
{
    int row , col  ;
    printf("enter the number");
    scanf("%d",&row);
    printf("enter the number");
    scanf("%d",&col);
    for (int i =1 ; i<= row  ; i++)
    {
        for (int j = 1 ; j<=col  ; j++)
        {
            if (i==j || i+j == row +1  ) printf("* ");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
    
}

// code of floyd's triangle 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    printf("enter the number");
    scanf("%d",&row);
    int a =1 ;
    for (int i =1 ; i<= row  ; i++)
    {
        for (int j = 1 ; j<=i  ; j++)
        {
            printf("%d ", a);
            a = a+1;
        }
        printf("\n");
    }
    return 0;
    
}
// floyd's triangle with odd number of values 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    printf("enter the number");
    scanf("%d",&row);
    int a =1 ;
    for (int i =1 ; i<= row  ; i++)
    {
        for (int j = 1 ; j<=i  ; j++)
        {
            printf("%d ", a);
            a = a+2;
        }
        printf("\n");
    }
    return 0;
    
}


// code 0 ,1 triangle 
int main()
{
    int row  ;
    printf("enter the number");
    scanf("%d",&row);

    for (int i =1 ; i<= row  ; i++)
    {
        int a ;
        if (i%2!=0) a =1 ;
        else a=0 ;
        
 
        for (int j = 1 ; j<=i  ; j++)
        {
            printf("%d",a);
            if (a==0 ) a=1 ;
            else a =0 ;
            
        }
        printf("\n");
    }
    return 0;
    
}

// alternate method for the code 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    printf("enter the number");
    scanf("%d",&row);

    for (int i =1 ; i<= row  ; i++)
    {
        for (int j = 1 ; j<=i  ; j++)
        {
            int a = i+j;
            if (a%2 ==0 )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
    
}
// code for reverse triangle 

#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    printf("enter the number");
    scanf("%d",&row);

    for (int i =1 ; i<= row  ; i++)
    {
        for (int j = 1 ; j<=row - i   ; j++)
        {
            printf(" ");
        }
        for (int k =1 ;  k<=i ; k++)
        {
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
    
}

// code for rhombus alphabetical rhombus 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    char choice ;
    printf("enter the choice");
    scanf("%c",&choice );

    printf("enter the number");
    scanf("%d",&row);

    for (int i =1 ; i<= row  ; i++)
    {
        for (int j = 1 ; j<=row - i   ; j++)
        {
            printf(" ");
        }
        for (int k=1 ; k<=row ; k++)
        {
            printf("%c",choice);
            choice = choice +1 ;
        }
        printf("\n");
    }
    return 0;
    
}
// code for alphabetical triangle with varibale alphabets 
#include <stdio.h>
#include <math.h>

int main()
{
    int row  ;
    char choice ;
    printf("enter the choice");
    scanf("%c",&choice );

    printf("enter the number");
    scanf("%d",&row);

    for (int i = 1 ; i<=row ; i++)
    {
        for (int j = 1; j<=row-i ; j++)
        {
            printf("&");
            
        }
        for (int k =1 ; k<=i; k++)
        {
            printf("%c", choice);
            choice = choice + 1 ;
            
        }
        printf("\n");
    }
    
    return 0;
    
}

// code for 1,2,3 similar to above coee 
#include <stdio.h>
int main()
{
    int row ;
    printf("enter the rows");
    scanf("%d", &row);
    for (int i = 1 ; i<=row ; i++)
    {
        for (int j = 1 ; j<=row - i ; j++)
        {
            printf(" ");
        }
        for (int k = 1 ; k<=2*i-1; k++)
        {
            printf("%d",k);
            
        }
        printf("\n");
    }
    return 0;
}


// code for alphabetical triangle with varibale alphabets with spaces 
#include <stdio.h>
int main()
{
    int row ;
    char ch;
    printf("enter the CHOICE");
    scanf("%c", &ch);
    printf("enter the rows");
    scanf("%d", &row);
    for (int i = 1 ; i<=row ; i++)
    {
        for (int j = 1 ; j<=row - i ; j++)
        {
            printf(" ");
        }
        for (int k = 1 ; k<=2*i-1; k++)
        {
            printf("%c",ch);
            ch = ch +1 ;
            
        }
        printf("\n");
    }
    return 0;
}





//code to print odd ---> * and even -->&
#include <stdio.h>
#include <math.h>
int main()
{
    int  x ,row  ; 
    printf("enter the row ");
    scanf("%d ",&row );
    for (int i =1 ; i<= row ; i++)
    {
        for (int j =1 ; j<= row ; j++)
        {
            int x ; 
            printf("enter the input  ;");
            scanf("%d", &x );
            
        }
    }

    for (int k =1 ; k<=row ; k++)
    {
        for (int w =1 ; w<=row ; w++)
        {
            printf("%d " , x);
        }
        return 0 ;
    }
}


// code 35
#include <stdio.h>
#include <math.h>
int main()
{
    int row=0, x=0 ,m=0;
    printf("enter the row ");
    scanf("%d", &row);
    m = pow(row ,2);
    int a;
    for (int j =1 ; j<= row ; j++)
    {
        int a=0;
        for (int k =1 ; k<=row ; k++)
        {  
            scanf("%d",  &a);
           if (a%2==0)
           {
            printf("*");
           }
           else
           {
            printf("&");
           }
        }
        printf("\n");
        
    }
    return 0;
}
// code for pascal trinagle without factorial 
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for (int i=0 ; i<=n ; i++)
    {
        for (int j = 1; j<=n-i ; j++)
        {
            printf(" ");

        }
        for (int k =1 ; k<=n ; k++)
        {
            int z ;
            z = pow(11,i);
            printf("%d",z );
            break ;
        }
        printf("\n");
    }
    return 0;

}



// %p is used to print the address and the value & is use in print ststement
// %d is used to print the value
// %s is used to print the string
// %c is used to print the character
//application of pointer ;
#include <stdio.h>
#include <math.h>
int main()
{
    int row=0, x=0 ,m=0;
    int* z = &x ; // code for printing address using pointers

    printf("enter the row ");
    scanf("%d", &row);
}

// *x is the value of which the address is poiting to : we can find the address of any number using &x anf then we 
// can print the value of the number using *x which states the pointer value of any number 


//RECUSRION 
// code 1
#include <stdio.h>
#include <math.h>
int factorial(n)
{
    if (n==1)
    {
        return 1  ;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int main()
{
    int x ; 
    printf("enter the number");
    scanf("%d",&x);
    int fact = factorial(x);
    printf("%d",fact);
    return 0;


}
// code for revserse priting of number using recusion 
#include <stdio.h>
#include <math.h>
void dec(int n)
{
    if (n==0) return ;
    printf("%d\n", n);
    dec(n-1);
}


int main()
{
    int z ; 
    printf("enter the number ");
    scanf("%d",&z);
    dec(z);
    return 0 ;
}
// code for reverse and forward 
#include <stdio.h>
#include <math.h>

void dec(int z)

{
    if (z==0 ) return ;
    printf("%d\n",z );
    dec(z-1);
    return ;
}

void inc(x, num )
{
    if (x>=num) return ;
    printf("%d\n",x);
    inc(x+1,num);
    return ;
}
int main()
{
    int num ,x ;
    printf("enter the num ");
    scanf("%d",&num);
    printf("enter the x ");
    scanf("%d",&x);
    sum(num);
    inc(x, num);
}


// code for power of any number using red 

#include <stdio.h>
#include <math.h>

int power(int x, int num )
{
    if (num ==0) return 1;
    int recans = x*power(x,num-1);
    return recans;

}


int main()
{
    int num ,x ,z;
    printf("enter the num ");
    scanf("%d",&num);
    printf("enter the x ");
    scanf("%d",&x);
    int p = power(x,num);
    printf("%d",p);
}

// code for stair qyestiuon leetcode
#include <stdio.h>
#include <math.h>

int fibo(int x)
{
    if (x==1 || x==2|| x==3 ) 
    {
        return 1;
    }
    else{
       int sum = fibo(x-1)+fibo(x-2)+fibo(x-3);
        return sum ; 
    }
    

}
int main()
{
    int x ;
    printf("enter the x ");
    scanf("%d",&x);
    int p = fibo(x);
    printf("%d",p);
}


/// & --> memeory operator 
/// * ---> value at --->
/// amphersand means address of i when we do *i  and it point by memory 

/// pre in post code 
#include <stdio.h>
void pre(int n )
{
    if (n==0) return  ;
    printf("pre %d\n",n);
    pre(n-1);
    printf("in  %d\n",n);
    pre(n-1);
    printf("post %d\n",n);
    pre(n-1);
    
}
int main()
{
    int num1 , num2 ,c ;
    printf("enter the num1 ");
    scanf("%d",&num1);
    pre(num1);

    
}
// code for iteration in arrays 
#include <stdio.h>

int main()
{
   int marks[5];
   for (int i =1 ; i<=5 ;i++)
   {
        printf("enter the number");
        scanf("%d",&marks[i]);

   }
   for (int j=1 ; j<=5; j++)
   {
    if (marks[j]<=35)
    {
        printf("the number is less than 35\n");

    }
    else
    {
        printf("no the number is not less than 35\n");
    }
   }

}
// code for array introduction

#include <stdio.h>

int main()
{
   int marks[5];
   for (int i =1 ; i<=5 ;i++)
   {
        printf("enter the number");
        scanf("%d",&marks[i]);

   }
   for (int j=1 ; j<=5; j++)
   {
    if (marks[j]<=35)
    {
        printf("the number is less than 35\n");

    }
    else
    {
        printf("no the number is not less than 35\n");
    }
   }


    
}

// code for priduct of the elemtns in the array 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n , product =1 ;
    printf("enter the size for array ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<=n;i++)
    {
        int num ;
        printf("enter the number ");
        scanf("%d",&num);
        product = product*num;
        
    }
    
    printf("\nthe product of the given array is %d",product);
    return 0;
    
}

// code to find the maxiumu and the minimum of a array 
#include <stdio.h>
#include <math.h>
int main()
{
    int n , max=-1;
    printf("enter the size for array ");
    scanf("%d", &n);
    int arr[n];
    for (int i =1 ; i<=n ; i++)
    {
        int nums ;
        printf("enter the number which is input");
        scanf("%d",&nums);
        if (max<nums)
        {
            max= nums;
        }
        
    }
    printf("the maxiumum number of the array is %d",max);
}
// code for the minimum number of value in the arrys
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    int n , min = INT_MAX ;
    printf("enter the number");
    scanf("%d",&n);
    for (int i= 0 ;i< n ;i++)
    {
        int nums ;
        printf("enter the inputs in the array");
        scanf("%d",&nums);
        if (min>nums)
        {
            min = nums ;
        }
        
    }
    printf("the minimum number in teh arrys is %d",min);
    
}

// cdoe for some sequence that return addreses 
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    int n ;
    printf("enter the numbr for the size of array");
    scanf("%d",&n);
    for (int i =1  ; i<=n ; i++)
    {
        int nums ;
        printf("enter the input for the array") ;
        scanf("%d",&nums);
        
    }
    int arr[n] ;
    for (int j =1 ; j<=n ; j++)
    {
        if (j%2==0)
        {
            arr[j]= arr[j] + 10;
            
        }
        else
        {
            arr[j]= arr[j]*2 ;
        }
    }
    for (int k =1 ; k <=n ; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0 ;
}


// code with eerrror //// make it correct 

#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    int n , arr[n];
    printf("enter the numbr for the size of array");
    scanf("%d",&n);
    for (int i =1  ; i<=n ; i++)
    {
        int nums ;
        printf("enter the input for the array") ;
        scanf("%d",&nums);
        
    }
    for (int j =1 ; j<=n ; j++)
    {
        if (j%2==0)
        {
            arr[j] = arr[j] + 10 ;
            
        }
        else
        {
            arr[j] = arr[j] * 2 ;
            
        }
        printf("%d ", &arr[j]);
    }
    return 0 ;
    
}

// code to find the value greater than a number 
#include <stdio.h>
int main() {
    int n ,x, nums , counter ;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the number ");
    scanf("%d",&x);
    int arr[n];
    for (int i=1; i<=n ;i++)
    {
        printf("\nenter the input values in the arrys ");
        scanf("%d",&nums);
        if (nums>x)
        {
            printf("%d--->",nums , arr[i]);
        }
    }
    
    return 0 ;
}
// code with counter 
// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n ,x, nums , counter ;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the number ");
    scanf("%d",&x);
    int arr[n];
    for (int i=1; i<=n ;i++)
    {
        printf("\nenter the input values in the arrys ");
        scanf("%d",&nums);
        if (nums>x)
        {
            counter = counter +1;
        }
    }
    printf("%d", counter);
    return 0 ;
}
// code for swapping by hardcoding 
// Online C compiler to run C program online
#include <stdio.h>

void reverse(int num[])
{
    int x , y ;
    x = 0 ;
    y = 6 ;
    while (x<y)
    {
        int temp ;
        temp = num[x] ;
        num[x] = num[y] ;
        num[y] = temp ;
        x ++ ;
        y-- ;
        
    }
    for (int i =0 ; i<7  ;i++)
    {
        printf("%d\n ", num[i]) ;
    }
    return ;
}


int  main()
{
    int x ; 
    int num[7] = {1,2,43,56,76,4,34} ;
    
    reverse(num) ;
    return 0 ;
}
// code for hardcoded palindrome number 
// efficient code 

#include <stdio.h>
void palindrome(int num[])
{
    int x , y , counter ;
     x = 0; 
     y = 5;
     while (x<y)
     {
         if (num[x] == num[y])
         {
             counter = counter +1 ;
         }
         x ++ ;
         y-- ;
     }
     printf("%d\n", counter) ;
     int z = (x+y)/2 + 1  ;
     printf("%d\n", z) ;
     if (z%2==0)
     {
         if (counter == (x+y+1)/2)
         {
             printf("yes the number is a palndrome\n") ;
         }
     }
     else if (z%2!=0)
     {
         if (counter ==z)
         {
             printf("yes a palindrome\n");
             
         }
         else
         {
             printf("not  the number is a palndrome\n") ;
         }
     }
     return ;
}


int  main()
{
    int num[6] = {1,5,3,3,5,1} ;
    
    palindrome(num) ;
    return 0 ;
}
// code for 2d arrays
// 2-d dynamcic array  ;l

#include <stdio.h>
int main()
{
  int row , col ;
  
  printf("enter row ");
  scanf("%d",&row);
  printf("enter the col ");
  scanf("%d",&col);
  int array[row][col] ;
  for (int i =  0 ; i<row  ; i++)
    {
      for (int j = 0 ; j<col ; j++)
        {
          printf("enter input ");
          scanf("%d",&array[i][j]) ;
          
        }
    }

  printf("\n");
  for (int  i = 0 ; i<row ; i++)
    {
      for (int j= 0; j<col ; j++)
        {
          printf("%d ",array[i][j]) ;
          
        }
      printf("\n") ;
    }
  return 0 ;
}
//important stuff 
// The atoi() function converts a character
// string to an integer value
// The tostring() function is used to convert
// an integer to string & vice-versa. 


// code for 4 roll number and 4 marks accomodated 
// Online C compiler to run C program online
#include <stdio.h>
int main()
{
  int row , col , roll_no ;
  printf("enter the row ") ;
  scanf("%d",&row) ;
  printf("enter the col ") ;
  scanf("%d",&col) ;
  printf("enter the roll_no") ;
  scanf("%d",&roll_no) ;
  int mark[row][col] ;
  if(row=col)
  {
    for (int i =0 ; i<1 ; i++)
    {
      for (int j = 0 ; j<col ; j++ )
        {
          printf("enter the roll number") ;
          scanf("%d ",&mark[0][col]) ;
          
        }
    }
    for(int i = 1 ; i<row ; i++)
      {
        for(int j = 0 ; j<col ; j++)
          {
            printf("enter the inputs") ;
            scanf("%d ",&mark[i][j]) ;
          }
      }
    for(int i = 0 ; i<row ; i++)
      {
        for (int j = 0 ; j<col ; j++)
          {
            printf("%d ", mark[row][col]) ;
          }
        printf("\n") ;
      }
  }
  else
  {
    printf("cannot accomodate roll number ") ;
  }

  return 0 ;
}

// code 2-d array with a sequence priting 
// Online C compiler to run C program online
#include <stdio.h>
int main()
{
  int row , col ; 
  printf("enter row ") ;
  scanf("%d",&row) ;
  printf("enter col ") ;
  scanf("%d",&col) ;
  int array[row][col] ;
  for (int i = 0 ; i<row  ; i++)
    {
      for (int j = 0 ; j<col ; j++)
        {
          array[row][col] =10 ;
          printf("%d ",array[row][col]) ;
          
        }
      printf("\n") ;
    }
  return 0 ;
}


// code for matrix sum 
// filled with error
#include <stdio.h>
int main()
{
  int row , col ; 
  printf("enter row ") ;
  scanf("%d",&row) ;
  printf("enter col ") ;
  scanf("%d",&col) ;
  int array[row][col] ;
  for (int i = 0 ; i<row  ; i++)
    {
      for (int j = 0 ; j<col ; j++)
        {
         printf("enter the number") ;
          scanf("%d",&array[row][col]) ;
          
        }
      printf("\n") ;
    }
  int row_1 ,col_1;
  printf("input for second") ;
  scanf("%d",&row_1) ;
  printf("input for second") ;
  scanf("%d",&col_1) ;
  int array_2[row_1][col_1] ;
  for (int i = 0 ; i<row_1 ; i++)
    {
      for (int j = 0  ; j<col_1 ; j++)

        {
        printf("enter the inputs for the second inputs") ;
        scanf("%d",&array_2[i][j]) ;
          
        }
    }
  
  int result[row_1][col_1] ;
  for (int i = 0 ; i<row_1 ;i++)
    {
      for (int j = 0 ; j<col_1  ; j++) 
        {
          result[i][j] = array[i][j] + array_2[i][j] ;
          printf("%d ",result[i][j]);
        }
      printf("\n");
    }
  return 0 ;
}

// code for the sum of the matrix 
// Online C compiler to run C program online
#include <stdio.h>
int main()
{
  int row , col , sum= 0; 
  printf("enter row ") ;
  scanf("%d",&row) ;
  printf("enter col ") ;
  scanf("%d",&col) ;
  int array[row][col] ;
  for (int i = 0 ; i<row  ; i++)
    {
      for (int j = 0 ; j<col ; j++)
        {
         printf("enter the number") ;
          scanf("%d",&array[i][j]) ;
          
        }
    }
  
    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<col ; j++)
        {
            sum = sum + array[i][j] ;
            
        }
    }
    printf("%d is the sum ",sum) ;
  return 0 ;
}


// code to find the max in a given 2d arrat 
// Online C compiler to run C program online
#include <stdio.h>
int main()
{
  int row , col , min ; 
  printf("enter row ") ;
  scanf("%d",&row) ;
  printf("enter col ") ;
  scanf("%d",&col) ;

  int array[row][col] ;
  int max  = array[0][0] ;
  for (int i = 0 ; i<row  ; i++)
    {
      for (int j = 0 ; j<col ; j++)
        {
         printf("enter the number") ;
          scanf("%d",&array[i][j]) ;
          
        }
    }
  
    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<col ; j++)
        {
           int temp ; 
           if (array[i][j] > max)
           {
               max = array[i][j] ; 
           }
            
        }
    }
    printf("%d is the max ", max) ;
  return 0 ;
}

// code for the sum of the rectrangle formed by l1,r1
// l2 , r2
// Online C compiler to run C program online
#include <stdio.h>
int main()
{
  int row , col , l1,l2,r1,r2, sum=0 ; 
  printf("enter row ") ;
  scanf("%d",&row) ;
  printf("enter col ") ;
  scanf("%d",&col) ;
printf("enter the l1 ") ;
scanf("%d",&l1) ;
printf("enter the l2 ") ;
scanf("%d",&l2) ;
printf("enter the r1 ") ;
scanf("%d",&r1) ;
printf("enter the r1 ") ;
scanf("%d",&r2) ;
  int array[row][col] ;
  int max  = array[0][0] ;
  for (int i = 0 ; i<row  ; i++)
    {
      for (int j = 0 ; j<col ; j++)
        {
         printf("enter the number") ;
          scanf("%d",&array[i][j]) ;
          
        }
    }
  
    for(int i = l1 ; i<=l2 ; i++)
    {
        for(int j = r1 ; j<=r2 ; j++)
        {
           sum = sum + array[i][j] ;
               
        }
            
    }
    printf("%d is the sum ", sum) ;
  return 0 ;
}

// code for finding the row with max sum ;
// in crrect coee 
// Online C compiler to run C program online
#include <stdio.h>
int main()
{
  int row , col, sum , index ; 
  int maxsum  ;
  printf("enter the row ") ;
  scanf("%d",&row) ;
  printf("enter the col ") ;
  scanf("%d",&col) ;
  int array[row][col] ;
  for(int i = 0 ; i<row ; i++)
  {
      for (int j = 0 ; j<col  ; j++)
      {
          printf("enter the number ") ;
          scanf("%d",&array[i][j]) ;
      }
  }
  for(int i = 0 ; i<row ; i++)
  {
      
       sum =0  ;
      for (int j = 0 ; j<col  ; j++)
      {
          sum = sum + array[i][j] ;
          maxsum = sum  ;
          index = i ;
      }
      break ;
  }
  if (sum > maxsum)
      {
          printf("the max sum is at the index %d and is %d ", index , sum) ;
      }
  return 0 ;
}
// code for inputs as 1, 0 in the matrix 
// Online C compiler to run C program online
#include <stdio.h>
int main()
{
  int row , col, counter ; 
  int maxsum  ;
  printf("enter the row ") ;
  scanf("%d",&row) ;
  printf("enter the col ") ;
  scanf("%d",&col) ;
  int array[row][col] ;
  for(int i = 0 ; i<row ; i++)
  {
      for (int j = 0 ; j<col  ; j++)
      {
          printf("enter the number ") ;
          scanf("%d",&array[i][j]) ;
      }
  }
  for(int i = 0 ; i<row ; i++)
  {
      for (int j = 0 ; j<col  ; j++)
      {
          if (array[i][j]== 1)
          {
              counter = counter +1 ;
              
          }
      }
      
  }
  printf("%d is the number of 1 ", counter) ;
  
  return 0 ;
}



// code for TRANSPOSE OF A MATRIX
#include <stdio.h>
int main()
{
  int row , col, counter ; 

  printf("enter the row ") ;
  scanf("%d",&row) ;
  printf("enter the col ") ;
  scanf("%d",&col) ;
  int array[row][col] ;
  for(int i = 0 ; i<row ; i++)
  {
      for (int j = 0 ; j<col  ; j++)
      {
          printf("enter the number ") ;
          scanf("%d",&array[i][j]) ;
      }
  }
  for(int i = 0 ; i<row ; i++)
  {
      for (int j = 0 ; j<col  ; j++)
      {
         printf("%d ", array[i][j]) ;
          
      }
      printf("\n") ;
  }

  printf("\n") ;
  for (int i = 0 ; i<col ; i++)
  {
      for (int j =0 ; j<row ; j++)
      {
          printf("%d ", array[j][i]) ;
      }
      printf("\n");
  }
  
  
  return 0 ;
}

// CODE FOR TRANSPOSE OF AN ARRAY BY SWAPPING ;
#include <stdio.h>
int main()
{
  int row , col, counter ; 

  printf("enter the row ") ;
  scanf("%d",&row) ;
  printf("enter the col ") ;
  scanf("%d",&col) ;
  int array[row][col] ;
  for(int i = 0 ; i<row ; i++)
  {
      for (int j = 0 ; j<col  ; j++)
      {
          printf("enter the number ") ;
          scanf("%d",&array[i][j]) ;
      }
  }
  for(int i = 0 ; i<row ; i++)
  {
      for (int j = 0 ; j<col  ; j++)
      {
         printf("%d ", array[i][j]) ;
          
      }
      printf("\n") ;
  }


  for(int i = 0 ; i<row ; i++)
  {
      for (int j = 0 ; j<col  ; j++)
      {
        
        int temp  ;
        temp = array[i][j] ;
        array[i][j] = array[j][i] ;
        array[j][i]= temp ;
        
        
          
      }
      printf("\n") ;
  }
  printf("\n") ;
  for (int i = 0 ; i<col ; i++)
  {
      for (int j =0 ; j<row; j++)
      {
          printf("%d ", array[i][j]) ;
      }
      printf("\n");
  }
  
  
  return 0 ;
}

// ROHIT'S QUESTIONS ON REPLCAMENTS ;
#include <stdio.h>
int main()
{
  int row , col ; 
  printf("enter the row ") ;
  scanf("%d",&row) ; 
  printf("enter the col ") ;
  scanf("%d",&col) ;
  int array[row][col] ;
  for (int i = 0 ; i<row ; i++)
    {
      for (int j = 0 ; j<col  ; j++)
        {
          printf("enter the inputs") ;
          scanf("%d",&array[i][j]) ;
        }
    }
    
    
    for (int i = 0 ; i<row ; i++)
    {
      for (int j = 0 ; j<col  ; j++)
        {
          printf("%d ", array[i][j]) ;
          
        }
        printf("\n")  ;
    }
printf("\n") ;
  for (int i = 0 ; i<row ; i++)
    {
      for (int j = 0 ; j<col  ; j++)
        {
          if (array[i][j]%2==0)
          {
            printf("& ") ;
            
          }
          else
          {
            printf("$ ");
          }
        }
      printf("\n") ;
    }
  return 0 ;
}


// code to print all the character in the c langauge 
#include <stdio.h>
int main()
{
    int x ;
    for (int i = 0 ; i<=255 ; i++ )
    {
       char x = i ;
        printf("%c\n",x) ;
        
    }
    return 0 ;
}
// null character is denoted by \0 ;
// null character never print , it is used as a checker point 
// which is never reached as \0 has asccii value 0
// this value is never rprinted 
// gets and puts are used only in string 
// puts is used for printing the sting values 
// syntax--> puts("string value ") ;
// puts must be used when <sting.h> is imported 
// without the sting libaray it will not  work\
// %s is used to pass the whole array of sting in the 
// address or as the inputs 
// scanf is used without & while passing the str array 


// working with stings
#include <stdio.h>
#include <string.h>
int main()
{
    char str[40] ;
    printf("enter the word") ;
    scanf("%s", str) ;
    for (int i=0  ; i<40 ; i++)
    {
    printf("\nyour response was %s",str) ;
    }
    return 0 ;
}
// while giving the input like abouve only the first word
// is considered and space ke baad wlae words are not
// used 

// insted of scan in strings;
// use gets(str) ;
// it can take as many inputs as possible


//code for the revesre of a number 
#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}
// strlen() is used to get the length of the array of string 
// code for reverse a sting 
#include <stdio.h>
#include <string.h>

int main(void) {
  char nm[1000];
char t;
  printf("enter a name");
  gets(nm);

  for(int i=0,j=strlen(nm)-1;i<j;i++,j--)
    {
    t=nm[i];
    nm[i]=nm[j];
      nm[j]=t;
      
    }

  printf("Reverse name %s",nm);
  return 0;
}
// code to check the lenght of a string 
#include <stdio.h>
int main()
{
    char array[] ="rohan beriwal\0" ;
    int counter =0 ;
    
    int i = 0;
    
    while (array[i]!="\0")
    {
        counter = counter+1 ;
        i++ ;
    }
    printf("the lenght for the string is %d", counter) ;
    return 0 ;
    
    
}
// code for the lenght of the size of sting using gets and puts 
#include <stdio.h>
int main()
{
    char array[1000];

  printf("Enter any name");
  gets(array);
  
    int counter =0 ;
    
    int i = 0;
    
    while (array[i]!='\0')
    {
        counter = counter+1 ;
        i++ ;
    }
    printf("the lenght for the string is %d", counter) ;
    return 0 ;
    
    
}
// structure are user defined data type 
// just like classes in python they are used to create something lime classes
/*
use to store the attribute of different type of different data sets
it is used to store some data 
syntax of structure 
strct employee {
    char name ;
    int age ;
    float salary ;
} ;---> this semi- colon is also used in the end 
how to set the value in the structures of the class created ;
structure employee name ;
employee.name = attribute (that is being set in the struct)
strcpy() is used to copy the data from the one string array 
to anathor 
syntax iis 
strcpy(s1,"name") ;
we can define some other class and we dont need to write the 
sttributes again 
just write the structure class again down the line 
the second class will have each of the attribute to that of the
parrent class 
*/


// code for the struct or class and object oiritned programmng 
#include <stdio.h>
#include <string.h>
int main()
{
    struct person{
        char name[1000]  ;
        int age   ;
        float salary ;
        
    }p1,p2 ;
    
    strcpy(p1.name,"rohan") ;
    p1.age = 18 ;
    p1.salary = 90000 ;
    
    strcpy(p2.name,"jaanvi") ;
    p2.age  = 16 ;
    p2.salary = 20000 ;
    
    printf("%d---->%s\n",p1.age,p1.name) ;
      printf("%d---->%s\n",p2.age,p2.name) ;
    printf("\n%f salary of %s",p1.salary, p1.name) ;
    printf("\n%f salary of %s", p2.salary, p2.name) ;
    
    
}
/*
if we dont want ot make the classes again and again then
we can use typedef functuon that is used while making the 
strruct 
synatx
typedef struct name {
    sttributes ;

}*/

//MULTIPLE POINT DECLERTATION 
#include <stdio.h>
#include <string.h>
int main()
{
    int x = 10 ; 
    int y = 15 ;
    int* a = &x  ;
    int* b = &y ;
    printf("%p\n",a) ;
    printf("%p\n", b) ;
    printf("%d\n",*a) ;
    printf("%d\n",*b) ;
    return 0 ;
}

// simply inheritance is also used sometimes like 
// using b = a for a class or struct that is veing 
// created 
// code for factorial with -ve number
#include <stdio.h>
int main()
{
    int num , var =1 ;
    printf("enter the number ;");
    scanf("%d", &num);
    if (num>0){
    for (int i = 1 ; i<= num ;i=i+1)
    {
        var  = var*i;
        
    }
    printf("the factorial of the number is %d",var);
    }
    else
    {
        printf("not possible");
    }
    return 0;
}
// in structurs always use deep copy 
// deep copy reduces the time forn wrting the code 


// code to find if two people are in same dept or not 
// Online C compiler to run C program online
// Online C compiler to run C program online
#include <stdio.h>


struct studentdet
{
char nm[20];
int age;
int yrjoin;
int rollno;
char dept[20];

};


void compare(struct studentdet s1,struct studentdet s2)
{
    if(s1.dept==s2.dept)
  {
    printf("Both are from same department");
  }
  else
  {
    printf("Both are from different department");
  }
}


int main(void) {
/*
  typedef int india;

  india a,b,c;   //"india is a new name for int type data"
  */
  
  struct studentdet s1,s2;

  printf("Enter record of student1\n");
  printf("Enter roll no");
  scanf("%d",&s1.rollno);
  printf("Enter name");
  scanf("%s",s1.nm);

  printf("Enter year of join");
  scanf("%d",&s1.yrjoin);

  printf("Enter age");
  scanf("%d",&s1.age);

  printf("Enter department");
  scanf("%s",s1.dept);

    printf("Enter record of student2\n");
  printf("Enter roll no");
  scanf("%d",&s2.rollno);
  printf("Enter name");
  scanf("%s",s2.nm);

  printf("Enter year of join");
  scanf("%d",&s2.yrjoin);

  printf("Enter age");
  scanf("%d",&s2.age);

  printf("Enter department");
  scanf("%s",s2.dept);

  
compare(s1,s2);

  
  return 0;
}

// code for address printiing through structures
// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct person 
    {
        int weight ;
        int age ;
        
    }person ;
    
    person a ;
    person b;
    a.weight = 18  ;
    b.age = 27 ;
    person* x = &a;
    person* y = &b ;
    printf("%p\n",x) ;
    printf("%p\n",y) ;
    return 0 ;
    
}


// array of a strucurew 
#include <stdio.h>
    
    struct studentdet {
      char nm[20];
      int age;
      int yrjoin;
      int rollno;
      char dept[20];
    };
    
    
    int main(void) {
      /*
        typedef int india;
    
        india a,b,c;   //"india is a new name for int type data"
        */
    
      struct studentdet s[4]; // array of a structure
    
      for (int i = 0; i < 4; i++) {
        printf("Enter record of student1\n");
        printf("Enter roll no");
        scanf("%d", &s[i].rollno);
        printf("Enter name");
        scanf("%s", s[i].nm);
    
        printf("Enter year of join");
        scanf("%d", &s[i].yrjoin);
    
        printf("Enter age");
        scanf("%d", &s[i].age);
    
        printf("Enter department");
        scanf("%s", s[i].dept);
        }
        printf("\nAll students\n");
    
        for (int i = 0; i < 4; i++) {
          if (s[i].age > 18) {
            printf("\n%d %s %d %d %s", s[i].rollno, s[i].nm, s[i].yrjoin, s[i].age,
                   s[i].dept);
          }
        }
    
        return 0;
      }
// code for dynamic memory allocation and 
// dynamic memeory management 
#include <stdio.h>

int main(void) {


  int *p;

  int n,s=0;

  printf("Enter n");
  scanf("%d",&n);

  p=(int *)malloc(sizeof(int)*n); //dynamic memory allocation
  

  for(int i=0;i<n;i++)
    {
      scanf("%d",&p[i]);
      s=s+p[i];
    }

  printf("Sum = %d",s);


  free(p); //dynamic memory deallocation 
  
  return 0;
}
// recursion 
// 13 test cases
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int f(n)
{
   
    
    if(n==1)
    {
        return 1 ;
        
    }
    if(n==2)
    {
        return 2 ;
        
    }
    if(n==3)
    {
        return 3 ;
        
    }
    else
    {
       return  f(n-1)+f(n-2) + f(n-3);
       
    }
   
    return 0 ;
}

int main()
{
    int n ;
    printf("enter the number n ") ;
    scanf("%d",&n) ;
    int a , b , c ;
    scanf("%d %d %d",&a,&b,&c) ;
    f(n) ;
    printf("%d",f(n)) ;
    
}

// hacker rank questun forn sum printing 
#include <stdio.h>
#include <string.h>
int main()
{
    int boysum=0 , girlsum=0 ; 
    int n  ;
    printf("\nenter the number of students") ;
    scanf("%d",&n) ;
    int marks[n] ;
    
    for(int i = 0 ; i<n  ; i++)
    {
        printf("\nenter the marks") ;
        scanf("%d",&marks[i])  ;
    }
   
   
    for(int i = 0 ; i<n ;i++)
    {
        if (i%2==0)
        {
            boysum = boysum+marks[i] ;
            
        }
        else
        {
            girlsum = girlsum +marks[i] ;
            
        }
        
    }
    char choice ;
    printf("\nenter the choice ") ;
    scanf("%d",&choice) ;
    if (choice == 1 )
    {
        printf("\nthe sum for boys is %d",boysum) ;
        
    }
    else if (choice ==0 )
     {
         printf("\nthe sum for the girls is %d",girlsum) ;
    }
    return 0 ;
    
}
// code 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int f(int n,int a,int b,int c)
{
   if (n==1 )
   {
       return a ;
   }
   else if(n==2)
   {
       return b;
   }
   else if(n==3)
   {
       return c;
   }
    else
    {
    
       return  f(n-1,a,b,c)+f(n-2,a,b,c) + f(n-3,a,b,c);
    }  
    
   
}

int main()
{
    int n ;
    //printf("enter the number n ") ;
    scanf("%d",&n) ;
    int a , b , c ;
    scanf("%d %d %d",&a,&b,&c) ;
    
    printf("%d",f(n,a,b,c)) ;
    
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int f(int n,int a,int b,int c)
{
   if (n==1 )
   {
       return a ;
   }
   else if(n==2)
   {
       return b;
   }
   else if(n==3)
   {
       return c;
   }
    else
    {
    
       return  f(n-1,a,b,c)+f(n-2,a,b,c) + f(n-3,a,b,c);
    }  
    
   
}

int main()
{
    int n ;
    //printf("enter the number n ") ;
    scanf("%d",&n) ;
    int a , b , c ;
    scanf("%d %d %d",&a,&b,&c) ;
    
    printf("%d",f(n,a,b,c)) ;
    
}
// code for the two number is equal or not 
// using pojinter  ;

#include <stdio.h>
int main()
{
    int a,b ;
    scanf("%d",&a) ;
    scanf("%d",&b) ;
    int* z  = a ;
    int* m = b  ;
    if (z==m) 
    {
        printf("yes they are equal") ;
        
    }
    else 
    {
        printf("they are not equal") ;
        
    }
    return 0 ;
}

// code for q-1 geekfor geeks 
//error
#include <stdio.h>
int main()
{
    int x  ; 
    int counter ;
    printf("enter") ;
    scanf("%d",&x) ;
    int array[x] ;
    int temp = array[0] ;
    
    for(int i = 0 ; i<x  ; i++)
    {
        printf("enter the inputs") ;
        scanf("%d",&array[i]) ;
        
    }
    for(int i =0 ; i<x ; i++)
    {
        for(int j = x-1-i ; j<x  ; j++ )
        {
            if (array[i]>temp)
            {
                temp = array[j] ;
                array[i] = array[j] ;
                array[j] = array[i] ;
                
            }
            
        }
    }
    printf("%d", temp) ;
    printf("\n") ;
    for(int i = 0 ; i<x ; i++)
    {
        printf("%d ",array[i]) ;
        
    }
    return 0 ;
}

// code q-02  ;
//prefect code for sorting a array 
    #include <stdio.h>
    void main()
    {
 
        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }


// binary seach in  algioritm
#include<stdio.h>
int find(int num , int left , int right , int array[])
{
    int left , right ;
    if (left = right)
    {
        if(array[left]=num)
        {
            printf("%d is the index of the elemnt",left);
        }
        else
        {

            int  middle = (left +right)/2 ;
            if (num<middle)
            {
                find(num , left , right-1, array[]); 
            }
            else 
            {

            }
        }
    }
    else 
    {

    }
    
}

int main()
{
   int x  ;
   printf("enter the number of terms") ;
   scanf("%d",&x) ;
   int num ; 
   printf("enter the number you wish to find") ;
   scanf("%d",&num) ;
   int array[x] ;
   for(int i = 0 ; i<x  ; i++)
    {
        printf("enter the number") ;
        scanf("%d",&array[i]) ;

    }
    int left , right ;
    left = 
    find( num ,left , right ,array[x]);
    return 0 ;
}

