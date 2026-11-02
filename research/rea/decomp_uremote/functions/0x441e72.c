// rea decompile_all
// name: FUN_00441e72
// address: 0x441e72
// body: available
// range: 0x441e72-0x4420b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00441e72(undefined4 param_1)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 **ppuVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  float fVar9;
  undefined1 **local_50;
  undefined4 **local_4c;
  undefined4 *local_48 [5];
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  float local_20;
  undefined1 **local_1c;
  undefined1 **local_18;
  undefined1 **local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x441e7e;
  iVar8 = *(int *)(in_ECX + 0x18);
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  local_4c = (undefined4 **)0x441e93;
  local_48[0] = puVar1;
  iVar4 = FUN_00440367();
  local_14 = (undefined1 **)(float)iVar4;
  local_18 = (undefined1 **)((float)local_14 * 0.7);
  local_48[0] = (undefined4 *)0x441ebd;
  local_30 = (undefined1 *)puVar1;
  local_20 = (float)FUN_005b3fb0();
  local_48[0] = (undefined4 *)0x441eca;
  local_1c = (undefined1 **)FUN_005b3fb0();
  local_24 = (undefined1 *)((iVar8 - (int)local_1c) / 2);
  if (*(char *)(in_ECX + 0x7c) == '\0') {
    local_48[0] = (undefined4 *)0x441ef2;
    FUN_0044bfc5();
  }
  else {
    local_48[0] = (undefined4 *)0x441ee6;
    FUN_0044bfc5();
  }
  local_30 = (undefined1 *)local_48;
  local_4c = (undefined4 **)0x441f04;
  FUN_004d076d();
  local_4c = (undefined4 **)0x441f0e;
  FUN_0047cda7();
  local_48[0] = (undefined4 *)((float)local_18 * 0.5);
  local_50 = (undefined1 **)(float)(int)local_1c;
  local_30 = (undefined1 *)(float)(int)local_20;
  fVar2 = (float)(int)local_24;
  local_4c = (undefined4 **)local_18;
  local_2c = local_50;
  local_28 = local_48[0];
  FUN_0047d535(fVar2,local_30);
  local_4c = (undefined4 **)0x441f66;
  local_1c = (undefined1 **)local_48;
  FUN_004d076d();
  local_4c = (undefined4 **)0x441f6d;
  FUN_0047cda7();
  local_48[0] = (undefined4 *)((float)local_18 * 0.7);
  local_4c = &local_1c;
  local_50 = (undefined1 **)0x441f89;
  local_1c = (undefined1 **)local_48[0];
  FUN_0044bfc5();
  local_50 = (undefined1 **)0x441f94;
  local_48[0] = (undefined4 *)FUN_0049f81a();
  local_8 = 0;
  local_4c = (undefined4 **)0x441f9d;
  FUN_0047ceaa();
  local_8 = 0xffffffff;
  local_4c = (undefined4 **)0x441fa9;
  FUN_004c4d7a();
  local_1c = local_14;
  if (*(char *)(in_ECX + 0x7c) != '\0') {
    local_1c = (undefined1 **)0x0;
  }
  local_4c = (undefined4 **)&local_24;
  local_50 = (undefined1 **)0x441fd1;
  FUN_0046537e();
  local_4c = (undefined4 **)0x1;
  local_34 = (undefined1 *)&local_50;
  local_8 = 1;
  local_50 = (undefined1 **)0x24;
  uVar5 = FUN_005b3fb0();
  uVar6 = FUN_005b3fb0(uVar5);
  fVar9 = local_20;
  uVar7 = FUN_005b3fb0(local_20,uVar6);
  FUN_0047d02d(param_1,&local_24,uVar7,fVar9,uVar6,uVar5);
  local_8 = 0xffffffff;
  local_4c = (undefined4 **)0x44201b;
  FUN_004652d6();
  local_4c = (undefined4 **)0x442020;
  iVar8 = FUN_0044bfc5();
  local_4c = (undefined4 **)(iVar8 + 0xc4);
  local_34 = (undefined1 *)&local_4c;
  local_50 = (undefined1 **)0x442033;
  FUN_004d076d();
  local_50 = (undefined1 **)0x44203a;
  FUN_0047cda7();
  ppuVar3 = (undefined4 **)local_14;
  if (*(char *)(in_ECX + 0x7c) == '\0') {
    ppuVar3 = (undefined4 **)0x0;
  }
  local_4c = (undefined4 **)local_14;
  local_50 = local_14;
  local_20 = fVar2 + (float)ppuVar3;
  FUN_0047d49c(local_20,0);
  if (*(char *)(in_ECX + 0x7c) == '\0') {
    local_4c = (undefined4 **)0x3f800000;
    local_50 = (undefined1 **)local_28;
    FUN_0047d5bd(param_1,fVar2,local_30,local_2c,local_18);
  }
  return;
}

