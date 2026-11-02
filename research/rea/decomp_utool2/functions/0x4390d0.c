// rea decompile_all
// name: FUN_004390d0
// address: 0x4390d0
// body: available
// range: 0x4390d0-0x4392f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004390d0(uint param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x20);
  if (((((*(int *)(in_ECX + 0x68) == 0) || (param_2 < *(int *)(in_ECX + 0x5c))) ||
       ((param_2 <= *(int *)(in_ECX + 0x5c) && (param_1 < *(uint *)(in_ECX + 0x58))))) ||
      (*(int *)(in_ECX + 100) < param_2)) ||
     ((*(int *)(in_ECX + 100) <= param_2 && (*(uint *)(in_ECX + 0x60) <= param_1)))) {
    _memset(param_3,0,iVar1 * 4);
  }
  else {
    iVar2 = __allmul(*(int *)(in_ECX + 0x80),*(int *)(in_ECX + 0x80) >> 0x1f,param_1,param_2);
    iVar2 = ((iVar2 + *(int *)(in_ECX + 0x70)) - (*(int **)(in_ECX + 0x68))[2]) +
            **(int **)(in_ECX + 0x68);
    if (*(char *)(in_ECX + 0x88) == '\0') {
      switch(*(undefined4 *)(in_ECX + 0x10)) {
      case 8:
        if (param_3 != (void *)0x0) {
          FUN_00442310(1,iVar2,iVar1);
          return;
        }
        break;
      case 0x10:
        if (param_3 != (void *)0x0) {
          FUN_00442550(1,iVar2,iVar1);
          return;
        }
        break;
      case 0x18:
        if (param_3 != (void *)0x0) {
          FUN_004427e0(1,iVar2,iVar1);
          return;
        }
        break;
      case 0x20:
        if (*(char *)(in_ECX + 0x24) == '\0') {
          if (param_3 != (void *)0x0) {
            FUN_00442950(1,iVar2,iVar1);
            return;
          }
        }
        else if (param_3 != (void *)0x0) {
          FUN_004428d0(1,iVar2,iVar1);
          return;
        }
      }
    }
    else {
      switch(*(undefined4 *)(in_ECX + 0x10)) {
      case 8:
        FUN_00440d60(iVar2,iVar2,iVar2,iVar1);
        return;
      case 0x10:
        FUN_00440d90(iVar2,iVar2,iVar2,iVar1);
        return;
      case 0x18:
        FUN_00440dc0(iVar2,iVar2,iVar2,iVar1);
        return;
      case 0x20:
        if (*(char *)(in_ECX + 0x24) != '\0') {
          FUN_00440df0();
          return;
        }
        FUN_00440e20(iVar2,iVar2,iVar2,iVar1);
        return;
      }
    }
  }
  return;
}

