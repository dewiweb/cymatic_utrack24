// rea decompile_all
// name: FUN_00468f90
// address: 0x468f90
// body: available
// range: 0x468f90-0x469078 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00468f90(int *param_1,int *param_2,int param_3,undefined1 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007012c3;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *param_1;
  *in_ECX = iVar4;
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  iVar4 = *param_2;
  in_ECX[1] = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  local_8 = 1;
  in_ECX[2] = param_3;
  iVar4 = *(int *)(*param_2 + 0x14);
  iVar5 = iVar4;
  FUN_006831f0(param_1);
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = iVar5;
  in_ECX[6] = iVar4;
  *(undefined1 *)(in_ECX + 9) = param_4;
  iVar4 = FUN_0045c230(*param_1,uVar2);
  if (iVar4 < 0) {
    iVar4 = FUN_0045c230(*param_1,uVar2);
    if (iVar4 < 0) {
      uVar1 = 0;
      goto LAB_00469061;
    }
  }
  uVar1 = 1;
LAB_00469061:
  *(undefined1 *)((int)in_ECX + 0x25) = uVar1;
  ExceptionList = local_10;
  return;
}

