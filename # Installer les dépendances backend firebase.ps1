# Installer les dépendances
npm install

# Lancer le backend
node backend/server.js

# Accéder à l'interface
# Ouvrir dans le navigateur
http://localhost:3000

# Télécharger NSSM : https://nssm.cc/download

# Installer le backend Node.js comme service
nssm install MonServiceNode "C:\Program Files\nodejs\node.exe" "C:\chemin\vers\backend\server.js"

:: fichier start_server.bat
cd C:\chemin\vers\projet
start /min node backend/server.js

# Créer un service Windows (run en admin)
sc create MonServiceNode binPath= "C:\chemin\vers\start_server.bat"

npm install electron --save-dev

const { app, BrowserWindow } = require('electron');
function createWindow () {
  const win = new BrowserWindow({
    width: 800, height: 600,
    webPreferences: { nodeIntegration: true }
  });
  win.loadURL('http://localhost:3000');
}
app.whenReady().then(() => {
  require('child_process').exec('node backend/server.js');
  createWindow();
});

"main": "main.js",
"scripts": {
  "start": "electron ."
}

npm start

npm install electron-packager -g
electron-packager . MonAppElectron --platform=win32 --arch=x64 --overwrite

{
  "conditions": [
    {
      "input": "USB device connected",
      "action": "Launch powershell command",
      "command": "Get-Process"
    }
  ]
}

Get-PnpDevice -Status OK

const os = require('os');
console.log(os.platform(), os.arch(), os.hostname());

# Lancer backend + frontend + client PowerShell
Start-Process "node" "backend/server.js"
Start-Process "powershell" "client.ps1"
Start-Process "chrome" "http://localhost:3000"

