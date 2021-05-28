//ciao
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int casa[]={0,0,0,0,0}; //contiene il numero di case possedute per ogni giocatore
int proprieta[22]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int giocatore;
int uscita=0;
int tab1=0,tab2=0,tab3=0,tab4=0;
int g=0, dai=0, prendi=0;
int contoBancario[]={1500,1500,1500,1500};	//contiene i conti bancari di ogni giocatore.
int dadi();
void caselleproprieta();
int funzioneDai(int);
int funzionePrendi(int);
int stampaimprevisti(int, int, int, int, int, int, int, int);
int stampaprobabilita(int, int, int, int, int, int);
int sommadadi,dado1,dado2;
int casella;
void asta(void);
int dadi();
int ripdadi=0;
int movimento();
void via();
void tassap();
void staziones();
void stazionen();
void stazioneo();
void stazionee();
void societae();
void societaa();
int turno1, numstazioni[3], numsocieta[1], contssud, contsovest, contsnord, contsest, contselettrica, contsacqua, soldi[3];
char nomi();

int main()
{
	nomi(); //funzione inserimento nomi giocatori
	dadi(); //funzione dancio dadi
	movimento();
}

//--------------------------------------------------FUNZIONI--------------------------------------------------

char nomi()
{


	char g1[20];
	char g2[20];
	char g3[20];
	char g4[20];
	char invio[1];

	int conferma;

	do
	{
		printf("Quanti giocatori vogliono giocare? (Da 2 minimo ad un massimo di 4)   ");
		scanf("%d",&g);

	}while(g>5 && g<1);

	do{

		if(g==2)
		{
			printf("Inserire nome del giocatore 1: ");
			gets(invio);
			gets(g1);


			printf("Inserire nome del giocatore 2: ");
			gets(g2);

			printf("Giocatore 1: %s\nGiocatore 2: %s\n",g1,g2);
		}

		if(g==3)
		{
			printf("Inserire nome del giocatore 1: ");
			gets(invio);
			gets(g1);

			printf("Inserire nome del giocatore 2: ");
			gets(g2);

			printf("Inserire nome del giocatore 3: ");
			gets(g3);

			printf("Giocatore 1: %s\nGiocatore 2: %s\nGiocatore 3: %s\n",g1,g2,g3);
		}

		if(g==4)
		{
			printf("Inserire nome del giocatore 1: ");
			gets(invio);
			gets(g1);

			printf("Inserire nome del giocatore 2: ");
			gets(g2);

			printf("Inserire nome del giocatore 3: ");
			gets(g3);

			printf("Inserire nome del giocatore 4: ");
			gets(g4);

			printf("Giocatore 1: %s\nGiocatore 2: %s\nGiocatore 3: %s\nGiocatore 4: %s\n",g1,g2,g3,g4);
		}

		printf("I nomi sono corretti?(Inserire 0 se i nomi sono errati)  ");
		scanf("%d",&conferma);


	}while(conferma==0);


}

//------FUNZIONE DADI------

int dadi(){
	srand((unsigned)time(NULL));

	dado1=rand()%6+1;
	dado2=rand()%6+1;
	sommadadi=dado1+dado2;
	if(dado1==dado2)
		ripdadi=ripdadi+1;
		printf("%d",sommadadi);
	printf(" %d", dado1);
	printf(" %d", dado2);
	printf(" %d",ripdadi);
}

