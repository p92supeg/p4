//agenda.cpp
//Funciones de la clase agenda.

#include <list>
#include <iostream>
#include "Agenda.h"
#include "Alumno.h"
using namespace std;



void Agenda::listarAlumnos(int criterio, bool orden) const {
	
}

list<Alumno> Agenda::buscarAlumno(const string &nombre, int criterioBusqueda) const {
	list<Alumno> consulta;



	return consulta;
}

bool Agenda::establecerLider(Alumno &a) {
	return false; // si no tiene exito la operacion
}

bool Agenda::modificarAlumno(Alumno &a) {
	return false;
}

bool Agenda::insertarAlumno(const Alumno &a) {
	if(_lista.size() == _maxAlumnos) {
		cerr<<"ERROR. Se ha alcanzado el máximo de Alumnos"<<endl;
		return false;
	}
	else {
		_lista.push_back(a); // Mete el alumno en la lista si hay hueco
		return true;
	}
}

bool Agenda::borrarAlumno(const Alumno &a) {
	//_lista.remove(a);

	return true;
}
