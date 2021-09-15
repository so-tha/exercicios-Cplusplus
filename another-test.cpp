   #include<iostream>
   #include<cmath> 
	
	using namespace std;
	
	int matriz[3][3] = {{0}};
    int vetor[3] = {0};

    int i = 0;
    int j = 0;

    // Leitura
    for ( i = 0; i < 3; i++ )
        for ( j = 0; j < 3; j++ )
        {
            printf("[%d][%d] Valor: ", i, j );
            scanf(" %d", &matriz[i][j] );
        }

    // Soma
    for ( i = 0; i < 3; i++ )
        for ( j = 0; j < 3; j++ )
            vetor[i] += matriz[i][j];

    // Listar somas
    for ( i = 0; i < 3; i++ )
        printf("[%d] Valor: %d\n", i, vetor[i] );