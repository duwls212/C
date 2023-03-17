#include <stdio.h>

int main(){
    
    int Tcase, num, i, j;
    int score[999];
    double stu = 0, ave = 0, sum = 0, more = 0;
    
    scanf("%d", &Tcase);
    
    for(i = 0; i < Tcase; i++){
        
        scanf("%d", &num);
        
        for(j = 0; j < num; j++){
            
            scanf("%d", &score[j]);
            sum += score[j];
        }
        
        ave = sum / num;
        
        for(j = 0; j < num; j++){
            
            if(score[j] > ave) more++;
        }
        
        stu = more / num * 100.0;
        printf("%.3lf%%\n", stu);
        
        sum = 0;  more = 0; stu = 0;  ave = 0;
    }
    
}
