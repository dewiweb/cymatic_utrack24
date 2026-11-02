// rea decompile_all
// name: FUN_00422dbf
// address: 0x422dbf
// body: available
// range: 0x422dbf-0x422e54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00422dbf(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar5 = (undefined1 *)FUN_00422d4b(param_4);
  uVar7 = 0;
  if (puVar5 != (undefined1 *)0x0) {
    uVar1 = puVar5[4];
    uVar2 = puVar5[5];
    uVar3 = puVar5[6];
    uVar4 = puVar5[7];
    if ((CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]) == 0) ||
       (iVar6 = FUN_00422c48(param_3), iVar6 == 0)) {
      if (CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00422cc4(param_3);
      }
    }
    else {
      uVar7 = (**(code **)(*(int *)(param_2 + 0xc) + 0xc))(param_2,param_3);
    }
  }
  return uVar7;
}

