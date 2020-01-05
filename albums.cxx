#GRAMMAR_ROOT S

Lang -> '����' | '���';
Date->AnyWord<kwtype = "����">;
Brackets->LBracket (Lang) AnyWord* (Lang) (AnyWord*) RBracket;
FirstPart->AnyWord* interp(Albums.Name) (Brackets interp(Albums.Translate)) Hyphen Adj;
FullName->AnyWord<h-reg1>* AnyWord<h-reg1>;
Auth -> AnyWord * '������'  AnyWord<l-reg>* FullName interp(Albums.Author) ',';
S->FirstPart Auth  AnyWord*  Date interp(Albums.Date) (AnyWord *)( ',');
