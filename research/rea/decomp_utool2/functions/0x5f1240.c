// rea decompile_all
// name: FUN_005f1240
// address: 0x5f1240
// body: available
// range: 0x5f1240-0x5f13f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f1240(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  int *in_EDX;
  uint uVar6;
  uint uVar7;
  uint local_14;
  
  uVar7 = 0;
  local_14 = 0;
  uVar1 = *(uint *)(*in_ECX + 0x18);
  uVar2 = *(uint *)(*in_ECX + 0x24);
  do {
    uVar5 = (uVar2 - *(int *)(in_ECX[1] + 0x1b8c)) + 1;
    if (param_1 - uVar7 < uVar5) {
      uVar5 = param_1 - uVar7;
    }
    if (*(int *)(*in_ECX + 4) != 0) {
      FUN_005ee270(uVar7,uVar1,uVar5);
    }
    uVar6 = 0;
    if (uVar1 != 0) {
      iVar4 = uVar7 * 4;
      do {
        FUN_004c2c30(*(int *)(in_ECX[1] + 4 + uVar6 * 4) + *(int *)(in_ECX[1] + 0x1b8c) * 4,
                     in_EDX[uVar6] + iVar4,uVar5 * 4);
        uVar6 = uVar6 + 1;
        uVar7 = local_14;
      } while (uVar6 < uVar1);
    }
    if (*(int *)(*in_ECX + 0x10) == 0) {
      uVar7 = uVar7 + uVar5;
      local_14 = uVar7;
    }
    else {
      uVar6 = *(uint *)(in_ECX[1] + 0x1b8c);
      while ((uVar6 <= uVar2 && (uVar7 < param_1))) {
        *(int *)(*(int *)(in_ECX[1] + 0x28) + uVar6 * 4) =
             *(int *)(*in_EDX + uVar7 * 4) - *(int *)(in_EDX[1] + uVar7 * 4);
        *(int *)(*(int *)(in_ECX[1] + 0x24) + uVar6 * 4) =
             *(int *)(*in_EDX + uVar7 * 4) + *(int *)(in_EDX[1] + uVar7 * 4) >> 1;
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 + 1;
        local_14 = uVar7;
      }
    }
    *(int *)(in_ECX[1] + 0x1b8c) = *(int *)(in_ECX[1] + 0x1b8c) + uVar5;
    if (uVar2 < *(uint *)(in_ECX[1] + 0x1b8c)) {
      iVar4 = FUN_005efd50(uVar2);
      if (iVar4 == 0) {
        return 0;
      }
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          puVar3 = *(undefined4 **)(in_ECX[1] + 4 + uVar5 * 4);
          uVar5 = uVar5 + 1;
          *puVar3 = puVar3[uVar2];
          uVar7 = local_14;
        } while (uVar5 < uVar1);
      }
      if (*(int *)(*in_ECX + 0x10) != 0) {
        **(undefined4 **)(in_ECX[1] + 0x24) = (*(undefined4 **)(in_ECX[1] + 0x24))[uVar2];
        **(undefined4 **)(in_ECX[1] + 0x28) = (*(undefined4 **)(in_ECX[1] + 0x28))[uVar2];
      }
      *(undefined4 *)(in_ECX[1] + 0x1b8c) = 1;
    }
  } while (uVar7 < param_1);
  return 1;
}

