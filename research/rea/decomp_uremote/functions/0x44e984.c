// rea decompile_all
// name: FUN_0044e984
// address: 0x44e984
// body: available
// range: 0x44e984-0x44ea06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0044e984(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar3 = (undefined4 *)auStack_20;
  local_8 = 5;
  uStack_24 = 0x44e9a5;
  FUN_0044ea4b();
  uStack_24 = 0x44e9b0;
  FUN_0045b93a();
  local_8._0_1_ = 4;
  if (*(undefined4 **)(param_1 + 0xec) != (undefined4 *)0x0) {
    uStack_24 = 1;
    puVar3 = &uStack_28;
    uStack_28 = 0x44e9c4;
    (**(code **)**(undefined4 **)(param_1 + 0xec))();
  }
  local_8._0_1_ = 3;
  if (*(undefined4 **)(param_1 + 0xe8) != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0xe8);
    *(undefined4 *)((int)puVar3 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar4 = (undefined4 *)((int)puVar3 + -8);
    puVar3 = (undefined4 *)((int)puVar3 + -8);
    *puVar4 = 0x44e9d8;
    (*pcVar2)();
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)((int)puVar3 + -4) = 0x44e9e4;
  FUN_004dcd10();
  *(undefined4 *)((int)puVar3 + -4) = 0x44e9ec;
  FUN_0047478c();
  *(undefined4 *)((int)puVar3 + -4) = 0x44e9f4;
  FUN_004dff71();
  local_8 = 0xffffffff;
  *(undefined4 *)((int)puVar3 + -4) = 0x44e9ff;
  FUN_004f03cc();
  *(undefined4 *)((int)puVar3 + -4) = 0x44ea04;
  return;
}

