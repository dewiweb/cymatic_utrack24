// rea decompile_all
// name: FUN_00497d00
// address: 0x497d00
// body: available
// range: 0x497d00-0x497e7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00497d00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  float *pfVar5;
  int in_ECX;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  double local_20;
  double local_18;
  
  iVar6 = 0;
  if (0 < *(int *)(in_ECX + 0x100)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xf8) + iVar6 * 4);
      FUN_0048e190(&local_28);
      iVar1 = *(int *)(iVar1 + 0x14);
      local_38 = local_28;
      local_34 = local_24;
      if (iVar1 == 0) {
        local_30 = local_28;
        local_2c = local_24;
        fVar8 = local_30;
        fVar10 = local_2c;
      }
      else {
        iVar2 = iVar1;
        for (iVar3 = *(int *)(iVar1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
          iVar2 = iVar3;
        }
        fVar7 = local_28;
        fVar9 = local_24;
        pfVar5 = (float *)FUN_004b2b30(local_28,local_24);
        fVar8 = *pfVar5;
        fVar10 = pfVar5[1];
        local_38 = fVar8;
        local_34 = fVar10;
        if (iVar2 != iVar1) {
          if (*(int *)(iVar1 + 0xc) != iVar2) {
            FUN_004b2980(*(int *)(iVar1 + 0xc),&local_38);
            fVar8 = fVar7;
            fVar10 = fVar9;
          }
          FUN_004b2b30(fVar8,fVar10);
          fVar8 = local_30;
          fVar10 = local_2c;
        }
      }
      local_2c = fVar10;
      local_30 = fVar8;
      local_18 = (double)local_2c + 6755399441055744.0;
      local_20 = (double)local_30 + 6755399441055744.0;
      cVar4 = FUN_006d01e0();
      if (cVar4 != '\0') {
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x100));
  }
  return 0;
}

