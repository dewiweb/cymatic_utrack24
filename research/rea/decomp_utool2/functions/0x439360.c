// rea decompile_all
// name: FUN_00439360
// address: 0x439360
// body: available
// range: 0x439360-0x4394cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439360(uint param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int local_c;
  
  uVar1 = *(uint *)(in_ECX + 0x18) - param_1;
  iVar2 = (*(int *)(in_ECX + 0x1c) - param_2) - (uint)(*(uint *)(in_ECX + 0x18) < param_1);
  if ((iVar2 <= param_4) && ((iVar2 < param_4 || (uVar1 < param_3)))) {
    param_3 = uVar1;
    param_4 = iVar2;
  }
  if (((*(int *)(in_ECX + 0x68) != 0) && (-1 < param_4)) && ((0 < param_4 || (param_3 != 0)))) {
    uVar1 = param_1 + param_3;
    local_c = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
    if ((local_c < param_2) || ((local_c <= param_2 && (uVar1 <= param_1)))) {
      local_c = param_2;
      uVar1 = param_1;
    }
    if (((*(int *)(in_ECX + 0x5c) <= param_2) &&
        (((*(int *)(in_ECX + 0x5c) < param_2 || (*(uint *)(in_ECX + 0x58) <= param_1)) &&
         (local_c <= *(int *)(in_ECX + 100))))) &&
       ((local_c < *(int *)(in_ECX + 100) || (uVar1 <= *(uint *)(in_ECX + 0x60))))) {
      switch(*(undefined4 *)(in_ECX + 0x10)) {
      case 8:
        FUN_00440e50(param_1,param_2,param_3,param_4,param_5,param_6);
        return;
      default:
        return;
      case 0x10:
        FUN_00441000(param_1,param_2,param_3,param_4,param_5,param_6);
        return;
      case 0x18:
        FUN_00441150(param_1,param_2,param_3,param_4,param_5,param_6);
        return;
      case 0x20:
        goto switchD_0043941c_caseD_20;
      }
    }
  }
  iVar2 = 0;
  if (0 < param_6) {
    do {
      *(undefined4 *)(param_5 + iVar2 * 8) = 0;
      *(undefined4 *)(param_5 + 4 + iVar2 * 8) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_6);
  }
  return;
switchD_0043941c_caseD_20:
  if (*(char *)(in_ECX + 0x24) == '\0') {
    FUN_00441330(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  FUN_00441210(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

