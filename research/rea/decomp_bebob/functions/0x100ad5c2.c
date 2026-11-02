// rea decompile_all
// name: FUN_100ad5c2
// address: 0x100ad5c2
// body: available
// range: 0x100ad5c2-0x100ad71d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100ad5c2(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  int local_50;
  int local_4c;
  int local_48;
  tagTEXTMETRICW local_44;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_1[0x19] == 0) {
    local_48 = param_1[0x59];
  }
  else {
    local_48 = param_1[0x5a];
  }
  dVar1 = 1.0;
  if (DAT_10166c84 != 0) {
    dVar1 = _DAT_10166c7c;
  }
  if (1.0 < dVar1) {
    uVar6 = FUN_100f8660(DAT_10166c84,param_2);
    local_48 = (int)uVar6;
  }
  GetTextMetricsW(*(HDC *)(param_4 + 8),&local_44);
  uVar2 = local_44.tmHeight & 0x80000001;
  bVar5 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar5 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  uVar2 = local_44.tmHeight;
  if (!bVar5) {
    uVar2 = local_44.tmHeight + 1;
  }
  if ((CMFCRibbonCategory *)param_1[0xb] != (CMFCRibbonCategory *)0x0) {
    iVar3 = CMFCRibbonCategory::GetImageSize((CMFCRibbonCategory *)param_1[0xb],(int)&local_50);
    iVar3 = (int)((*(int *)(iVar3 + 4) + 6) - uVar2) / 2;
    if (iVar3 < 2) {
      iVar3 = 2;
    }
    param_1[0x30] = iVar3;
  }
  iVar3 = uVar2 + param_1[0x30] * 2;
  param_1[0x5e] = 0;
  iVar4 = local_48;
  if ((param_1[0x1a] == 0) && (param_1[0x19] == 0)) {
    (**(code **)(*param_1 + 0x70))(&local_50,1);
    if (((local_50 != 0) || (local_4c != 0)) &&
       (param_1[0x5e] = param_1[0x5e] + local_50 + param_1[0x2f] * 2, iVar3 <= local_4c)) {
      iVar3 = local_4c;
    }
    if (0 < param_1[0x2b]) {
      param_1[0x5e] = param_1[0x5e] + param_1[0x2b] + param_1[0x2f] * 2;
      if (iVar3 <= param_1[0x2c]) {
        iVar3 = param_1[0x2c];
      }
    }
    iVar4 = local_48 + param_1[0x5e];
  }
  *param_3 = iVar4;
  param_3[1] = iVar3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

