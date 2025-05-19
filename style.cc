
body {
  margin: 0;
  font-family: Arial, sans-serif;
  background-color: #f4f0f8;
  color: #4a235a;
}

header {
  background-color: #b57edc;
  padding: 20px;
  text-align: center;
}

header h1 {
  margin: 0;
  color: white;
}

nav {
  background-color: #d8b3e6;
  display: flex;
  justify-content: center;
  padding: 10px;
}

nav a {
  color: #4a235a;
  text-decoration: none;
  margin: 0 15px;
  font-weight: bold;
}

.container {
  padding: 20px;
  display: grid;
  grid-template-columns: 1fr;
  gap: 20px;
}

.main-image {
  width: 100%;
  height: 300px;
  background-color: #e6ccf2;
  display: flex;
  align-items: center;
  justify-content: center;
  font-size: 1.2em;
  color: #6a1b9a;
}

.extra-images {
  display: flex;
  flex-direction: row;
  gap: 20px;
}

.extra-image {
  flex: 1;
  height: 200px;
  background-color: #e6ccf2;
  display: flex;
  align-items: center;
  justify-content: center;
  color: #6a1b9a;
}

footer {
  background-color: #b57edc;
  color: white;
  text-align: center;
  padding: 15px;
  margin-top: 30px;
}
