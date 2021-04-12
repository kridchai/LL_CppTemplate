
class Godzilla{
private:      
      int hp,atk;
      std::string name;
      Godzilla* next;
public:
        Godzilla(int h = 100,int p = 100,std::string n = "unknow");
        void show_Godzilla();
        void insert(Godzilla*&);
        void Sound();
        bool isDeath();
        int knowHp();
        int knowAtk();
        std::string knowName();
        void getHp(int);
        Godzilla operator-(Godzilla);
        Godzilla* move_next();
        void setNext(Godzilla*);
        ~Godzilla();
};