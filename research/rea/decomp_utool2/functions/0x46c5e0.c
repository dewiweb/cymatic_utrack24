// rea decompile_all
// name: FUN_0046c5e0
// address: 0x46c5e0
// body: available
// range: 0x46c5e0-0x46c784 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c5e0(HDC param_1)

{
  HDC hdc;
  DWORD DVar1;
  LPKERNINGPAIR lpKernPair;
  int in_ECX;
  int *piVar2;
  UINT uChar;
  int iVar3;
  float in_XMM2_Da;
  UINT local_40;
  uint local_3c;
  float local_38;
  int local_34;
  float local_30;
  WCHAR local_2c [2];
  DWORD local_28;
  uint local_24;
  HDC local_20;
  _GLYPHMETRICS local_1c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  local_30 = in_XMM2_Da;
  DVar1 = GetKerningPairsW(param_1,0,(LPKERNINGPAIR)0x0);
  local_28 = DVar1;
  FID_conflict__free((void *)0x0);
  lpKernPair = (LPKERNINGPAIR)FUN_004c5556(DVar1,8);
  GetKerningPairsW(local_20,local_28,lpKernPair);
  DVar1 = local_28;
  local_34 = in_ECX + 0x88;
  if (*(int *)(in_ECX + 0x8c) < (int)local_28) {
    FUN_0041c930((int)local_28 / 2 + 8 + local_28 & 0xfffffff8);
  }
  hdc = local_20;
  if (DVar1 != 0) {
    piVar2 = &lpKernPair->iKernAmount;
    do {
      local_20 = (HDC)(uint)((tagKERNINGPAIR *)(piVar2 + -1))->wFirst;
      local_24 = 0;
      DVar1 = GetGlyphIndicesW(hdc,(LPCWSTR)&local_20,1,(LPWORD)&local_24,1);
      if ((DVar1 == 0xffffffff) || ((short)local_24 == -1)) {
        uChar = 0xffffffff;
      }
      else {
        uChar = local_24 & 0xffff;
      }
      local_2c[0] = *(WORD *)((int)piVar2 + -2);
      local_2c[1] = 0;
      local_24 = 0;
      local_40 = uChar;
      DVar1 = GetGlyphIndicesW(hdc,local_2c,1,(LPWORD)&local_24,1);
      if ((DVar1 == 0xffffffff) || ((short)local_24 == -1)) {
        local_3c = 0xffffffff;
      }
      else {
        local_3c = local_24 & 0xffff;
      }
      local_1c.gmCellIncX = 0;
      GetGlyphOutlineW(hdc,uChar,0x82,&local_1c,0,(LPVOID)0x0,(MAT2 *)&DAT_00c02380);
      iVar3 = (int)local_1c.gmCellIncX;
      local_38 = (float)(*piVar2 + iVar3) / local_30;
      FUN_0046c8f0(&local_40);
      local_3c = 0xffffffff;
      local_38 = (float)iVar3 / local_30;
      FUN_0046c8f0(&local_40);
      piVar2 = piVar2 + 2;
      local_28 = local_28 - 1;
    } while (local_28 != 0);
    local_28 = 0;
  }
  FID_conflict__free(lpKernPair);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

