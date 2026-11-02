// rea decompile_all
// name: FUN_0062d4f0
// address: 0x62d4f0
// body: available
// range: 0x62d4f0-0x62d634 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062d4f0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *piVar6;
  undefined4 uStack_3c;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071e088;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_3c = 0x62d528;
  operator_new(0x38);
  local_8 = 0;
  pcVar1 = *(char **)param_3;
  if (*pcVar1 == '\0') {
    uStack_3c = 0x62d54b;
    FUN_00636a10();
    local_8 = CONCAT31(local_8._1_3_,1);
    bVar4 = true;
    bVar3 = false;
  }
  else {
    piVar6 = (int *)(pcVar1 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    local_8 = 2;
    bVar4 = false;
    bVar3 = true;
    param_3 = pcVar1;
  }
  FUN_00636970(&uStack_3c);
  uVar5 = FUN_00456870(param_1);
  if (in_ECX[1] < in_ECX[2] + 1) {
    uStack_3c = 0x62d5c1;
    FUN_00409cf0();
  }
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(undefined4 *)(*in_ECX + iVar2 * 4) = uVar5;
  if (bVar3) {
    piVar6 = (int *)(param_3 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        uStack_3c = 0x62d5f9;
        FID_conflict__free(piVar6);
      }
    }
  }
  if ((bVar4) && (piVar6 = (int *)(local_20 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      uStack_3c = 0x62d61e;
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

