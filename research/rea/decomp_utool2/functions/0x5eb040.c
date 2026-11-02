// rea decompile_all
// name: FUN_005eb040
// address: 0x5eb040
// body: available
// range: 0x5eb040-0x5eb101 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_005eb040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  void *local_20 [3];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b7e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar5 = false;
  local_14 = 0;
  if (param_1 != 0) {
    puVar3 = (undefined4 *)FUN_005eb1c0(local_20);
    bVar5 = true;
    piVar4 = (int *)*puVar3;
    piVar1 = piVar4 + puVar3[2];
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if (param_5 == *piVar4) {
        bVar2 = true;
        goto LAB_005eb09d;
      }
    }
  }
  bVar2 = false;
LAB_005eb09d:
  if (bVar5) {
    FID_conflict__free(local_20[0]);
  }
  if (bVar2) {
    operator_new(0x30);
    local_8 = 0;
    puVar3 = (undefined4 *)FUN_00439fa0(param_1,param_4,param_5,param_7);
    if (*(char *)(puVar3 + 10) != '\0') {
      ExceptionList = local_10;
      return puVar3;
    }
    (**(code **)*puVar3)(1);
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

