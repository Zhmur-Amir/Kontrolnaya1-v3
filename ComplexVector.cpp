#include "klass.h"
#include "ComplexNum.h"






    CComplexVector CComplexVector :: operator+(const CComplexVector &b)
    {
        CComplexVector m;
        for(int i=0; i<LENGTH; i++)
            {
                m.a[i]=a[i]+b.a[i];
            }
        return m;
    }


    CComplexVector CComplexVector :: operator-(const CComplexVector &b)
    {
        CComplexVector m;
         for(int i=0; i<LENGTH; i++)
            {
                m.a[i]=a[i]-b.a[i];
         };
         return m;
    }


    CComplexNum CComplexVector :: operator*(CComplexVector &b)
    {
        CComplexNum m;
         b=b.Conjugate();
         for(int i=0; i<LENGTH; i++)
            {
                m=m+a[i]*b.a[i];
            }
         return m;
    }




    void CComplexVector :: print()
    {
     CComplexNum m;
     printf("(");
      for(int i=0; i<LENGTH-1; i++)
        {
            m=a[i];
             m.print();
             printf(", ");
      }
       m=a[LENGTH-1];
       m.print();
       printf(")\n");
    }


    CComplexVector CComplexVector :: Conjugate()
    {
        CComplexVector m;
         for(int i=0; i<LENGTH; i++)
            {
                CComplexNum c(a[i].Re(), -a[i].Im());
         m.a[i]=c;
            }
         return m;
    }




