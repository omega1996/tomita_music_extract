#GRAMMAR_ROOT S

Lang -> 'англ' | 'рус';
Date->AnyWord<kwtype = "даты">;
Brackets->LBracket (Lang) AnyWord* (Lang) (AnyWord*) RBracket;
FirstPart->AnyWord* interp(Albums.Name) (Brackets interp(Albums.Translate)) Hyphen Adj;
FullName->AnyWord<h-reg1>* AnyWord<h-reg1>;
Auth -> AnyWord * 'альбом'  AnyWord<l-reg>* FullName interp(Albums.Author) ',';
S->FirstPart Auth  AnyWord*  Date interp(Albums.Date) (AnyWord *)( ',');
