#pragma once 


class Projectile {
  public:
    int number;
    int x_coord;
    int y_coord;

    bool right_direction = true;

    void flight() {
      if (right_direction) {
        x_coord++;
      } else if (!right_direction) {
        x_coord--;
      }
    }
};