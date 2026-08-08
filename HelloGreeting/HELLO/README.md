# HELLO Deployment

**Author:** Rajat Metha

**Email:** [rajatsrmetha@gmail.com](mailto:rajatsrmetha@gmail.com)

`HELLO` is the runnable deployment for the HelloGreeting project.

It connects the custom `Hello` component to standard F´ command, event, telemetry, communication, file-handling, and data-product services.

For project setup and component usage, see the [project README](../../README.md). For requirements and design, see the [Hello component SDD](../Components/Hello/docs/sdd.md).

## Build

Activate the project environment and run these commands from the project root:

```bash
source fprime-venv/bin/activate
fprime-util generate
fprime-util build
```

## Run with the GDS

From this directory, run:

```bash
fprime-gds
```

This starts both the GDS and the `HELLO` application.

## Run separately

Start only the GDS:

```bash
fprime-gds --no-app
```

Then start the application from the project root using the host and port displayed by the GDS:

```bash
./build-fprime-automatic-native/bin/HELLO -a 127.0.0.1 -p 50000
```

Both `-a` and `-p` are required for a GDS connection. Use `-h` to display command-line help.

## Runtime design

- A TCP client connects the application to the GDS.
- `CdhCore` handles commands, events, telemetry, and health monitoring.
- `ComCcsds` handles CCSDS uplink and downlink data.
- `FileHandling` provides file transfer, parameters, and command sequences.
- `DataProducts` provides data-product storage services.
- The application uses a 1 Hz timer and rate groups running at 1 Hz, 1/2 Hz, and 1/4 Hz.

Press `Ctrl-C` to stop the deployment cleanly.
