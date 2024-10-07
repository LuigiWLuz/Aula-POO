int teste(int n){
    int i, j, m;
    i = n;
    m = 0;

    while(i > 0){
        j = 0;
        while(j < i){      // (1) O(n) por se tratar de um loop
            m++;           // (2)Tempo constante O(1)
            j++;           // (3)Tempo constante O(1)
        }
        i /= 2;           // (4)Tempo Logarítmico O(log n)
    }
    return m;
}


// T = C1+ C1 + n + log n
// T = O(log n), log n pois é o que possui maior complexidade;
