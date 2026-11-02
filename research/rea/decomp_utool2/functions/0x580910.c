// rea decompile_all
// name: FUN_00580910
// address: 0x580910
// body: available
// range: 0x580910-0x580b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00580910(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int *piVar3;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007128e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((*(int *)(in_ECX + 0x18) + -0x162 < *(int *)(param_1 + 8)) &&
      (*(int *)(param_1 + 0xc) < 0x20)) && ((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0)) {
    piStack_34 = (int *)0x580976;
    FUN_0045c990();
    local_8 = 0;
    piStack_34 = (int *)0x58098d;
    FUN_0045c990();
    local_8._0_1_ = 1;
    piStack_34 = (int *)0x5809a1;
    FUN_0045c990();
    local_8._0_1_ = 2;
    piStack_34 = (int *)0x5809b5;
    FUN_0045c990();
    piStack_34 = (int *)0x0;
    piStack_38 = &local_1c;
    local_8 = CONCAT31(local_8._1_3_,3);
    piStack_3c = &local_18;
    cVar2 = FUN_006d3250(&local_14);
    piVar3 = (int *)(param_1 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        piStack_34 = (int *)0x5809fd;
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(local_14 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        piStack_34 = (int *)0x580a20;
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(local_18 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        piStack_34 = (int *)0x580a43;
        FID_conflict__free(piVar3);
      }
    }
    local_8 = 0xffffffff;
    piVar3 = (int *)(local_1c + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        piStack_34 = (int *)0x580a6a;
        FID_conflict__free(piVar3);
      }
    }
    if (cVar2 != '\0') {
      FUN_005b19a0();
      FUN_006e6400(&piStack_3c);
      FUN_006ce9f0(1);
      piStack_34 = (int *)0x580a9f;
      FUN_0045c990();
      local_8 = 4;
      piStack_34 = (int *)0x580ab6;
      FUN_0045c990();
      local_8._0_1_ = 5;
      piStack_34 = (int *)0x580aca;
      FUN_0045c990();
      piStack_34 = &local_18;
      local_8 = CONCAT31(local_8._1_3_,6);
      piStack_38 = &local_1c;
      piStack_3c = (int *)0x580ae8;
      FUN_006d3510();
      FUN_00637c10();
      FUN_00637c10();
      FUN_00637c10();
    }
  }
  ExceptionList = local_10;
  return;
}

