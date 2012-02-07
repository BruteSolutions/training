#import<boat.h>;

void Boat(std::string brand)
{
   int totCost = 0;
   for(int i = 0; i < brand.size(); i++)
      totCost += brand[i];
   setCost((float) totCost);
}
