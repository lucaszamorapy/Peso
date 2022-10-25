/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
int main()
{
	float peso, engordou, emagreceu; 

    printf("\nPeso: ");
    scanf("%f", &peso);
    if (peso<=0)
    printf("Peso Invalido\n");
    else{
    engordou = peso + peso * 20 / 100;
	
    emagreceu = peso - peso * 15 / 100;
    
    printf("\nPeso inicial: %.2f quilos. ", peso);
    printf("\nSe engordar 20%%: %.2f quilos. ", engordou);


    printf("\nSe emagrecer 15%%: %.2f quilos. ", emagreceu);

    }  
    return 0;
}


