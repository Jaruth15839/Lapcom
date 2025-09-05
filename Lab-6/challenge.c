#include<stdio.h>
#include<string.h>
struct student {
    char name[50];
    int id, math, end, sci, his;
    float avg;
};
int main(){
    struct student s[3];
    float avgmax = 0.0;
    char maxname[50] = "";
    float math_sum = 0, end_sum = 0, sci_sum = 0, his_sum = 0;
    for(int i=0;i<3;i++){
        printf("Enter name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter ID of student %d: ",i+1);
        scanf("%d",&s[i].id);
        printf("Enter marks of Math, English, Science and History: ");
        scanf("%d %d %d %d",&s[i].math,&s[i].end,&s[i].sci,&s[i].his);
        s[i].avg=(s[i].math+s[i].end+s[i].sci+s[i].his)/4.0;
        math_sum += s[i].math;
        end_sum += s[i].end;
        sci_sum += s[i].sci;
        his_sum += s[i].his;
        printf("\n");
    }
    printf("Student Averages:\n");
    for(int i=0;i<3;i++){
        printf("%s (ID: %d): %.2f\n",s[i].name,s[i].id,s[i].avg);
        if (avgmax < s[i].avg) {
            avgmax = s[i].avg;
            strcpy(maxname, s[i].name);
        }
    }
    printf("\nTop Student: %s with %.2f\n\n", maxname, avgmax);

    float math_avg = math_sum/3.0, end_avg = end_sum/3.0, sci_avg = sci_sum/3.0, his_avg = his_sum/3.0;
    printf("Subject Averages:\n");
    printf("Math: %.2f\n", math_avg);
    printf("English: %.2f\n", end_avg);
    printf("Science: %.2f\n", sci_avg);
    printf("History: %.2f\n", his_avg);

    float subject_avgs[4] = {math_avg, end_avg, sci_avg, his_avg};
    char* subject_names[4] = {"Math", "English", "Science", "History"};
    int top_idx = 0;
    for(int i=1;i<4;i++){
        if(subject_avgs[i] > subject_avgs[top_idx])
            top_idx = i;
    }
    printf("\nTop Subject: %s with average %.2f\n", subject_names[top_idx], subject_avgs[top_idx]);
}