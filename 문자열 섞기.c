#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int a = 0;
    a = strlen(str1) + strlen(str2);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * a);
    int b = 0;
    int c = 0;
    
    for(int i = 0; i < a; i++){
        if(i%2==0){
            answer[i] = str1[b];  
            b++;
        }
        if(i % 2 == 1){
            answer[i] = str2[c];
            c++;
        }
        //printf()
    }
    answer[a] = NULL;
    
    return answer;
}