//------FUNZIONE MOVIMENTO------
int movimento()
{
	int d;
		{
			int esci=0, doppio=0, occ=0, costo=0, cas=0, hot=0, dado=0, carta=0;
			uscita=0;

			tab1+=d;

			if(tab1>40)
			tab1-=40;

			if(tab1==1)
			caselleproprieta();
			if(tab1==3)
			caselleproprieta();
			if(tab1==6)
			caselleproprieta();
			if(tab1==8)
			caselleproprieta();
			if(tab1==9)
			caselleproprieta();
			if(tab1==11)
			caselleproprieta();
			if(tab1==13)
			caselleproprieta();
			if(tab1==14)
			caselleproprieta();
			if(tab1==16)
			caselleproprieta();
			if(tab1==18)
			caselleproprieta();
			if(tab1==19)
			caselleproprieta();
			if(tab1==21)
			caselleproprieta();
			if(tab1==23)
			caselleproprieta();
			if(tab1==24)
			caselleproprieta();
			if(tab1==26)
			caselleproprieta();
			if(tab1==27)
			caselleproprieta();
			if(tab1==29)
			caselleproprieta();
			if(tab1==31)
			caselleproprieta();
			if(tab1==32)
			caselleproprieta();
			if(tab1==34)
			caselleproprieta();
			if(tab1==37)
			caselleproprieta();
			if(tab1==39)
			caselleproprieta();

			if(tab1==2)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);
			if(tab1==17)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);
			if(tab1==33)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);

			if(tab1==7)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);
			if(tab1==22)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);
			if(tab1==36)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);

			tab2+=d;

			if(tab2>40)
			tab2-=40;

			if(tab2==1)
			caselleproprieta();
			if(tab2==3)
			caselleproprieta();
			if(tab2==6)
			caselleproprieta();
			if(tab2==8)
			caselleproprieta();
			if(tab2==9)
			caselleproprieta();
			if(tab2==11)
			caselleproprieta();
			if(tab2==13)
			caselleproprieta();
			if(tab2==14)
			caselleproprieta();
			if(tab2==16)
			caselleproprieta();
			if(tab2==18)
			caselleproprieta();
			if(tab2==19)
			caselleproprieta();
			if(tab2==21)
			caselleproprieta();
			if(tab2==23)
			caselleproprieta();
			if(tab2==24)
			caselleproprieta();
			if(tab2==26)
			caselleproprieta();
			if(tab2==27)
			caselleproprieta();
			if(tab2==29)
			caselleproprieta();
			if(tab2==31)
			caselleproprieta();
			if(tab2==32)
			caselleproprieta();
			if(tab2==34)
			caselleproprieta();
			if(tab2==37)
			caselleproprieta();
			if(tab2==39)
			caselleproprieta();

			if(tab2==2)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);
			if(tab2==17)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);
			if(tab2==33)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);

			if(tab2==7)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);
			if(tab2==22)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);
			if(tab2==36)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);


			tab3+=d;

			if(tab3>40)
			tab3-=40;

			if(tab3==1)
			caselleproprieta();
			if(tab3==3)
			caselleproprieta();
			if(tab3==6)
			caselleproprieta();
			if(tab3==8)
			caselleproprieta();
			if(tab3==9)
			caselleproprieta();
			if(tab3==11)
			caselleproprieta();
			if(tab3==13)
			caselleproprieta();
			if(tab3==14)
			caselleproprieta();
			if(tab3==16)
			caselleproprieta();
			if(tab3==18)
			caselleproprieta();
			if(tab3==19)
			caselleproprieta();
			if(tab3==21)
			caselleproprieta();
			if(tab3==23)
			caselleproprieta();
			if(tab3==24)
			caselleproprieta();
			if(tab3==26)
			caselleproprieta();
			if(tab3==27)
			caselleproprieta();
			if(tab3==29)
			caselleproprieta();
			if(tab3==31)
			caselleproprieta();
			if(tab3==32)
			caselleproprieta();
			if(tab3==34)
			caselleproprieta();
			if(tab3==37)
			caselleproprieta();
			if(tab3==39)
			caselleproprieta();

			if(tab3==2)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);
			if(tab3==17)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);
			if(tab3==33)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);

			if(tab3==7)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);
			if(tab3==22)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);
			if(tab3==36)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);


			tab4+=d;

			if(tab4>40)
			tab4-=40;

			if(tab4==1)
			caselleproprieta();
			if(tab4==3)
			caselleproprieta();
			if(tab4==6)
			caselleproprieta();
			if(tab4==8)
			caselleproprieta();
			if(tab4==9)
			caselleproprieta();
			if(tab4==11)
			caselleproprieta();
			if(tab4==13)
			caselleproprieta();
			if(tab4==14)
			caselleproprieta();
			if(tab4==16)
			caselleproprieta();
			if(tab4==18)
			caselleproprieta();
			if(tab4==19)
			caselleproprieta();
			if(tab4==21)
			caselleproprieta();
			if(tab4==23)
			caselleproprieta();
			if(tab4==24)
			caselleproprieta();
			if(tab4==26)
			caselleproprieta();
			if(tab4==27)
			caselleproprieta();
			if(tab4==29)
			caselleproprieta();
			if(tab4==31)
			caselleproprieta();
			if(tab4==32)
			caselleproprieta();
			if(tab4==34)
			caselleproprieta();
			if(tab4==37)
			caselleproprieta();
			if(tab4==39)
			caselleproprieta();

			if(tab4==2)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);
			if(tab4==17)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);
			if(tab4==33)
			stampaprobabilita(g, esci, doppio, cas, hot, carta);

			if(tab4==7)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);
			if(tab4==22)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);
			if(tab4==36)
			stampaimprevisti(esci, doppio, occ, costo, cas, hot, dado, carta);

		}
		while(uscita==0);
}

//------FUNZIONE CARTE------

