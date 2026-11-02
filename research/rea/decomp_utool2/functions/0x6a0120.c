// rea decompile_all
// name: FUN_006a0120
// address: 0x6a0120
// body: available
// range: 0x6a0120-0x6a025a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006a0120(undefined4 param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00722aa6;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  operator_new(0x14);
  local_8._0_1_ = 1;
  puVar4 = (undefined4 *)FUN_004998f0(uVar3);
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar5 = (int *)FUN_006a0260(param_1,puVar4 + 1);
  puVar7 = puVar4;
  puVar8 = param_2;
  if (piVar5 != (int *)0x0) {
    piVar1 = (int *)puVar4[2];
    if ((piVar1 != piVar5) && (puVar4[2] = piVar5, piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    (**(code **)(*piVar5 + 0x28))(1);
    puVar8 = (undefined4 *)0x0;
    cVar2 = FUN_006d1aa0(0);
    if (cVar2 == '\0') {
      FUN_0048c530();
      FUN_006ca6c0(piVar5,0);
      FUN_006ca640(piVar5,param_2);
      (**(code **)(*piVar5 + 0x28))(1);
    }
    puVar7 = (undefined4 *)0x0;
    FUN_0048c530(piVar5,puVar4);
    FUN_006ca640(piVar5,puVar4);
    FUN_006e9910(0);
    if ((param_2 == (undefined4 *)0x0) && (param_3 != '\0')) {
      uVar6 = FUN_006e5240();
      ExceptionList = local_10;
      return uVar6;
    }
  }
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)*puVar7)(1);
  }
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)*puVar8)(1);
  }
  ExceptionList = local_10;
  return 0;
}

