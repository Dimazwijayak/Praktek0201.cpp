#include <iostream>
using namespace std;

int main(){
	double Luas_rumah=42;
	double  lantai_parket=193*1215;
	double Luas_1box=lantai_parket*8/1000000;
	double jmlh_box_parket,biaya_parket,biaya_pasang,totalbyr;
	
	cout<<"Luas Rumah :"<<Luas_rumah<<"m2"<<endl;
	cout<<"Luas  1 Box  Parket"<<Luas_1box <<"m2"<<endl;
	
	jmlh_box_parket=Luas_rumah/Luas_1box;
	cout<<"Jumlah Box Parket :"<<jmlh_box_parket<<endl;

	biaya_parket=jmlh_box_parket*500;
	cout<<"biaya parket(Rp) :"<<biaya_parket<<endl;
	
	biaya_pasang=Luas_rumah*20;
	cout<<"biaya pasang(Rp):"<<biaya_pasang<<endl;
	
	totalbyr=biaya_parket+biaya_pasang;
	cout<<"total biaya(Rp) :"<<totalbyr<<endl;
	
	
}