int stampaimprevisti(int esci, int doppio, int occ, int costo, int cas, int hot, int dadi, int carta)
{
	int i, x=0, tab=0, via=0;
	char a1[130]="La banca vi paga un dividendo di M50.\n";
	char a2[130]="Andate avanti fino al 'VIA!'.\nRitirate M200.\n";
	char a3[130]="Andate in prigione direttamente e senza passare dal 'VIA!'.\nNon ritirate M200\n";
	char a4[230]="Andate avanti fino alla societa' piu' vicina.\n Se e' LIBERA, potete acquistala dalla Banca.\nSe e' POSSEDUTA DA UN ALTRO GIOCATORE,\nlanciate i dadi e pagate al proprietario 10 volte il valore uscito sui dadi\n.";
	char a5[130]="Fate un viaggio fino alla stazione sud.\nSe passate dal 'VIA!' ritirate M200.\n";
	char a6[230]="Andate avanti fino alla stazione ferroviaria piu' vicina.\nSe e' LIBERA, potete acquistarla dalla Banca.\nSe e' POSSEDUTA DA UN ALTRO GIOCATORE,\npagate al proprietario il doppio dell'affitto che gli spetta normale.\n";
	char a7[130]="Maturano le cedole dei vostri fondi immobiliari.\nIncassate M150.\n";
	char a8[230]="Andate avanti fino alla stazione ferroviaria piu' vicina.\nSe e' LIBERA, potete acquistarla dalla Banca.\nSe e' POSSEDUTA DA UN ALTRO GIOCATORE,\npagate al proprietario il doppio dell'affitto che gli spetta normalmente\n";
	char a9[130]="!!USCITE GRATIS DI PROGIONE!!\nSE CI SIETE (Potete conservare questa carta fino al momento di servirvene).\n";
	char a10[130]="Multa per eccesso di velocita'.\nPagate 15M.\n";
	char a11[130]="Fate 3 passi indietro\n(CON TANTI AUGURI!).\n";
	char a12[130]="Siete stati promossi alla presidenza del consiglio di amministrazione.\nPagate M50 a ogni giocatore.\n";
	char a13[130]="Andate avanti fino a VIA ACCADEMIA.\nSe passate dal 'VIA!' ritirate M200.\n";
	char a14[130]="Andate avanti fino a parco della vittoria.\n";
	char a15[130]="Eseguite lavori di manutenzione su tutti i vostri edifici:\npagate M25 per ogni casa e M100 per ogni albergo che possedete.\n";
	char a16[130]="Andate avanti fino a LARGO COLOMBO.\nSe passate dal 'VIA!' ritirate M200.\n";

	srand((unsigned)time(NULL));

	x=rand()%16;
	//x=5;
	//printf("%d", x);

	switch (x)
	{
		case 0:
			printf("%s\n",a1);
			dai=50; //pagamento dividendo
			funzioneDai(prendi); //funzione accredito/debito
			break;
		case 1:
			printf("%s\n",a2);
			dai=200; //pagamento passaggio via
			funzioneDai(prendi);//funzione accredito/debito
			break;
		case 2:
			printf("%s\n",a3);
			tab=50; //trasporto giocatore prigione su cella 50
			if(esci=1)
			{
				prendi=50; //prelievo dal giocatore 50 per uscita prigione
				funzionePrendi(prendi); //funzione accredito/debito
			}
			if(esci=2)
			{
				carta=1;
			}
			if(esci=3)
			{
				//lancio dadi (spinalbelli)
				if(doppio=1)
				{
					printf("Buone notizie! Puoi uscire di prigione."); //avviso
					tab=0;
				}
				else
				{
					printf("Brutte notizie in arrivo...\nPaga 50 per uscire"); //avviso
					prendi=50; //prelievo dal giocatore per uscita di prigione
					funzionePrendi(prendi); //funzione accredito/debito
				}
			}
			doppio=0;
			break;
		case 3:
			printf("%s\n",a4);
			if(tab<12&&tab>0)
			{
				tab=12; //trasporto giocatore casella 12
			}
			if(tab<28&&tab>12)
			{
				tab=28; //trasporto giocatore casella 28
			}
			if(tab>28)
			{
				tab=12; //trasprto giocatore casella 12
			}
			if(occ=0) //controllo societ� vuota
			{
				printf("La societa' e' vuota, il costo e': 150"); //avviso
				prendi=150; //prelienvo costo
				funzionePrendi(prendi); //funzione accredito/debito
			}
			if(occ=1) //controllo societ� comprata
			{
				printf("La societa' e' gia' in possesso di un altro giocatore.\n"); //avviso
				//funzione dadi (spinalbelli)
				prendi=dadi*10; //calcolo somma da prelevare
				printf("Doverai pagare: %d", prendi);	//avviso
				funzionePrendi(prendi);//funzione accredito/debito
			}
			break;
		case 4:
			printf("%s\n",a5);
			tab=5; //trasporto casella 5 pedina
			if(via=1) //se via � 0 non si � passati dal via, se via � 1 si � passati dal via e si prende 200
			{
			dai=200;	//versamento al giocatore
			funzioneDai(prendi); //funzione accredito/debito
			}
			//return via; //ritorno al main della posizione
			break;
		case 5:
			printf("%s\n",a6);
			if(tab<5&&tab>0) //controllo se andare stazione sud
			{
				tab=5; //trasporto stazione sud
			}
			if(tab<15&&tab>5) //controllo se andare alla stazione ovest
			{
				tab=15; //trasporto stazione ovest
			}
			if(tab<25&&tab>15) //controllo se andare alla stazione nord
			{
				tab=25; //trasporto stazione nord
			}
			if(tab<35&&tab>25) //controllo se andare alla stazione est
			{
				tab=35; //trasporto stazione est
			}
			if(tab>35) //controllo se andare alla stazione sud passando dal via
			{
				dai=200; //passando dal via ritira 200
				funzioneDai(prendi); //funzione accredito/debito
				tab=5; //trasporto stazione sud
			}
			//return tab;
			if(occ=0) //controllo stazione vuota
			{
				printf("La stazione costa: %d", costo); //stampa costo
				prendi=costo; //associazione valore a prendi
				funzionePrendi(prendi); //funzione accredito/debito
			}
			if(occ=1)
			{
				prendi=costo*2; //moltiplicazione dell'affitto
				printf("La stazione e' occupata!\nIl costo dell'affitto e': %d", prendi); //stampa del costo
				funzionePrendi(prendi); //funzione accredito/debito
			}
			break;
		case 6:
			printf("%s\n",a7);
			dai=150; //associazione valore da dare al giocatore
			funzioneDai(prendi); //funzione accredito/debito
			break;
		case 7:
			printf("%s\n",a8);
			if(tab<5&&tab>0) //controllo se andare stazione sud
			{
				tab=5; //trasporto stazione sud
			}
			if(tab<15&&tab>5) //controllo se andare alla stazione ovest
			{
				tab=15; //trasporto stazione ovest
			}
			if(tab<25&&tab>15) //controllo se andare alla stazione nord
			{
				tab=25; //trasporto stazione nord
			}
			if(tab<35&&tab>25) //controllo se andare alla stazione est
			{
				tab=35; //trasporto stazione est
			}
			if(tab>35) //controllo se andare alla stazione sud passando dal via
			{
				dai=200; //passando dal via ritira 200
				funzioneDai(prendi); //funzione accredito/debito
				tab=5; //trasporto stazione sud
			}
			//return tab;
			if(occ=0) //controllo stazione vuota
			{
				printf("La stazione costa: %d", costo); //stampa costo
				prendi=costo; //associazione valore a prendi
				funzionePrendi(prendi); //funzione accredito/debito
			}
			if(occ=1)
			{
				prendi=costo*2; //moltiplicazione dell'affitto
				printf("La stazione e' occupata!\nIl costo dell'affitto e': %d", prendi); //stampa del costo
				funzionePrendi(prendi); //funzione accredito/debito
			}
			break;
		case 8:
			printf("%s\n",a9);
			carta=1; //assegnazione della carta jolly
			break;
		case 9:
			printf("%s\n",a10);
			prendi=15; //associazione valore da riscuotere dal giocatore
			funzionePrendi(prendi); //funzione accredito/debito
			break;
		case 10:
			printf("%s\n",a11);
			tab=tab-3; //3 passi indietro del giocatore
			return tab; //invio della variabile al main
			break;
		case 11:
			printf("%s\n",a12);
			prendi=50*g; //calcolo del prelievo
			funzionePrendi(prendi); //funzione accredito/debito
			break;
		case 12:
			printf("%s\n",a13);
			tab=11; //trasporto giocatore alla casella 11
			if(via=1) //controllo passaggio via
			{
				dai=200; //pagamento del passaggio
				funzioneDai(prendi); //funzione accredito/debito
			}
			break;
		case 13:
			printf("%s\n",a14);
			tab=39; //trasporto giocatore alla casella 39
			break;
		case 14:
			printf("%s\n",a15);
			prendi=25*cas; //calcolo costo manutenzione strade per case
			cas=100*hot; //calcolo costo manutenzione strande per hotel
			prendi=prendi+cas; //somma totale costo manutenzione
			funzionePrendi(prendi); //funzione accredito/debito
			break;
		case 15:
			printf("%s\n",a16);
			tab=24; //trasporto giocatore alla casella 24
			if(via=1) //controllo passaggio via
			{
				dai=200; //pagamento passaggio
				funzioneDai(prendi); //funzione accredito/debito
			}
			break;
		default:
			for(i=0;i=200;i++) //ciclo spam errore
			printf("\n\t\t\t\t\t\t!!FATAL ERROR!!\n"); //stampa errore
			break;
	}
}

