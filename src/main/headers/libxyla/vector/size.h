#pragma once

namespace libxyla {
namespace vector {

class Size {
   private:
    double x, y;

   public:
    Size(double x, double y);
    Size(int x, int y);

    double getX();
    double getY();

    int getXCoord();
    int getYCoord();
};
}  // namespace vector

}  // namespace libxyla
