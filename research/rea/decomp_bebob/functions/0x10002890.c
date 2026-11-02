// rea decompile_all
// name: FUN_10002890
// address: 0x10002890
// body: available
// range: 0x10002890-0x10002951 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_10002890(void *this,char *param_1)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1010e5fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar3 = *(int **)this;
  *piVar3 = *piVar3 + -1;
  if ((*piVar3 == 0) && (pvVar2 = *(void **)this, pvVar2 != (void *)0x0)) {
    FUN_100085b9(*(void **)((int)pvVar2 + 4));
    FUN_100085b9(pvVar2);
  }
  piVar3 = FUN_1000858a(0xc);
  local_8 = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)(param_1 + 1);
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    if (0x7fffffff < uVar5) {
      uVar5 = 0x7fffffff;
    }
    FUN_10002610(piVar3,uVar5,param_1);
  }
  *(int **)this = piVar3;
  *piVar3 = *piVar3 + 1;
  ExceptionList = local_10;
  return this;
}