int stampaprobabilita(int g, int esci, int doppio, int cas, int hot, int carta)
{
	int x, i,tab;
	char b1[120]="Andate avanti fino al 'VIA!'.\nRitirate M200.\n";
	char b2[120]="E' il vostro compleanno.\nOgni giocatore vi regala M10.\n";
	char b3[120]="Avete vinto il secondo premio in un concorso do bellezza!\nIncassate M10.\n";
	char b4[120]="Dalla vendita di uno stock di merci ricavate M50.\n";
	char b5[120]="Ereditate da un lontano parente M100.\n";
	char b6[120]="Ricevete M25 per la vostra consulenza.\n";
	char b7[120]="!!ANDATE IN PRIGIONE DIRETTAMENTE!!\nSenza passare dal 'VIA!'.\nNon ritirate M200.\n";
	char b8[120]="Pagate la retta ospedaliera.\nVersate M100.\n";
	char b9[120]="Vi viene rimborsata la tassa sui redditi.\nIncassate M20.\n";
	char b10[120]="Pagate le tasse scolastiche dei vostri figli.\nVersate M50.\n";
	char b11[120]="Pagate per contributi di miglioria stradale M40 per ogni casa e M115 per ogni albergo che possedete.\n";
	char b12[120]="Maturano gli interessi della vostra assicurazione sulla vita.\nIncassate M100.\n";
	char b13[120]="!!USCITE GRATIS DI PROGIONE!!\nSE CI SIETE\nPotete conservare questa carta fino al momento di servirvene.\n";
	char b14[120]="Maturano le cedole delle vostre azioni.\nRicevete M100.\n";
	char b15[120]="Ricevete la parcella del dottore.\nPagate M50.\n";
	char b16[120]="La banca riconosce un errore sul vostro estratto conto.\nIncassate M200.\n";

	srand((unsigned)time(NULL));

	x=rand()%16;

	switch (x)
	{
		case 0:
			printf("%s\n", b1);
			tab=0; //trasporto giocatore
			dai=200; //da 200 al giocatore
			funzioneDai(prendi);
			break;
		case 1:
			printf("%s\n", b2);
			prendi=10*g; //preleva 10 da ogni giocatore
			dai=10*g; //da il risultato al giocagtore
			funzioneDai(prendi);
			funzionePrendi(prendi);
			break;
		case 2:
			printf("%s\n", b3);
			dai=10; //da 10 al giocatore
			funzioneDai(prendi); //funzione accredito/debito
			break;
		case 3:
			printf("%s\n", b4);
			dai=50; //da 50 al giocatore
			funzioneDai(prendi); //funzione accredito/debito
			break;
		case 4:
			printf("%s\n", b5);
			dai=100; //da 100 al giocatore
			funzioneDai(prendi); //funzione accredito/debito
			break;
		case 5:
			printf("%s\n", b6);
			tab=50; //trasporto giocatore prigione su cella 50
			if(esci=16)
			{
				prendi=50; //prelievo dal giocatore 50 per uscita prigione
				funzionePrendi(prendi); //funzione accredito/debito
			}
			if(esci=2)
			{
				carta=1;
			}
			if(esci=3)
			{
				//lancio dadi (spinalbelli)
				if(doppio=1)
				{
					printf("Buone notizie! Puoi uscire di prigione."); //avviso
					tab=0;
				}
				else
				{
					printf("Brutte notizie in arrivo...\nPaga 50 per uscire"); //avviso
					prendi=50; //prelievo dal giocatore per uscita di prigione
					funzionePrendi(prendi); //funzione accredito/debito
				}
			}
			doppio=0;
			break;
		case 6:
			printf("%s\n", b7);
			prendi=100; //prelievo 100 dal giocatore;
			funzionePrendi(prendi); //funzione accredito/debito
			break;
		case 7:
			printf("%s\n", b8);
			dai=20; //da 20 al giocatore
			funzioneDai(prendi); //funzione accredito/debito
			break;
		case 8:
			printf("%s\n", b9);
			prendi=50; //prelievo 50 al giocatore
			funzionePrendi(prendi); //funzione accredito/debito
			break;
		case 9:
			printf("%s\n", b10);
			prendi=40*cas; //calcolo costo manutenzione strade per case
			cas=115*hot; //calcolo costo manutenzione strande per hotel
			prendi=prendi+cas; //somma totale costo manutenzione
			funzionePrendi(prendi); //funzione accredito/debito
			break;
		case 10:
			printf("%s\n", b11);
			dai=100; //accredito 50 al giocatore
			funzioneDai(prendi); //funzione accredito/debito
			break;
		case 11:
			printf("%s\n", b12);
			carta=1; //assegnazione della carta jolly
			break;
		case 12:
			printf("%s\n", b13);
			dai=100; //accredito 100 al giocatore
			funzioneDai(prendi); //funzione accrddito/debito
			break;
		case 13:
			printf("%s\n", b14);
			prendi=50; //prelievo 50 al giocatore
			funzionePrendi(prendi); //funzione accredito/debito
			break;
		case 14:
			printf("%s\n", b15);
			dai=200; //accredito 200 al giocatore
			funzioneDai(prendi); //funzione accredito/debito
			break;
		case 15:
			printf("%s\n", b6);
			dai=25; //accredito 25 al giocatore
			funzioneDai(prendi); //funzione accredito/debito
			break;
		default:
			for(i=0;i=50;i++) //ciclo spam errore //Justin: ho cambiato da 200 a 50, troppi messaggi di errore innecessari
			printf("\n\t\t\t\t\t\t!!FATAL ERROR!!\n"); //stampa errore
			break;
	}
}

