Trace output can be controlled using triggering and filtering.
Triggers control when the data is collected.
Filtering controls the type of the collected data. Its sole purpose is to limit the amount of data.
Data is filtered by indication the specific data accesses. Instructions are filtered using enabling and disabling trace generation.
Event resources are used to trigger and filter. Resources that match for one cycle or more cycles perform an action like enabling the trace mechanisms.
### Possible Event Resources
- Address comparators.
- Data value comparators.
- Context ID comparators, ETM v2.0 or later.
- Virtual Machine ID comparators, ETM v3.5.
- Memory map decoders.
- EmbeddedICE module watch points.
- Counters.
- Three-state sequencer.
- External Inputs.
- Extended External Inputs.
- Trace start/stop.
- Software instrumentation resources.