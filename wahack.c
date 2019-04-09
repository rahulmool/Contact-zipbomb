#include<stdio.h>
main(){
		FILE *fp;
		long int i=421000000;
		fp=fopen("wahack.vcf","w");
		while(i!=421199999){
			fprintf(fp,"%s%ld%s%ld%s%ld%s","BEGIN:VCARD\nVERSION:2.1\nN:;9",i,";;;\nFN:9",i,"\nTEL;CELL:9",i,"\nEND:VCARD\n");
			i++;
		}	
		fclose(fp);
}
