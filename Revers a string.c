
#include<stdio.h>
int main ()
{
    char string[1000],reverse[1000];
    int counter = 0,i =0;
    int s_index,r_index;
    printf("Enter your string :\n");
    gets(string);

    while(string[counter]!='\0'){
     counter++;
    }
    int count = counter;
    for (i = 0;i<counter;i++){
        reverse[i]=string[count-1];
        count--;
    }

    puts(reverse);
}
/*
      Work on human service
      Problem solved by Akash Karmokar (Aditto)
      Metropolitan University,sylhet,Bangladesh.
      email : akashcsemu@gmail.com
*/
