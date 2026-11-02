// rea decompile_all
// name: FUN_100084d0
// address: 0x100084d0
// body: available
// range: 0x100084d0-0x1000856d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100084d0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_8;
  
  local_8 = this;
  piVar2 = param_2;
  if ((param_2 == (int *)**(int **)((int)this + 4)) && (param_3 == *(int **)((int)this + 4))) {
    FUN_10008480((int)this);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != param_3) {
    param_2 = piVar2;
    if (*(char *)((int)piVar2 + 0x15) == '\0') {
      param_2 = (int *)piVar2[2];
      if (*(char *)((int)param_2 + 0x15) == '\0') {
        cVar1 = *(char *)(*param_2 + 0x15);
        piVar3 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          param_2 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x15);
        piVar4 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar3 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar3 = param_2;
        }
      }
    }
    FUN_100081f0(this,&local_8,piVar2);
    piVar2 = param_2;
  }
  *param_1 = piVar2;
  return;
}

