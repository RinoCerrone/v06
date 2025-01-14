#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v6 
{
    
    bool is_flush(const std::string cards[],int size);

    namespace py{
        class package{

         public:
           virtual std::string name()const=0;
           virtual std::string version()const=0;
           virtual int year()const=0;
           virtual ~package()=default;
           

            

        };
    }
    class numpy:public py::package{
           std::string name ()const override;
           std::string version()const override;
           int year()const override;



    };

    class rectangle{
        int x1,y1,x2,y2;
        public:
         rectangle(int a,int b,int c,int d);
         rectangle& move(int a,int b);
         void print(std::ostream& ss)const;




    };

   class point{
     
     public:
      int x,y;

   };
   class polygon{
      int i;
      unsigned int arr_size;
      point* p;
      static double distance(const point& a,const point& b);
      public:
       polygon(unsigned int a);
       polygon(const polygon& other);
       ~polygon();
       void add(const point& p);
       double perimeter()const;

   };





}