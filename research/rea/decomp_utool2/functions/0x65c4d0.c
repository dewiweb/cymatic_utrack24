// rea decompile_all
// name: FUN_0065c4d0
// address: 0x65c4d0
// body: available
// range: 0x65c4d0-0x65c61c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c4d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  int local_18;
  int local_14;
  int *local_8;
  
  iVar2 = in_ECX[0x6a];
  local_8 = (int *)(iVar2 + 0x20);
  iVar3 = FUN_0065c660();
  if (in_ECX[0x19] == 3) {
    iVar5 = *in_ECX;
    *(int *)(iVar5 + 0x18) = iVar3;
    *(int *)(iVar5 + 0x1c) = *local_8;
    *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(*in_ECX + 0x14) = 0x5e;
  }
  else {
    *(undefined4 *)(*in_ECX + 0x14) = 0x5f;
    *(int *)(*in_ECX + 0x18) = iVar3;
  }
  (**(code **)(*in_ECX + 4))();
  iVar4 = (**(code **)(in_ECX[1] + 8))();
  iVar10 = 0;
  iVar5 = iVar3;
  if (0 < in_ECX[0x19]) {
    do {
      local_1c = *local_8;
      iVar6 = iVar5 / local_1c;
      if (0 < local_1c) {
        iVar1 = local_1c + -1;
        local_18 = 0;
        local_14 = 0;
        do {
          for (iVar9 = local_18; iVar9 < iVar3; iVar9 = iVar9 + iVar5) {
            iVar8 = 0;
            if (0 < iVar6) {
              do {
                iVar7 = *(int *)(iVar4 + iVar10 * 4) + iVar8;
                iVar8 = iVar8 + 1;
                *(char *)(iVar7 + iVar9) = (char)((local_14 + iVar1 / 2) / iVar1);
              } while (iVar8 < iVar6);
            }
          }
          local_18 = local_18 + iVar6;
          local_14 = local_14 + 0xff;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      iVar10 = iVar10 + 1;
      local_8 = local_8 + 1;
      iVar5 = iVar6;
    } while (iVar10 < in_ECX[0x19]);
    *(int *)(iVar2 + 0x10) = iVar4;
    *(int *)(iVar2 + 0x14) = iVar3;
    return;
  }
  *(int *)(iVar2 + 0x14) = iVar3;
  *(int *)(iVar2 + 0x10) = iVar4;
  return;
}

