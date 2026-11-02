// rea decompile_all
// name: FUN_005f6670
// address: 0x5f6670
// body: available
// range: 0x5f6670-0x5f6806 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f6670(uint param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_ECX;
  uint in_EDX;
  uint uVar6;
  int local_10;
  uint local_c;
  
  if ((in_EDX <= *(uint *)(in_ECX[1] + 0xd8)) && (param_1 <= *(uint *)(in_ECX[1] + 0xdc))) {
    return 1;
  }
  uVar6 = 0x38;
  do {
    if (*(int *)(uVar6 + in_ECX[1]) != 0) {
      FID_conflict__free((void *)(*(int *)(uVar6 + in_ECX[1]) + -0x10));
      *(undefined4 *)(uVar6 + in_ECX[1]) = 0;
    }
    pvVar1 = *(void **)(uVar6 + 0xdbc + in_ECX[1]);
    if (pvVar1 != (void *)0x0) {
      FID_conflict__free(pvVar1);
      *(undefined4 *)(uVar6 + 0x20 + in_ECX[1]) = 0;
      *(undefined4 *)(uVar6 + 0xdbc + in_ECX[1]) = 0;
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x58);
  local_c = 0;
  if (param_1 != 0) {
    uVar6 = in_EDX + 4;
    local_10 = 0x58;
    do {
      if (((uVar6 < 4) || ((uint)(0xffffffff / (ulonglong)uVar6) < 4)) ||
         (puVar3 = (undefined4 *)FUN_004c554b(uVar6 * 4), puVar3 == (undefined4 *)0x0)) {
LAB_005f67f6:
        *(undefined4 *)*in_ECX = 8;
        return 0;
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined4 **)(local_10 + -0x20 + in_ECX[1]) = puVar3 + 4;
      iVar2 = in_ECX[1];
      piVar4 = (int *)(iVar2 + 0xd9c + local_10);
      if (0x3fffffff < in_EDX) goto LAB_005f67f6;
      iVar5 = 1;
      if (in_EDX * 4 != 0) {
        iVar5 = in_EDX * 4;
      }
      iVar5 = FUN_004c554b(iVar5);
      if (iVar5 == 0) goto LAB_005f67f6;
      pvVar1 = (void *)*piVar4;
      if (pvVar1 != (void *)0x0) {
        FID_conflict__free(pvVar1);
      }
      *piVar4 = iVar5;
      *(int *)(local_10 + iVar2) = iVar5;
      local_c = local_c + 1;
      local_10 = local_10 + 4;
    } while (local_c < param_1);
  }
  *(uint *)(in_ECX[1] + 0xd8) = in_EDX;
  *(uint *)(in_ECX[1] + 0xdc) = param_1;
  return 1;
}

