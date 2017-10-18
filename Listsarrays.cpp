#include <iostream>
#include <math.h>
using namespace std;

double sumatoria(double a[], double n){
  double total=0;
  for (int i=0; i<n ;i++){
      total=total+a[i];
      }
    return total;
}

double media(double a,double b){
  double total=0;
  total=a/b;

  return total;
}

double varia (double a[], double promedio, int n){
  double total=0;
  double sumadifer;
  double restas [n-1];
  double cuadrados [n-1];
  for (int i=0; i<n;i++){
    restas[i]=a[i]-promedio;
    cuadrados[i]=restas[i]*restas[i];
    total=sumatoria (cuadrados,n)/n;
    }
  return total;
}

double desvia (double varianza){
double total= 0;
total=sqrt(varianza);
  return total;
}

int main(){
    int n=0;
    double sumatotal=0, promedio=0, desviacion=0, varianza=0;
    cout<<"Cuántos valores quieres evaluar?"<<endl;
    cin>>n;
    double listnum[n-1];
    for(int i =0;i<n;i++){
      cout<<"dame el valor número "<<i+1<<endl;
      cin>>listnum [i];
      }

sumatotal=sumatoria(listnum,n);
promedio=media(sumatotal,n);
varianza=varia(listnum, promedio, n);
desviacion=desvia(varianza);

cout<<"Aqui estan los resultados:"<<endl;
cout<<"Suma total: "<<sumatotal<<endl;
cout<<"Promedio: "<<promedio<<endl;
cout<<"Varianza: "<<varianza<<endl;
cout<<"Desviacion Estandar: "<<desviacion<<endl;

return 0;
}