//------FUNZIONI DAI E PRENDI------
int funzioneDai(dai) {
	contoBancario[giocatore] = contoBancario[giocatore] + dai;		//funzione di aumento del conto bancario
	return 0;
}

int funzionePrendi(prendi) {
	contoBancario[giocatore] = contoBancario[giocatore] + prendi;		//funzione di decremento del conto bancario
	return 0;
}
//------FUNZIONE ACQUISTO------

void caselleproprieta()
{

	int casproprieta[]={1,3,6,8,9,11,13,14,16,18,19,21,23,24,26,27,29,31,32,34,37,39};

	int y, presenza=0, comprare, prezzo, caselladacomprare=casella;

	if(caselladacomprare<=3)
		prezzo=60;
	else if(caselladacomprare<=9)
		prezzo=100;
	else if(caselladacomprare<=14)
		prezzo=140;
	else if(caselladacomprare<=19)
		prezzo=200;
	else if(caselladacomprare<=24)
		prezzo=240;
	else if(caselladacomprare<=29)
		prezzo=280;
	else if(caselladacomprare<=34)
		prezzo=320;
	else if(caselladacomprare<=39)
		prezzo=400;
	for(y=0;y<22;y++)
	{
		if(casproprieta[y]==casella)
			presenza=y;
			caselladacomprare=casproprieta[y];
	}
	if(proprieta[y]==0)
	{
		printf("Vuoi comprare la casella? prezzo=%d\n inserire 1 per comprare e 0 per uscire", prezzo);
		scanf("%d",&comprare);
		if(comprare==1)
		{
			proprieta[y]=giocatore;
			casa[giocatore]+=1;
		}
		else
		{
			printf("Non hai comprato la casella...");
			asta();
			//chiamata asta
		}
	}
	else
	{
		//pagamento (rata) alla banca con chiamata funzione alla banca di Justin
		//giocatore che deve pagare � nella variabile "giocatore"
		//--(****)--
		contoBancario[giocatore] = contoBancario[giocatore] - prezzo;
	}
}

