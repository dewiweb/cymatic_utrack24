// rea decompile_all
// name: FUN_0047e14b
// address: 0x47e14b
// body: available
// range: 0x47e14b-0x47e203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_0047e14b(void)

{
  int *piVar1;
  int in_ECX;
  undefined1 local_2c [12];
  int *local_20;
  undefined1 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x47e157;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x2c) + 0xc))();
  local_8 = 0;
  local_20 = piVar1;
  (**(code **)(*piVar1 + 4))
            (local_18,*(int *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0x38),
             *(undefined4 *)(in_ECX + 0x3c),*(int *)(in_ECX + 8) != 1);
  FUN_0047e2f2();
  local_8._0_1_ = 1;
  FUN_00474d0f();
  FUN_0047cc87();
  FUN_0047e2f2();
  local_8._0_1_ = 3;
  FUN_0047d915(local_2c,0,0,0);
  FUN_004c4d7a();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0047cca3();
  LOCK();
  *(int *)(local_14 + 4) = *(int *)(local_14 + 4) + 1;
  UNLOCK();
  FUN_004c4d7a();
  local_8 = 0xffffffff;
  (**(code **)*piVar1)(1);
  return local_14;
}

