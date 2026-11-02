// rea decompile_all
// name: FUN_004565d3
// address: 0x4565d3
// body: available
// range: 0x4565d3-0x456695 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004565d3(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  float local_2c [5];
  undefined1 *local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4565df;
  local_2c[0] = 6.373204e-39;
  iVar2 = FUN_0044bfc5();
  local_14 = (float)*(int *)(iVar2 + 8);
  local_2c[0] = 6.373219e-39;
  iVar2 = FUN_0044bfc5();
  iVar2 = *(int *)(iVar2 + 0xc);
  local_18 = (undefined1 *)local_2c;
  puStack_30 = (undefined4 *)0x456604;
  FUN_004d076d();
  puStack_30 = (undefined4 *)0x45660e;
  FUN_0047cda7();
  param_1 = local_14 * 0.5;
  puStack_30 = &param_1;
  uStack_34 = 0x45662a;
  local_2c[0] = param_1;
  FUN_0044bfc5();
  uStack_34 = 0x456635;
  local_2c[0] = (float)FUN_0049f81a();
  local_8 = 0;
  puStack_30 = (undefined4 *)0x45663f;
  FUN_0047ceaa();
  local_8 = 0xffffffff;
  puStack_30 = (undefined4 *)0x45664b;
  FUN_004c4d7a();
  if (*(char *)(in_ECX + 0x78) == '\0') {
    uVar1 = *(undefined4 *)(in_ECX + 0x1c);
    iVar3 = *(int *)(in_ECX + 0x70);
  }
  else {
    uVar1 = *(undefined4 *)(in_ECX + 0x74);
    iVar3 = *(int *)(in_ECX + 0x18);
  }
  puStack_30 = (undefined4 *)0x3f800000;
  uStack_34 = 2;
  local_18 = (undefined1 *)&uStack_38;
  uStack_38 = 0x21;
  FUN_0047d12a(iVar2,0,iVar3 + iVar2 * -2,uVar1);
  return;
}

