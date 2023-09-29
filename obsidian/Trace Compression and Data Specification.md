## Trace Compression
ETM compresses traces to reduce the number of pins and the size of the buffer required on the system.
* Address information is only output when the processor branches to a location that cannot be directly inferred from the source code i.e. dynamic branches.
* When an address is output, high-order bits that have not changed are not output.
* Data accesses can be limited to data or the address or both.
* Trace is output - packet - only the full width of the trace port is used.
* Zero compression is done in some ETM modules.
* Instruction tracing encoding is done in some ETM modules.