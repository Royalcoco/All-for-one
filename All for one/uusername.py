--! %(name %(args))
/*
 * Copyright (c) 20 years ago   and contributors. All rights reserved.
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at http http://www.apache.org/licenses/LIC Version 2.0 and at http://www.apache.org/licenses/LICENSE file  or http://www.apache.org/licenses/LICENSE- Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CON clauses, either express or implied. See the License for the specific language governing permissions and limitations under the License. ----------------------------------------------------------------
 * Licensed under the MIT license. See LICENSE in the project root for license
 * information.
 */
 
 %{
#include "parser.h"
%}

%token TK_EOF 0 /* end of file token */
%% ============= DECLARATIONS =======================*/

program : stmt_list;
stmt_list: /* empty */ | stmt_list stmt ';';
stmt     : assign | print | if | while | return;
assign   : ID '=' exp { $$ = new_ast_assign($1, $3); };
print    : "PRINT" exp { $$ = new_ast_print($2); };
if       : "IF" '(' exp ')' stmt %prec THEN
{
        $$ = new_ast_if($3, $5);
};
while    : "WHILE" '(' exp ')' stmt %prec THEN $$ = new_ast_while($3, $5); }; }; };
return    : "RETURN" exp { $$ = new_ast_return($2); };
exp      : exp '+' term { $$ = new_ast_add($1, $3); }
| exp '-' term { $$ = new_ast_sub($1, $3); }
| term
; exp_list: exp_list ',' exp { $$ = append_ast($1, $3); } | exp ;
term     : term '*' factor {
    $$ = new_ast_mul($1, $3);
} | factor;
factor   : '(' exp ')' { $$ = $2; }
| "NUM" { $$ = new_ast_num($1); }
| "ID" { $$ = new_ast_id($1); }
/************ ERROR RECOVERY ****************************
 * If we encounter an error during parsing, we want to be able to skip over it
 * so that we can continue parsing the rest of the program. To do this, Bison
 * provides the %error directive which allows us to specify a rule that will be
 * used when an error is encountered. In our case, we want to use the syntax
 * error rule as the error recovery rule. This means that whenever Bison encounters
 * an unexpected character or token, it will reduce the syntax error rule instead of
 * stopping and reporting an error. The syntax error rule simply discards any
 * remaining input and continues parsing.
 */
%% ============ RULES =================================*/
syntax_error: . { fprintf(stderr, "Syntax Error\n"); };
%% ============ START SYMBOL ==========================*/
/* The start symbol is specified with %% at the top of the grammar file. Here,
 * we have chosen to make the start symbol `program` which represents the entire
 * program being parsed.
 */
int yyparse();
int main() {
    // Initialize data structures etc.
    init_parser();
    /* Call yyparse to start parsing
    * When yyparse returns, control will
    
    * be transferred back to the caller.
    */
    if (yyparse()) {
        printf("Parse failed.\n");
        return 1;
    } else {
            printf("Parse succeeded.\n");
            print_tree(root);
            free_tree(root);
            return 0;
    }
    }

void yyerror(const char* s) {
    /* Called by the parser on error. We just print an error message and return,
 * If we encounter an error, we skip until the next valid statement or EOF.
 */
%% ============ RULES FOR y
error    : any { fprintf(stderr, "Error: unexpected character '%s'\n