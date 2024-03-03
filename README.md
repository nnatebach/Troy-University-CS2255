====== READING FROM A FILE ======
<br />
Priming the read
- Input can be thought of as a stream of values taken one at a time.
- Before the while loop condition can be tested, there has to be something in that stream.
- We prime the read by reading in at least one variable before the loop.
<br />
====== OUTPUT FILES ======
<br />
outfile.open("payment.out");<br />
information will be placed in the physical file "payment.out"<br />
<br />
setw() - the field width to be used on output operations<br />
<br />
====== CLOSING A FILE ======
<br />
Files should be closed before the program ends.<br />
infile.close();<br />
dataFile.close();<br />
<br />
====== CLOSING A FILE ======
<br />
- ios::in - Input mode. The file is used for "reading" information. If the file does not exist, it will not be created.<br />
- ios::out - Output mode. Information is written to the file. If the file already exists, its content will be deleted.<br />
- ios::app - Append mode. If the file exists, its contents are preserved and all output is written to the end of the file. If it does not exist then the file will be created. This is different from "ios::out".<br />
- ios::binary - Binary mode. Information is written to or read from in pure binary format.
<br />