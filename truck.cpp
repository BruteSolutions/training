class Truck : public Vehicle, public Autonomous {
    
 public:
  Truck(std::string a, int b){
    Truck::set_values(a,b);
    float Truck::getPrice();
  };

  void set_values(std::string a,int b){
    brand = a;
    year = b;
  };
  
  float getPrice(){
      return 0; // do magic
  }
 