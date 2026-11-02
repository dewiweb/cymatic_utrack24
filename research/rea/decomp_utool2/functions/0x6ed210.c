// rea decompile_all
// name: FUN_006ed210
// address: 0x6ed210
// body: available
// range: 0x6ed210-0x6ed29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006ed210(undefined4 param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *_Memory;
  int iVar5;
  char *local_8;
  
  FUN_006f2820(&local_8,param_1);
  pcVar2 = local_8;
  iVar4 = 0;
  iVar5 = 0;
  cVar1 = *local_8;
  while (cVar1 != '\0') {
    iVar3 = FUN_00443260();
    if (iVar3 == 9) {
      iVar5 = iVar5 + (*(int *)(in_ECX + 0x88) - iVar5 % *(int *)(in_ECX + 0x88));
    }
    else {
      iVar5 = iVar5 + 1;
    }
    if (param_2 < iVar5) break;
    iVar4 = iVar4 + 1;
    cVar1 = *pcVar2;
  }
  _Memory = (int *)(local_8 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar5 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  return iVar4;
}

