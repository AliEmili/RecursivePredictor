# RecursivePredictor
A compiler tool to accept a string if it's accepted in the grammar of program
<br/>
imagine you have a grammar like
<br/>
E --> TR
<br/>
R --> +TR | ε
<br/>
T --> FM
<br/>
M --> *FM | ε
<br/>
F --> (E) | id
<br/>
start writing a string in this program and if it belongs to the grammer it'll be accepted otherwise you'll face with an error!
