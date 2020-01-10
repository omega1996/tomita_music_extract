#GRAMMAR_ROOT S

Lang -> '����' | '����' | '���';
Date->AnyWord<kwtype = "����">;
Brackets->LBracket (AnyWord*) Lang (Comma) (Hyphen) AnyWord* interp(Albums.Translate) RBracket;
FirstPart->AnyWord* interp(Albums.Name) (Brackets ) Hyphen Adj;
FullName->AnyWord<h-reg1>* AnyWord<h-reg1>;
Auth -> AnyWord * '������'  AnyWord<l-reg>* FullName interp(Albums.Author) Comma;
S->FirstPart Auth  AnyWord*  Date interp(Albums.Date) (AnyWord *)(Comma);
