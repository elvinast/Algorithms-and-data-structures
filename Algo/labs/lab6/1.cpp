#include <stdio.h>
#include <string.h>
#define maxn 85

int check(char* s, int per){
    for(int i = 0; i < strlen(s) - per; i++){
        if(s[i + per] != s[i])  return 0;
    }
    return 1;
}

int main(){
    char s[83];
    int T,ans,i,k,len,ok;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%s",s);
        len = strlen(s);
        ok = 0;
        for (k=1; k<len && !ok; k++)
        {
            for (i=0; i < len-k && !ok; i++)
            {
                if (s[i+k] != s[i])break;
                else if ( i== len-k-1 && s[i+k]==s[i] && len%k==0){ ok=1; ans=k;}
            }
        }
        if (ok)printf("%d\n",ans);
        else printf("%d\n",len);
        if (T != 0)printf("\n");
    }
    return 0;
}