alert('Bem-vindo ao jogo do número secreto.');
let numeroSecreto = 22;
let chute=Number(prompt('Escolha um numero entre 1 e 30:'));

do {
  if (chute<1) {
    alert('Chute fora do intervalo.');
    chute=Number(prompt('Escolha um numero entre 1 e 30:'));
  } else if (chute>30) {
    alert('Chute fora do intervalo');
    chute=Number(prompt('Escolha um numero entre 1 e 30:'));
  } else if (numeroSecreto>chute) {
    alert('Chute um número maior!');
    chute=Number(prompt('Escolha um numero entre 1 e 30:'));
  } else if (numeroSecreto<chute) {
    alert('Chute um número menor!');
    chute=Number(prompt('Escolha um numero entre 1 e 30:'));
  }
} while (numeroSecreto!=chute);

if (numeroSecreto==chute) {
    alert('Parabéns, você acertou');
  }