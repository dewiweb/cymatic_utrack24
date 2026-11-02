// rea decompile_all
// name: FUN_0040bad0
// address: 0x40bad0
// body: available
// range: 0x40bad0-0x40bbea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040bad0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  void *local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc4c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x84) + 4))(local_1c,0,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_006e86d0(0);
  uVar5 = 0;
  if (0 < (int)local_14) {
    bVar7 = local_14 != 0;
    do {
      if (bVar7) {
        ppuVar2 = (undefined **)((int)local_1c[0] + uVar5 * 4);
      }
      else {
        ppuVar2 = &PTR_DAT_00c7ed68;
      }
      uVar5 = uVar5 + 1;
      FUN_006e8760(ppuVar2,uVar5);
      bVar7 = uVar5 < local_14;
    } while ((int)uVar5 < (int)local_14);
  }
  uVar3 = FUN_004e90e0();
  local_8._0_1_ = 1;
  FUN_006e8760(uVar3,0xffffffff);
  local_8 = (uint)local_8._1_3_ << 8;
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_006e83a0(0xffffffff,0);
  iVar6 = 0;
  if (0 < (int)local_14) {
    do {
      piVar4 = (int *)(*(int *)((int)local_1c[0] + iVar6 * 4) + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_14);
  }
  FID_conflict__free(local_1c[0]);
  ExceptionList = local_10;
  return;
}

