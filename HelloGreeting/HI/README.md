# HI Deployment

**Author:** Rajat Metha

**Email:** [rajatsrmetha@gmail.com](mailto:rajatsrmetha@gmail.com)

`HI` is the active runnable deployment for HelloGreeting. It connects `HiCmpInstance` to standard F´ command, event, telemetry, communication, file-handling, and data-product services.

## Build

From the project root:

```bash
source fprime-venv/bin/activate
fprime-util generate
fprime-util build
```

## Run

From this directory:

```bash
fprime-gds
```

In the GDS, send `HelloGreeting.HiCmpInstance.INTRODUCE_ME`. The application emits `IntroEvent` and returns `OK`.

Press `Ctrl-C` to stop the deployment.

## F´ modules

- `CdhCore` handles commands, events, telemetry, and health monitoring.
- `ComCcsds` handles CCSDS communication over TCP.
- `FileHandling` handles file transfer and parameter storage.
- `DataProducts` handles data-product storage.
- `Svc.CmdSequencer` runs stored command sequences.
