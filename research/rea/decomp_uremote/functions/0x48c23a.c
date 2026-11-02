// rea decompile_all
// name: FUN_0048c23a
// address: 0x48c23a
// body: available
// range: 0x48c23a-0x48c331 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0048c23a(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = param_1[1];
  if (0x3b9ac9f0 < param_3) {
    FUN_0048c225();
  }
  uVar7 = (uint)param_3;
  if (((uint)param_3 & 7) != 0) {
    uVar7 = (int)param_3 + (8 - ((uint)param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  param_3 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)(iVar4 + 0x34 + param_2 * 4);
  puVar6 = (undefined4 *)*puVar3;
  if (puVar6 != (undefined4 *)0x0) {
    do {
      puVar5 = puVar6;
      puVar6 = puVar5;
      if (uVar7 <= (uint)puVar5[2]) break;
      puVar6 = (undefined4 *)*puVar5;
      param_3 = puVar5;
    } while (puVar6 != (undefined4 *)0x0);
    if (puVar6 != (undefined4 *)0x0) goto LAB_0048c31c;
  }
  iVar1 = uVar7 + 0x10;
  if (param_3 == (undefined4 *)0x0) {
    uVar8 = *(uint *)(&DAT_005ff388 + param_2 * 4);
  }
  else {
    uVar8 = *(uint *)(&DAT_005ff390 + param_2 * 4);
  }
  if (1000000000U - iVar1 < uVar8) {
    uVar8 = 1000000000U - iVar1;
  }
  while( true ) {
    puVar6 = _malloc(uVar8 + iVar1);
    if (puVar6 != (undefined4 *)0x0) break;
    uVar8 = uVar8 >> 1;
    if (uVar8 < 0x32) {
      FUN_0048c225();
    }
  }
  piVar2 = (int *)(iVar4 + 0x4c);
  *piVar2 = *piVar2 + uVar8 + iVar1;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = uVar8 + uVar7;
  if (param_3 == (undefined4 *)0x0) {
    param_3 = puVar3;
  }
  *param_3 = puVar6;
LAB_0048c31c:
  iVar4 = puVar6[1];
  puVar6[2] = puVar6[2] - uVar7;
  puVar6[1] = iVar4 + uVar7;
  return iVar4 + 0x10 + (int)puVar6;
}

