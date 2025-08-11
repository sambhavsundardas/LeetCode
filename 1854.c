int maximumPopulation(int** logs, int logsSize, int* logsColSize) {

    int life[101]={0};
    
    for(int i = 0 ; i < logsSize ; i++){
        int birth = logs[i][0];
        int death = logs[i][1];
        life[birth - 1950]++;
        life[death - 1950]--;
    }

    int maxpopulation = 0;
    int maxyear = 1950;
    int currentpopulation = 0;

    for(int i=0 ; i<101 ; i++){
        currentpopulation += life[i];
        int year = 1950 + i;

        if(currentpopulation > maxpopulation){
            maxpopulation = currentpopulation ;
            maxyear = year;
        }
        else if(currentpopulation == maxpopulation){
            (maxyear < year)?maxyear : year;
        }
    }

    return maxyear;
}
