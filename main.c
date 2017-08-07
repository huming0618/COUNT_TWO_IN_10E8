#include <stdio.h>
#include <time.h>

int main(){
    int from_num = 1;
    int to_num = 1e8;
    int count = 0;

    printf("from %d to %d \n", from_num, to_num);

    clock_t begin = clock();

    for(int i=from_num;i<=to_num;i++){
        int tmp = i;
        do{
            int test = tmp % 10;
            if (test == 2){
                count++;
            }
            tmp = tmp/10;
        }while(tmp);
        //printf("num_text  %s %d \n", num_text, n);
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("count %d %f \n", count, time_spent);
    return 0;
}