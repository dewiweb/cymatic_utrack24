// rea decompile_all
// name: FUN_004b1390
// address: 0x4b1390
// body: available
// range: 0x4b1390-0x4b146f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b1390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int in_EDX;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  int local_38;
  undefined1 local_28 [36];
  
  if ((*(byte *)(in_EDX + 0x68) & 1) == 0) {
    local_44 = param_1;
    local_40 = param_2;
    local_3c = (undefined1 *)param_3;
    local_38 = param_4;
    puVar3 = (undefined4 *)FUN_0048d5b0();
  }
  else {
    local_38 = 0x4b13aa;
    piVar1 = (int *)FUN_006d1d80();
    if (piVar1 == (int *)0x0) goto LAB_004b1434;
    local_44 = param_1;
    local_40 = param_2;
    local_3c = (undefined1 *)param_3;
    local_38 = param_4;
    uVar2 = FUN_004b21a0();
    (**(code **)(*piVar1 + 0x20))(&local_44,uVar2);
    puVar3 = (undefined4 *)FUN_004b3160();
  }
  param_1 = *puVar3;
  param_2 = puVar3[1];
  param_3 = puVar3[2];
  param_4 = puVar3[3];
LAB_004b1434:
  local_38 = *(int *)(in_EDX + 0x24);
  if (local_38 != 0) {
    local_3c = local_28;
    local_40 = 0x4b1448;
    puVar3 = (undefined4 *)FUN_004744d0();
    param_1 = *puVar3;
    param_2 = puVar3[1];
    param_3 = puVar3[2];
    param_4 = puVar3[3];
  }
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}

