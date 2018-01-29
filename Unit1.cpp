//---------------------------------------------------------------------------

#include <vcl.h>
#include <cmath>
#include <string>
#pragma hdrstop

#define PI 3.14159265

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//TMyThread *thr ;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
double round(double res, short st)
{
 short pers1 = st + 1 ;
 double pt = 10 ;
 double pt1 = 5 ;
 double conv = pt1 / pow(pt,pers1) ;
 double ipart1, ipart2, fpart;
 fpart = modf(res,&ipart1);
 fpart = fpart + conv ;
 fpart = modf(fpart*pow(pt,st),&ipart2); //
 ipart1 += ipart2/pow(pt,st);
 return ipart1 ;
}
//---------------------------------------------------------------------------
void threadFunc(int i, double agA, double Gip){
		double adlAgB = 90.0 - agA;
		double dblCatetA = round(Gip * sin(agA * PI / 180), 2);
		double dblCatetB = round(Gip * sin(adlAgB * PI / 180), 2);

		double gipCalc = pow(dblCatetA, 2) + pow(dblCatetB, 2);
		gipCalc = round(sqrt(gipCalc), 0);

		Form1->StringGrid1->RowCount = Form1->StringGrid1->RowCount + 1;
		Form1->StringGrid1->Cells[0][i] = String(agA);
		Form1->StringGrid1->Cells[1][i] = String(adlAgB);
		Form1->StringGrid1->Cells[2][i] = String(dblCatetA);
		Form1->StringGrid1->Cells[3][i] = String(dblCatetB);
		Form1->StringGrid1->Cells[4][i] = String(gipCalc);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	double Gipotenuza = Edit1->Text.ToDouble();
	double adlAgA;
	int i = 0;
	for (adlAgA = 0.1; adlAgA < 90; adlAgA = adlAgA + 0.1) {
		i++;

		double adlAgB = 90.0 - adlAgA;
		double dblCatetA = round(Gipotenuza * sin(adlAgA * PI / 180), 2);
		double dblCatetB = round(Gipotenuza * sin(adlAgB * PI / 180), 2);

		double gipCalc = pow(dblCatetA, 2) + pow(dblCatetB, 2);
		gipCalc = round(sqrt(gipCalc), 0);

		StringGrid1->RowCount = StringGrid1->RowCount + 1;
		StringGrid1->Cells[0][i] = String(adlAgA);
		StringGrid1->Cells[1][i] = String(adlAgB);
		StringGrid1->Cells[2][i] = String(dblCatetA);
		StringGrid1->Cells[3][i] = String(dblCatetB);
		StringGrid1->Cells[4][i] = String(gipCalc);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	StringGrid1->Cells[0][0] = "Угол A" ;
	StringGrid1->Cells[1][0] = "Угол B" ;
	StringGrid1->Cells[2][0] = "Катет a" ;
	StringGrid1->Cells[3][0] = "Катет b" ;
	StringGrid1->Cells[4][0] = "Гипотенуза (Расчетная)" ;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
//	thr = new TMyThread(true) ;
//	thr-
	double Gipotenuza = Edit1->Text.ToDouble();
	double adlAgA;
	int i = 0;
	for (adlAgA = 0.1; adlAgA < 90; adlAgA = adlAgA + 0.1) {
		i++;
//		thread thr(threadFunc, i, adlAgA, Gipotenuza) ;
//		thr.join() ;
	}
}
//---------------------------------------------------------------------------

