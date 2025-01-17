alert('Bem-vindo ao jogo do número secreto.');
let maxNumAl=Number(prompt('Escolha o número máximo a se escolher:'));
let numeroSecreto = Math.floor(Math.random() * maxNumAl+1);
let chute=Number(prompt(`Escolha um numero entre 1 e ${maxNumAl}:`));
let numTentativas=1;

do {
  if (chute<1) {
    alert('Chute fora do intervalo.');
    chute=Number(prompt(`Escolha um numero entre 1 e ${maxNumAl}:`));
  } else if (chute>maxNumAl) {
    alert('Chute fora do intervalo');
    chute=Number(prompt(`Escolha um numero entre 1 e ${maxNumAl}:`));
  } else if (numeroSecreto>chute) {
    alert('Chute um número maior!');
    chute=Number(prompt(`Escolha um numero entre 1 e ${maxNumAl}:`));
  } else if (numeroSecreto<chute) {
    alert('Chute um número menor!');
    chute=Number(prompt(`Escolha um numero entre 1 e ${maxNumAl}:`));
  }
    numTentativas=numTentativas+1;
} while (numeroSecreto!=chute);

if (numeroSecreto==chute) {
    alert(`Parabéns, você acertou em ${numTentativas} tentativas!`);
  }
if (chute==numeroSecreto && numTentativas==1){
  alert(`Parabéns, você acertou em 1 tentativa!`);
  }
