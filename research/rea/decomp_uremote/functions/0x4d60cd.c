// rea decompile_all
// name: FUN_004d60cd
// address: 0x4d60cd
// body: available
// range: 0x4d60cd-0x4d61c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004d60cd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6,char param_7,undefined4 param_8,
                 undefined4 param_9)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4d60d9;
  auStack_24[0] = 0x4d60e5;
  cVar1 = FUN_004c3153();
  if (cVar1 == '\0') {
    param_6 = auStack_24;
    uStack_28 = 0x3f000000;
    puStack_30 = (undefined4 *)0x0;
    uStack_34 = 0x1000600;
    puStack_2c = param_6;
    FUN_004c1e29(&param_6);
    puStack_30 = (undefined4 *)0x4d6112;
    FUN_00476237();
  }
  else if ((param_7 == '\0') && ((char)param_6 == '\0')) {
    param_6 = auStack_24;
    uStack_28 = 0;
    puStack_2c = (undefined4 *)0x1000600;
    uStack_34 = 0x4d6135;
    puStack_30 = param_6;
    FUN_004c1e29();
  }
  else {
    param_6 = auStack_24;
    uStack_28 = 0;
    puStack_2c = (undefined4 *)0x1000900;
    uStack_34 = 0x4d614b;
    puStack_30 = param_6;
    FUN_004c1e29();
    uStack_28 = 0x4d6153;
    FUN_0047d23a();
    param_6 = auStack_24;
    uStack_28 = 0;
    puStack_2c = (undefined4 *)0x1000800;
    uStack_34 = 0x4d6168;
    puStack_30 = param_6;
    FUN_004c1e29();
  }
  uStack_28 = 0x4d616f;
  FUN_0047cda7();
  auStack_24[0] = param_5;
  uStack_28 = param_4;
  puStack_30 = (undefined4 *)&param_7;
  puStack_2c = (undefined4 *)param_9;
  puVar3 = &uStack_34;
  uStack_34 = 0x4d6183;
  uVar2 = (**(code **)(*in_ECX + 0x2c))();
  puVar3[-1] = uVar2;
  local_8 = 0;
  puVar4 = puVar3 + -2;
  puVar3[-2] = 0x4d618f;
  FUN_0047ceaa();
  local_8 = 0xffffffff;
  puVar5 = (undefined1 *)((int)puVar4 + -4);
  *(undefined4 *)((int)puVar4 + -4) = 0x4d619b;
  FUN_004c4d7a();
  *(undefined4 *)(puVar5 + -4) = extraout_ECX;
  *(undefined4 *)(puVar5 + -4) = 0;
  *(undefined4 *)(puVar5 + -8) = 1;
  param_6 = (undefined4 *)(puVar5 + -0xc);
  *(undefined4 *)(puVar5 + -0xc) = extraout_ECX;
  *(undefined4 *)(puVar5 + -0x10) = param_3;
  *(undefined4 *)(puVar5 + -0x14) = param_2;
  *(undefined4 *)(puVar5 + -0xc) = 0x24;
  *(undefined4 *)(puVar5 + -0x18) = 0;
  *(undefined4 *)(puVar5 + -0x1c) = 0;
  *(undefined4 *)(puVar5 + -0x20) = 0x4d61c1;
  FUN_0047d12a();
  *(undefined4 *)(puVar5 + -4) = 0x4d61c6;
  return;
}

