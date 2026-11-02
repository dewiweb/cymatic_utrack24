// rea decompile_all
// name: FUN_006735f0
// address: 0x6735f0
// body: available
// range: 0x6735f0-0x673785 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006735f0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *in_ECX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720440;
  local_10 = ExceptionList;
  piVar3 = (int *)*in_ECX;
  if ((piVar3 != (int *)0x0) && ((piVar3[3] != param_2 || (piVar3[4] != param_3)))) {
    ExceptionList = &local_10;
    piVar3 = (int *)(**(code **)(*piVar3 + 0xc))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    iVar1 = *in_ECX;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar1 + 8);
    }
    piVar5 = (int *)(**(code **)(*piVar3 + 4))
                              (&local_14,*(undefined4 *)(iVar1 + 8),param_2,param_3,
                               CONCAT31((int3)((uint)iVar4 >> 8),iVar4 != 1));
    piVar5 = (int *)*piVar5;
    if (piVar5 != (int *)0x0) {
      LOCK();
      piVar5[1] = piVar5[1] + 1;
      UNLOCK();
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar6 = local_14 + 1;
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*local_14)(1);
      }
    }
    piVar6 = (int *)0x0;
    if (piVar5 != (int *)0x0) {
      piVar6 = (int *)(**(code **)(*piVar5 + 4))();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)(*piVar6 + 0x4c))(1);
    if (*in_ECX != 0) {
      cVar2 = (**(code **)(*piVar6 + 0x30))();
      if (cVar2 == '\0') {
        (**(code **)(*piVar6 + 0x60))();
      }
    }
    *param_1 = (int)piVar5;
    (**(code **)*piVar6)(1);
    (**(code **)*piVar3)(1);
    ExceptionList = local_10;
    return param_1;
  }
  *param_1 = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar3[1] = piVar3[1] + 1;
    UNLOCK();
  }
  return param_1;
}

