# COMP 7035 - Assignment 1 Part 2 
> This assignment implements a timer_sleep function.

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
- Type: `git clone https://github.com/MonB003/Comp7035-Assignment1-Part2.git`


### Running the project:
- The project can be run from the command line

#### Setup the docker container:
```
docker run --rm --name pintos -v $(pwd):/pintos -it thierrysans/pintos bash
cd /pintos/src/threads/build
```

#### Compile the test:
```
rm tests/threads/alarm-multiple.output
make tests/threads/alarm-multiple.result
```

#### Run the test:
```
pintos -v -k -T 60 --bochs  -- -q  run alarm-multiple
```