void asta()
{
	int prezzo, prezzoasta, x, y=0, z, gioc, caselladacomprare=casella, scelta;
	if(caselladacomprare<=3)
		prezzo=60;
	else if(caselladacomprare<=9)
		prezzo=100;
	else if(caselladacomprare<=14)
		prezzo=140;
	else if(caselladacomprare<=19)
		prezzo=200;
	else if(caselladacomprare<=24)
		prezzo=240;
	else if(caselladacomprare<=29)
		prezzo=280;
	else if(caselladacomprare<=34)
		prezzo=320;
	else if(caselladacomprare<=39)
		prezzo=400;
	prezzoasta=prezzo/2;
	printf("\n\n\tHa inizio l'asta per la proprieta in casella %d\n\n",casella);
	while(y==0)
	{
		z=0;
		printf("PREZZO ATTUALE = %d\n\nGiocatore 1:\nVuoi comprare?\nInserire 0 per uscire, 1 per inserire un prezzo: ",prezzoasta);
		scanf("%d", &scelta);
		if(scelta==1)
		{
			do{
				printf("Inserire prezzo per puntare: ");
				scanf("%d",&x);
				if(x<prezzoasta)
					printf("Prezzo errato, inserirne uno maggiore\n");
			}while(x<prezzoasta);
			prezzoasta=x;
			gioc=1;
		}
		else
			z++;


		printf("PREZZO ATTUALE = %d\n\nGiocatore 2:\nVuoi comprare?\nInserire 0 per uscire, 1 per inserire un prezzo: ",prezzoasta);
		scanf("%d", &scelta);
		if(scelta==1)
		{
			do{
				printf("Inserire prezzo per puntare: ");
				scanf("%d",&x);
				if(x<prezzoasta)
					printf("Prezzo errato, inserirne uno maggiore\n");
			}while(x<prezzoasta);
			prezzoasta=x;
			gioc=2;
		}
		else
			z++;


		printf("PREZZO ATTUALE = %d\n\nGiocatore 3:\nVuoi comprare?\nInserire 0 per uscire, 1 per inserire un prezzo: ",prezzoasta);
		scanf("%d", &scelta);
		if(scelta==1)
		{
			do{
				printf("Inserire prezzo per puntare: ");
				scanf("%d",&x);
				if(x<prezzoasta)
					printf("Prezzo errato, inserirne uno maggiore\n");
			}while(x<prezzoasta);
			prezzoasta=x;
			gioc=3;
		}
		else
			z++;


		printf("PREZZO ATTUALE = %d\n\nGiocatore 4:\nVuoi comprare?\nInserire 0 per uscire, 1 per inserire un prezzo: ",prezzoasta);
		scanf("%d", &scelta);
		if(scelta==1)
		{
			do{
				printf("Inserire prezzo per puntare: ");
				scanf("%d",&x);
				if(x<prezzoasta)
					printf("Prezzo errato, inserirne uno maggiore\n");
			}while(x<prezzoasta);
			prezzoasta=x;
			gioc=4;
		}
		else
			z++;

	}

	if(z==4)
	{
		printf("La casella � stata comprata dal giocatore %d al prezzo di %d",gioc,prezzoasta);
		y=z;
		//pagamento alla banca di Justin (al fine di comprare una propriet� destinata all'asta)
		//giocatore che deve pagare sta nella variabile "gioc"; il prezzo da pagare sta nella variabile "prezzoasta";
		//--(****)--
		contoBancario[gioc] = contoBancario[gioc] + prezzoasta;
	}

}

