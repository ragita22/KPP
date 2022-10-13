// NAMA		: Rendi Andria Gita Putra
// NRP		: 5003221018
// Jurusan	: Statistika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

float mencari_V0(float v)
{
    v = sqrt(v*v - 6);
  	return v;
}

float speed_dgn_loss(float v)
{
	if(v<=10){
        v-=1;
    }
    else if(v<=20){
        v-=3;
    }else{
        v-=5;
    }
    return v;
}

int main() {
    float vt;
    std::cin >> vt;
    
    
    float vl;
    vl = speed_dgn_loss(vt);
    
    float v0;
    v0 = mencari_V0(vt);
  	/* input adalah kecepatan tangensial maksimum roller */
    
  	/* std::cin >> input */
    int jarak;
    jarak = vl*vl / 10;
  
  	std::cout << jarak << " " << v0 << std::endl;
    return 0;
}