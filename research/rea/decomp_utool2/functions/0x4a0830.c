// rea decompile_all
// name: FUN_004a0830
// address: 0x4a0830
// body: available
// range: 0x4a0830-0x4a091c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a0830(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int *in_ECX;
  int *piVar7;
  undefined4 in_XMM0_Da;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fedf8;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*in_ECX != *param_1) && (local_14 = in_ECX, cVar4 = FUN_00468d30(*param_1), cVar4 == '\0')) {
    iVar1 = *param_1;
    if (*in_ECX != iVar1) {
      if (iVar1 != 0) {
        LOCK();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        UNLOCK();
      }
      puVar2 = (undefined4 *)*in_ECX;
      *in_ECX = iVar1;
      if (puVar2 != (undefined4 *)0x0) {
        LOCK();
        piVar7 = puVar2 + 1;
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*puVar2)(1,uVar5);
        }
      }
    }
    iVar1 = in_ECX[4];
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar3 = *(int *)(in_ECX[2] + iVar1 * 4);
      uVar6 = FUN_0049fd60(&local_14,param_2);
      local_8 = 0;
      FUN_006831f0(uVar6);
      local_8 = 0xffffffff;
      piVar7 = local_14 + -2;
      *(undefined4 *)(iVar3 + 4) = in_XMM0_Da;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

