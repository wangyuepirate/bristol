#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>

int isogram(char *s);

int main(void)
{
   assert(isogram("programming")==0);
   assert(isogram("housewarmings")==0);
   assert(isogram("abductions")==1);
   assert(isogram("housewarming")==1);
   assert(isogram("hydromagnetics")==1);
   assert(isogram("uncopyrightable")==1);
   return 0;

}

int isogram(char *s){
int n;
int i,j;
char new[30];
strcpy(new,s);
n=strlen(s);
for(i=0;i<n;i++){
   for(j=i+1;j<n;j++){
       if(new[i]==new[j]){
            return 0;
       }
    }
}
return 1;
}
