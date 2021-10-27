
#include<stdio.h>

int main() {
	int a;
	int ausente;
	int horent;
	int horeo;
	int horso;
	int htarde;
	int htemprano;
	int lim;
	int minent;
	int mineo;
	int minso;
	int mintar;
	int obrausente;
	int tarde;
	int temprano;
	temprano = 0;
	tarde = 0;
	ausente = 0;
	horent = 8;
	minent = 0;
	lim = 5;
	mintar = 10;
	a = 1;
	
	int ht,mt,hta,mta;
	float port = 0,porta = 0,sumt = 0,sum2t = 0,sumta = 0,sum2ta = 0,pornp = 0;
	while ((a<=lim)) {
		htemprano = 0;
		htarde = 0;
		obrausente = 0;
		printf("Obrero %i \n",a);
		printf("0 = Ausente\n");
		printf("Ingrese Hora de entrada :\n");
		scanf("%i",&horeo);
		if ((horeo>0)) {
			printf("Ingrese Minuto de entrada :\n");
			scanf("%i",&mineo);
			printf("Ingrese Hora de salida : \n");
			scanf("%i",&horso);
			printf("Ingrese Minuto de salida : \n");
			scanf("%i",&minso);
			if (horeo==horent) {
				if (mineo>minent) {
					if (mineo>mintar) {
						tarde = tarde+1;
						htarde = 1;
						hta = hta + horeo;
						mta = mta + mineo;
						
					} else {
						temprano = temprano+1;
						htemprano = 1;
						ht = ht + horeo;
						mt = ht + mineo;
					}
				} else {
					temprano = temprano+1;
					htemprano = 1;
					ht = ht + horeo;
						mt = ht + mineo;
				}
			} else {
				if (horeo>horent) {
					tarde = tarde+1;
					htarde = 1;
					hta = hta + horeo;
						mta = mta + mineo;
				} else {
					temprano = temprano+1;
					htemprano = 1;
					ht = ht + horeo;
						mt = ht + mineo;
				}
			}
		} else {
			ausente = ausente+1;
			obrausente = 1;
		}
		if (obrausente==1) {
			printf("Obrero %i esta Ausente\n",a);
			printf("\n");
		} else {
			if (htarde==1) {
				printf("Obrero %i Llega Tarde \n",a);
				printf("\n");
			} else {
				if (htemprano==1) {
					printf("Obrero %i Llega Temprano\n",a);
				}
				printf("\n");
			}
		}
		a = a+1;
	}
	if(temprano>0){
			port = (temprano * 100)/lim;
				sumt = ht / temprano;
	sum2t = mt / temprano;
	}
else if(tarde>0){
	porta = (tarde * 100)/lim;

	sumta = hta / tarde;
	sum2ta = mta / tarde;
}
	else if(ausente>=1){
			pornp = (ausente * 100)/lim;
	}

	printf("\n");
	printf("\n Cantidad de obreros que llegaron temprano: %i Obreros\n",temprano);
	printf("porcentaje --> %.2f",port);
	printf("\n promedio de tiempo --> %.1f ",sumt);
	printf(" : %.1f ",sum2t);
	printf("\n\n Cantidad de obreros que llegaron tarde: %i Obreros\n",tarde);
	printf("porcentaje --> %.2f",porta);
	printf("\n promedio de tiempo --> %.1f ",sumta);
	printf(" : %.1f ",sum2ta);
	printf("\n\n Cantidad de obreros ausentes: %i Obreros\n",ausente);
	printf("porcentaje --> %.2f",pornp);
	printf("\n promedio de tiempo no tiene porque no se presentaron a trabajar");
	
	printf("\n");
	return 0;
}

