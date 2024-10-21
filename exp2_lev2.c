#include<stdio.h>
int main(){
    int t,e,m,s,ss,tot;
    float per;
    scanf("%d%d%d%d%d",&t,&e,&m,&s,&ss);
    tot=t+e+m+s+ss;
    per=(float)tot/5;
    if((t>49&&t<101) && (e>49&&e<101) && (m>49&&m<101) && (s>49&&s<101) &&( ss>49&&s<101)){
        if(per>=90)
        {
            printf("Excellent");
        }
        else if(per>=80)
        {
            printf("Very good");
        }
        else if (per>=70){
            printf("Good");
        }
        else if(per>=40){
            printf("Average");
        }
    }
    else if(t>100||t<0||e>100||e<0||m>100||m<0||s>100||s<0||ss>100|| ss<0){
        printf("invalid");
    }
    else {
        printf("fail");
    }
    
    return 0;
}

