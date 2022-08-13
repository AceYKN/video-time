#include<stdio.h>
double m,s,v,mm,ss;
long long int total,totall;
int cishu=0;
int main(){
	while(1){
		printf("视频时长(分 秒)：");
		scanf("%lf%lf",&m,&s);
		printf("倍速："); 
		scanf("%lf",&v);
		if(v==0) printf("您本次打开软件计算了%d次 (本次算你调皮，不计算在此内。。)\n\n\n",cishu);
		else{
			mm=m;ss=s;
			total=m*60+s;
			totall=total;
			total=total/v;
			m=total/60;
			s=total%60;
			totall=total-totall;
			mm=totall/60;
			ss=totall%60;
			if(mm<0){
				mm=-mm;
			}
			if(ss<0){
				ss=-ss;
			}
			printf("实际时长：%.0lf 分 %.0lf 秒 (共计 %lld 秒)\n",m,s,total);
			if(totall>0){
				printf("您需要多耗时：%.0lf 分 %.0lf 秒 （共计 %lld 秒）\n\n",mm,ss,totall);
			}else if(totall!=0){
				printf("您节省了：%.0lf 分 %.0lf 秒 （共计 %lld 秒）\n\n",mm,ss,-totall);
			}else{
				printf("\n\n");
			}
			cishu++;
		}
		
	}
	return 0;
}
