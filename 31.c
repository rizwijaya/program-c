#include<stdio.h>
#include<string.h>

int arr[1000001];
int prime[77778];
int cntprime;
void sieve(){ //fungsi sieve dlm mencari bil prima
memset(arr,0,sizeof (arr)); //memberi nilai 0 pada isi array
int i,j;
cntprime=0;
arr[1]=1;
for(i=2;i<1000001;i++){
if(arr[i]==1) continue;
prime[cntprime++]=i; //bil prima disimpan dalam array prime
for(j=i+i;j<1000001;j+=i) arr[j]=1;
//jika angka tdk prima continue
}
}
int main(){
sieve();
int c,n,i;
scanf("%d",&n); //input angka
for(i=0;n>1;i++){
c=0;
while(n%prime[i]==0){ //jika mod prima =0
n/=prime[i]; //dibagi dgn bil tersebut dan di counter
c++;
}
if(c==1) printf("%d",prime[i]);
//jika 1 langsung print angka prima
else if(c>1) printf("%d^%d",prime[i],c);
//jika pangkat, print counter jg
if(c>0 && n>1) printf(" x "); //print kali
}
printf("\n");
}
