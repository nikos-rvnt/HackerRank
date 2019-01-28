//Define the structs Workshops and Available_Workshops.
struct Workshops {
    int start_time ;
    int end_time ;
    int duration ; 
};

struct Available_Workshops {
    int n ;
    vector <Workshops> wsh ;
};
 
//Implement the functions initialize and CalculateMaxWorkshops
Available_Workshops* initialize (int start_time[], int duration[], int n){
    Available_Workshops *ave = new Available_Workshops ;
    ave->n = n ;
    
    for(int i=0; i<ave->n; i++){
        Workshops wrk ;
        wrk.start_time = start_time[i] ;
        wrk.duration = duration[i] ;
        wrk.end_time = start_time[i] + duration[i] ;
        
        ave->wsh.push_back(wrk) ;
    }
    
    return ave ;
}
    
bool sygkrish(Workshops w1, Workshops w2){
    return (w1.end_time < w2.end_time) ;
}


int CalculateMaxWorkshops(Available_Workshops* ptr){
    
    sort(ptr->wsh.begin(),ptr->wsh.end(), sygkrish) ;
    
    // interval scheduling
    int last_processed_time = -1 ;
    int maxWorkshops = 0 ;
    for(int i=0; i<ptr->n; i++) {
        if(ptr->wsh[i].start_time >= last_processed_time) {
            last_processed_time = ptr->wsh[i].end_time ;
            maxWorkshops++ ;
        }
    }

    return maxWorkshops;
}    
    
