// rea decompile_all
// name: FUN_00494790
// address: 0x494790
// body: available
// range: 0x494790-0x4948f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00494790(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  int *_Memory;
  int iVar4;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070248b;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  local_18 = 0;
  if (*(int *)(in_ECX + 4) == 0) {
    FUN_006906c0(uVar2);
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(in_ECX + 4) + 0x84);
    EnterCriticalSection(lpCriticalSection);
    if ((0 < *(int *)(in_ECX + 0x14)) && (FUN_006906c0(uVar2), *(int *)(in_ECX + 4) != 0)) {
      FUN_00690c60();
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  uVar2 = *(uint *)(in_ECX + 0x34) & 3;
  if (uVar2 == 0) {
    if (*(int *)(in_ECX + 4) == 0) {
      ExceptionList = local_10;
      return;
    }
    if (*(char *)(*(int *)(in_ECX + 4) + 0xac) == '\0') {
      ExceptionList = local_10;
      return;
    }
  }
  else if (uVar2 != 2) {
    ExceptionList = local_10;
    return;
  }
  if ((*(int *)(in_ECX + 100) != 0) && (iVar4 = 0, 0 < *(int *)(*(int *)(in_ECX + 100) + 0x60))) {
    do {
      operator_new(0x80);
      local_8 = 0;
      uVar3 = FUN_006bb530(&local_1c,iVar4);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = local_14 | 1;
      local_14 = local_18;
      uVar3 = FUN_004940c0(*(undefined4 *)(in_ECX + 0x58),*(undefined4 *)(in_ECX + 100),iVar4,uVar3,
                           *(undefined4 *)(in_ECX + 0x70));
      local_8 = 2;
      FUN_006e0040(uVar3,extraout_ECX);
      local_8 = 0xffffffff;
      local_14 = local_14 & 0xfffffffe;
      _Memory = (int *)(local_1c + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(*(int *)(in_ECX + 100) + 0x60));
  }
  ExceptionList = local_10;
  return;
}

