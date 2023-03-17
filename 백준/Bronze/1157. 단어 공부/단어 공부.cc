#include <stdio.h>
#include <string.h>

int main(){
    
    int len, i, j = 0, max = 0, temp = 0, cnt = 0;
    char voca[1000001];
    int alp[26], res[26] = {0, };
    
    scanf("%s", voca);
    len = strlen(voca);     //문자열의 길이 측정
    
    for(i = 0; i < 26; i++){
        alp[i] = i;             //문자열과 비교하기 위해 0부터 26까지 배열 초기화 시킴
    }
    
    for(i = 0; i < len; i++){
        if(voca[i] >= 'a' && voca[i] <= 'z'){
            voca[i] -= 'a';
        }
        else if(voca[i] >= 'A' && voca[i] <= 'Z'){
            voca[i] -= 'A';                      //대소문자 관계없이 A는 0, B는 1... 으로 비교하기 쉽게 만들어 줌
        }
    }
    
    while(j < 26){
        for(i = 0; i < len; i++){
            
            if(alp[j] == voca[i]){
                res[j]++;               //0 ~ 25(a ~ z)까지 어떤 알파벳이 가장 많은지 result배열에 입력
            }
        }
        
        if(max <= res[j]){
            if(max == res[j]){
                cnt = j;            //지금까지 비교한 것들 중에 가장 많은 알파벳이 2개 이상이면 count에 보관
            }
            max = res[j];
            temp = j;           //temp에 최댓값을 저장, max에 최댓값의 갯수를 저장함
        }
        j++;
    }
    
    if(cnt != 0 && cnt == temp){
        printf("?");
        return 0;           //최댓값이 두 개 이상이라면 "?" 출력
    }
    
    printf("%c", temp + 'A');       //0 ~ 25로 초기화했던 값에 'A'의 아스키코드 값 65를 더해줌
    
}