//------FUNZIONE PROPRIETA' SPECIALI------

void staziones()
{
	int flag, scelta;			//indica se la propriet� � libera, acquistata...

	if(contssud==0)					//la propriet� viene impostata su libera solo la prima volta
		flag=5;

	printf("STAZIONE SUD: \n");
	if(flag==5)
	{
		flag=5;
		do{
			printf("proprieta\' libera\n\ncompra per 200s(0)\n metti all'asta(1)\n");
			scanf("%d",&scelta);
		}while(scelta!=1 &&scelta!=0);

		if(scelta==0)
		{
				prendi=200;
				funzionePrendi(prendi);
				flag=turno1;
				numstazioni[turno1]++;
				printf("\nhai acquistato stazione sud");
		}
		if(scelta==1)
		{
			printf("\nASTA:");

		}
	}
	else
	{
		if(flag==turno1)
		{
			printf("\nla propriet� e\' tua");
		}
		else
		{
			switch(numstazioni[flag])
			{
				case 1:
					prendi=25;
					funzionePrendi(prendi);
					break;
				case 2:
					prendi=50;
					funzionePrendi(prendi);
					break;
				case 3:
					prendi=100;
					funzionePrendi(prendi);
					break;
				case 4:
					prendi=200;
					funzionePrendi(prendi);
					break;
			}
			printf("\nla propriet� e\' del giocatore %d che possiede %d stazioni\npaghi %d al giocatore %d",flag, numstazioni[flag], prendi, flag);
		}
	}
	contssud++;
}

void stazionen()
{
	int flag, scelta;			//flag: indica se la propriet� � libera, acquistata...

	if(contsnord==0)					//la propriet� viene impostata su libera solo la prima volta
		flag=5;

	printf("STAZIONE NORD: \n");
	if(flag==5)
	{
		flag=5;
		do{
			printf("proprieta\' libera\n\ncompra per 200s(0)\n metti all'asta(1)\n");
			scanf("%d",&scelta);
		}while(scelta!=1 &&scelta!=0);

		if(scelta==0)
		{
				prendi=200;
				funzionePrendi(prendi);
				flag=turno1;
				numstazioni[turno1]++;
				printf("\nhai acquistato stazione nord");
		}
		else
		{
			printf("ASTA:");

		}
	}
	else
	{
		if(flag==turno1)
		{
			printf("\nla propriet� e\' tua");
		}
		else
		{
			switch(numstazioni[flag])
			{
				case 1:
					prendi=25;
					funzionePrendi(prendi);
					break;
				case 2:
					prendi=50;
					funzionePrendi(prendi);
					break;
				case 3:
					prendi=100;
					funzionePrendi(prendi);
					break;
				case 4:
					prendi=200;
					funzionePrendi(prendi);
					break;
			}
			printf("\nla propriet� e\' del giocatore %d che possiede %d stazioni\npaghi %d al giocatore %d",flag, numstazioni[flag], prendi, flag);
		}
	}
	contsnord++;
}

void stazionee()
{
	int flag, scelta;			//flag: indica se la propriet� � libera, acquistata...

	if(contsest==0)					//la propriet� viene impostata su libera solo la prima volta
		flag=5;

	printf("STAZIONE EST: \n");
	if(flag==5)
	{
		flag=5;
		do{
			printf("proprieta\' libera\n\ncompra per 200s(0)\n metti all'asta(1)\n");
			scanf("%d",&scelta);
		}while(scelta!=1 &&scelta!=0);

		if(scelta==0)
		{
				prendi=200;
				funzionePrendi(prendi);
				flag=turno1;
				numstazioni[turno1]++;
				printf("\nhai acquistato stazione est");
		}
	}
	else
	{
		if(flag==turno1)
		{
			printf("\nla propriet� e\' tua");
		}
		else
		{
			switch(numstazioni[flag])
			{
				case 1:
					prendi=25;
					funzionePrendi(prendi);
					break;
				case 2:
					prendi=50;
					funzionePrendi(prendi);
					break;
				case 3:
					prendi=100;
					funzionePrendi(prendi);
					break;
				case 4:
					prendi=200;
					funzionePrendi(prendi);
					break;
			}
			printf("\nla propriet� e\' del giocatore %d che possiede %d stazioni\npaghi %d al giocatore %d",flag, numstazioni[flag], prendi, flag);
		}
	}
	contsest++;
}

