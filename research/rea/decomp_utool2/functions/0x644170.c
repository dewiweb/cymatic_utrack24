// rea decompile_all
// name: FUN_00644170
// address: 0x644170
// body: available
// range: 0x644170-0x644298 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00644170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071feda;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (int *)0x0;
  iVar5 = FUN_00644820(param_1,1);
  if (iVar5 == 0) {
    FUN_00644ae0(uVar4);
    piVar2 = local_14;
    local_8 = 0;
    if (local_14 != (int *)0x0) {
      if (local_14 != in_ECX) {
        uVar8 = (**(code **)(*local_14 + 0x20))(param_1,param_2,param_3);
        LOCK();
        piVar1 = piVar2 + 1;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*piVar2)(1);
        }
        ExceptionList = local_10;
        return uVar8;
      }
      LOCK();
      piVar2 = local_14 + 1;
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*local_14)(1);
      }
    }
  }
  else {
    iVar5 = iVar5 + 4;
    cVar3 = FUN_00682580();
    if (cVar3 == '\0') {
      operator_new(0x20);
      puVar7 = local_24;
      uVar9 = 0;
      uVar8 = 1;
      puVar6 = local_34;
      FUN_0067c320(local_44,param_2);
      FUN_0046f710(puVar6);
      uVar8 = FUN_0040e510(puVar7,uVar8,uVar9);
      uVar8 = FUN_0067da10(uVar8,iVar5,param_2);
      ExceptionList = local_10;
      return uVar8;
    }
  }
  ExceptionList = local_10;
  return 0;
}

