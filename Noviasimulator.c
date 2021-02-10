#include <stdio.h>
#include <iso646.h>


void inicio();
void menu();
void opciones();
void pregunta();
void situacion();
void situacion2();
void fin();
void p1();
void p2();
void p3();
void a1();
void a2();
void a3();
void stats();
void dificultad();



int o,n;
int A1,A2,A3,P1,P2,P3;
float odio,simp,culpa,mood,lMood,dif;

int main (){
	
	odio=6;
	simp=5;
	culpa=1;
	n=0;
	P1=0;
	P2=0;
	P3=0;
	A1=0;
	A2=0;
	A3=0;
	lMood=1;
	dif=1;
	menu();
	
}
void opciones(){//Primero el menu junto con un par de cosas mas
	printf("\nOPCIONES \n\n");
	printf("1.Dificultad1	2.Creditos	3.Menu	\n");
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)){	
		scanf("%i",&o);
		if (o==1){
			printf("Dificultad nueva: 1.Facil	2.Normal	3.Dificil	4.Ya ni lo intentes\n");
			o=0;
			while ((o!=1)and(o!=2)and(o!=3)and(o!=4)){
				scanf("%i",&o);
				if (o==1){
					dif=0.5;	
				}
				if (o==2){
					dif=1;
				}
				if (o==3){
					dif=1.5;
				}
				if (o==4){
					dif=2;
				}	
			}
			dificultad();
			opciones();	
		}
		if (o==2){ //Los creeditos son importantes aun siendo un juego pequeño y un poco de bromas
			printf("\n\nCreditos\nCreador: Gonzalez Ramirez Octavio Alberto\nEquipo: Guzman Moreno Jesus\nColaboracion especial: La persona a la que amaste y nunca volvio\n");
			opciones();	
		}
		if (o==3){
			menu();
		}
	}
}
void menu(){
	printf("NOVIA SIMULATOR 2020\n\n1.- Empezar \n2.- Opciones\n3.- Salir \n");
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)){	
		scanf("%i",&o);
		if (o==1){
			inicio();
			//Juego	
		}
		if (o==2){
			opciones();	
		}
		if (o==3){
			//salir	
			return ;
		}
	}
}
void inicio(){
	dificultad();
	printf("\n\nNovia: Hola tienes un momento\nNecesitamos hablar sobre algo importante...\n");
	//siempre hay que ser sensibles
	printf("1.¿Sip que pasa amor?	2.¿Y ahora que paso?	3.En este momento no puedo	 \n");
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)) {	
		scanf("%i",&o);	
		if (o==1){
			odio=odio-2;
			simp=simp+3;
			culpa=culpa+1;
		}
		if (o==2){
			odio=odio+4;
			simp=simp-5;
			culpa=culpa-2;	
		}
		if (o==3){
			odio=odio+3;
			culpa=culpa-5;
			simp=simp-1;
			situacion2();	
		}
	}
	situacion();
}
void pregunta(){
	n=n+1;
	if (odio<=1){
		odio=1;
	}
	if (simp<=1){
		simp=1;
	}
	if (culpa<=1){
		culpa=1;
	}
	mood=(odio*n*1.5*dif)/(culpa*simp);
	if ((mood>=(6-dif))or(n>=4)){
		a3();
	}
	if (mood>lMood){
		if(A1==0){
			a1();
		}
		else if (P3==0){
			p3();
		}
		//muy malo
	}
	else {
		if(P1==0){
			p1();
		}
		else if (P2==0){
			p2();
		}
		else if (A2==0){
			a2();
		}
		//demasiado bueno
	}
	a3();	
}
void situacion(){//comienzo del rompimiento de pareja
	printf("Novia: Queria hablar sobre nuestra situacion\nNo creo que esto este funcionando...\n");
	printf("1.¿Ya no me amas, se acabo?	2.Era lo que sospechaba	3.Pero amor, todo iba tan bien, porque tan de repente paso esto	 \n");	
	//Contestariamos asi?
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)) {
		scanf("%i",&o);
		if (o==1){
			odio=odio+2;
			simp=simp+2;
			culpa=culpa+1;
		}
		if (o==2){
			odio=odio+4;
			simp=simp-3;
			culpa=culpa+1;	
		}
		if (o==3){
			odio=odio-1;
			simp=simp+3;	
		}
	}
	pregunta();		
}
void situacion2(){//Por lo general simpre nos cortan asi :c
	printf("Novia: Lo siento, pero esto ya no funciona y la verdad necesito un tiempo para poder pensar con claridad\n");
	printf("1.Adios amor, luego hablamos	2.¿Entonces es un adios?	3.¿Ahora Se acabo?	 \n");
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)) {	
		scanf("%i",&o);
		if (o==1){
			culpa=culpa-1;
			printf("Novia: Adios, lo siento...\n");
			a3();
		}
		if (o==2){
			odio=odio+2;
			simp=simp-1;
			culpa=culpa-2;	
		}
		if (o==3){
			odio=odio-1;
			simp=simp-2;
			culpa=culpa+2;	
		}	
	}
	situacion();		
}//Ni modo no hay de otra
void fin(){
	printf("Fin del juego...\n");
	printf("\nPuntuacion= %f\n",((mood*n*dif*culpa)-simp-odio));
	printf("1.Menu	2.Estadisticas	3.Salir	 \n");
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)) {
		scanf("%i",&o);
		if (o==1){
		main();	
		}
		if (o==2){
		stats();	
		}
		if (o==3){
		return;	
		}
	}
}
void close(){//Primer agradecimiento
	printf("Gracias por jugar!!");
	close("return");
}
void p1(){//Rompimiento real 
	printf("Novia: ¿Acaso te importa nuestra relacion?, No parece ultimamente...\n");
	printf("1.Claro que me importa y lo intento!	2.Claro que ya no importa, ya no igual.	3.No se que decirte, estoy un poco decepcionado	 \n");	
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)) {scanf("%i",&o);//Diferentes respues posibles y pensadas
		if (o==1){
			simp=simp+1;
			culpa=culpa-1;
			printf("Novia: Yo tambien lo intento pero no funciona\n");
		}
		if (o==2){
			odio=odio+2;
			simp=simp-4;
			culpa=culpa+1;
			printf("Novia: Tienes razon, que mas da ya no hay mas que dar.\n");	
		}
		if (o==3){
			simp=simp-2;
			printf("Novia: Y ahora todo es mi culpa ¿no?.\n");	
		}
	}
	P1=1;
	pregunta();	
}
void p2(){//Desenlace 2
	printf("Novia: Yo lo intente encerio lo hice...\n");
	printf("1.Yo tambien lo di todo	2.¿Tu crees que yo no? 	3.Pues, parece lo contrario	 \n");
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)) {scanf("%i",&o);	
		if (o==1){
			simp=simp+2;
			culpa=culpa+2;
			odio=odio*1.2;
		}
		if (o==2){
			simp=simp+3;
			culpa=culpa+6;
		}
		if (o==3){
			simp=simp-1;
			odio=odio*2;
			culpa=culpa+3;
			printf("Novia: Simepre soy la mala\n");	
		}
	}
	P2=1;
	pregunta();	
}
void p3(){//Desenlace 3
	printf("Novia: Sabes? No tiene caso, nunca lo tuvo\n");
	printf("1.¿No lo creo?	2.Para mi si y mucho	3.Lo podemos solucionar, debe de haber un modo, debe...	 \n");	
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)) {scanf("%i",&o);
		if (o==1){
			simp=simp-1;
			culpa=culpa-3;
			odio=odio-1;
			printf("Novia: No me dejas opciones...\n");
		}
		if (o==2){
			simp=simp+6;
			culpa=culpa+1;
			printf("Novia: No crees que es un poco tarde?\n");
		}
		if (o==3){
			simp=simp+3;
			odio=odio+2;
			culpa=culpa+3;
			printf("Novia: Me cuesta creer que podamos\n");	
		}
	}
	P3=1;
	pregunta();	
}
void a1(){//Final alternativo
	printf("Novia: Sabes? Lo peor es que crees que soy la culpable.\n");
	printf("1.Siento que ocultas cosas	2.¿Fui yo?, no fui sufiente 	3.Creo que los dos... \n");
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)) {
		scanf("%i",&o);	
		if (o==1){
			simp=simp-2;
			culpa=culpa+1;
			odio=odio+2;
			printf("Novia: Siempre has desconfiado de mi\n");
		}
		if (o==2){
			simp=simp+4;
			odio=odio*0.5;
			culpa=culpa+4;
			printf("Novia: Espero que encuentres a alguien mejor.\n");	
		}
		if (o==3){
			simp=simp-3;
			odio=odio*1.2;
			culpa=culpa+1;
			printf("Novia: Ya es del pasado.\n");	
		}
	}
	A1=1;
	pregunta();
}
void a2(){//Seguimiento del desenlace 2
	printf("Novia: Estoy muy confundida, quizas solo necesito un tiempo\n");
	printf("1.Es lo mejor para los dos amor	   2.Creo que yo tambien... 	3.Bien, sabia que lo dirias	 \n");
		
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)) {scanf("%i",&o);
		if (o==1){
			simp=simp*2;
			culpa=culpa+3;
			odio=odio-2;
			printf("Novia: Eres tan lindo...\n");
		}
		if (o==2){
			simp=simp-2;
			odio=odio+1;
			culpa=culpa-3;
			printf("Novia: Quizas es lo mejor\n");	
		}
		if (o==3){
			simp=simp-4;
			odio=odio+5;
			culpa=culpa+2;
			printf("Novia: Como digas...\n");	
		}
	}
	A2=1;
	pregunta();
}
void a3(){//Seguimiento del desenlace 3
	printf("Este contacto te ha bloqueado.\n");
	printf("1.Sere mejor 	2.*LLora*. 	3.¿Y ahora que...?	 \n");
		
	o=0;
	while ((o!=1)and(o!=2)and(o!=3)) {
		scanf("%i",&o);
		if (o==1){
			simp=simp-1;
			
		}
		if (o==2){
			simp=simp+2;
				
		}
		if (o==3){
			simp=simp+1;
				
		}
	}
	
	fin();
}
void stats(){//Puntaje entre mas bajo mas sea menos humillado seras, entre mayor sea mas simp seras
	printf("\nMood final= %f",mood);
	printf("\nNivel de humillacion = %f",simp);
	printf("\nPuntuacion= %f\n\n",((mood*n*dif*culpa)-simp-odio));
	main();
}
void dificultad(){
	if (dif==1){
		printf("\nDificultad actual: Normal");
	}
	if (dif==1.5){
		printf("\nDificultad actual: Dificil");
	}
	if (dif==2){
		printf("\nDificultad actual: Ya ni lo intentes");
	}	
	if (dif==0.5){
		printf("\nDificultad actual: Facil");
	}
	printf(" (%f)",dif);
	
}
