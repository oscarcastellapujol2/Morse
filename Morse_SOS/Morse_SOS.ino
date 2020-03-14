/**************************************************************
 **
 **                       TITOL:                             **
 **
          Estructures de control de Repetició for & while    *
 **
 ** NOM:Òscar Castellà Pujol                 DATA:21/01/2019 **
 *************************************************************/
//*********************  INCLUDES  ****************************


//*********************  VARIABLES ****************************
const int pin = 8;

int note = 1047;
int velocitat = 10;


//**********************   SETUP  *****************************
void setup()
{

}

//************************   LOOP  *****************************
void loop()
{
  s();
  espaiL();
  o();
  espaiL();
  s();
  espaiP();
}

//**********************   FUNCIONS  ***************************

void a()
{
  punt();
  ratlla();
}
void b()
{
  ratlla();
  punt();
  punt();
  punt();
}
void c()
{
  ratlla();
  punt();
  ratlla();
  punt();
}
void d()
{
  ratlla();
  punt();
  punt();
}
void e()
{
  punt();
}
void f()
{
  punt();
  punt();
  ratlla();
  punt();
}
void g()
{
  ratlla();
  ratlla();
  punt();
}
void h()
{
  punt();
  punt();
  punt();
  punt();
}
void i()
{
  punt();
  punt();
}
void j()
{
  punt();
  ratlla();
  ratlla();
  ratlla();
}
void k()
{
  ratlla();
  punt();
  ratlla();
  ratlla();
}
void l()
{
  punt();
  ratlla();
  punt();
  punt();
}
void m()
{
  ratlla();
  ratlla();
}
void n()
{
  ratlla();
  punt();
}
void o()
{
  ratlla();
  ratlla();
  ratlla();
}
void p()
{
  punt();
  ratlla();
  ratlla();
  punt();
}
void q()
{
  ratlla();
  ratlla();
  punt();
  ratlla();
}
void r()
{
  punt();
  ratlla();
  punt();
}
void s()
{
  punt();
  punt();
  punt();
}
void t()
{
  ratlla();
}
void u()
{
  punt();
  punt();
  ratlla();
}
void v()
{
  punt();
  punt();
  punt();
  ratlla();
}
void w()
{
  punt();
  ratlla();
  ratlla();
}
void x()
{
  ratlla();
  punt();
  punt();
  ratlla();
}
void y()
{
  ratlla();
  punt();
  ratlla();
  ratlla();
}
void z()
{
  ratlla();
  ratlla();
  punt();
  punt();
}
void n1()
{
  punt();
  ratlla();
  ratlla();
  ratlla();
  ratlla();
}
void n2()
{
  punt();
  punt();
  ratlla();
  ratlla();
  ratlla();
}
void n3()
{
  punt();
  punt();
  punt();
  ratlla();
  ratlla();
}
void n4()
{
  punt();
  punt();
  punt();
  punt();
  ratlla();
}
void n5()
{
  punt();
  punt();
  punt();
  punt();
  punt();
}
void n6()
{
  ratlla();
  punt();
  punt();
  punt();
  punt();
}
void n7()
{
  ratlla();
  ratlla();
  punt();
  punt();
  punt();
}
void n8()
{
  ratlla();
  ratlla();
  ratlla();
  punt();
  punt();
}
void n9()
{
  ratlla();
  ratlla();
  ratlla();
  ratlla();
  punt();
}
void n0()
{
  ratlla();
  ratlla();
  ratlla();
  ratlla();
  ratlla();
}
void punt()
{
  tone(pin, note, 1000 / velocitat);
  delay(1000 / velocitat);
  delay(1000 / velocitat);
}
void ratlla()
{
  tone(pin, note, 3 * (1000 / velocitat));
  delay(3 * (1000 / velocitat));
  delay(1000 / velocitat);
}

void espaiL()
{
  delay(2 * (1000 / velocitat));
}
void espaiP()
{
  delay (6 * (1000 / velocitat));
}
