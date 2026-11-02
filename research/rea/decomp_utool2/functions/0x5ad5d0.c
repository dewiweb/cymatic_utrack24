// rea decompile_all
// name: FUN_005ad5d0
// address: 0x5ad5d0
// body: available
// range: 0x5ad5d0-0x5ad80c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ad5d0(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = (int)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007182be;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == (void *)(in_ECX + 0x318)) {
    FUN_0045c990("http://www.cymaticaudio.com",uVar3);
    local_8 = 0;
    FUN_006365e0(&param_1);
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar5 = (int *)((int)param_1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    FUN_00636420();
    local_8 = 0xffffffff;
    FUN_00636570();
  }
  if (iVar2 == in_ECX + 0x3f8) {
    FUN_0045c990("http://www.cymaticaudio.com/downloads",uVar3);
    local_8 = 3;
    FUN_006365e0(&param_1);
    local_8 = CONCAT31(local_8._1_3_,5);
    piVar5 = (int *)((int)param_1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    FUN_00636420();
    local_8 = 0xffffffff;
    FUN_00636570();
  }
  if (iVar2 == in_ECX + 0x4d8) {
    FUN_0045c990("http://www.cymaticaudio.com/forum",uVar3);
    local_8 = 6;
    FUN_006365e0(&param_1);
    local_8 = CONCAT31(local_8._1_3_,8);
    piVar5 = (int *)((int)param_1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    FUN_00636420();
    local_8 = 0xffffffff;
    FUN_00636570();
  }
  if (iVar2 == in_ECX + 0x5b8) {
    FUN_0045c990("http://www.cymaticaudio.com/downloads",uVar3);
    local_8 = 9;
    FUN_006365e0(&param_1);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    piVar5 = (int *)((int)param_1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    FUN_00636420();
    local_8 = 0xffffffff;
    FUN_00636570();
  }
  if (iVar2 == in_ECX + 0x698) {
    param_1 = operator_new(0xa0);
    uVar4 = FUN_0041f170();
    if (DAT_00c8a5e4 != 0) {
      FUN_005b5fb0(uVar4);
      FUN_005b66b0();
    }
  }
  ExceptionList = local_10;
  return;
}

