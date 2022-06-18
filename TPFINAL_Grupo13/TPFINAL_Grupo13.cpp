// TPFINAL_Grupo13.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "cTurista.h"
#include "cEjecutivo.h"
#include "cPrimeraClase.h"
#include "cMarshall.h"
#include "cAzafatas.h"
#include "cPiloto.h"
#include "cCopiloto.h"
#include "cIata.h"
#include "cAvion.h"
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
	//creo pasajeros, aviones, azafatas, pilotos y copilotos para implementar luego las funciones
	try
	{
		cout << "Imprimo los pasajeros: \n";
		cTurista* pasajero1 = new cTurista("Pedro", "Lopez", 18436114, "TU1843611422A");
		cEjecutivo* pasajero2 = new cEjecutivo("Marta", "Sanchez", 44417808, "BS4441780833B");
		cPrimeraClase* pasajero3 = new cPrimeraClase("Maria", "Corso", 44684941, "PC4468494144C");
		cTurista* pasajero4 = new cTurista("Guadalupe", "Bares", 40948573, "TU4094857355D");
		cEjecutivo* pasajero5 = new cEjecutivo("Martin", "Hernandez", 42394857, "BS4239485730L");
		cPrimeraClase* pasajero6 = new cPrimeraClase("Julieta", "Demner", 38749201, "PC387420166F");
		pasajero1->Imprimir();
		pasajero2->Imprimir();
		pasajero3->Imprimir();
		pasajero4->Imprimir();
		pasajero5->Imprimir();
		pasajero6->Imprimir();

		cout << "Imprimo los datos de Marshall: \n";
		cMarshall* marshall = new cMarshall("Pepe", "Fava", 43935274, 34888990);
		cMarshall* marshall2 = new cMarshall("Juan Ignacio", "Canon", 27837237, 57392640);
		marshall->Imprimir();
		marshall2->Imprimir);

		cout << "Imprimo las azafatas: \n";
		cAzafatas* Azafata1 = new cAzafatas("Martina", "Quiroga", 40654398, 2837819);
		cAzafatas* azafata2 = new cAzafatas("Justina", "Santiago", 38764985, 37545434);
		cAzafatas* azafata3 = new cAzafatas("Sol", "Cambiaso", 35874291, 23948371);
		cAzafatas* azafata4 = new cAzafatas("Juana", "Abadie", 37894249, 62918274);
		Azafata1->Imprimir();
		azafata2->Imprimir();
		azafata3->Imprimir();
		azafata4->Imprimir();

		cout << "Imprimo piloto: \n";
		cPiloto* piloto = new cPiloto("Agustin", "Gomez", 30457629, 9823473);
		cPiloto* piloto2 = new cPiloto("Fernando", "Rodriguez", 31093262, 49203751);
		piloto->Imprimir();
		piloto2->Imprimir();

		cout << "Imprimo copiloto: \n";
		cCopiloto* copiloto = new cCopiloto("Juan", "Panero", 29837498, 23632048);
		cCopiloto* copiloto2 = new cCopiloto("Nicolas", "Arana", 31981230, 71928317);
		copiloto->Imprimir();
		copiloto2->Imprimir();

		cIata::cantAviones = 0;

		cIata* iata = new cIata();

		cAvion* avion1 = new cAvion();
		cAvion* avion2 = new cAvion();

		//voy agregando las azafatas, piloto, copiloto, pasajeros al avion
		avion1->AgregarAzafata(Azafata1);
		avion1->AgregarAzafata(Azafata1);
		avion1->setPiloto(piloto);
		avion1->setCopiloto(copiloto);
		iata->AgregarAvion(avion1);
		avion1->AgregarPasajero(pasajero1);
		avion1->AgregarPasajero(pasajero2);
		avion1->AgregarPasajero(pasajero3);
		iata->generarcodigovuelo(avion1); //el avion tiene un codigo de vuelo
		iata->ReservarAsientoMarshall(avion1, marshall); //iata le debe reservar un asiento random que no este ocupado
		avion1->checkin(); //revisar que todos los codigos de la lista de pasajeros sean validos
		cLista<cPasajero>* listapasajero = avion1->getlistapasajero();


		cAzafatas* azafata = piloto->getavion()->AsignarAzafata();
		piloto->AnunciosAltavoz();
		piloto->PilotearAvion(avion1);
		azafata->AtenderLlamadosPiloto(piloto);
		piloto->PedirComidaoBebida(azafata);
		piloto->getavion()->insertarevento("El piloto:" + piloto->to_string() + "Hizo anuncios por altavoz" + "Pilotea el avion" + avion1->to_string() + "Pidio bebida sin alcohol" + "Azafata asignada" + azafata->to_string()); //guardo los eventos de piloto




		int pos;
		for (pos = 0; pos < listapasajero->getCA(); pos++) {
			cPasajero* pasajero = listapasajero->Buscar(pos);

			if (!pasajero->getavion()->estadetenido(pasajero)) {//primero verifico que el pasajero no este detenido para que sucedan estos eventos

				srand((unsigned)time(NULL)); //creo una semilla random para generar eventos y guardarlos
				cout << rand() % 6 + 1 << endl; //rango de 1 a 6
				if (rand() % 6 + 1 == 1) {

					pasajero->cometerdelito();
					avion1->getmarshall()->arrebatopasajero(pasajero);
					if (avion1->lugarprision()) {
						avion1->Agregarpasajerodetenido(pasajero); //primero verifico que haya lugar en la prision y si hay lugar agrega el pasajero detenido a la prision
						pasajero->getavion()->insertarevento("El pasajero:" + pasajero->to_string() + "Quedo detenido" + "Marshall asignado" + marshall->to_string());//guardo el evento si el pasajero queda detenido
					}
				}
				if (rand() % 6 + 1 == 2) {
					if (pasajero->esejecutivo()) {
						cEjecutivo* ejecutivo = dynamic_cast<cEjecutivo*>(pasajero);
						cAzafatas* azafata = ejecutivo->getavion()->AsignarAzafata();//Guardo la azafata asignada del avion
						azafata->AtenderLlamadosCliente(ejecutivo); //las azafatas no tienen eventos por si mismas sino que atienden los eventos de los pasajeros y pilotos
						ejecutivo->PedirChampagne(azafata);
						azafata->EntregarComidayBebida(ejecutivo);
						ejecutivo->getavion()->insertarevento("El pasajero:" + ejecutivo->to_string() + "pidio Champagne" + "Azafata asignada" + azafata->to_string()); //guardo los eventos que suceden con ejecutivo
						ejecutivo->HacerseMasaje(azafata);
						ejecutivo->getavion()->insertarevento("El pasajero:" + ejecutivo->to_string() + "Pidio que le hagan masajes" + "Azafata asignada" + azafata->to_string());
					}
				}
				if (rand() % 6 + 1 == 3) {
					if (pasajero->esprimeraclase()) {
						cPrimeraClase* pasajeroprimclase = dynamic_cast<cPrimeraClase*>(pasajero);
						cAzafatas* azafata = pasajeroprimclase->getavion()->AsignarAzafata();
						pasajeroprimclase->TrabajarNotebook();
						pasajeroprimclase->getavion()->insertarevento("El pasajero::" + pasajeroprimclase->to_string() + "Trabajo con la notebook"); //guardo los eventos que sucedieron con los de primera clase
					}
				}
				if (rand() % 6 + 1 == 4) {
					pasajero->Dormir();
					pasajero->getavion()->insertarevento("El pasajero:" + pasajero->to_string() + "Durmio");
				}
				if (rand() % 6 + 1 == 5) {
					pasajero->IralBanioyVolver();
					pasajero->getavion()->insertarevento("El pasajero" + pasajero->to_string() + "Fue al banio y volvio");
				}
				if (rand() % 6 + 1 == 6) {
					cAzafatas* azafata = pasajero->getavion()->AsignarAzafata();
					azafata->AtenderLlamadosCliente(pasajero);
					pasajero->LlamarAzafata(azafata);
					pasajero->PedirComidayBebida(azafata);
					azafata->EntregarComidayBebida(pasajero);
					pasajero->getavion()->insertarevento("El pasajero:" + pasajero->to_string() + "Pidio comida y bebida" + "Azafata asignada" + azafata->to_string());
				}
			}
		}
		copiloto->PedidoDespegueyAterrizaje();
		copiloto->getavion()->insertarevento("El copiloto:" + copiloto->to_string() + "Se comunico con la torre de control para realizar el pedido de despegue y aterrizaje"); //guardo los eventos de copiloto

		//lo mismo pero para avion 2
		avion2->AgregarAzafata(azafata3);
		avion2->AgregarAzafata(azafata4);
		avion2->setPiloto(piloto2);
		avion2->setCopiloto(copiloto2);
		iata->AgregarAvion(avion2);
		avion2->AgregarPasajero(pasajero4);
		avion2->AgregarPasajero(pasajero5);
		avion2->AgregarPasajero(pasajero6);
		iata->generarcodigovuelo(avion2);
		iata->ReservarAsientoMarshall(avion2, marshall2);
		avion2->checkin();
		//cLista<cPasajero>* listapasajeroavion2 = avion2->getlistapasajero();

		/*for (posicion = 0; posicion < listapasajeroavion2->getCA(); posicion++) {
			srand((unsigned)time(NULL));
			cout << rand() % 5 +1 << endl; // rango desde 1 a 5
		} *///Este codigo debe estar en la clase avion y no en el main por lo tanto no lo reutilizo para avion2

		//libero memoria
		delete iata; //se encarga de eliminar los aviones y a su vez se encarga de eliminar pasajeros, pilotos,copilotos, marshall y azafatas
	}
	catch (...) {
		cout << "Se produjo un error" << endl;
	}
}


