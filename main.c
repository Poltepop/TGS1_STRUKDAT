#include "header.h"

int main(){
    Reservasi reservasi[baris][kolom];
    initReservasi(reservasi);
    int pilihan;
    // pesanMejaResto(reservasi);
    // pesanMejaResto(reservasi);
    // getAll(reservasi);
    // updateReservasi(reservasi);
    // batalkanReservasi(reservasi);
    // getDetail(reservasi);
    
    do{
        menu();
        scanf("%d", &pilihan);

        switch(pilihan){
               case 1:
                    pesanMejaResto(reservasi);
               break;
               case 2:
               break;
               case 3:
                    getDetail(reservasi);
               break;
               case 4:
               break;
               case 5:
               break;
               case 0:
                    printf("[!] Keluar Dari Program [!] \n");
                    printf("I Dewa Putu Adhiya Wiraguna | C | 250713478 \n");
               break;


               getch();
        }
        
    }while(pilihan != 0);





    return 0;
}