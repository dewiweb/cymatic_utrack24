// rea decompile_all
// name: FUN_10002960
// address: 0x10002960
// body: available
// range: 0x10002960-0x100029da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __thiscall FUN_10002960(void *this,int *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = *(char **)(*(int *)this + 4);
  pcVar1 = pcVar3 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pcVar3 = pcVar3 + -(int)pcVar1;
  pcVar4 = *(char **)(*param_1 + 4);
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  pcVar4 = pcVar4 + ((int)pcVar3 - (int)pcVar1);
  if ((char *)0x7fffffff < pcVar4) {
    pcVar4 = (char *)0x7fffffff;
  }
  FUN_10002780(this,(uint)pcVar4);
  if (pcVar3 < pcVar4) {
    FID_conflict__memcpy
              (pcVar3 + *(int *)(*(int *)this + 4),*(void **)(*param_1 + 4),
               (int)pcVar4 - (int)pcVar3);
  }
  pcVar4[*(int *)(*(int *)this + 4)] = '\0';
  return this;
}