void stazioneo()
{
	int flag, scelta;			//flag: indica se la propriet� � libera, acquistata...

	if(contsovest==0)					//la propriet� viene impostata su libera solo la prima volta
		flag=5;

	printf("STAZIONE OVEST: \n");
	if(flag==5)
	{
		flag=5;
		do{
			printf("proprieta\' libera\n\ncompra per 200s(0)\n metti all'asta(1)\n");
			scanf("%d",&scelta);
		}while(scelta!=1 &&scelta!=0);

		if(scelta==0)
		{
				prendi=200;
				funzionePrendi(prendi);
				flag=turno1;
				numstazioni[turno1]++;
				printf("\nhai acquistato stazione ovest");
		}
		else
		{
			printf("ASTA:");

		}
	}
	else
	{
		if(flag==turno1)
		{
			printf("\nla propriet� e\' tua");
		}
		else
		{
			switch(numstazioni[flag])
			{
				case 1:
					prendi=25;
					funzionePrendi(prendi);
					break;
				case 2:
					prendi=50;
					funzionePrendi(prendi);
					break;
				case 3:
					prendi=100;
					funzionePrendi(prendi);
					break;
				case 4:
					prendi=200;
					funzionePrendi(prendi);
					break;
			}
			printf("\nla propriet� e\' del giocatore %d che possiede %d stazioni\npaghi %d al giocatore %d",flag, numstazioni[flag], prendi, flag);
		}
	}
	contsovest++;
}

void societae() {
		int flag, scelta, risdadi;			//flag: indica se la propriet� � libera, acquistata...

	if(contselettrica==0)					//la propriet� viene impostata su libera solo la prima volta
		flag=5;

	printf("SOCIETA\' ELETTRICA: \n");
	if(flag==5)
	{
		flag=5;
		do{
			printf("proprieta\' libera\n\ncompra per 200s(0)\n metti all'asta(1)\n");
			scanf("%d",&scelta);
		}while(scelta!=1 &&scelta!=0);

		if(scelta==0)
		{
				prendi=150;
				funzionePrendi(prendi);
				flag=turno1;
				numsocieta[turno1]++;
				printf("\nhai acquistato stazione ovest");
		}

		else
		{
			printf("ASTA:");

		}
	}
	else
	{
		if(flag==turno1)
		{
			printf("\nla propriet� e\' tua");
		}
		else
		{
			switch(numsocieta[flag])
			{
				case 1:
					prendi=4;
					funzionePrendi(prendi);
					break;
				case 2:
					prendi=10;
					funzionePrendi(prendi);
					break;
			}
			printf("\nla propriet� e\' del giocatore %d che possiede %d societa\'\npaghi al giocatore %d il risultato dei dadi x %d\n",flag, numstazioni[flag], flag, prendi);
			scanf("%d",&risdadi);
			prendi=prendi*risdadi;
			funzionePrendi(prendi);
			printf("\n paghi %d al giocatore %d", prendi, flag);
		}
	}
	contselettrica++;
}

void societaa()
{
		int flag, scelta, risdadi;			//flag: indica se la propriet� � libera, acquistata...

	if(contsacqua==0)					//la propriet� viene impostata su libera solo la prima volta
		flag=5;

	printf("SOCIETA\' ELETTRICA: \n");
	if(flag==5)
	{
		flag=5;
		do{
			printf("proprieta\' libera\n\ncompra per 200s(0)\n metti all'asta(1)\n");
			scanf("%d",&scelta);
		}while(scelta!=1 &&scelta!=0);

		if(scelta==0)
		{
				prendi=150;
				funzionePrendi(prendi);
				flag=turno1;
				numsocieta[turno1]++;
				printf("\nhai acquistato stazione ovest");
		}

		else
		{
			printf("ASTA:");

		}
	}
	else
	{
		if(flag==turno1)
		{
			printf("\nla propriet� e\' tua");
		}
		else
		{
			switch(numsocieta[flag])
			{
				case 1:
					prendi=4;
					funzionePrendi(prendi);
					break;
				case 2:
					prendi=10;
					funzionePrendi(prendi);
					break;
			}
			printf("\nla propriet� e\' del giocatore %d che possiede %d societa\'\npaghi al giocatore %d il risultato dei dadi x %d\n",flag, numstazioni[flag], flag, prendi);
			scanf("%d",&risdadi);
			prendi=prendi*risdadi;
			funzionePrendi(prendi);
			printf("\n paghi %d al giocatore %d", prendi, flag);
		}
	}
	contselettrica++;
}
