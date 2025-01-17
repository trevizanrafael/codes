let numero=Number(prompt('Digite o numero pra contagem:'));
while (numero>=0){
  if (numero==0) {
    alert('0. Acabou!');
    break;
  }
  alert(numero);
  numero--;
}
