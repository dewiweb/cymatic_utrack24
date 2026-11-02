// rea decompile_all
// name: thunk_FUN_006f0120
// address: 0x6ee400
// body: available
// range: 0x6ee400-0x6ee404 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_006f0120(void)

{
  wint_t _C;
  _locale_t _Locale;
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  bool bVar4;
  int aiStack_30 [4];
  char cStack_20;
  int iStack_1c;
  int iStack_18;
  char cStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0072971a;
  pvStack_10 = ExceptionList;
  _Locale = (_locale_t)(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  bVar4 = false;
  iStack_1c = 0;
  if (*(char *)(in_ECX + 0xa4) != '\0') {
    return;
  }
  ExceptionList = &pvStack_10;
  if ((*(uint *)(in_ECX + 0xb8) < (uint)(*(int **)(in_ECX + 0xb0))[2]) &&
     (piVar3 = *(int **)(**(int **)(in_ECX + 0xb0) + *(uint *)(in_ECX + 0xb8) * 4),
     piVar3 != (int *)0x0)) {
    iStack_18 = *piVar3;
    FUN_0044ebd0(*(undefined4 *)(in_ECX + 0xbc));
    _C = FUN_00426f70();
  }
  else {
    _C = 0;
  }
  iVar1 = FID_conflict___iswspace_l(_C,_Locale);
  if (iVar1 != 0) {
    iVar1 = FUN_006f2b80(aiStack_30,1);
    bVar4 = true;
    cStack_11 = '\x01';
    if (*(int *)(in_ECX + 0xb8) == *(int *)(iVar1 + 8)) goto LAB_006f01ca;
  }
  cStack_11 = '\0';
LAB_006f01ca:
  if (((bVar4) && (cStack_20 != '\0')) && (cStack_20 = '\0', aiStack_30[0] != 0)) {
    FUN_00415ff0(aiStack_30);
  }
  if (cStack_11 != '\0') {
    uVar2 = FUN_006f22a0(aiStack_30,in_ECX + 0xb0);
    uStack_8 = 0;
    FUN_006f0a50(uVar2,0);
    uStack_8 = 0xffffffff;
    if ((cStack_20 != '\0') && (cStack_20 = '\0', aiStack_30[0] != 0)) {
      FUN_00415ff0(aiStack_30);
    }
  }
  if (*(char *)(in_ECX + 0xa5) == '\0') {
    FUN_0045c990(&DAT_00c05f18);
    uStack_8 = 2;
    (**(code **)(*(int *)(in_ECX + 0x78) + 0x18))(&iStack_18);
    iVar1 = iStack_18;
  }
  else {
    FUN_006ed2a0(*(undefined4 *)(in_ECX + 0xb8),*(undefined4 *)(in_ECX + 0xbc));
    uVar2 = FUN_00635430(&DAT_00c05f14);
    uStack_8 = 1;
    (**(code **)(*(int *)(in_ECX + 0x78) + 0x18))(uVar2);
    iVar1 = iStack_1c;
  }
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = pvStack_10;
  return;
}

