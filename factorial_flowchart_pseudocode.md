# Factorial of a Number

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Input N/]
    B --> C{Is N < 0?}
    C -- Yes --> D[/Print "Error: Negative Number"/]
    D --> Z([Stop])
    C -- No --> E[Initialize fact = 1, i = 1]
    E --> F{Is i <= N?}
    F -- Yes --> G[fact = fact * i]
    G --> H[i = i + 1]
    H --> F
    F -- No --> I[/Print fact/]
    I --> Z
```

## Pseudo Code

```text
BEGIN
    DECLARE variables N, fact, i
    INPUT N
    
    IF N < 0 THEN
        PRINT "Factorial is not defined for negative numbers"
    ELSE
        SET fact = 1
        SET i = 1
        
        WHILE i <= N DO
            fact = fact * i
            i = i + 1
        ENDWHILE
        
        PRINT "Factorial of ", N, " is ", fact
    ENDIF
END
```
