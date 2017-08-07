
int main(){
    int from_num = 1;
    int to_num = 1e8;
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