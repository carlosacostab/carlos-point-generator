
#include <iostream>

int main() {
  double Lx, Ly, hx, hy;
  std::cout << "Enter horizontal dimension of rectangle: ";
  std::cin >> Lx;
  std::cout << "Enter vertical dimension of rectangle: ";
  std::cin >> Ly;

  // Establishing the value of hx and hy:
  hx = Lx/10.;
  hy = Ly/10.;
  
  std::cout << "Lx = " << Lx << "\n";
  std::cout << "Ly = " << Ly << "\n";
  std::cout << "hx = " << hx << "\n";
  std::cout << "hy = " << hy << "\n";

  // Sizes of coordinates arrays:
  int px, py, pcount;
  px = Lx/hx - 1;
  py = Ly/hy - 1;
  pcount = px*py;
  std::cout << "Total number of points = " << pcount << "\n";

  // Storing X-coordinates for every point:
  double coordx[px][py];
  for(int i = 0; i <= px; i++){
    for (int j = 0; j <= py; j++){
      coordx[i][j] = (i+1)*hx;
    }
  }

  std::cout << coordx[0][0] << std::endl;

  // Storing Y-coordinates for every point:
  double coordy[px][py];
  for(int k = 0; k <= px; k++){
    for (int l = 0; l <= py; l++){
      coordy[k][l] = (l+1)*hy;
    }
  }

  // Printing coordinates for the points:
  std::cout << "Point  -  Coordinates\n";
  for(int m = 0; m <= px - 1; m++){
    for (int n = 0; n <= py - 1; n++){
      std::cout << "P" << m+1 << "," << n+1 << "      (" << coordx[m][n] << "," << coordy[m][n] << ")" << "\n";
    }
  }
}
