#include<stdio.h>
double m,s,v,mm,ss;
long long int total,totall;
int cishu=0;
int main(){
	while(1){
		printf("��Ƶʱ��(�� ��)��");
		scanf("%lf%lf",&m,&s);
		printf("���٣�"); 
		scanf("%lf",&v);
		if(v==0) printf("�����δ����������%d�� (���������Ƥ���������ڴ��ڡ���)\n\n\n",cishu);
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
			printf("ʵ��ʱ����%.0lf �� %.0lf �� (���� %lld ��)\n",m,s,total);
			if(totall>0){
				printf("����Ҫ���ʱ��%.0lf �� %.0lf �� ������ %lld �룩\n\n",mm,ss,totall);
			}else if(totall!=0){
				printf("����ʡ�ˣ�%.0lf �� %.0lf �� ������ %lld �룩\n\n",mm,ss,-totall);
			}else{
				printf("\n\n");
			}
			cishu++;
		}
		
	}
	return 0;
}
