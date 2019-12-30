#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<wchar.h>

int numberOfBytesInChar(unsigned char val){
	if(val < 128){
		return 1;
	} else if(val<224){
		return 2;
	} else if(val<240){
		return 3;
	} else{
		return 4;
	}
}

//ham check bang 3 bytes dau
bool isUTF8(FILE *fp){
	int c1,c2,c3;
	c1 = fgetc(fp);c2 = fgetc(fp);c3 = fgetc(fp);
	if((c1==239)&&(c2==187)&&(c3==191)) return true;
}

int main(){
	setlocale(LC_CTYPE, "vi_VN.UTF8");
	char a[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	FILE *fp;
	fp = fopen("C:/Users/dotha/Desktop/input2.txt", "r");
	int str[10000][2];
		if(isUTF8(fp)) {
		printf("Day la file tieng viet \n");
	} else{
		printf("Dau ko phai la file tieng viet \n");
	}
	int c; int n=0;
	int countAll = 0;
	int count[26];
	
	for (int i = 0; i < 26; i++){
		count[i] = 0;    
	}
		
		int i = 0;
		for(c = fgetc(fp); c != EOF; c = fgetc(fp)){
		int k = numberOfBytesInChar(c);
		//printf("%d \n",k);
			if(k==1){
				str[i][0] = c;
				str[i][1] = 0;
				str[i][2] = 0; 
					countAll++;
 					if((str[i][0]==97&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==65&&str[i][1]==0&&str[i][2]==0)) count[0]++;
 					else if((str[i][0]==98&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==66&&str[i][1]==0&&str[i][2]==0)) count[1]++;
 					else if((str[i][0]==99&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==67&&str[i][1]==0&&str[i][2]==0)) count[2]++;
 					else if((str[i][0]==100&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==68&&str[i][1]==0&&str[i][2]==0))count[3]++;
 					else if((str[i][0]==101&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==69&&str[i][1]==0&&str[i][2]==0))count[4]++;
 					else if((str[i][0]==102&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==70&&str[i][1]==0&&str[i][2]==0))count[5]++;
 					else if((str[i][0]==103&&str[i][1]==0&&str[i][2]==0) 
					 	||(str[i][0]==71&&str[i][1]==0&&str[i][2]==0))count[6]++;
 					else if((str[i][0]==104&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==72&&str[i][1]==0&&str[i][2]==0)) count[7]++;
 					else if((str[i][0]==105&&str[i][1]==0&&str[i][2]==0) 
					 	||(str[i][0]==73&&str[i][1]==0&&str[i][2]==0))count[8]++;
 					else if((str[i][0]==106&&str[i][1]==0&&str[i][2]==0) 
					 	||(str[i][0]==74&&str[i][1]==0&&str[i][2]==0))count[9]++;
 					else if((str[i][0]==107&&str[i][1]==0&&str[i][2]==0) 
					 	||(str[i][0]==75&&str[i][1]==0&&str[i][2]==0))count[10]++;
 					else if((str[i][0]==108&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==76&&str[i][1]==0&&str[i][2]==0))count[11]++;
 					else if((str[i][0]==109&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==77&&str[i][1]==0&&str[i][2]==0))count[12]++;
 					else if((str[i][0]==110&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==78&&str[i][1]==0&&str[i][2]==0))count[13]++;
 					else if((str[i][0]==111&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==79&&str[i][1]==0&&str[i][2]==0))count[14]++;
 					else if((str[i][0]==112&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==80&&str[i][1]==0&&str[i][2]==0))count[15]++;
 					else if((str[i][0]==113&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==81&&str[i][1]==0&&str[i][2]==0))count[16]++;
 					else if((str[i][0]==114&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==82&&str[i][1]==0&&str[i][2]==0))count[17]++;
 					else if((str[i][0]==115&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==83&&str[i][1]==0&&str[i][2]==0))count[18]++;
 					else if((str[i][0]==116&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==84&&str[i][1]==0&&str[i][2]==0)) count[19]++;
 					else if((str[i][0]==117&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==85&&str[i][1]==0&&str[i][2]==0))count[20]++;
 					else if((str[i][0]==118&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==86&&str[i][1]==0&&str[i][2]==0))count[21]++;
 					else if((str[i][0]==119&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==87&&str[i][1]==0&&str[i][2]==0))count[22]++;
 					else if((str[i][0]==120&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==88&&str[i][1]==0&&str[i][2]==0))count[23]++;
 					else if((str[i][0]==121&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==89&&str[i][1]==0&&str[i][2]==0)) count[24]++;
 					else if((str[i][0]==122&&str[i][1]==0&&str[i][2]==0)
					 	||(str[i][0]==90&&str[i][1]==0&&str[i][2]==0))count[25]++;
 					i++;
			
			} else if(k==2){
				str[i][0] = c;
				c = fgetc(fp);
				str[i][1] = c;
				str[i][2] = 0;
					countAll++;
					if((str[i][0]==195&&str[i][1]==161&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==160&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==163&&str[i][2]==0)
						||(str[i][0]==196&&str[i][1]==131&&str[i][2]==0)
						||(str[i][0]==196&&str[i][1]==162&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==129&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==128&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==131&&str[i][2]==0)
						||(str[i][0]==196&&str[i][1]==130&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==130&&str[i][2]==0))count[0]++;
 					else if((str[i][0]==195&&str[i][1]==145&&str[i][2]==0)
					 	||(str[i][0]==196&&str[i][1]==144&&str[i][2]==0))count[3]++;
 					else if((str[i][0]==195&&str[i][1]==169&&str[i][2]==0)
					 	||(str[i][0]==195&&str[i][1]==168&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==170&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==137&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==136&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==138&&str[i][2]==0)
						) count[4]++;
 					else if((str[i][0]==195&&str[i][1]==173&&str[i][2]==0)
					 	||(str[i][0]==195&&str[i][1]==172&&str[i][2]==0)
						 ||(str[i][0]==196&&str[i][1]==169&&str[i][2]==0)
						 ||(str[i][0]==195&&str[i][1]==141&&str[i][2]==0)
						 ||(str[i][0]==195&&str[i][1]==140&&str[i][2]==0)
						 ||(str[i][0]==196&&str[i][1]==168&&str[i][2]==0)) count[8]++;
 				
 					
 					else if(str[i][0]==195&&str[i][1]==179&&str[i][2]==0
					 	||(str[i][0]==195&&str[i][1]==178&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==181&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==180&&str[i][2]==0)
						||(str[i][0]==198&&str[i][1]==161&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==147&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==146&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==149&&str[i][2]==0)
						||(str[i][0]==195&&str[i][1]==148&&str[i][2]==0)
						||(str[i][0]==198&&str[i][1]==160&&str[i][2]==0)) count[14]++;
 					
 					else if((str[i][0]==195&&str[i][1]==186&&str[i][2]==0)
					 	||(str[i][0]==195&&str[i][1]==185&&str[i][2]==0)
						 ||(str[i][0]==198&&str[i][1]==176&&str[i][2]==0)
						 ||(str[i][0]==197&&str[i][1]==169&&str[i][2]==0)
						 ||(str[i][0]==195&&str[i][1]==154&&str[i][2]==0)
						 ||(str[i][0]==195&&str[i][1]==153&&str[i][2]==0)
						 ||(str[i][0]==197&&str[i][1]==168&&str[i][2]==0)
						 ||(str[i][0]==198&&str[i][1]==175&&str[i][2]==0))count[20]++;
 		
 					else if((str[i][0]==195&&str[i][1]==189&&str[i][2]==0)
					 	||(str[i][0]==195&&str[i][1]==157&&str[i][2]==0)) count[24]++;
				i++;
			} else {
				str[i][0] = c;
				c = fgetc(fp);
				str[i][1] = c;
				c = fgetc(fp);
				str[i][2] = c;
					countAll++;
					if((str[i][0]==225&&str[i][1]==186&&str[i][2]==161)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==163)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==175)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==177)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==181)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==183)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==179)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==165)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==167)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==171)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==173)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==169)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==160)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==162)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==174)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==176)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==180)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==182)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==178)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==164)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==166)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==170)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==172)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==168))count[0]++;
 					
 					else if((str[i][0]==225&&str[i][1]==186&&str[i][2]==189)
					 	||(str[i][0]==225&&str[i][1]==186&&str[i][2]==185)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==187)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==191)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==129)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==133)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==135)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==131)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==188)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==184)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==186)
						||(str[i][0]==225&&str[i][1]==186&&str[i][2]==190)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==128)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==132)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==124)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==130)
						) count[4]++;
 					else if((str[i][0]==225&&str[i][1]==187&&str[i][2]==139)
					 	||(str[i][0]==225&&str[i][1]==187&&str[i][2]==137)
					 	||(str[i][0]==225&&str[i][1]==187&&str[i][2]==136)
					 	||(str[i][0]==225&&str[i][1]==187&&str[i][2]==138)
						) count[8]++;
 				
 					
 					else if((str[i][0]==225&&str[i][1]==187&&str[i][2]==141)
					 	||(str[i][0]==225&&str[i][1]==187&&str[i][2]==143)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==145)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==147)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==151)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==153)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==149)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==155)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==157)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==161)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==163)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==159)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==142)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==140)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==144)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==146)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==150)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==148)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==152)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==154)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==156)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==160)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==158)
						||(str[i][0]==225&&str[i][1]==187&&str[i][2]==162)) count[14]++;
 					
 					else if((str[i][0]==225&&str[i][1]==187&&str[i][2]==165)
					 	||(str[i][0]==225&&str[i][1]==187&&str[i][2]==167)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==169)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==171)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==175)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==177)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==173)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==166)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==164)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==168)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==170)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==174)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==172)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==176))count[20]++;
 		
 					else if((str[i][0]==225&&str[i][1]==187&&str[i][2]==179)
					 	||(str[i][0]==225&&str[i][1]==187&&str[i][2]==185)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==181)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==183)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==178)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==184)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==182)
						 ||(str[i][0]==225&&str[i][1]==187&&str[i][2]==180))count[24]++;
				i++;
			}
		}

		
//	for(int i=0;i<26;i++){
//		countAll = countAll + count[i];
//	}
//	
	for(int i = 0; i < 25; i++){
		for (int j = i + 1; j < 26; j++){
			if (count[i] < count[j]){
				int temp = count[i]; // s?p x?p ð?m
				count[i] = count[j];
				count[j] = temp;

				char tempC = a[i]; //tráo luôn bi?n char ð? týõng ðýõng v?i bi?n ð?m
				a[i] = a[j];
				a[j] = tempC;
			}
		}
	}

	printf("-----------------Data Analyze------------------- \n");
	for (int i = 0; i < 26; i++)
	{
		printf("so ky tu %c chiem %0.3f phan tram so lan xuat hien %d \n ", a[i],100*float(count[i])/float(countAll),count[i]);
	}
	
	printf("tong so ky tu %d \n",countAll);
	getch();
	return 0;
	
}
