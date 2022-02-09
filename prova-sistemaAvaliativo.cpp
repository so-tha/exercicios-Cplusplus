/*
Nome : Thais de Cassia Hipolito Souza  
Curso: Ciencia da Computação
*/

#include<iostream>

using namespace std;

int main ()
{
    float n1, n2, n3;
    int m[10];
    float nota[10];
    int f [10];
    int meNota=-1, maNota=-1;
    int reprovados = 0;
    int rep_falta = 0;
    int i=0;
    int per_repFalta;
    
    for(i=0; i<10; i++)
    {
        cout<<"Informe seu numero de matricula: ";
        cin>>m[i];
        cout<<"Informe suas 3 notas, em sequencia: ";
        cin>>n1>>n2>>n3;
        nota[i] = (n1 + n2 + n3) / 3;
        printf ("Informe quantas faltas possui: ");
        cin>>f[i];
    }

    for(i=0; i<10; i++)
    {
        if(nota[i]<meNota||meNota==-1)
        {
            meNota=nota[i];
            cout<<"A menor nota foi: "<<meNota<<endl;
        }
        if(nota[i]>maNota)
        {
            maNota=nota[i];
            cout<<"A maior nota foi: "<<maNota<<endl;
        }
    }
    
    for(i=0; i<10; i++)
    {
 
        if(nota[i] >= 60 && f[i] <= 20){
 			cout<<"-------------------------------------"<<endl;
	     	cout<<"Matricula = "<<m[i]<<" -> APROVADO"<<endl;       	
		}else{
			cout<<"-------------------------------------"<<endl;
			cout<<"Matricula = "<<m<<" -> REPROVADO POR FALTA"<<endl;
                reprovados++;
            }
    }
    
    cout<<("Alunos reprovados: ", rep_falta);
    
	for(i = 0; i < 10; i++)
    {
        if(f[i] < 10) 
		rep_falta++;
    }
    
	per_repFalta = rep_falta /( 10 * 100);  
	  
    cout<<"Porcentagem -> Reprovados por falta: "<<per_repFalta<<endl;

    return 0;
}
