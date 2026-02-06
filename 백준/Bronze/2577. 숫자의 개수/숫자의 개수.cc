#include <stdio.h>
#include <string.h>

int main() {
    int a,b,c, result=0;
    int one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0, zero=0;
    char arr[100];
    scanf("%d %d %d", &a, &b, &c);
    result = a*b*c;
    sprintf(arr, "%d", result);
    
    int num = strlen(arr);
    for(int i=0; i<num; i++){
        if(arr[i]=='1')
            one +=1;
        if(arr[i]=='2')
            two +=1;
        if(arr[i]=='3')
            three +=1;
        if(arr[i]=='4')
            four +=1;
        if(arr[i]=='5')
            five +=1;
        if(arr[i]=='6')
            six +=1;
        if(arr[i]=='7')
            seven +=1;
        if(arr[i]=='8')
            eight +=1;
        if(arr[i]=='9')
            nine +=1;
        if(arr[i]=='0')
            zero +=1;
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", zero, one, two, three, four, five, six, seven, eight, nine);
    
}