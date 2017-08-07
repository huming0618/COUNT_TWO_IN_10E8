#include <stdio.h>
#include <time.h>

int count_number_two(int from_num, int to_num){
    int count = 0;

    for(int i=from_num;i<=to_num;i++){
        int tmp = i;
        do{
            int test = tmp % 10;
            if (test == 2){
                count++;
            }
            tmp = tmp/10;
        }while(tmp);
    }
    return count;
}

int main(){
    int from_num = 1;
    int to_num = 1e8;
    int count = 0;

    printf("from %d to %d \n", from_num, to_num);

    clock_t begin = clock();

    count = count_number_two(from_num, to_num);

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("count %d %f \n", count, time_spent);
    return 0;
}