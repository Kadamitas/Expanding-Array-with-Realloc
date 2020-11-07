#include <stdio.h>
#include <stdlib.h>

struct Student{
char name[51];
int age;
char year[51];
};

void main(void) {
    int yesNo = 0;
    struct Student* list = (struct Student *)malloc(sizeof(struct Student) * 3);
    for(int i=0;i<3;i++){
        printf("Give your name \n");
        scanf("%s",list[i].name);
        printf("Give your age \n");
        scanf("%i",&list[i].age);
        printf("Give your grade \n");
        scanf("%s",list[i].year);
    }
    printf("Do you wish to enter more \n");
    scanf("%i", &yesNo);
    yesNo:
    if(yesNo == 1){
        list = realloc(list,(sizeof(list)+sizeof(struct Student)));
        goto yesNo;
    }
    free(list);
    return;
}