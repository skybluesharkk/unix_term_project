#include <stdio.h>

#define MAX_TITLE_SIZE 50

void create_music_titles(FILE* stream){

}


/*
 첫 번째 줄에 재생 목록에 추가할 노래의 개수 N이 주어진다. (1<=N<=10)

두 번째 줄부터 N 개의 노래명이 주어진다.

N+2 번째 줄에 명령어의 개수 M 이 주어진다. (1<=M<=50)

N+3 번째 줄부터 M 개의 명령어가 주어진다.
 */
void read_file(char* file_name){
    FILE *fp = fopen("read.txt", "rt");
    fgetc('N', fp);

    /*
    if(fp == NULL){
        return -1;
    }
     */
    fclose(fp);
}

void write_file(char* file_name){
    FILE *fp = fopen("write.txt", "wt");

    fclose(fp);
}
