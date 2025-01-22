let h1 = document.querySelector('h1');
h1.innerHTML = 'Hora do desafio!';

function apertarConsole() {
  console.log('O botao foi clicado');
}
function apertarAlert() {
  alert('Eu amo JS.');
}
function apertarPrompt() {
  let cidade=prompt('Qual o nome da sua cidade?');
  alert(`Estive em ${cidade} e lembrei de você`);
}
function apertarSoma() {
  let soma1=Number(prompt('Qual o numero 1?'));
  let soma2=Number(prompt('Qual o numero 2?'))+soma1;
  alert(soma2);
}
