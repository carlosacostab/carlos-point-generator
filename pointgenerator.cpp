#include <iostream>
#include <vector>
#include <array>

int main() {

  // Playing with range-based for-loops with this vector.
  int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for(int y : x){
    std::cout << y << " ";
  }
  std::cout << std::endl;
  std::cout << " " << "\n";

  double Lx, Ly;
  std::cout << "Enter horizontal dimension of rectangle: ";
  std::cin >> Lx;
  std::cout << "Enter vertical dimension of rectangle: ";
  std::cin >> Ly;

  // Establishing the value of hx and hy:
  double hx, hy;
  hx = Lx/10.;
  hy = Ly/10.;
  
  std::cout << "Lx = " << Lx << "\n";
  std::cout << "Ly = " << Ly << "\n";
  std::cout << "hx = " << hx << "\n";
  std::cout << "hy = " << hy << "\n";
  std::cout << " " << "\n";

  // Sizes of coordinates arrays:
  int px, py, pcount;
  px = Lx/hx - 1;
  py = Ly/hy - 1;
  pcount = px*py;
  std::cout << "Total number of points = " << pcount << "\n";

  // Creating and assigning value to coordinates vector
  std::vector<std::array<double, 2>> coords;
  coords.reserve(pcount);

  for (int j = 0; j < px; ++j){
    for (int k = 0; k < py; ++k){
      const std::array<double, 2> point = {(j+1)*hx,(k+1)*hy};
      coords.emplace_back(point);
    }
  }

  // Printing coordinates for the points:
   std::cout << "Point  -  Coordinates: " << coords.size() << "\n";

  for (const auto& coord : coords)
    std::cout << coord.at(0) <<", " << coord.at(1) << "\n";
 
 }
