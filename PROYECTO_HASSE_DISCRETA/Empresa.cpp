#include "stdafx.h"





CEmpresa::CEmpresa(float _cantPT, float _cantIN, float _cantVP, float _cantIA, string _nombre){

	cantPT = _cantPT;
	cantIN = _cantIN;
	cantVP = _cantVP;
	cantIA = _cantIA;

	nombre = _nombre;

	puestoPT = 0;
	puestoIN = 0;
	puestoVP = 0;
	puestoIA = 0;

	puntajeGlobal = 0;


}

CEmpresa::~CEmpresa(){}

void CEmpresa::set_cantPT(float _cantPT){


	cantPT = _cantPT;

}

float CEmpresa::get_cantPT(){

	return cantPT;
}

void CEmpresa::set_cantIN(float _cantIN){

	cantIN = _cantIN;

}

float CEmpresa::get_cantIN(){

	return cantIN;

}

void CEmpresa::set_cantVP(float _cantVP){

	cantVP = _cantVP;


}

float CEmpresa::get_cantVP(){

	return cantVP;

}

void CEmpresa::set_cantIA(float _cantIA){

	cantIA = _cantIA;
}

float CEmpresa::get_cantIA(){

	return cantIA;
}

void CEmpresa::set_puestoPT(int _puestoPT){

	puestoPT = _puestoPT;

}

int CEmpresa::get_puestoPT(){

	return puestoPT;

}


void CEmpresa::set_puestoIN(int _puestoIN){

	puestoIN = _puestoIN;

}

int CEmpresa::get_puestoIN(){

	return puestoIN;


}

void CEmpresa::set_puestoVP(int _puestoVP){

	puestoVP = _puestoVP;

}

int CEmpresa::get_puestoVP(){

	return puestoVP;

}

void CEmpresa::set_puestoIA(int _puestoIA){

	puestoIA = _puestoIA;
}

int CEmpresa::get_puestoIA(){

	return puestoIA;

}

void CEmpresa::set_puntajeGlobal(int _puntajeGlobal){


	puntajeGlobal = _puntajeGlobal;

}

int CEmpresa::get_puntajeGlobal(){
	return puntajeGlobal;

}

void CEmpresa::set_nombre(string _nombre){

	nombre = _nombre;

}

String^ CEmpresa::get_nombre(){

	String^ nombreS = gcnew String(nombre.c_str());
	return nombreS;

}


void CEmpresa::set_x(int _x){

	x = _x;
}

int CEmpresa::get_x(){

	return x;

}

void CEmpresa::set_y(int _y){

	y = _y;
}

int CEmpresa::get_y(){

	return y;
}

void CEmpresa::set_nivel(int _nivel){

	nivel = _nivel;
}

int CEmpresa::get_nivel(){
	return nivel;

}