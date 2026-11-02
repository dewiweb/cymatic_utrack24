// rea decompile_all
// name: FUN_004a1920
// address: 0x4a1920
// body: available
// range: 0x4a1920-0x4a1b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a1920(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  wint_t _C;
  _locale_t _Locale;
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int *extraout_ECX;
  int *piVar3;
  void *local_2c;
  undefined4 local_28;
  int local_24;
  void *local_20;
  undefined8 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703330;
  local_10 = ExceptionList;
  _Locale = (_locale_t)(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  piVar3 = in_ECX;
  if (in_ECX[0xc] == 0) {
    local_14 = *(int *)in_ECX[6];
    FUN_0044ebd0(0);
    _C = FUN_00426f70();
    iVar1 = FID_conflict___iswspace_l(_C,_Locale);
    piVar3 = extraout_ECX;
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return;
    }
  }
  local_2c = (void *)0x0;
  local_28 = 0;
  local_24 = 0;
  FUN_00419e50(200,piVar3);
  local_28 = 200;
  local_8 = 0;
  uVar2 = FUN_0049fe30(&local_14,in_ECX[0xc]);
  local_8._0_1_ = 1;
  local_1c = (double)(((float)in_ECX[2] + (float)in_ECX[1]) - (float)in_ECX[3]) + 6755399441055744.0
  ;
  FUN_00642ff0(in_ECX[7],uVar2,(float)(int)local_1c,0x501502f9,0);
  local_8._0_1_ = 0;
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (param_3 < *(int *)(in_ECX[6] + 8) + *in_ECX) {
    FUN_0046e700(&local_2c);
    local_8._0_1_ = 2;
    iVar1 = param_3 - *in_ECX;
    if (param_3 - *in_ECX < 0) {
      iVar1 = local_1c._4_4_;
    }
    FUN_0046e420(0,iVar1);
    FUN_0046e420(param_3 - *in_ECX,local_24);
    FUN_00684c50(*(undefined4 *)(in_ECX[7] + 4));
    FUN_00642000(param_1);
    local_8._0_1_ = 0;
    FUN_00471b00();
    FID_conflict__free(local_20);
  }
  if (*in_ECX < param_2) {
    FUN_0046e700(&local_2c);
    local_8._0_1_ = 3;
    FUN_0046e420(param_2 - *in_ECX,local_1c._4_4_);
    iVar1 = param_2 - *in_ECX;
    if (param_2 - *in_ECX < 0) {
      iVar1 = local_24;
    }
    FUN_0046e420(0,iVar1);
    FUN_00684c50(*(undefined4 *)(in_ECX[7] + 4));
    FUN_00642000(param_1);
    local_8._0_1_ = 0;
    FUN_00471b00();
    FID_conflict__free(local_20);
  }
  FUN_00684c50(param_4);
  FUN_00642000(param_1);
  FUN_00471b00();
  FID_conflict__free(local_2c);
  ExceptionList = local_10;
  return;
}

