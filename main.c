/*================= invitation  des headers ========================*/
#include<stdio.h>//lecture et ecriture 
#include<math.h>//fonctions  mathématiques
/*================= la fonction principale ========================*/
main()
{
     float a=0.0,b=1.0,x,xig[1000],xid[1000],xic[1000],dx,IE,IG,ID,IC;
     float f[1000],SG,SD,SC;
     int i,N; 
      printf("donner la valeur de N:\n");
      scanf("%d",&N);
      dx=(b-a)/(N-1);
      // culcul des fi==================
      for(i=0;i<N;i++)
      {
          x=a+i*dx;
          f[i]=exp(x);
          }              
       // culcul des xi==================
      for(i=0;i<N;i++)
      {    
	  xig[N-1]=0;
      if(i<N-1)
      {
	  xig[i]=dx;
      }
      xid[0]=0;
      if(i>0)
      {
	  xid[i]=dx;
      }
      xic[0]=dx/2.0;
      xic[N-1]=dx/2.0;
      if(i>0  && i<N-1)
      {
	  xic[i]=dx;
      }
      }
       //calcul de IE IG ID IC================
       IE=exp(b)-exp(a);
       SG=0;
       SD=0;
       SC=0;
       for(i=0;i<N;i++)
      { 
	   SG=SG+xig[i]*f[i];   
       SD=SD+xid[i]*f[i];  
       SC=SC+xic[i]*f[i];  
      }
      IG=SG;
      ID=SD;
      IC=SC;
       printf("IE=%f\t IG=%f\t ID=%f\t IC=%f\n",IE,IG,ID,IC );
           scanf("%f",&a);//  juste pour rester dans l'ecran d'affichage
}