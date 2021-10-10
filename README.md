# Benchme

## Build

```bash
git clone https://github.com/ccouriol/Benchme/
cd Benchme/
make #compile
make doc #create the documentation (./docs/html/index.html)
./output/benchme output.csv
make clean #delete the documentation & program
```

### /!\ il faut remplacer les . par des , dans le .csv pour avoir le graph

### Todo:

#### Algorithms

> float number array

- [x] bubble sort
- [x] heap sort
- [x] selection sort
- [x] insertion sort
- [x] ascending and descending for each algorithms
- [x] get algorithm time

#### Project todo

- [x] generate doc
- [x] export as csv

#### Work rules

- [x] project name must be "Benchme"
- [x] work pair (SLAM / SN)

#### Code practices

- [ ] (50/100) good coding practices
- [x] structurated (.c .h)
- [x] scalable code (new algo, change array size)
- [x] correctly tabbed commented (javadoc / doxygen)
- [x] `make documentation` creates doc
- [x] `benchme data.txt` / `benchme result.csv`
