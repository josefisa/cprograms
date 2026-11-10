/* Created by Jose Emanuel.
 The objetive of this script is to solve 50 exercises in:
 "https://w3resource.com/c-programming-exercises/"
 First part: Basic Declaraations and Expressions.
 main fun call every other function, which is the one where the solution for the exercice is.
 The name of the function coincide with the exercise number:
 */


#include <stdio.h>
#include <stdlib.h>

int one(){
    //Print name, DOB, and mobile number
    printf("First exercise: Print name, DOB, and mobile number\n");
    printf("Name    : José Emanuel\n");
    printf("DOB     : April 3, 1998\n");
    printf("Mobile  : +58 4565461313\n\n");
    return 0;
}

int four(){
    /*     Write a C program to print the following characters in reverse.
    Test Characters: 'X', 'M', 'L'
    Expected Output:
    The reverse of XML is LMX
    */
    char c1 = 'X';
    char c2 = 'M';
    char c3 = 'L';
    printf("The reverse of %c%c%c is %c%c%c\n", c1,c2,c3,c3,c2,c1);
    return 0;
}

int seven(){
    //Display multiple variables of various types

    int a = 125;
    int b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    int sum_a_c = a + c;
    printf("a + c is: %d\n", sum_a_c);

    double sum_x_c = c + x;
    printf("x + c is: %f\n", sum_x_c);

    int new_dx = dx;
    long sum_int_dx_ax = new_dx + ax; 
    printf("((int) dx) + ax is: %ld\n", sum_x_c);
    //Or even:
    printf("((int) dx) + ax is: %ld\n", ((int) dx) + ax );

    printf("a + x : %f\n", a + x);
    printf("s + b = %i\n", s + b);
    printf("ax +b = %ld\n", ax + b);
    printf("ax +c = %ld\n", ax +c);
    printf("ax + ux = %lu\n", ax + ux);

    return 0;
}

int ten(){
    //Calculate product of two integers
    int x, y;
    printf("\nInput the first number: ");
    scanf("%d", &x);

    printf("\nInpute the second number: ");
    scanf("%d", &y);

    printf("\nProduct of those two is: %d\n", x*y);

    return 0;
}

int thirty(){
    //Find the maximun of three integers.
    int x, y, z, ans;
    printf("Program will give you the maximun of three numbers you input.");
    printf("\nInput the first number: ");
    scanf("%d", &x);
    printf("\nInput the second number: ");
    scanf("%d", &y);
    printf("\nInput the third number: ");
    scanf("%d", &z);

    //This is simpler.
    ans = (x  + y + abs(x-y))  / 2;
    ans = (z + ans + abs(ans-z)) / 2;
    printf("\nThe largest number is: %d\n", ans);

    return 0;
}

int sixty(){
    int amm, rem; //Ammount and Remainder.

    printf("\nPlease type the ammount of money:");
    scanf("%d", &amm);

    printf("\n%d Notes of 100$: \n", amm / 100);
    rem = amm % 100;
    printf("%d Notes of 50$: \n", rem / 50);
    rem = rem % 50;
    printf("%d Notes of 20$: \n", rem / 20);
    rem = rem % 20;
    printf("%d Notes of 10$: \n", rem / 10);
    rem = rem % 10;
    printf("%d Notes of 5$: \n", rem / 5);
    rem = rem % 5;
    printf("%d Notes of 2$: \n", rem / 2);
    rem = rem % 2;
    printf("%d Notes of 1$: \n", rem / 1);

    return 0;
}

int ninety(){

    int p, q, r, s;

    printf("\nThis is the password varification");
    printf("\nInsert value p: ");
    scanf("%d", &p);
    printf("\nInsert value q: ");
    scanf("%d", &q);
    printf("\nInsert value r: ");
    scanf("%d", &r);
    printf("\nInsert value s: ");
    scanf("%d", &s);

    if ( ((s%2) == 0) || (p>0 && q>0 && r>0)  ) {
        printf("Wrong values");
        exit(1);
    }

    if ( (q>r) &&    (s > r)   &&( (r+s)>(p+q)) ){
        printf("Correct Values");
    } else {
        printf("Wrong values");
    }

    return 0;
}

int twentytwo(){
    int i, numbers[5], sum =0;
    
    printf("\nInput the first number: ");
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: ");
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: ");
    scanf("%d", &numbers[2]);
    printf("\nInput the fourth number: ");
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: ");
    scanf("%d", &numbers[4]);

    for (i = 0; i<5; i++){
        if((numbers[i]%2) !=0){
            sum += numbers[i];
        }
    }

    printf("The sum of all even numbers is: %d", sum);
    return 0;
}

int twentyfive(){
    //Get month name from number (1-12)

    const char *months[] = {"January","February","March","April","May","June",
        "July","Ausgust","September","October","November","December"};
    
    int i;
    printf("\nType the month number: ");
    scanf("%d", &i);
    i -= 1; //To look in the array.

    printf("\nThe %d month is: %s",(i+1),months[i]);
    return 0;
}

int twentyeight(){
    /*Write a C program that reads 5 numbers, counts the number of positive
     numbers, and prints out the average of all positive values.*/
    int i, numbers[5], sum =0, count=0;
    float avg;
    
    printf("\nInput the first number: ");
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: ");
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: ");
    scanf("%d", &numbers[2]);
    printf("\nInput the fourth number: ");
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: ");
    scanf("%d", &numbers[4]);


    for(i=0; i<5; i++){
        if(numbers[i]>0){
            sum += numbers[i];
            count += 1; 
            printf("sum:    %d",sum);
            printf("count:  %d",count);
        }
    }

    if(count>0){
        avg = (float)sum/ count;
        printf("\nThe averages of the positives is: %.2f", avg);
    } else{
        printf("\nThere are not positive numbers.");
    }

    return 0;
}

