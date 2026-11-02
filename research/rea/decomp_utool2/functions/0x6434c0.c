// rea decompile_all
// name: FUN_006434c0
// address: 0x6434c0
// body: available
// range: 0x6434c0-0x643725 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006434c0(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  undefined4 *in_EDX;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM0_Db;
  undefined4 uVar6;
  int local_28;
  undefined4 *local_24;
  int local_20;
  float local_1c;
  undefined4 *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071fe54;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = in_EDX;
  local_28 = FUN_0045c230(*in_EDX,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_14 = "";
  local_8 = 0;
  if (0 < local_28) {
    FUN_006379a0(&local_24,0,local_28);
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar2 = (undefined4 *)FUN_006378b0(&local_1c);
    pcVar1 = (char *)*puVar2;
    *puVar2 = local_14;
    piVar4 = (int *)((int)local_1c + -8);
    local_14 = pcVar1;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar4 = local_24 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if (*local_14 != '\0') goto LAB_006435dc;
  }
  piVar4 = (int *)FUN_00643f40();
  piVar5 = (int *)(*piVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  pcVar1 = (char *)*piVar4;
  LOCK();
  UNLOCK();
  piVar4 = (int *)(local_14 + -8);
  local_14 = pcVar1;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
LAB_006435dc:
  FUN_00637a90(&local_28,local_28 + 1);
  local_8._0_1_ = 2;
  uVar6 = 0x6435fb;
  FUN_00620cf0(&local_18);
  local_8._0_1_ = 4;
  piVar4 = (int *)(local_28 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      uVar6 = 0x64361f;
      FID_conflict__free(piVar4);
    }
  }
  local_24 = local_18;
  FUN_0045c380();
  local_1c = (float)(double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
  if (local_1c <= 0.0) {
    local_1c = 10.0;
  }
  FUN_00634090(&local_20,&DAT_00c04d84,uVar6,0);
  local_8 = CONCAT31(local_8._1_3_,5);
  operator_new(0x28);
  iVar3 = FUN_00468b50(&local_14,&local_20);
  *in_ECX = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  piVar4 = (int *)(local_20 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = local_18 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

