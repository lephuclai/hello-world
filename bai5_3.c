#include<stdio.h>

int main(){
    int n, tg;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);}
    for(int i = 0; i < n; i++){
        for(int j = i+1; j<n; j++){
            if(a[i]>a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
    return 0;
}