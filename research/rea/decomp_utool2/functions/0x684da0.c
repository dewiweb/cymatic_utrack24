// rea decompile_all
// name: FUN_00684da0
// address: 0x684da0
// body: available
// range: 0x684da0-0x684e92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00684da0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < param_3) {
    do {
      if (*(char *)(param_1 + 8) == *(char *)(*(int *)(in_EDX + iVar4 * 4) + 0x20)) {
        iVar2 = FUN_006218b0(*param_1);
      }
      else {
        iVar2 = (uint)(*(char *)(param_1 + 8) == '\0') * 2 + -1;
      }
      if (iVar2 == 0) {
LAB_00684e89:
        return iVar4 + 1;
      }
      cVar1 = *(char *)(param_1 + 8);
      iVar5 = iVar4 + param_3 >> 1;
      iVar2 = *(int *)(in_EDX + iVar5 * 4);
      if (iVar5 == iVar4) {
        if (cVar1 == *(char *)(iVar2 + 0x20)) {
          iVar2 = FUN_006218b0(*param_1);
        }
        else {
          iVar2 = (uint)(cVar1 == '\0') * 2 + -1;
        }
        if (iVar2 < 0) {
          return iVar4;
        }
        goto LAB_00684e89;
      }
      if (cVar1 == *(char *)(iVar2 + 0x20)) {
        iVar2 = FUN_006218b0(*param_1);
      }
      else {
        iVar2 = (uint)(cVar1 == '\0') * 2 + -1;
      }
      iVar3 = iVar5;
      if (-1 < iVar2) {
        iVar3 = param_3;
        iVar4 = iVar5;
      }
      param_3 = iVar3;
    } while (iVar4 < iVar3);
  }
  return iVar4;
}

