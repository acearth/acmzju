using namespace std;  
int year[2] = {365, 366};    //0 非润年  
int month[2][12] =   
{  
    {31,28,31,30,31,30,31,31,30,31,30,31},  
    {31,29,31,30,31,30,31,31,30,31,30,31}  
};      
char week[7][10]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};  
int isRun(int y){  
    if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0) )  
        return 1;    //返回1 润年  
    return 0;  
}   
int main(){  
    int n,i;  
      
    while(cin>>n&&n>0){  
        int y=2000,m,d;  
        int dayofweek=n%7;  
        while(n>=year[isRun(y)]){  
            n-=year[isRun(y)];  
            y++;  
        }  
  
        for(i=0;i<12;i++){  
            if(n>=month[isRun(y)][i])  
                n-=month[isRun(y)][i];  
            else{  
                m=i+1;  
                d=n+1;  
                break;  
            }  
        }  
        printf("%d-%02d-%02d %s\n",y,m,d,week[dayofweek]);  
  
  
  
          
          
          
    }  
    return 0;  
      
      
}  
