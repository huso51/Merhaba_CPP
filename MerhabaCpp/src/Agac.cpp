/*
 * Agac.cpp
 *
 *  Created on: 2 Eyl 2018
 *      Author: Hüseyin
 */

#include "Agac.h"

Agac::Agac() {
	this->yaprakSayisi = 0;
}

Agac::~Agac() {
	// TODO Auto-generated destructor stub
}
void Agac::setYaprakSayisi(int yaprakSayisi){
	this->yaprakSayisi = yaprakSayisi;
}
int Agac::getYaprakSayisi(){
	return this->yaprakSayisi;
}
