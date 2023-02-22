OPERATORS = {'+': 1, '-': 1, '*': 2, '/': 2, '^': 3}

def infix_to_postfix(expr):
    output = []
    operator_stack = []

    for token in expr.split():
        if token.isdigit():
            output.append(token)
        elif token in OPERATORS:
            while operator_stack and operator_stack[-1] != '(' and OPERATORS[token] <= OPERATORS[operator_stack[-1]]:
                output.append(operator_stack.pop())
            operator_stack.append(token)
        elif token == '(':
            operator_stack.append(token)
        elif token == ')':
            while operator_stack[-1] != '(':
                output.append(operator_stack.pop())
            operator_stack.pop()

        print(f"{token}: {output} | {operator_stack}")
    
    while operator_stack:
        output.append(operator_stack.pop())

    return ' '.join(output)

infix_expr = input("Enter an infix expression: ")
postfix_expr = infix_to_postfix(infix_expr)
print(f"Postfix expression: {postfix_expr}")
