# HelloGreeting

**Author:** Rajat Metha

**Email:** [rajatsrmetha@gmail.com](mailto:rajatsrmetha@gmail.com)

HelloGreeting is a simple application built with [F´ (F Prime)](https://fprime.jpl.nasa.gov/) 4.2.2. It demonstrates how a custom F´ component communicates through commands, events, and telemetry.

## What it does

The application provides the following command:

```text
HelloGreeting.HelloCmpInstance.SAY_HI
```

When a greeting is sent from the F´ Ground Data System (GDS), the application:

1. generates a `SayHiEvent` containing the greeting;
2. increments the `HiCount` telemetry value; and
3. returns an `OK` command response.

## F´ modules used

The project uses standard F´ modules together with the custom `Hello` component:

- `CdhCore` handles commands, events, telemetry, and health monitoring.
- `ComCcsds` provides CCSDS communication with the GDS.
- `FileHandling` provides file transfer, parameters, and command sequencing.
- `DataProducts` provides data-product storage services.
- `Drv.TcpClient` connects the application to the GDS.
- F´ rate groups schedule framework services at regular intervals.

## Project structure

| Path | Description |
|---|---|
| `HelloGreeting/Components/Hello` | Custom Hello component |
| `HelloGreeting/HELLO` | Runnable application deployment |
| `HelloGreeting/HELLO/Top` | Component instances and connections |
| `lib/fprime` | F´ framework submodule |

See the [Hello component SDD](HelloGreeting/Components/Hello/docs/sdd.md) for its design and requirements.

See the [deployment README](HelloGreeting/HELLO/README.md) for build and run instructions.
