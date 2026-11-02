// rea decompile_all
// name: FUN_00542a90
// address: 0x542a90
// body: available
// range: 0x542a90-0x542ba0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00542a90(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ea8e;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(in_ECX + 0x28);
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  operator_new(0x1c);
  local_8._0_1_ = 1;
  uVar4 = FUN_005b2a40(uVar3);
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar5 = FUN_00542250(uVar4);
  if (*(int *)(in_ECX + 0x2c) != iVar5) {
    if (iVar5 != 0) {
      LOCK();
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
      UNLOCK();
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x2c);
    *(int *)(in_ECX + 0x2c) = iVar5;
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      piVar6 = puVar1 + 1;
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8 = 0xffffffff;
  LeaveCriticalSection(lpCriticalSection);
  iVar5 = *(int *)(in_ECX + 0x2c);
  if (iVar5 != 0) {
    LOCK();
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    UNLOCK();
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x2c) + 8);
  piVar6 = (int *)(iVar2 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  FUN_005424a0(iVar2,iVar5);
  ExceptionList = local_10;
  return;
}

