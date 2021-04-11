
class Godzilla{
private:      
      int hp,potion;
      std::string name;
      Godzilla* next;
public:
        Godzilla(int h = 100,int p = 100,std::string n = "unknow");
        void show_Godzilla();
        void insert(Godzilla*&);
        Godzilla* move_next();
        ~Godzilla();
};