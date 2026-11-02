// rea decompile_all
// name: FUN_004b0d80
// address: 0x4b0d80
// body: available
// range: 0x4b0d80-0x4b0edd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_004b0d80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *in_ECX;
  int in_EDX;
  
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xc)) {
    iVar1 = in_EDX;
    if (param_1 == in_EDX) {
      *in_ECX = param_2;
      in_ECX[1] = param_3;
      in_ECX[3] = param_5;
      in_ECX[2] = param_4;
      return in_ECX;
    }
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == param_1) goto LAB_004b0ec4;
    }
    puVar7 = (undefined4 *)FUN_004b1390(param_2,param_3,param_4,param_5);
    param_2 = *puVar7;
    param_3 = puVar7[1];
    param_4 = puVar7[2];
    param_5 = puVar7[3];
  }
  if (in_EDX == 0) {
    *in_ECX = param_2;
    in_ECX[1] = param_3;
    in_ECX[3] = param_5;
    in_ECX[2] = param_4;
    return in_ECX;
  }
  iVar6 = *(int *)(in_EDX + 0xc);
  iVar1 = in_EDX;
  while (iVar5 = iVar6, iVar5 != 0) {
    iVar1 = iVar5;
    iVar6 = *(int *)(iVar5 + 0xc);
  }
  puVar7 = (undefined4 *)FUN_004b2da0(param_2,param_3,param_4,param_5);
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  if (iVar1 == in_EDX) {
    *in_ECX = *puVar7;
    in_ECX[1] = uVar2;
    in_ECX[2] = uVar3;
    in_ECX[3] = uVar4;
    return in_ECX;
  }
LAB_004b0ec4:
  FUN_004b2d40();
  return in_ECX;
}

