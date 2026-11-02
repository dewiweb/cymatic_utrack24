// rea decompile_all
// name: FUN_00695da0
// address: 0x695da0
// body: available
// range: 0x695da0-0x695fc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00695da0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  uint *puStack_3c;
  undefined4 *puStack_38;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721e3b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 0;
  local_14 = in_ECX;
  if (*(int **)(in_ECX + 0xbc) == (int *)0x0) {
    param_1 = (int *)*param_1;
    piVar5 = param_1 + -2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    piVar5 = (int *)&param_1;
    uVar7 = 2;
  }
  else {
    puStack_38 = (undefined4 *)(in_ECX + -0x70);
    puStack_3c = (uint *)&local_1c;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0xbc) + 4))();
    uVar7 = 1;
  }
  iVar3 = *piVar5;
  piVar5 = (int *)(iVar3 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  local_8 = 0;
  iVar6 = iVar3;
  if ((uVar7 & 2) != 0) {
    local_18 = uVar7 & 0xfffffffd;
    piVar5 = param_1 + -2;
    uVar7 = local_18;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        puStack_38 = (undefined4 *)0x695e58;
        param_1 = (int *)iVar3;
        FID_conflict__free(piVar5);
        uVar7 = local_18;
        iVar6 = (int)param_1;
      }
    }
  }
  param_1 = (int *)iVar6;
  if (((uVar7 & 1) != 0) && (piVar5 = (int *)(local_1c + -8), piVar5 != &DAT_00bfe124)) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      puStack_38 = (undefined4 *)0x695e83;
      FID_conflict__free(piVar5);
    }
  }
  if (*(char *)(in_ECX + 0x26) == '\0') {
    puStack_38 = (undefined4 *)&DAT_00c058a4;
    puStack_3c = &local_18;
    piVar5 = (int *)FUN_006329c0();
  }
  else {
    puStack_38 = (undefined4 *)&DAT_00c05894;
    puStack_3c = (uint *)&DAT_00c0589c;
    piVar5 = (int *)FUN_00633060(&local_18);
  }
  pcVar4 = (char *)*piVar5;
  *piVar5 = iVar3;
  piVar5 = (int *)(local_18 - 8);
  param_1 = (int *)pcVar4;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      puStack_38 = (undefined4 *)0x695ef4;
      FID_conflict__free(piVar5);
    }
  }
  uVar7 = *(uint *)(local_14 + 0x84);
  local_18 = uVar7;
  iVar6 = FUN_0044ec90();
  iVar3 = local_14;
  puVar1 = (uint *)(iVar6 + uVar7);
  puStack_3c = (uint *)((int)puVar1 + -1);
  if (*pcVar4 == '\0') {
    puStack_3c = puVar1;
  }
  puStack_38 = *(undefined4 **)(local_14 + 0x84);
  iVar6 = 0;
  if (*(char *)(local_14 + 0x24) == '\0') {
    iVar6 = local_14 + 0x34;
  }
  FUN_006933f0(iVar6);
  puStack_3c = (uint *)0x0;
  if (*(char *)(iVar3 + 0x24) == '\0') {
    puStack_3c = (uint *)(iVar3 + 0x34);
  }
  puStack_38 = puStack_3c;
  FUN_006e8e70(&puStack_3c,0x1000201,0);
  FUN_00693b10(&param_1,local_18,local_14 + 0x98);
  FUN_00696830();
  piVar5 = (int *)(pcVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      puStack_38 = (undefined4 *)0x695fae;
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

