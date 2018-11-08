#include "stdafx.h"


CSistema::CSistema(){


}

CSistema::~CSistema(){

}

void CSistema::Insertar(float _cantPT, float _cantIN, float _cantVP, float _cantIA, string _nombre){

	CEmpresa* objEmpresa = new CEmpresa(_cantPT, _cantIN, _cantVP, _cantIA, _nombre);

	arreEmpr.push_back(objEmpresa);


}

void CSistema::Borrar(){

}

void CSistema::AnalizarPT(){
	int cont = 0;

	float aux;

	for each (CEmpresa* objEmpresa in arreEmpr){

		arrePT.push_back(objEmpresa->get_cantPT());

	}

	//Ordenando de mayor a menor y poninendolo en arrePT
	for (int i = 0; i < arrePT.size() - 1; i++)
	{
		for (int j = i + 1; j < arrePT.size(); j++)
		{
			if (arrePT[i]<arrePT[j])
			{
				aux = arrePT[i];

				arrePT[i] = arrePT[j];
				arrePT[j] = aux;


			}
		}
	}

	//Asignando el puesto de cada valor 
	for (int i = 1; i < arrePT.size(); i++)
	{


		if (arrePT[i] != arrePT[i - 1])
		{
			cont++;

		}
		for (int j = 0; j <arrePT.size(); j++)
		{
			if (arrePT[i] == arreEmpr[j]->get_cantPT())
			{
				arreEmpr[j]->set_puestoPT(cont);
			}
		}






	}


	//
	/*
	for (int i = 0; i < arrePT.size() - 1; i++)
	{


	if (arrePT[i]==arrePT[i+1])
	{
	arrePT[i] = arrePT[i + 1];
	cont++;

	}

	}
	*/


	/*
	for (int i = 0; i < arrePT.size(); i++)
	{
	for (int j = 0; j < arrePT.size(); j++){

	if (arrePT[i] == arreEmpr[j]->get_cantPT())
	{
	arreEmpr[j]->set_puestoPT(i - (cont-1));
	}

	}
	}*/

	/*	for (int i = 0; i < arrePT.size(); i++)
	{
	arreEmpr[i]->ajustarPT(cont);
	}*/




}

void CSistema::AnalizarIN(){

	int cont = 0;

	float aux;

	for each (CEmpresa* objEmpresa in arreEmpr){

		arreIN.push_back(objEmpresa->get_cantIN());

	}

	//Ordenando de menor a mayor y poninendolo en arrePT
	for (int i = 0; i < arreIN.size() - 1; i++)
	{
		for (int j = i + 1; j < arreIN.size(); j++)
		{
			if (arreIN[i]>arreIN[j])
			{
				aux = arreIN[i];

				arreIN[i] = arreIN[j];
				arreIN[j] = aux;


			}
		}
	}


	//Asignando el puesto de cada valor 
	for (int i = 1; i < arreIN.size(); i++)
	{


		if (arreIN[i] != arreIN[i - 1])
		{
			cont++;

		}
		for (int j = 0; j <arreIN.size(); j++)
		{
			if (arreIN[i] == arreEmpr[j]->get_cantIN())
			{
				arreEmpr[j]->set_puestoIN(cont);
			}
		}



	}



}


void CSistema::AnalizarVP(){

	int cont = 0;

	float aux;

	for each (CEmpresa* objEmpresa in arreEmpr){

		arreVP.push_back(objEmpresa->get_cantVP());

	}

	//Ordenando de mayor a menor y poninendolo en arreVP
	for (int i = 0; i < arreVP.size() - 1; i++)
	{
		for (int j = i + 1; j < arreVP.size(); j++)
		{
			if (arreVP[i]<arreVP[j])
			{
				aux = arreVP[i];

				arreVP[i] = arreVP[j];
				arreVP[j] = aux;


			}
		}
	}

	//Asignando el puesto de cada valor 
	for (int i = 1; i < arreVP.size(); i++)
	{


		if (arreVP[i] != arreVP[i - 1])
		{
			cont++;

		}
		for (int j = 0; j <arreVP.size(); j++)
		{
			if (arreVP[i] == arreEmpr[j]->get_cantVP())
			{
				arreEmpr[j]->set_puestoVP(cont);
			}
		}


	}



}

void CSistema::AnalizarIA(){



	int cont = 0;

	float aux;

	for each (CEmpresa* objEmpresa in arreEmpr){

		arreIA.push_back(objEmpresa->get_cantIA());

	}

	//Ordenando de menor a mayor y ponIAendolo en arrePT
	for (int i = 0; i < arreIA.size() - 1; i++)
	{
		for (int j = i + 1; j < arreIA.size(); j++)
		{
			if (arreIA[i]>arreIA[j])
			{
				aux = arreIA[i];

				arreIA[i] = arreIA[j];
				arreIA[j] = aux;


			}
		}
	}


	//Asignando el puesto de cada valor 
	for (int i = 1; i < arreIA.size(); i++)
	{


		if (arreIA[i] != arreIA[i - 1])
		{
			cont++;

		}
		for (int j = 0; j <arreIA.size(); j++)
		{
			if (arreIA[i] == arreEmpr[j]->get_cantIA())
			{
				arreEmpr[j]->set_puestoIA(cont);
			}
		}



	}








}

void CSistema::AnalizarOrdenaTopo(){


	int cont = 0;

	CEmpresa* aux;

	for each (CEmpresa* objEmpresa in arreEmpr){

		arreFinal.push_back(objEmpresa);

	}

	//Ordenando de menor a mayor y ponIAendolo en arrePT
	for (int i = 0; i < arreFinal.size() - 1; i++)
	{
		for (int j = i + 1; j < arreFinal.size(); j++)
		{
			if (arreFinal[i]->get_puntajeGlobal()>arreFinal[j]->get_puntajeGlobal())
			{
				aux = arreFinal[i];

				arreFinal[i] = arreFinal[j];
				arreFinal[j] = aux;


			}
		}
	}






}

void CSistema::ResultadoFinal(){

	int suma = 0;

	for (int i = 0; i < arreEmpr.size(); i++)
	{
		suma = arreEmpr[i]->get_puestoIA() + arreEmpr[i]->get_puestoPT() + arreEmpr[i]->get_puestoIN() + arreEmpr[i]->get_puestoVP();
		arreEmpr[i]->set_puntajeGlobal(suma);

		suma = 0;
	}



}



CEmpresa* CSistema::get_empresa(int _numeroempresa){



	return arreFinal[_numeroempresa];




}


vector<CEmpresa*> CSistema::get_arrFinal(){


	return  arreFinal;


}


void CSistema::BorrarTodoArreglos(){


	arreEmpr.clear();
	arreIA.clear();
	arreIN.clear();
	arrePT.clear();
	arreVP.clear();
	arreFinal.clear();



}