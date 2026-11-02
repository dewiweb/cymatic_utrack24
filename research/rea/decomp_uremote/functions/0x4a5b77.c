// rea decompile_all
// name: FUN_004a5b77
// address: 0x4a5b77
// body: available
// range: 0x4a5b77-0x4a5cbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a5b77(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *in_ECX;
  float10 fVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_44 [24];
  undefined1 local_2c [24];
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0;
  (**(code **)(*(int *)*in_ECX + 8))(local_14,&param_1);
  FUN_004a7c57();
  if (local_14[0] != (undefined4 *)0x0) {
    piVar3 = local_14[0] + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_14[0])(1);
    }
  }
  if (param_1 != (int *)0x0) {
    if (in_ECX[0xb] == 0) {
      if (in_ECX[0xc] == 0) {
        iVar1 = *param_1;
        FUN_004761ad();
        (**(code **)(iVar1 + 0x38))();
      }
      else {
        FUN_004a797e(in_ECX + 0xc);
      }
    }
    else {
      FUN_00476cdf();
      local_8 = CONCAT31(local_8._1_3_,1);
      fVar4 = (float10)FUN_00476367();
      FUN_004769d4((float)fVar4);
      uVar7 = 0xbf000000;
      puVar5 = local_2c;
      uVar6 = 0xbf000000;
      FUN_00474f97(local_44);
      FUN_0047713c(puVar5,uVar6,uVar7);
      cVar2 = FUN_0047764b();
      param_2 = CONCAT31(param_2._1_3_,cVar2);
      if (cVar2 != '\0') {
        FUN_004a8f0b();
        FUN_004a8f0b();
        FUN_00476f96();
      }
      (**(code **)(*param_1 + 0x3c))();
      FUN_004768de();
    }
  }
  local_8 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    piVar3 = param_1 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  return;
}

