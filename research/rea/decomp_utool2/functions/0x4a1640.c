// rea decompile_all
// name: FUN_004a1640
// address: 0x4a1640
// body: available
// range: 0x4a1640-0x4a17c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a1640(undefined4 *param_1,int *param_2)

{
  wint_t _C;
  _locale_t _Locale;
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *extraout_ECX;
  int *piVar3;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007032c0;
  local_10 = ExceptionList;
  _Locale = (_locale_t)(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x30) == 0) {
    FUN_0044ebd0(0);
    _C = FUN_00426f70();
    iVar1 = FID_conflict___iswspace_l(_C,_Locale);
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return;
    }
  }
  piVar3 = param_2;
  if (*param_2 != *(int *)(in_ECX + 0x1c)) {
    *param_2 = *(int *)(in_ECX + 0x1c);
    FUN_00684c50(*(undefined4 *)(*(int *)(in_ECX + 0x1c) + 4));
    uVar2 = *(undefined4 *)(in_ECX + 0x1c);
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    (**(code **)(*(int *)*param_1 + 0x68))(uVar2);
    piVar3 = extraout_ECX;
  }
  FUN_00419e50(200,piVar3);
  local_8 = 0;
  uVar2 = FUN_0049fe30(&param_2,*(undefined4 *)(in_ECX + 0x30));
  local_8._0_1_ = 1;
  local_18 = SUB84((double)((*(float *)(in_ECX + 8) + *(float *)(in_ECX + 4)) -
                           *(float *)(in_ECX + 0xc)) + 6755399441055744.0,0);
  FUN_00642ff0(*(undefined4 *)(in_ECX + 0x1c),uVar2,(float)local_18,0x501502f9,0);
  local_8 = (uint)local_8._1_3_ << 8;
  piVar3 = param_2 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_00642000(param_1);
  FUN_00471b00();
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

