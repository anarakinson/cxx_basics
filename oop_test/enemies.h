#pragma once


class Enemy {
  public:
    virtual ~Enemy();

    // set coords
    void set_x(int x) { this->x = x; }
    void set_y(int y) { this->y = y; }
    // get coords
    int get_x() { return x; }
    int get_y() { return y; }

    // hitpoints and lifetime
    void set_hitpoints(int hp) { hitpoints = hp; }
    void hit() { --hitpoints; }
    bool is_dead() { if (hitpoints < 0) return false; else return true; }
  
    // interface
    virtual void move() = 0;

  private:
    int x;
    int y;
    int hitpoints;
};
