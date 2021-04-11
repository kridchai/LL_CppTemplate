
class Godzilla{
private:      
      int hp,potion;
      string name;
      Godzilla* next;
public:
        Godzilla(int h = 100,int p = 100,string n = "unknow");
        void show_Godzilla();
        void insert(Godzilla*&);
        Godzilla* move_next();
        ~Godzilla();
};