// rea decompile_all
// name: FUN_005ff3f0
// address: 0x5ff3f0
// body: available
// range: 0x5ff3f0-0x5ff4b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_005ff3f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  void *local_20 [3];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b865;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar6 = false;
  local_14 = 0;
  if (param_1 != 0) {
    puVar3 = (undefined4 *)FUN_005ff640(local_20);
    bVar6 = true;
    piVar5 = (int *)*puVar3;
    piVar1 = piVar5 + puVar3[2];
    for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
      if (param_5 == *piVar5) {
        bVar2 = true;
        goto LAB_005ff44d;
      }
    }
  }
  bVar2 = false;
LAB_005ff44d:
  if (bVar6) {
    FID_conflict__free(local_20[0]);
  }
  if (!bVar2) {
    ExceptionList = local_10;
    return 0;
  }
  operator_new(0x68);
  local_8 = 0;
  uVar4 = FUN_00438a00(param_1,param_4,param_5,param_6);
  ExceptionList = local_10;
  return uVar4;
}

