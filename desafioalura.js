console.log('Boas Vindas');
let nome="Rafael";
console.log(`Olá, ${nome}`);
alert(`Olá, ${nome}`);
let resposta=prompt('Qual lingaguem de programação você mais gosta?');
console.log(resposta);
let valor1=1;
let valor2=2;
let resultado=valor1-valor2;
console.log('A diferença entre '+valor1+'e '+valor2+'é igual a: '+resultado);
let idade=Number(prompt('Digite sua idade:'));
if(idade>=18) {
    console.log('Você é maior de idade, '+nome);
    } else {
    console.log('Você é menor de idade, '+nome);
    }
let numero=Number(prompt('Digite um número para a verificação'));
if(numero>0) {
    console.log('O número é maior que zero, positivo, '+nome);
    } else if (numero==0){
    console.log('O número é igual a zero, '+nome);
    } else {
    console.log('O número é menor que zero, negativo, '+nome);
    }
let numWhile=1;
while (numWhile<=10){
    console.log(numWhile);
    numWhile++;
    }
let nota=7;
if(nota>=7) {
    console.log(`Você está aprovado com nota ${nota}, `+nome);
    } else {
    console.log(`Você está reprovado com nota ${nota}, `+nome);
    }
console.log('O primeiro número aleatório é: '+Math.random());
console.log('O segundo número aleatório é: '+parseInt(Math.random()*10+1));
console.log('O terceiro número aleatório é: '+parseInt(Math.random()*1000+1));
