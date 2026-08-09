# Hi Component — Software Design Description

**Author:** Rajat Metha

**Email:** [rajatsrmetha@gmail.com](mailto:rajatsrmetha@gmail.com)

## Purpose

The `HelloGreeting::Hi` component demonstrates a simple F´ command and event flow.

## Requirements

| ID | Requirement |
|---|---|
| HI-001 | Provide an asynchronous `INTRODUCE_ME` command. |
| HI-002 | Emit one `IntroEvent` when the command is processed. |
| HI-003 | Return an `OK` command response. |

## Interfaces

| Type | Name | Details |
|---|---|---|
| Command | `INTRODUCE_ME` | Asynchronous; no arguments |
| Event | `IntroEvent` | `ACTIVITY_HI`; displays `Nice to Meet you` |

## Design

`Hi` is an active component. It processes the command from its message queue, emits `IntroEvent`, and returns `OK`.

## Limitations

- The event text is fixed.
- Queue-full behavior is handled by F´.
- Automated component tests are not implemented.