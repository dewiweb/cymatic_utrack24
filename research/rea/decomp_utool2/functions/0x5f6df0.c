// rea decompile_all
// name: FUN_005f6df0
// address: 0x5f6df0
// body: available
// range: 0x5f6df0-0x5f6f74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005f6df0(void)

{
  void *pvVar1;
  FILE *_File;
  int iVar2;
  FILE *pFVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)*in_ECX == 9) {
    return 1;
  }
  FUN_005f7e70();
  if ((*(int *)(in_ECX[1] + 0xf4) != 0) &&
     (pvVar1 = *(void **)(in_ECX[1] + 0x1bc), pvVar1 != (void *)0x0)) {
    FID_conflict__free(pvVar1);
    *(undefined4 *)(in_ECX[1] + 0x1bc) = 0;
    *(undefined4 *)(in_ECX[1] + 0xf4) = 0;
  }
  FUN_005ff0e0();
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
  *(undefined4 *)(in_ECX[1] + 0xd8) = 0;
  *(undefined4 *)(in_ECX[1] + 0xdc) = 0;
  if (*(int *)(in_ECX[1] + 0x30) != 0) {
    _File = *(FILE **)(in_ECX[1] + 0x30);
    pFVar3 = (FILE *)___acrt_iob_func(0);
    if (_File != pFVar3) {
      _fclose(_File);
    }
    *(undefined4 *)(in_ECX[1] + 0x30) = 0;
  }
  iVar2 = in_ECX[1];
  if (*(int *)(iVar2 + 0xe14) != 0) {
    piVar5 = (int *)(iVar2 + 0xe80);
    uVar6 = 0xc;
    piVar4 = (int *)(iVar2 + 0x130);
    do {
      if (*piVar4 != *piVar5) {
        local_8 = 1;
        goto LAB_005f6f4f;
      }
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
      bVar7 = 3 < uVar6;
      uVar6 = uVar6 - 4;
    } while (bVar7);
    local_8 = 0;
  }
LAB_005f6f4f:
  *(undefined4 *)(iVar2 + 0xe1c) = 0;
  FUN_005f6810();
  *(undefined4 *)*in_ECX = 9;
  return local_8 ^ 1;
}

