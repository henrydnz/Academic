#include <stdio.h>

int main() {
    int problems, partyTime, t, ans;
    scanf("%d%d", &problems, &partyTime);
    ans=problems;
    t=240-partyTime;
    for(int i=1,sum=0;i<=problems;i++){
        sum+=i*5;
        if(sum>t){ans=i-1; break;}
    }
    printf("%d\n", ans);

    return 0;
}