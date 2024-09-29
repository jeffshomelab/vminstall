## Data Streams

The Operating System allows access to three data Streams:  stdout, stdin, and stderr.  However, you can create yourwhen when you need to output to more than one file.

### fopen()

The fopen() function allows you to create a new data stream.  The function takes two parameters:

> fopen(*filename*, *mode*);

Mode:
- **r** for read
- **w** for write
- **a** for append

### Create a new Data Stream

```sh
FILE *in_file = fopen("input.txt", "r");  //open file for read
FILE *out_file = fopen("output.xt", "w"); //open file for write
```
- **\*in_file** / **\*out_file**:  The name of the new data streams.

Once the file is open, you can write to the file using **fprintf()** or read from the file using **fscanf()**.

---

**Usage**

*Write*
> fprintf(out_file, "You have %i wins so far!", winCount);

- out_file is the name of the data stream you created using fopen

*Read*
> fscanf(in_file, "%79[^\n]\n", sentence);

*Closing a File*
When you are finished with the file, it is a good practicew to close the file.  

> fclose(in_file);
> fclose(out_file);