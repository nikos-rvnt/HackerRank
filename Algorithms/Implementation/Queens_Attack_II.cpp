#include <bits/stdc++.h>

using namespace std;

int queensAttack(int n, int k, int r_q, int c_q, vector < vector<int> > obstacles) {
    // Complete this function
    
    //Row Column coordinates of the closes object in each direction
        int rDeksia = -1;
        int cDeksia = -1;
        int rKatwDeksia = -1;
        int cKatwDeksia = -1;
        int rKatw = -1;
        int cKatw = -1;
        int rKatwAristera = -1;
        int cKatwAristera = -1;
        int rAristera = -1;
        int cAristera = -1;
        int rPanwAristera = -1;
        int cPanwAristera = -1;
        int rPanw = -1;
        int cPanw = -1;
        int rPanwDeksia = -1;
        int cPanwDeksia = -1;
        
        //Total squares attacked by the queen
        int efiktaTetragwna = 0;
        
        //Finds the closest object in each direction
        for(int em = 0; em < k; em++){
            int rEmpodio = obstacles[em][0];
            int cEmpodio = obstacles[em][1];
            
            //Deksia
            if((cEmpodio < cDeksia || rDeksia == -1) && cEmpodio > c_q && rEmpodio == r_q)
            {
                rDeksia = rEmpodio ;
                cDeksia = cEmpodio ;
            }
            
            //Katw Deksia
            if(r_q - rEmpodio == cEmpodio - c_q && cEmpodio > c_q && rEmpodio < r_q 
               && ((rEmpodio > rKatwDeksia && cEmpodio < cKatwDeksia) || rKatwDeksia == -1))
            {
                rKatwDeksia = rEmpodio;
                cKatwDeksia = cEmpodio;
            }
            
            //Katw    
            if((rEmpodio > rKatw || rKatw == -1) && rEmpodio < r_q && cEmpodio == c_q)
            {
                rKatw = rEmpodio;
                cKatw = cEmpodio;
            }
            
            //Katw Aristera
            if(r_q - rEmpodio == c_q - cEmpodio && cEmpodio < c_q && rEmpodio < r_q 
               && ((rEmpodio > rKatwAristera && cEmpodio > cKatwAristera) || rKatwAristera == -1))
            {
                rKatwAristera = rEmpodio;
                cKatwAristera = cEmpodio;
            }
            
            //Aristera
            if((cEmpodio > cAristera || rAristera == -1) && cEmpodio < c_q && rEmpodio == r_q)
            {
                rAristera = rEmpodio;
                cAristera = cEmpodio;
            }
            
            //Panw Aristera
            if(c_q - cEmpodio == rEmpodio - r_q && cEmpodio < c_q && rEmpodio > r_q 
               && ((rEmpodio < rPanwAristera && cEmpodio > cPanwAristera) || rPanwAristera == -1))
            {
                rPanwAristera = rEmpodio;
                cPanwAristera = cEmpodio;
            }
            
            //Top
            if((rEmpodio < rPanw || rPanw == -1) && rEmpodio > r_q && cEmpodio == c_q)
            {
                rPanw = rEmpodio;
                cPanw = cEmpodio;
            }
            
            //Top Right
            if(rEmpodio - r_q == cEmpodio - c_q && cEmpodio > c_q 
               && rEmpodio > r_q && ((rEmpodio < rPanwDeksia && cEmpodio < cPanwDeksia) || rPanwDeksia == -1))
            {
                rPanwDeksia = rEmpodio;
                cPanwDeksia = cEmpodio;
            }
                           
        }
        
        //Calculates the distance to the closest obstacle in each direction and adds it to reachableSquares
        //R B L T
        efiktaTetragwna += (cDeksia != -1) ? (cDeksia - c_q -1) : n - c_q;     
        efiktaTetragwna += (rKatw != -1) ? (r_q - rKatw - 1) : r_q - 1;   
        efiktaTetragwna += (cAristera != -1) ? (c_q - cAristera -1) : c_q - 1;  
        efiktaTetragwna += (rPanw != -1) ? (rPanw - r_q - 1) : n - r_q;

        //BR BL TL TR
        efiktaTetragwna += (cKatwDeksia != -1) ? (cKatwDeksia - c_q - 1) : min(n - c_q, r_q - 1); 
        efiktaTetragwna += (rKatwAristera != -1) ? (c_q - cKatwAristera - 1) : min(c_q - 1, r_q - 1); 
        efiktaTetragwna += (cPanwAristera != -1) ? (c_q - cPanwAristera -1) : min(c_q - 1, n - r_q);  
        efiktaTetragwna += (rPanwDeksia != -1) ? (cPanwDeksia - c_q - 1) : min(n - c_q, n - r_q); 

        return efiktaTetragwna ;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    int r_q;
    int c_q;
    cin >> r_q >> c_q;
    vector< vector<int> > obstacles(k,vector<int>(2));
    for(int obstacles_i = 0;obstacles_i < k;obstacles_i++){
       for(int obstacles_j = 0;obstacles_j < 2;obstacles_j++){
          cin >> obstacles[obstacles_i][obstacles_j];
       }
    }
    int result = queensAttack(n, k, r_q, c_q, obstacles);
    cout << result << endl;
    return 0;
}
