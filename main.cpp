#include<iostream>
using namespace std;
class Base{
      public:
          void write(){write_to_file();}
          void read(){read_from_file();}
        private:
          virtual void write_to_file()=0;
          virtual void read_from_file()=0;
};
class Derived: public Base{
  private:
    int number_of_bytes;
  public:
    void write_to_file()
    {
      cout << "Derived _ writee To file"<<endl;
    }
    void read_from_file()
    {
    cout << "Derived read from file"<< endl;
    }
};
int main(int argc, char *argv[])
{
  Base *b =new Derived();
  b->write();
  b->read();

}
