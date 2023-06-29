#include "projectile.h"

#include <iostream>
#include <vector>


int main() {
    std::vector<Projectile> projectiles;
#if 0
    projectile.x_coord = 12;
    projectile.y_coord = 12;
    
    std::cout << number << ": x - " << projectile.x_coord << "; y - " << projectile.y_coord << std::endl;
    projectile.flight();
    
    std::cout << projectile.x_coord << " - " << projectile.y_coord << std::endl;
#endif

    for (int i = 0; i < 3; ++i) {

        Projectile projectile;        
        projectile.number = i;
        projectile.x_coord = 12 + i * i;
        projectile.y_coord = 22;

        projectiles.push_back(projectile);

    }

    while (projectiles.size() > 0) {
        
        for (int i = 0; i < projectiles.size(); ++i) {
            projectiles[i].flight();
            std::cout << projectiles[i].number << ": x - " << projectiles[i].x_coord << "; y - " << projectiles[i].y_coord << std::endl;
            std::cout << std::endl;
            if (projectiles[i].x_coord >= 20) {
                projectiles.erase(projectiles.begin() + i);
            }
        }


    }
}