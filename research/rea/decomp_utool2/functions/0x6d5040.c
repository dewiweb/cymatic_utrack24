// rea decompile_all
// name: FUN_006d5040
// address: 0x6d5040
// body: available
// range: 0x6d5040-0x6d5181 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d5040(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727368;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == 0x1001) {
    pcVar7 = "Application";
    FUN_0045c990("Application",DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    uVar3 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar4 = FUN_00637250();
    iVar2 = param_2;
    FUN_0068a030(uVar4,uVar3,&param_1,pcVar7);
    piVar5 = (int *)(local_14 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(param_1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    iVar6 = *(int *)(iVar2 + 0x18) + 1;
    if (*(int *)(iVar2 + 0x14) < iVar6) {
      FUN_0041c930(iVar6 / 2 + *(int *)(iVar2 + 0x18) + 9 & 0xfffffff8);
    }
    iVar6 = *(int *)(iVar2 + 0x18);
    *(int *)(iVar2 + 0x18) = iVar6 + 1;
    puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x10) + iVar6 * 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x71;
      puVar1[1] = 2;
      puVar1[2] = 0;
    }
  }
  ExceptionList = local_10;
  return;
}

