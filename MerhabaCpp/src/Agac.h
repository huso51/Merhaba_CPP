/*
 * Agac.h
 *
 *  Created on: 2 Eyl 2018
 *      Author: Hüseyin
 */

#ifndef AGAC_H_
#define AGAC_H_

class Agac {
private:
	int yaprakSayisi;
public:
	Agac();
	virtual ~Agac();
	void setYaprakSayisi(int yaprakSayisi);
	int getYaprakSayisi();
};

#endif /* AGAC_H_ */
