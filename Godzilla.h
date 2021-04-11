class Godzilla{
      int hp,potion;
      string name;
      NODE* next;
public:
        Godzilla(int hp = 100,int potion = 100,string name = "Unknow");
        void show_Godzilla();
        void insert(Godzilla*&);
        Godzilla* move_next();
        ~Godzilla();
      };
