
#include <iostream>
#include <queue>

#include "Flight.h"
#include "Planes.h"
#include <vector>

#include "Reservation.h"

/*\
 Main functionality:

     |--------------------|
     |                    V
 Database->Flight<----Reservation
     |        |           |
     |        V           |
     |----->Plane         V
     |----->Captain<--->People
     |----->Airports

 */

int main() {

    Airport airport("TSR",1);
    Airport airport2("BDP",2);
    Plane plane(1,"Stoicacela",10,40.7);
    Person person("5051124",20,"Stoica","Vlad","Jules Verne 30","07755");
    Captain captain(4,"5051124",20,"Stoica","Vlad","Jules Verne 30","07755");
    Flight flight(captain,plane,299,airport,airport2,"20-01-2026","20-01-2026");
    Reservation reservation(1,person,flight);

}



