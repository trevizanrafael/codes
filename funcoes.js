/*
Crie uma função que calcule o índice de massa corporal (IMC) de uma pessoa, a partir de sua altura, em metros, e peso, em quilogramas, que serão recebidos como parâmetro.
Crie uma função que calcule o valor do fatorial de um número passado como parâmetro.
Crie uma função que converte um valor em dólar, passado como parâmetro, e retorna o valor equivalente em reais. Para isso, considere a cotação do dólar igual a R$4,80.
Crie uma função que mostre na tela a área e o perímetro de uma sala retangular, utilizando altura e largura que serão dadas como parâmetro.
Crie uma função que mostre na tela a área e o perímetro de uma sala circular, utilizando seu raio que será fornecido como parâmetro. Considere Pi = 3,14.
Crie uma função que mostre na tela a tabuada de um número dado como parâmetro.
*/
function calcularImc(altura,peso){
  return peso/(altura*altura);
}
function calcularFatorial(fatorial) {
  let aux=fatorial-1;
  if (fatorial < 0) {
    return "Fatorial não definido para números negativos.";
  }
  if (fatorial === 0) {
    return 1;
  }
  do{
    fatorial=fatorial*aux;
    aux--;
  }while(aux>=1);
  return fatorial;
}
function converterDolar(valor){
  alert(valor*4.8);
}
function perimetroRetangular(altura, largura){
  alert(altura*2+largura*2);
}
function perimentoCircular(raio){
  alert(raio*raio*3.14+' e '+raio*2*3.14);
}
function mostrarTabuada(numero){
  let i=1;
  do{
    alert(`${numero}x${i}=${numero*i}`);
    i++
  }while(i<=10);
}
