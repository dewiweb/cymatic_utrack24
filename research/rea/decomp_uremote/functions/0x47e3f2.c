// rea decompile_all
// name: FUN_0047e3f2
// address: 0x47e3f2
// body: available
// range: 0x47e3f2-0x47e4fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0047e3f2(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_ECX;
  int extraout_ECX;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 local_1c [20];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x47e3fe;
  piVar1 = (int *)*in_ECX;
  if ((piVar1 == (int *)0x0) || ((piVar1[3] == param_2 && (piVar1[4] == param_3)))) {
    param_1 = FUN_0049f50b();
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))();
    local_8 = 1;
    uVar4 = FUN_0047e3d7();
    (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 4))
              (local_1c,*(undefined4 *)(extraout_ECX + 8),param_2,param_3,(uint)uVar4 & 0xff);
    FUN_0047e2f2();
    local_8._0_1_ = 2;
    FUN_00474d0f();
    FUN_0047cc87();
    local_8._0_1_ = 3;
    FUN_0047d907(1);
    uVar5 = 0;
    uVar3 = FUN_00477435((float)param_2 / (float)*(int *)(*in_ECX + 0xc),
                         (float)param_3 / (float)*(int *)(*in_ECX + 0x10),0);
    FUN_0047dab7(uVar3,uVar5);
    FUN_0049f50b();
    local_8._0_1_ = 2;
    FUN_0047cca3();
    FUN_004c4d7a();
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)*puVar2)(1);
  }
  return param_1;
}

