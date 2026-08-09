# HelloGreeting

**Author:** Rajat Metha

**Email:** [rajatsrmetha@gmail.com](mailto:rajatsrmetha@gmail.com)

HelloGreeting is a simple application built with [F´ (F Prime)](https://fprime.jpl.nasa.gov/) 4.2.2. It demonstrates how custom F´ components communicate through commands, events, and telemetry.

## What it does

The project contains two example commands:

- `SAY_HI` reports a supplied greeting as `SayHiEvent` and increments `HiCount`.
- `INTRODUCE_ME` reports an `IntroEvent` with the message `Nice to Meet you`.

Both commands return an `OK` response after processing. Commands can be sent from the F´ Ground Data System (GDS).

## F´ modules used

The project uses standard F´ modules together with the custom `Hello` component:

- `CdhCore` handles commands, events, telemetry, and health monitoring.
- `ComCcsds` provides CCSDS communication with the GDS.
- `FileHandling` provides file transfer and parameter storage.
- `DataProducts` provides data-product storage services.
- `Svc.CmdSequencer` runs stored command sequences.
- `Drv.TcpClient` connects the application to the GDS.
- F´ rate groups schedule framework services at regular intervals.

## Project structure

| Path | Description |
|---|---|
| `HelloGreeting/Components/Hello` | Greeting and counter component |
| `HelloGreeting/Components/Hi` | Introduction component |
| `HelloGreeting/HI` | Active runnable deployment |
| `HelloGreeting/HELLO` | Additional deployment configuration |
| `HelloGreeting/HELLO/Top` | Component instances and connections |
| `lib/fprime` | F´ framework submodule |

See the [Hello SDD](HelloGreeting/Components/Hello/docs/sdd.md) and [Hi SDD](HelloGreeting/Components/Hi/docs/sdd.md) for component details. Build and run instructions are in the [HI deployment README](HelloGreeting/HI/README.md).
