// rea decompile_all
// name: FUN_00463088
// address: 0x463088
// body: available
// range: 0x463088-0x46318e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_00463088(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  undefined4 **local_34 [5];
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 local_18 [4];
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x463094;
  local_1c = (undefined1 *)0x0;
  if (*(char *)**(undefined4 **)(in_ECX + 4) == '\0') {
    local_34[0] = (undefined4 **)0x18;
    puVar3 = (undefined4 *)FUN_005af82d();
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
      *puVar3 = juce::Expression::Helpers::Constant::vftable;
      *(undefined1 *)(puVar3 + 4) = 0;
    }
    *param_1 = (int)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return param_1;
    }
    puVar3[1] = puVar3[1] + 1;
    return param_1;
  }
  local_34[0] = local_14;
  FUN_0046338e();
  local_8 = 0;
  if (local_14[0] != (undefined4 *)0x0) {
    local_34[0] = (undefined4 **)0x0;
    cVar2 = FUN_004631a5(&DAT_0091309c);
    if ((cVar2 != '\0') || (*(char *)**(undefined4 **)(in_ECX + 4) == '\0')) {
      local_14[0][1] = local_14[0][1] + 1;
      *param_1 = (int)local_14[0];
      goto LAB_00463178;
    }
  }
  local_1c = (undefined1 *)local_34;
  local_34[0] = (undefined4 **)**(undefined4 **)(in_ECX + 4);
  uVar4 = FUN_004653c3();
  local_20 = (undefined1 *)local_34;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00465bec(local_34,uVar4);
  local_34[0] = (undefined4 **)FUN_00465c6b(local_18);
  iVar5 = FUN_0046318f();
  *param_1 = iVar5;
  if (iVar5 != 0) {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
  }
  local_34[0] = (undefined4 **)0x463168;
  FUN_004652d6();
  local_34[0] = (undefined4 **)0x463170;
  FUN_004652d6();
  if (local_14[0] == (undefined4 *)0x0) {
    return param_1;
  }
LAB_00463178:
  local_8 = 0xffffffff;
  piVar1 = local_14[0] + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    local_34[0] = (undefined4 **)0x1;
    (**(code **)*local_14[0])();
  }
  return param_1;
}

