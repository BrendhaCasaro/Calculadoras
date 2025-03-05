const buttons = document.querySelectorAll('button')
const result = document.querySelector('#result')

for (const button of buttons) {
    button.addEventListener('click', e => {
        result.innerText += e.target.innerText
        if (e.target.innerText == 'C') {
            result.innerText = ''
        }
        else if (e.target.innerText == '⌫') {
            result.innerText = result.innerText.slice(0, -2)
        }
        else if (e.target.innerText == '=') {
            result.innerText = result.innerText.slice(0, -1)
            result.innerText = result.innerText.replaceAll('X', '*')
            result.innerText = eval(result.innerText)
        }
    })
}