int thirtyone(){
    /*Write a C program to check whether a given integer is positive even, negative even,
     positive odd or negative odd. Print even if the number is 0.*/
    int number;

    printf("\nType the number: ");
    scanf("%d", &number);

    if(number == 0){
        printf("\n%d is even and neutral.");
    } else if ( number < 0){
        if (number%2 ==0){
            printf("\n%d is even negative.", number);
        } else{
            printf("\n%d is odd negative.", number);
        }
    } else {
        if (number%2 ==0){
            printf("\n%d is even positive.", number);
        } else{
            printf("\n%d is odd positive.", number);
        }
    }

    return 0;
}

int thirtyfour(){
    /*Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.*/
    int low, upp, i, sum;
    printf("Type the first number: ");
    scanf("%d", &low);
    printf("Type the second number: ");
    scanf("%d", &upp);

    for(i = low; i<=upp; i++){
        if((i%2) != 0){
            sum += i;
        }
    }

    printf("The sum of all the ood numbers is: %d", sum);
    return 0;
}

int thirtyseven(){
    /*Write a C program to read the coordinates (x, y) (in the Cartesian system)
     and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).*/
    int x, y;

    printf("\nWrite the coordinates (x,y)");
    printf("\nx:");
    scanf("%d", &x);
    printf("\ny:");
    scanf("%d", &y);

    if(x > 0){
        if( y > 0){
            printf("Quadrant I(+,+)");
        } else{
            printf("Quadrant IV (+,-)");
        }
    } else {
                if( y > 0){
            printf("Quadrant II (-,+)");
        } else{
            printf("Quadrant  III (-,-)");
        }
    }

    return 0;
}

int forty(){
    /*Write a C program that finds all integer numbers that divide by 7 
    and have a remainder of 2 or 3 between two given integers.*/

    int low, upp, i;

    printf("\nInput the first integer: ");
    scanf("%d", &low);
    printf("\nInput the second integer: ");
    scanf("%d", &upp);

    for(i = low; i <= upp; i++){
        if( i%7 ==0 && (i+2)<upp){
            printf("\n%d", i+2);
            if((i+3)<upp){
                printf("\n%d", i+3);
            }
        }
    }
    return 0;
}

int fortythree(){
    /*Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line*/
    int lines, characters, i=0, l, c;

    printf( "\nInput number of lines: ");
    scanf("%d", &lines);
    printf( "N of characters in a lines: ");
    scanf("%d", &characters);

    for(l=1; l<=lines; l++){
        for(c=1; c<=characters; c++){
            i += 1;
            printf(" %d", i);
        }
        printf("\n");

    }


    return 0;
}

int fortysix(){
    /*Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.*/
    float sum;
    sum  = 1.0 + (3.0/2) + (5.0/4) + (7.0/8);
    printf("\nValue of series: %.2f\n", sum);


    return 0;
}

int fortynine(){
    /*Write a C program to read and print the elements of an array with length 7. 
    Before printing, insert the triple of the previous position, starting from the second position.
    For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162*/
    int numbers[7];

    printf("\nImput the first number of the series: ");
    scanf("%d",&numbers[0]);

    for(int i = 1; i<=6; i++){
        numbers[i] = numbers[i-1]*3;
    }

    for(int i=0; i<= 6; i++){
        printf("n[%d] = %d", i, numbers[i]);
    }


    return 0;
}

int fiftytwo(){
    /*Write a C program to read an array of length 6 and find the smallest element and its position.*/
    int numbers[6], min, index;

    for (int i = 0; i < 6; i++){
        printf("\nType the %d integer: ", i);
        scanf("%d", &numbers[i]);
    }

    min = numbers[0];
    index = 0;

    for(int i = 1; i<6; i++ ){
        if(numbers[i] < min){
            min = numbers[i];
            index = i;
        }
    }

    printf("\nSmallest value: %d\n", min);
    printf("Position of the element: %d", index);
    return 0;
}

int fiftyfive(){
    /*Write a C program that swaps two numbers without using a third variable.*/
    int x, y;

    printf("Input the values for x & y: ");
    scanf("%d%d", &x, &y);

    printf("\nBefore value swaping x & y: %d %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Before value swaping x & y: %d %d", x, y);

    return 0;
}

int fiftyeight(){
    /*Write a C program that accepts 4 real numbers from the keyboard and prints out the
     difference between the maximum and minimum values of these four numbers.*/

    float numbers[4], min, max, diff;

    for(int i = 0; i < 4; i++){
        printf("Input the %d number: ", i+1);
        scanf("%f", &numbers[i] );
    }

    min = numbers[0];
    max = numbers[0];

    for(int i = 1; i < 4; i++){
        if(numbers[i] <  min){   min = numbers[i];   }
        if(numbers[i] > max){   max = numbers[i];   }
    }

    diff = max - min;
    printf("Difference is: %.4f", diff);

    return 0;
}


void main(){
    //The only reason of this function is to call every other function.

    //one();
    //four();
    //seven();
    //ten();
    //thirty();
    //sixty();
    //ninety();
    //twentytwo();
    //twentyfive();
    //twentyeight();
    //thirtyone();
    //thirtyfour();
    //thirtyseven();
    //forty();
    //fortythree();
    //fortysix();
    //fortynine();
    //fiftytwo();
    //fiftyfive();
    fiftyeight();
}