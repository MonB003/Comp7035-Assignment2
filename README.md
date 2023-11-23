# COMP 7035 - Assignment 2 
> This assignment implements a multilevel feedback queue scheduler.

<br>

## Table of Contents
- [Technologies](#technologies)
- [How to run the project](#how-to-run-project)

<br>

## Technologies
* Pintos
* C (language)

<br>

## <a id="how-to-run-project">How to run the project</a>
### Prerequisites:
- Have a Git and GitHub account
- Have Visual Studio Code or another coding editor

### Configuration instructions:

Cloning the repository:
- Open Command Prompt or Terminal
- `cd` into the folder you want the repository stored in
- Type: `git clone https://github.com/MonB003/Comp7035-Assignment2.git`


### Running the project:
- The project can be run from the command line

#### Build the docker container:
```
docker build -t pintos-image .
docker run -it pintos-image bash
cd /pintos/src/threads/build
```

#### Run the tests:
```
pintos -- -q -mlfqs run 'mlfqs-load-1'
pintos -- -q -mlfqs run 'mlfqs-load-60'
pintos -- -q -mlfqs run 'mlfqs-load-avg'
pintos -- -q -mlfqs run 'mlfqs-recent-1'
pintos -- -q -mlfqs run 'mlfqs-nice-2'
pintos -- -q -mlfqs run 'mlfqs-nice-10'
pintos -- -q -mlfqs run 'mlfqs-block'
```