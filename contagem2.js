let numero=Number(prompt('Digite o numero pra contagem:'));
let aux=0
while (numero>=aux){
  if (numero==aux) {
    alert(`${numero}. Acabou!`);
    break;
  }
  alert(aux);
  aux++;
}
