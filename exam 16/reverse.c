//
//  reverse.c
//  exam 18
//
//  Created by 한설 on 2023/04/11.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reverse.h"

void reverse_str(void)
{
    char *s;
    unsigned int n;
    s = (char*)malloc(sizeof(char) * MAX_STACK_SIZE);   //문자열 메모리 할당
    inputchar(s);
    pushchar(s);
    free(s);    //메모리 반환
    n = size();
    
    for(int i = 0; i < n; i++)
    {
        printf("%c", pop());
    }
    
}

void pushchar(char str[])   //문자열에 있는 데이터를 push해주는 함수
{
    unsigned int len;
    len = (int)strlen(str);
    for (int i = 0; i < len; i++)
    {
        push(str[i]);
    }
}

void inputchar(char *str)
{
    printf("문장을 입력해주세요.\n");
    fgets(str, 100, stdin);
}
