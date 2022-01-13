
// condional statement if,else if,else
// display the grade score
// 85<=score<=100   => Grade A
// 70<=score<84     => Grade B
// 55<=score<69     => Grade C
// 40<=score<54     => Grade D
// score<40         => Grade F

#include <stdio.h>
#include <math.h>

int main() {
	float score;
	printf("please input the score: ");
	scanf("%f",&score);
    if(score>=85 && score<=100){
	    printf("you get grade A\n");
    }
    else if(score>=70 && score<84){
	    printf("you get grade B\n");
    }
    else if(score>=55 && score<69){
	    printf("you get grade C\n");
    }
    else if(score>=40 && score<54){
	    printf("you get grade D\n");
    }
    else if(score<40){
	    printf("you get grade F\n ");
    }


    return 0;
}

  
