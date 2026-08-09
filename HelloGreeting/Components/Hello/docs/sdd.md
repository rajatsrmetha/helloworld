# Hello Component — Software Design Description

**Author:** Rajat Metha

**Email:** [rajatsrmetha@gmail.com](mailto:rajatsrmetha@gmail.com)

## Purpose

The `HelloGreeting::Hello` component demonstrates the F´ command, event, and telemetry flow. It receives a greeting, reports it as an event, and counts processed greetings.

## Requirements

| ID | Requirement |
|---|---|
| HELLO-001 | Provide an asynchronous `SAY_HI` command. |
| HELLO-002 | Accept one greeting of up to 50 characters. |
| HELLO-003 | Emit one `SayHiEvent` containing the greeting. |
| HELLO-004 | Increment and publish `HiCount` for each command. |
| HELLO-005 | Return an `OK` response after processing. |
| HELLO-006 | Reset `HiCount` when the application restarts. |

## Interfaces

| Type | Name | Details |
|---|---|---|
| Command | `SAY_HI` | Asynchronous; accepts a 50-character greeting |
| Event | `SayHiEvent` | `ACTIVITY_HI`; displays the greeting |
| Telemetry | `HiCount` | `U32`; number of processed greetings |

## Design

`Hello` is an active component. Commands are processed in its message queue.

```text
SAY_HI command
      |
      v
Emit SayHiEvent
      |
      v
Increment HiCount
      |
      v
Return OK
```

The deployed instance uses a queue size of 10, a 64 KiB stack, priority 50, and base ID `0x10005000`.

## Limitations

- `HiCount` is stored only in memory.
- Queue-full behavior is handled by F´.
- Automated component tests are not implemented.
- Greetings are limited to 50 characters by the FPP interface.
