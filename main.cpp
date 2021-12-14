#include <iostream>
/* Jorge Sebastian Arroyo Estrada
 * cc. 1193482707
 * Lab Informatica II
*/
using namespace std;

int main()
{
    int a=0,b=0,c=0,original=0,select=0,k=0,res=0,suma1=0,suma2=0,contador1=0,contador2=0,r1=0,r2=0,fil=0,col=0,max=0,min=0,hor1=0,hor2=0,min1=0,min2=0,nprim=0;
    int num1=0,num2=0,npali=0,primer=0,segun=0,resta=0,cop=0,ndiv=0,cn=0;
    double rec, pot=1;
    char letra,ori;
    float per=0, ar=0,prome=0,res1=0,sum1=0;
    bool escua, espri,ban;
    while (true) {
        cout <<"Ingrese una opcion:"<<endl;
        cout<<"1. Ejercicios."<<endl;
        cout<<"2. Problemas."<<endl;
        cout<<"9. Salir."<<endl;
        cout<<endl;
        cin >> b;
        switch (b) {
        case 1:
            cout << "Ingrese el numero del ejercicio a ejecutar: ";
            cin >> select;
            switch(select){
            case 1:
                cout << "1) Escriba un programa que pida dos numeros A y B e imprima en pantalla el residuo de la division A/B." << endl;
                cout << "Ingrese numero A: ";
                cin >> a;
                cout << "Ingrese numero B: ";
                cin >> b;
                res = a%b;
                cout << "El residuo de la division es: " << res << endl;
            break;

            case 2:
                cout << "2) Escriba un programa que pida un numero N e imprima en pantalla si es par o impar." << endl;
                cout << "Ingrese numero N: ";
                cin >> a;
                original=a;
                res=a%2;
                if (a<0) a*=-1;
                if (a==1) cout << original << " es impar." << endl;
                else if (res==0) cout << original << " es par." << endl;
                else {
                    cout << original << " es impar." << endl;
                }
            break;

            case 3:
                cout << "Ingrese numero A: ";
                cin >> a;
                cout << "Ingrese numero B: ";
                cin >> b;
                if (a>b) cout << "El mayor es " << a << endl;
                else{
                    cout << "El mayor es " << b << endl;
                }
            break;

            case 4:
                cout << "Ingrese numero A: ";
                cin >> a;
                cout << "Ingrese numero B: ";
                cin >> b;
                if (a<b) cout << "El menor es " << a << endl;
                else{
                    cout << "El menor es " << b << endl;
                }
            break;

            case 5:
                cout << "Ingrese numero A: ";
                cin >> a;
                cout << "Ingrese numero B: ";
                cin >> b;
                cout << a << '/' << b << '=';
                if(2*(a%b)>=b){
                    cout << a/b+1 << endl;
                }
                else{
                    cout<< a/b << endl;
                }
            break;

            case 6:
                cout << "Ingrese numero base: ";
                cin >> a;
                cout << "Ingrese numero exponete: ";
                cin >> b;
                rec = a;
                if (a==0 && b<=0) cout << "La operacion no esta definida.";
                else{
                    original=b;
                    if (b<0){
                        rec=1.0/a;
                        b*=-1;
                    }
                    for (;b>0;b--) pot=pot*rec;
                    cout << a << '^' << original << '=' << pot <<  endl;
                }
            break;

            case 7:
                cout << "Ingrese numero N: ";
                cin >> a;
                b=a;
                res=0;
                for (a=b;a>0;a--){
                    res+=a;
                }
                cout << "La sumatoria desde 0 hasta " << b << " es: " << res << endl;
            break;

            case 8:
                cout << "Ingrese numero N: ";
                cin >> a;
                b=a;
                res=1;
                for (a=b;a>0;a--){
                    res*=a;
                }
                if (b<0) {
                    cout << "El factorial de un entero positivo n, es el factorial de n o n factorial y se define como el producto de todos los numeros enteros POSITIVOS desde 1 (es decir, los numeros naturales) hasta n." << endl;
                }
                else if (b==0) {
                    cout << b << "!=0" << endl;
                }
                else {
                   cout << b << "!=" << res << endl;
                }
            break;

            case 9:
                cout << "Ingrese numero de radio: ";
                cin >> a;
                per=2*3.1416*a;
                ar=3.1416*a*a;
                cout << "Perimetro: " << per << endl;
                cout << "Area: " << ar << endl;
            break;

            case 10:
                cout << "Ingrese un numero: ";
                cin >> a;
                res=2;
                b=a;
                for (;b<100;res++) {
                    cout << b << endl;
                    b=a*res;
                }
            break;

            case 11:
                cout << "Ingrese un numero: ";
                cin >> a;
                rec = a;
                for (k=1;k<=10;k++) cout << k << 'x' << rec << '=' << rec*k << endl;
            break;

            case 12:
                cout << "Ingrese un numero: ";
                cin >> a;
                pot = 1;
                if (a==0) cout << "La operacion no esta definida." << endl;
                else{
                    for (b=1;b<=5;b++){
                        pot*=a;
                        cout << a << '^' << b << '=' << pot <<  endl;
                    }
                }
            break;

            case 13:
                cout << "Ingrese un numero: ";
                cin >> a;
                for (b=1;b<=a;b++){
                    if (a%b==0){
                        cout << b << endl;
                    }
                    else{
                    }
                }
            break;

            case 14:
                b=49;
                for (a=1;a<=50;a++) {
                    cout << a << "   " << a+b << endl;
                    b-=2;
                }
            break;

            case 15:
                b = 0;
                for (a=1;a!=0;) {
                    cout << "Ingrese un numero: ";
                    cin >> a;
                    b+=a;
                }
                cout << "El resultado de la sumatoria es: " << b << endl;
            break;

            case 16:
                b=0;
                k=0;
                for (a=1;a!=0;) {
                    cout << "Ingrese un numero: ";
                    cin >> a;
                    b+=a;
                    k+=1;
                }
                prome = (b+0.0)/(k-1.0);
                cout << "El promedio es: " << prome << endl;
            break;

            case 17:
                b=0;
                for (a=1;a!=0;) {
                    cout << "Ingrese un numero :";
                    cin >> a;
                    if (a>=b) b=a;
                }
                cout << "El numero mayor fue: " << b << endl;
            break;

            case 18:
                escua = false;
                cout << "Ingrese un numero: "; cin >> a;
                for (b=1;(b/2)<=a;b++) {
                    if (b*b==a){
                        escua = true;
                        break;
                    }
                }
                if (escua==true) {
                    cout << a << " es un cuadrado perfecto." << endl;
                }
                else {
                    cout << a << " no es un cuadrado perfecto." << endl;
                }
            break;

            case 19:
                espri=true;
                cout << "Ingrese un numero: "; cin >> a;
                b=2;
                if (a==1 || a==0){
                    //cout << a << " NO es un numero primo.";
                    espri=false;
                }
                if (a>=2){
                    for (;b<a;b++) {
                        if (a%b==0) {
                            espri=false;
                            break;
                        }
                    }
                }
                if (espri==true){
                    cout << a << " es un numero primo." << endl;
                }
                else {
                    cout << a << " NO es un numero primo." << endl;
                }
            break;

            case 20:
                cout << "Ingrese el primer numero: "; cin >> a;
                k=a;
                for(contador1=0,c=0;a!=0;contador1++){
                    b=a%10;
                    c=10*c+b;
                    a=a/10;
                }
                if (c==k){
                    cout << k << " es un numero palindromo." << endl;
                }
                else {
                    cout << k << " no es un numero palindromo." << endl;
                }
            break;

            case 21:
                cout << "Ingrese una letra: " ; cin >> a;
                b=int(a);
                if (b>=65 && b<=90){
                    b=b+32;
                }
                else if (b>=97 && b<=122){
                    b=b-32;
                }
                if ((b>=65 && b<=90) || (b>=97 && b<=122)){
                    a = char(b);
                    cout << "Letra convertida: " << a << endl;
                }

            break;

            case 22:
                cout <<"Ingrese cantidad de segundos: ";cin>>a;
                b=a/60;
                c=a%60;
                for (;b>=60;k=k+1){
                    b=b-60;
                }
                cout<<k<<" : "<<b<<" : "<<c<<"  "<<endl;
            break;

            case 23:
                cout <<"Ingrese el primer numero: ";cin>>a;
                cout <<"Ingrese el segundo numero: ";cin>>b;
                suma1=a;
                suma2=b;
                for (contador1=0,contador2=40;suma1!=suma2 && contador1!=contador2;contador1++){
                    suma1=suma1+a;
                    suma2 = 0;
                    for(r1=0,r2=40;r1!=r2 && suma1!=suma2;r1++){
                        suma2=suma2+b;
                    }
                }
                cout <<"El MCM de "<<a<<" y "<<b<<" es: "<<suma1<<endl;

            break;

            case 24:
                cout << "Ingrese un numero: "; cin >> a;
                for (fil=1;fil<=a;fil+=1) {
                    for (col=1;col<=a;col+=1) {
                        if ((fil == 1 || fil == a) && col < a) cout << '+';
                        else if((fil == 1 || fil == a) && col == a) cout << '+' << endl;
                        else if (fil != 1 && col == 1) cout << '+';
                        else if (fil != 1 && col == a) cout << '+' << endl;
                        else {
                            cout << ' ';
                        }
                    }
                }

            break;

            case 25:
                cout << "Ingrese un numero: "; cin >> a;
                k=0;
                original=a;
                ban=false;
                while (a!=0){
                    a/=10;
                    k+=1;
                }
                cout << original << " tiene " << k << " digitos." << endl;
            break;

            case 26:
                cout <<"Ingrese tres numeros: "; cin>>a;cin>>b;cin>>c;cout<<endl;
                if (a+b>c &&  a+c>b && b+c>a){
                    if (a==b && a==c && b==c){
                        cout <<"Se forma un triangulo equilatero."<<endl;
                    }
                    else if(a*a+b*b==c*c){
                        cout<<"Se forma un triangulo rectangulo."<<endl;
                    }
                    else if(a==b && b!=c){
                        cout<<"Se forma un triangulo isosceles."<<endl;
                    }
                    else if(a!=b && a!=c && b!=c){
                        cout<<"Se forma un triangulo escaleno."<<endl;
                    }
                }
                else {
                    cout<<"La longitud ingresada no forma un triangulo"<<endl;
                }
            break;

            case 27:
                ban=false;
                while (ban==false){
                    cout<<"Ingrese una operacion: "<<endl;
                    cin>>a;
                    cin>>letra;
                    cin>>b;
                    c=int(letra);
                    if (c==43) res1=a+b, ban=true;
                    else if (c==45) res1=a-b, ban=true;
                    else if (c==42 || c==88 || c==120) res1=a*b, ban=true;
                    else if (c==47) res1=a/b, ban=true;
                    else cout << "Ingrese una operacion entre (+,-,*,/)." << endl,ban=false;
                }
                letra=char(c);
                cout<<a<<" "<<letra<<" "<<b<<" = "<<res1<<endl;
            break;

            case 28:
                cout<<"Ingrese un numero para el valor aproximado de PI: ";cin>>a;
                for (res1=1,sum1=0,c=1,k=1;c<=a;c++){
                    sum1=((k)*(1/res1)+sum1);
                    res1+=2;
                    k=k*-1;
                }
                sum1*=4;
                cout << "Pi es aproximadamente: " << sum1 <<endl;
            break;

            case 29:
                cout << "Ingrese si su numero es mayor, menor o igual: " << endl;
                ban=true;
                max=101;
                min=-1;
                a=50;
                c=0;
                while(ban==true){
                    cout << a << ": ";
                    cin >> letra;
                    b=int(letra);
                    if (b == 62) {
                        min=a;
                        a+=(max-min)/2;
                        c+=1;
                    }
                    else if(b == 60) {
                        max=a;
                        a-=(max-min)/2;
                        c+=1;
                    }
                    else if(b == 61) {
                        cout << "El numero pensado es: " << a << endl;
                        ban=false;
                    }
                    else{
                        cout << "Ingrese (>,<,=)" << endl;
                    }
                    if(max-min<2) {
                        cout << "Me has mentido. Bye! " << endl;
                        ban=false;
                    }

                }
            break;

            case 30:
                a=rand()%(0-100);
                contador1=0;
                cout << "Adivine el numero : "; cin>>b;
                while (a!=b){
                    contador1=contador1+1;
                    if (a>b){
                        cout <<"El numero es mayor : "; cin>>b ; cout<<endl;
                    }
                    else if (a<b){
                        cout <<"El numero es menor : "; cin>>b ; cout<<endl;
                    }
                }
                cout <<"El numero adivinado es "<<b<<" y tardo "<<++contador1<<" de intentos"<<endl;
            break;

            default:
                cout << "Este ejercicio no esta definido." << endl;
            break;
            }
        break;


        case 2:
            cout <<"Ingrese el numero del problema: ";cin>>c;
            switch (c) {

            case 1:
                cout << "Ingrese un caracter: "; cin >> letra;
                a=int(letra);
                ori=char(a);
                if(a>=97) a-=32;
                if (a==65 || a==69 || a==73 || a==79 || a==85){
                    cout << ori << " es una vocal." << endl;
                }
                else if ((a>65 && a<122) || a==-92 || a==-91){
                    cout << ori << " es una consonante." << endl;
                }
                else{
                    cout << ori << " no es una letra." <<endl;
                }
            break;

            case 2:
                cout << "Ingrese una cantidad de dinero: "; cin>>a;
                b=100000;
                for(contador1=0;contador1<=9;contador1++){
                    suma1=contador1-3*(contador1/3);
                    if (contador1%3==0) b/=10;
                    r1=(suma1*suma1-4*suma1+5)*b;
                    cout<<r1<<" : "<<a/r1<<endl;
                    a=a%r1;
                }
                cout<<"Faltante: "<<a<<endl;
            break;

            case 3:
                cout << "Ingrese el dia: "; cin>>a;
                cout<<"Ingrese el mes: ";cin>>b;
                if(a>31 || b>12) cout<<a<<" / "<<b<<" es una fecha invalida"<<endl;
                if(a<32 && b<13){
                    if(b==1 || b==3 || b==5 || b==7 ||b==8|| b==10 || b==12){
                        if(a>31){
                            cout<<a<<" / "<<b<<" es una fecha invalida"<<endl;
                        }
                    cout<<a<<" / "<<b<<" es una fecha valida"<<endl;
                    }
                    if(b==4 || b==6 || b==9 || b==11){
                        if(a>30) cout<<a<<" / "<<b<<" es una fecha invalida"<<endl;
                    cout<<a<<" / "<<b<<" es una fecha valida"<<endl;
                    }
                    if(b==2){
                        if(a>29) cout<<a<<" / "<<b<<" es una fecha invalida"<<endl;
                        if(a==29) cout<<a<<" / "<<b<<" es una fecha valida en año bisiesto"<<endl;
                        if(a<29){
                            cout<<a<<" / "<<b<<" es una fecha valida"<<endl;
                        }
                    }
                }
            break;

            case 4:
                cout << "Ingrese hora 1: "; cin >> a;
                cout << "Ingrese hora 2: "; cin >> b;
                hor1=a/100;
                hor2=b/100;
                min1=a%100;
                min2=b%100;
                suma1=hor1+hor2;
                suma2=min1+min2;
                ban=true;
                if(hor1>24 || min1>59 || a<0){
                    cout << a << " es un tiempo invalido.";
                    break;
                if (hor2>24 || min2>59 || b<0) {
                    cout << b << " es un tiempo invalido.";
                    break;
                    }
                }
                if (suma1>24) suma1-=24, ban=true;
                if (suma2>60) suma1+=1,suma2-=60, ban=true;
                if(suma2==0) c=0, ban=false;
                if(ban==true) cout << "La hora es " << suma1 << suma2 << '.' << endl;
                else{
                    cout << "La hora es " << suma1 << suma2 << c << '.' << endl;
                }
            break;

            case 5:
                ban=true;
                while (ban==true){
                    cout << "Ingrese un numero impar: "; cin >> a;
                    b=a%2;
                    if(b==0) ban=true;
                    if (b!=0){
                        ban=false;
                        min=(a/2)+1;
                        max=(a/2)+1;
                        k=1;
                        for (fil=1;fil<=a;fil+=1) {
                            for (col=1;col<=a;col+=1) {
                                if (fil==(a/2)+1) k=-1;
                                if (col>=min && col<=max){
                                    cout << '*';
                                }
                                else{
                                    cout << ' ';
                                }
                            }
                            min-=k;
                            max+=k;
                            cout << endl;
                        }
                    }
                }

            break;

            case 6:
                cout << "Ingrese el numero para encontrarle el valor aproximado de e: ";
                cin >> a;
                if(a>0){
                    for(contador1=1,res1=0;contador1<a;contador1++){
                    contador2=contador1;
                        for(sum1=1;contador2>=1;contador2--){
                            sum1*=contador2;
                        }
                        res1=res1+1/sum1;
                    }
                    res1+=1;
                }
                cout<<"e es aproximadamente : "<<res1<<endl;
            break;

            case 7:
                cout << "Ingrese un numero para hallar, la suma de todos los numeros pares en la serie de fibonacci: ";
                cin >> a;
                for(contador2=1,suma1=0,r1=0,b=1;suma1<a;){
                    suma1=b+contador2;
                    if (a>contador2 && a <= suma1) break;
                    b=contador2;
                    contador2=suma1;
                    if (suma1%2==0){
                        r1=r1+suma1;
                    }
                }
                cout << "El resultado de la suma es : " << r1 << endl;
            break;

            case 8:
                cout << "Ingrese el numero a: "; cin >> a;
                cout << "Ingrese el numero b: "; cin >> b;
                cout << "Ingrese el numero c: ";cin >> c;
                for(contador1=1,suma1=0,r1=0;r1+a<c;contador1++){
                    r1=contador1*a;
                    cout << r1 << " + ";
                    suma1=suma1+r1;
                }
                for(contador1=1,suma2=0,r2=0;r2+b<c;contador1++){
                    r2=contador1*b;
                    if (r2%a!=0){
                        cout << r2;
                        suma2+=r2;
                        if (r2+b>=c) {
                            break;
                        }
                        if ((r2+b)%a==0 && ((r2+b)+b)>=c) {
                            break;
                        }
                        cout << " + ";
                    }
                    if (r2%a==0) {
                        if (r2+b>=c) {
                            break;
                        }
                    }

                }
                res=suma1+suma2;
                cout << " = " << res << endl;
            break;

            case 9:
                cout << "Ingrese el primer numero: "; cin >> a;
                r1=0;
                r2=0;
                for(;a!=0;a/=10){
                    b=a%10;
                    for(r1=b,contador2=1;contador2<b;contador2=contador2+1){
                        r1=b*r1;
                    }
                    r2=r1+r2;
                }
                cout<<"El resultado de la suma de los digitos elevados a si mismos es: "<<r2<<endl;
            break;

            case 10:
                cout << "Ingrese un numero: "; cin >> a;
                ban=false;
                for (nprim=2,contador1=1;contador1<=a;nprim++) {
                    for (b=2;b<nprim;b++) {
                        if (nprim%b==0) {
                            ban=false;
                            break;
                        }
                        else if (nprim%b!=0){
                            ban=true;
                        }
                    }
                    if (ban==true || nprim==2){
                        contador1+=1;
                    }

                }
                cout << "El primo numero " << a << " es: " << --nprim << endl;
            break;

            case 11:
                cout << "Ingrese un numero: "; cin >> a;
                k=a;
                for(r1=2;a>=2;a-=1){
                    for(;r1%a!=0;r1+=2){
                        if(r1>a && a<k){
                            a=k+1;
                            r1+=2;
                        }
                    }
                }
                cout << "El minimo comun multiplo es: " << r1 << endl;
            break;

            case 12:
                c=0;
                cout << "Ingrese un numero: "; cin >> a;
                for (nprim=2;nprim<a;nprim++) {
                    for (b=2;b<nprim;b++) {
                        if (nprim%b==0) {
                            ban=false;
                            break;
                        }
                        else if (nprim%b!=0){
                            ban=true;
                        }
                    }
                    if ((ban==true || nprim==2) && a%nprim==0){
                        c=nprim;
                    }
                }
                if(c==0) cout << "El numero " << a << " no tiene factores primos." << endl;
                else{
                    cout << "El mayor factor primo de " << a << " es: " << c << endl;
                }
            break;

            case 13:
                c=0;
                suma1=0;
                cout << "Ingrese un numero: "; cin >> a;
                for (nprim=2;nprim<a;nprim++) {
                    for (b=2;b<nprim;b++) {
                        if (nprim%b==0) {
                            ban=false;
                            break;
                        }
                        else if (nprim%b!=0){
                            ban=true;
                        }
                    }
                    if ((ban==true || nprim==2)){
                        c=nprim;
                        suma1+=c;
                    }
                    if (a==nprim) break;
                }
                cout << "El resultado de la suma es: " << suma1 << endl;
            break;

            case 14:
                for (num1=100;num1<=999;num1++) {
                    for (num2=100;num2<=999;num2++) {
                        a=num1*num2;
                        k=a;
                        for(contador1=0,c=0;a!=0;contador1=contador1+1){
                            b=a%10;
                            c=10*c+b;
                            a=a/10;
                        }
                        if (c==k && k>npali){
                            npali=k;
                            primer=num1;
                            segun=num2;
                        }
                        else {
                        }
                    }
                }
                cout << primer << " x " << segun << " = " << npali << endl;
            break;

            case 15:
                a=2;
                while (a%2==0){
                    cout << "Ingrese un numero impar positivo: "; cin >> a;
                }
                k=1;
                original=a;
                b=a*a;
                suma1=0;
                resta=0;
                for (;b>=1;) {
                    if (c==1) {
                        suma1+=1;
                        break;
                    }
                    resta=a-k;
                    c=a-2;
                    for (;b>c*c;) {
                        suma1+=b;
                        b-=resta;
                    }
                    a=c;
                    b=a*a;
                }
                cout << "En una espiral de " << original << "x" << original << ", la suma es: " << suma1 << endl;
            break;

            case 16:
                cout << "Ingrese un numero: "; cin >> k;
                ban=true;
                cop=0;
                for (a=1;a<k;) {
                    c=1;
                    original=a;
                    for (;a>1;) {
                        if(a%2==0) a=a/2;
                        else if (a%2==1) a=(3*a)+1;
                        c+=1;
                    }
                    if (c>cop) {
                        num1=original;
                        cop=c;
                    }
                    a=original+1;
                }
                cout << "La serie mas larga es con la semilla: " << num1 << ", teniendo " << cop << " terminos." << endl;
            break;

            case 17:
                cout << "Ingrese un numero: ";cin >> ndiv;
                ndiv+=1;
                for (a=1;contador1<=ndiv;a++) {
                    b=a*(a+1)/2;
                    original=b;
                    for (contador1=0,cn=1;cn<=b ;cn++) {
                        if (b%cn==0) {
                            //es divisor
                            contador1+=1;
                        }
                    }
                    if (contador1>=ndiv) {
                        break;
                    }

                }
                cout << "El numero es: " << original << " que tiene " << contador1 << " divisores." << endl;
            break;

            default:
                cout << "Este ejercicio no esta definido." << endl;
            break;
        }
        case 9:
            return(0);

        default:
            cout <<"Escriba 1 o 2." <<endl;
        break;
        }
    }
    return 0;
}
