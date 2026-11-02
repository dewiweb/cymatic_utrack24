// rea decompile_all
// name: FUN_005e5a40
// address: 0x5e5a40
// body: available
// range: 0x5e5a40-0x5e5b95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005e5a40(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float local_8;
  
  iVar7 = *(int *)(param_2 + 0x14);
  iVar4 = FUN_005eabc0();
  if (0 < iVar4) {
    uVar2 = *(undefined4 *)(iVar7 + 0xc);
    iVar3 = *(int *)(iVar7 + 0x10);
    for (uVar5 = *(uint *)(iVar7 + 0x14); uVar5 != 0; uVar5 = uVar5 >> 1) {
    }
    iVar6 = FUN_005eabc0();
    if ((iVar6 != -1) && (iVar6 < *(int *)(iVar7 + 0x14))) {
      local_8 = 0.0;
      piVar1 = (int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) + 0xb20) +
                      *(int *)(iVar7 + 0x18 + iVar6 * 4) * 0x38);
      iVar7 = FUN_005e9360();
      iVar6 = 0;
      if (0 < *(int *)(param_2 + 4)) {
        do {
          iVar8 = FUN_005e6e00(param_1 + 4,*piVar1);
          if (iVar8 == -1) {
            return 0;
          }
          iVar6 = iVar6 + *piVar1;
        } while (iVar6 < *(int *)(param_2 + 4));
      }
      iVar6 = 0;
      if (0 < *(int *)(param_2 + 4)) {
        iVar8 = *piVar1;
        do {
          iVar9 = 0;
          if (0 < iVar8) {
            do {
              iVar9 = iVar9 + 1;
              *(float *)(iVar7 + iVar6 * 4) = local_8 + *(float *)(iVar7 + iVar6 * 4);
              iVar6 = iVar6 + 1;
              iVar8 = *piVar1;
            } while (iVar9 < iVar8);
          }
          local_8 = *(float *)(iVar7 + -4 + iVar6 * 4);
        } while (iVar6 < *(int *)(param_2 + 4));
      }
      *(float *)(iVar7 + *(int *)(param_2 + 4) * 4) =
           ((float)iVar4 / (float)((1 << ((byte)uVar2 & 0x1f)) + -1)) * (float)iVar3;
      return iVar7;
    }
  }
  return 0;
}

