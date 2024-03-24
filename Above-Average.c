#include <stdio.h>
#include <stdlib.h>


int main(){

float *mem_num_students;
int num_testcases, num_students;
float avg, above_avg, sum, above_avg_percent, scores, count;

count = 0;
scanf("%d", &num_testcases);
for (int i = 0; i<num_testcases; i++){


    scanf("%d", &num_students);
    mem_num_students = (float*) malloc (num_students * sizeof(float));
    for (int i = 0; i<num_students; i++){
       scanf("%f", &mem_num_students[i]);
        sum += mem_num_students[i];
        
    }

        avg = sum/num_students;
        above_avg = avg + 1;

    for (int i = 0; i < num_students; i++){
        if (mem_num_students[i] > avg)
            count++;
    }
    

    above_avg_percent = count/num_students * 100;
    printf("\nAnswer %.3f", above_avg_percent);

    sum = 0;
    count = 0;
}

    free(mem_num_students);

    return 0;
}