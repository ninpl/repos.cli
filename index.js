// Importacion de lo necesario
import { promises as fs } from 'fs'

var today = new Date();
var hoy = today.toLocaleDateString('es-ES');

// Crear la funcion
;(async () => {
  const [plantilla] = await Promise.all([
    fs.readFile('./README.md.tpl', { encoding: 'utf-8' })
  ])

// Reemplazar con la informacion obtenida
const nuevoMD = plantilla
  .replace('%{{fecha}}%', hoy)

await fs.writeFile('README.md', nuevoMD)
})()