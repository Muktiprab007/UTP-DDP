//Nama Kelompok:
//Mukti Prabowo (2217051055)
//Eriza Tri Sativa (2217051159)
//Ridho Ramadhan Almahbi (2257051020)
#include <iostream>
#include <string>
using namespace std;
void myFunction(){
        cout << "\nSELAMAT DATANG DI PREMIUM LAPTOP STORE" << endl;
    }
int main (){
    char merk;
    char pilih;
    char proc;
    char tipe;
    char tipe2;
    char milih;
    int harga;
    int uang;
    int kembalian;

//==============================================================================================
    string Asus[4] = {"Asus Zenbook 14x Oled", "Asus Zenbook Duo 14", "Asus Zenbook S 13", "Asus ROG Zephyrus Duo 16"};
    string Lenovo [4] = {"Lenovo Yoga Slim 7i Carbon", "Lenovo Legion 5 pro", "Lenovo Legion Slim 7i", "Lenovo Ideapad Slim 5 Pro"};

    int harga_laptop [2][4] = {{16500000, 24800000, 18700000, 36000000},{19600000, 27000000, 32000000, 15500000}};


 //==========================================================================================
    myFunction();
    merk:
        cout << " ================================= " << endl;
        cout << " =         Premium Laptop        = " << endl;
        cout << " ================================= " << endl;
        cout << " #          Merk Laptop :        # " << endl;
        cout << " #          1. Asus              # " << endl;
        cout << " #          2. Lenovo            # " << endl;
        cout << " #                               # " << endl;
        cout << " # 0. Keluar                     # " << endl;
        cout << " ================================= " << endl;
        cout << "\nsilakan memilih: ";

        cin >> merk;
        system ("cls");
        //                               #        #######    #      #     #######
        //                              # #       #          #      #     #
        //                             #   #      #          #      #     #
        //                            #######     #######    #      #     #######
        //                           #       #          #    #      #           #
        //                          #         #         #    #      #           #
        //                         #           #  #######    ########     #######
 switch (merk){
 case '0' :
    cout << endl;
    break;
 case '1' :
            cout << "Asus"<<endl;
            cout << "1. AMD "<< endl;
            cout << "2. Intel " << endl;
            cin >> proc;
            system ("cls");
         //======================================AMD================================================
    switch (proc){
    case '1' :
            tipe:
            cout << " ========================================== " << endl;
            cout << " =         Premium Laptop                 = " << endl;
            cout << " ========================================== " << endl;
            cout << " #          Tipe Laptop :                 # " << endl;
            cout << " #         1. Asus Zenbook 14x Oled       # " << endl;
            cout << " #         2. Zenbook S 13                # " << endl;
            cout << " #                                        # " << endl;
            cout << " # 0. Kembali                             # " << endl;
            cout << " ========================================== " << endl;
            cout << "\nsilakan memilih: " << endl;

            cin >> tipe;
            system ("cls");
        //======================================================================================  
         switch (tipe){
         case '0' : 
                goto merk;
                break;
         case '1' :
                cout << "" << (Asus [0]) << endl;
                cout << "\nHarganya adalah " << harga_laptop [0][0] << endl;
                cout << "\nBayar/Milih lagi?(B/M)"<< endl;
                cin >> milih;
            if (milih == 'B' || milih == 'b'){
                cout << "\nBerapa Uang Anda?"<< endl;
                cin >> uang;
                system ("cls");
                    if (uang > (harga_laptop[0][0])){
                        kembalian = (uang - (harga_laptop[0][0]));
                        cout << "\nKembaliannya adalah Rp. "<< kembalian << endl;
                        cout << "\nTerimakasih, Semoga Laptopnya Awet ya.."<<endl;
                    }
                    else if (uang < (harga_laptop[0][0])){
                        for (int i = 0; i < 4; i++){
                            cout << "\nUang yang Anda Punya Kurang, Silakan Kerja Lagi"<<endl;
                            }
                    }
                cout << "\ningin kembali memilih? (y/n)";
                cin >> milih;
                system ("cls");
                if (milih == 'y'){
                    goto merk;
                }else if (milih == 'n'){
                    cout << "\nTerimakasih Telah Berbelanja di Toko Kami..."<<endl;
                }

                }else if (milih == 'M' || milih == 'm'){
                    goto merk;
                }
                break;
            
        
            //==================================================================================
         case '2' : 
                cout << "" << (Asus [2]) << endl;
                cout << "\nHarganya adalah " << harga_laptop [0][2] << endl;
                cout << "\nBayar/Milih lagi?(B/M)"<< endl;
                cin >> milih;
            if (milih == 'B' || milih == 'b'){
                cout << "\nBerapa Uang Anda?"<< endl;
                cin >> uang;
                system ("cls");
                    if (uang > (harga_laptop[0][2])){
                        kembalian = (uang - (harga_laptop[0][2]));
                        cout << "\nKembaliannya adalah Rp. "<< kembalian <<  endl;
                        cout << "\nTerimakasih, Semoga Laptopnya Awet ya.." <<endl;
                    }
                    else if (uang < (harga_laptop[0][2])){
                        for (int i = 0; i < 4; i++){
                            cout << "\nUang yang Anda Punya Kurang, Silakan Kerja Lagi"<<endl;
                            }
                    }
                cout << "\ningin kembali memilih? (y/n)";
                cin >> milih;
                system ("cls");
                if (milih == 'y'){
                    goto merk;
                }else if (milih == 'n'){
                    cout << "\nTerimakasih Telah Berbelanja di Toko Kami...";
                }

                }else if (milih == 'M' || milih == 'm'){
                    goto merk;
                }
                break;
                
         default:
            cout << "\nerror.....Kembali Ke Pilihan. "<<endl;
            goto merk;
         }
         break;
        
            //========================================INTEL============================================
    case '2':
            cout << " ========================================== " << endl;
            cout << " =         Premium Laptop                 = " << endl;
            cout << " ========================================== " << endl;
            cout << " #          Tipe Laptop :                 # " << endl;
            cout << " #         1. Asus Zenbook Duo 14         # " << endl;
            cout << " #         2. Asus ROG Zephyrus Duo 16    # " << endl;
            cout << " #                                        # " << endl;
            cout << " # 0. Kembali                             # " << endl;
            cout << " ========================================== " << endl;
            cout << " \n silakan memilih: ";

            cin >> tipe;
            system ("cls");
            switch (tipe){
             case '0' : 
                goto merk;
                break;
             case '1' :
                cout << "" << (Asus [1]) << endl;
                cout << "\nHarganya adalah " << harga_laptop [0][1] << endl;
                cout << "\nBayar/Milih lagi?(B/M)"<< endl;
                cin >> milih;
            if (milih == 'B' || milih == 'b'){
                cout << "\nBerapa Uang Anda?"<< endl;
                cin >> uang;
                system ("cls");
                    if (uang > (harga_laptop[0][1])){
                        kembalian = (uang - (harga_laptop[0][1]));
                        cout << "\nKembaliannya adalah Rp. "<< kembalian << endl;
                        cout << "\nTerimakasih, Semoga Laptopnya Awet ya.."<<endl;
                    }
                    else if (uang < (harga_laptop[0][1])){
                        for (int i = 0; i < 4; i++){
                            cout << "\nUang yang Anda Punya Kurang, Silakan Kerja Lagi"<<endl;
                            }
                    }
                cout << "\ningin kembali memilih? (y/n)";
                cin >> milih;
                system ("cls");
                if (milih == 'y'){
                    goto merk;
                }else if (milih == 'n'){
                    cout << "\nTerimakasih Telah Berbelanja di Toko Kami..."<<endl;
                }

                }else if (milih == 'M' || milih == 'm'){
                    goto merk;
                }
                break;
            
        
            //==================================================================================
         case '2' : 
                cout << "" << (Asus [3]) << endl;
                cout << "\nHarganya adalah " << harga_laptop [0][3] << endl;
                cout << "\nBayar/Milih lagi?(B/M)"<< endl;
                cin >> milih;
            if (milih == 'B' || milih == 'b'){
                cout << "\nBerapa Uang Anda?"<< endl;
                cin >> uang;
                system ("cls");
                    if (uang > (harga_laptop[0][3])){
                        kembalian = (uang - (harga_laptop[0][3]));
                        cout << "\nKembaliannya adalah Rp. "<< kembalian <<  endl;
                        cout << "\nTerimakasih, Semoga Laptopnya Awet ya.." <<endl;
                    }
                    else if (uang < (harga_laptop[0][3])){
                       for (int i = 0; i < 4; i++){
                            cout << "\nUang yang Anda Punya Kurang, Silakan Kerja Lagi"<<endl;
                            }
                    }
                cout << "\ningin kembali memilih? (y/n)";
                cin >> milih;
                system ("cls");
                if (milih == 'y'){
                    goto merk;
                }else if (milih == 'n'){
                    cout << "\nTerimakasih Telah Berbelanja di Toko Kami..."<<endl;;
                }

                }else if (milih == 'M' || milih == 'm'){
                    goto merk;
                }
                break;
         }
         default:
            cout << "\nerror.....Kembali Ke Pilihan. "<<endl;
            goto merk;
            
        }
        break;

//               #            ##########  ##      #  ###########  #           #  ###########         
//               #            #           # #     #  #         #   #         #   #         #
//               #            #           #  #    #  #         #    #       #    #         #
//               #            ##########  #   #   #  #         #     #     #     #         #
//               #            #           #    #  #  #         #      #   #      #         #
//               #            #           #     # #  #         #       # #       #         #
//               ###########  ##########  #      ##  ###########        #        ###########


case '2' :
            cout << "Lenovo"<<endl;
            cout << "1. AMD "<< endl;
            cout << "2. Intel " << endl;
            cin >> proc;
            system ("cls");
         //======================================AMD================================================
    switch (proc){
    case '1' :
            tipe2:
            cout << " ========================================== " << endl;
            cout << " =         Premium Laptop                 = " << endl;
            cout << " ========================================== " << endl;
            cout << " #          Tipe Laptop :                 # " << endl;
            cout << " #         1. Lenovo Legion 5 pro         # " << endl;
            cout << " #         2. Lenovo Ideapad Slim 5 Pro   # " << endl;
            cout << " #                                        # " << endl;
            cout << " # 0. Kembali                             # " << endl;
            cout << " ========================================== " << endl;
            cout << "\nsilakan memilih: " << endl;

            cin >> tipe2;
            system ("cls");
        //======================================================================================  
         switch (tipe2){
         case '0' : 
                goto merk;
                break;
         case '1' :
                cout << "" << (Lenovo [1]) << endl;
                cout << "\nHarganya adalah " << harga_laptop [1][1] << endl;
                cout << "\nBayar/Milih lagi?(B/M)"<< endl;
                cin >> milih;
            if (milih == 'B' || milih == 'b'){
                cout << "\nBerapa Uang Anda?"<< endl;
                cin >> uang;
                system ("cls");
                    if (uang > (harga_laptop[1][1])){
                        kembalian = (uang - (harga_laptop[1][1]));
                        cout << "\nKembaliannya adalah Rp. "<< kembalian << endl;
                        cout << "\nTerimakasih, Semoga Laptopnya Awet ya.."<<endl;
                    }
                    else if (uang < (harga_laptop[1][1])){
                        for (int i = 0; i < 4; i++){
                            cout << "\nUang yang Anda Punya Kurang, Silakan Kerja Lagi"<<endl;
                            }
                    }
                cout << "\ningin kembali memilih? (y/n)";
                cin >> milih;
                system ("cls");
                if (milih == 'y'){
                    goto merk;
                }else if (milih == 'n'){
                    cout << "\nTerimakasih Telah Berbelanja di Toko Kami..."<<endl;
                }

                }else if (milih == 'M' || milih == 'm'){
                    goto merk;
                }
                break;
            
        
            //==================================================================================
         case '2' : 
                cout << "" << (Lenovo [3]) << endl;
                cout << "\nHarganya adalah " << harga_laptop [1][3] << endl;
                cout << "\nBayar/Milih lagi?(B/M)"<< endl;
                cin >> milih;
            if (milih == 'B' || milih == 'b'){
                cout << "\nBerapa Uang Anda?"<< endl;
                cin >> uang;
                system ("cls");
                    if (uang > (harga_laptop[1][3])){
                        kembalian = (uang - (harga_laptop[1][3]));
                        cout << "\nKembaliannya adalah Rp. "<< kembalian <<  endl;
                        cout << "\nTerimakasih, Semoga Laptopnya Awet ya.." <<endl;
                    }
                    else if (uang < (harga_laptop[1][3])){
                        for (int i = 0; i < 4; i++){
                            cout << "\nUang yang Anda Punya Kurang, Silakan Kerja Lagi"<<endl;
                            }
                    }
                cout << "\ningin kembali memilih? (y/n)";
                cin >> milih;
                system ("cls");
                if (milih == 'y'){
                    goto merk;
                }else if (milih == 'n'){
                    cout << "\nTerimakasih Telah Berbelanja di Toko Kami..."<<endl;
                }

                }else if (milih == 'M' || milih == 'm'){
                    goto merk;
                }
                break;
                
         default:
            cout << "\nerror.....Kembali Ke Pilihan. "<<endl;
            goto merk;
         }
         break;
        
            //========================================INTEL============================================
    case '2':
            cout << " ========================================== " << endl;
            cout << " =         Premium Laptop                 = " << endl;
            cout << " ========================================== " << endl;
            cout << " #          Tipe Laptop :                 # " << endl;
            cout << " #         1. Lenovo Yoga Slim 7i Carbon  # " << endl;
            cout << " #         2. Lenovo Legion Slim 7i       # " << endl;
            cout << " #                                        # " << endl;
            cout << " # 0. Kembali                             # " << endl;
            cout << " ========================================== " << endl;
            cout << "\nsilakan memilih: " << endl;

            cin >> tipe2;
            system ("cls");
            switch (tipe2){
             case '0' : 
                goto merk;
                break;
             case '1' :
                cout << "" << (Lenovo [0]) << endl;
                cout << "\nHarganya adalah " << harga_laptop [1][0] << endl;
                cout << "\nBayar/Milih lagi?(B/M)"<< endl;
                cin >> milih;
            if (milih == 'B' || milih == 'b'){
                cout << "\nBerapa Uang Anda?"<< endl;
                cin >> uang;
                system ("cls");
                    if (uang > (harga_laptop[1][0])){
                        kembalian = (uang - (harga_laptop[1][0]));
                        cout << "\nKembaliannya adalah Rp. "<< kembalian << endl;
                        cout << "\nTerimakasih, Semoga Laptopnya Awet ya.."<<endl;
                    }
                    else if (uang < (harga_laptop[1][0])){
                        for (int i = 0; i < 4; i++){
                            cout << "\nUang yang Anda Punya Kurang, Silakan Kerja Lagi"<<endl;
                            }
                    }
                cout << "\ningin kembali memilih? (y/n)";
                cin >> milih;
                system ("cls");
                if (milih == 'y'){
                    goto merk;
                }else if (milih == 'n'){
                    cout << "\nTerimakasih Telah Berbelanja di Toko Kami..."<<endl;
                }

                }else if (milih == 'M' || milih == 'm'){
                    goto merk;
                }
                break;
            
        
            //==================================================================================
            case '2' : 
                cout << "" << (Lenovo [2]) << endl;
                cout << "\nHarganya adalah " << harga_laptop [1][2] << endl;
                cout << "\nBayar/Milih lagi?(B/M)"<< endl;
                cin >> milih;
            if (milih == 'B' || milih == 'b'){
                cout << "\nBerapa Uang Anda?"<< endl;
                cin >> uang;
                system ("cls");
                    if (uang > (harga_laptop[1][2])){
                        kembalian = (uang - (harga_laptop[1][2]));
                        cout << "\nKembaliannya adalah Rp. "<< kembalian <<  endl;
                        cout << "\nTerimakasih, Semoga Laptopnya Awet ya.." <<endl;
                    }
                    else if (uang < (harga_laptop[1][2])){
                        cout << "\nUang yang Anda Punya Kurang, Silakan Kerja Lagi" <<endl;
                        for (int i = 0; i < 4; i++){
                            cout << "\nUang yang Anda Punya Kurang, Silakan Kerja Lagi"<<endl;
                            }
                    }
                cout << "\ningin kembali memilih? (y/n)";
                cin >> milih;
                system ("cls");
                if (milih == 'y'){
                    goto merk;
                }else if (milih == 'n'){
                    cout << "\nTerimakasih Telah Berbelanja di Toko Kami..."<<endl;
                }

                }else if (milih == 'M' || milih == 'm'){
                    goto merk;
                }
                break;
                
         }
         default:
            cout << "\nKembali Ke Pilihan. "<<endl;
            goto merk;
        }
        
    default :
        cout << "\nKembali Ke Pilihan. "<<endl;
        goto merk; 
}
return 0;
}      



        


    

