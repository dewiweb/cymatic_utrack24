// rea decompile_all
// name: FUN_004d8521
// address: 0x4d8521
// body: available
// range: 0x4d8521-0x4d87fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d8521(undefined4 param_1,char param_2,char param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 *puVar4;
  char cVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  undefined4 local_a0;
  undefined1 *local_9c;
  float local_98;
  float local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  uint uStack_84;
  float local_70;
  float local_68;
  undefined1 local_5c [4];
  undefined1 *local_58;
  undefined1 local_54 [4];
  undefined1 local_50 [24];
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de550;
  local_14 = ExceptionList;
  uStack_84 = DAT_00955fd4 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_14;
  if (param_2 == '\0') {
    local_68 = 0.55;
  }
  else if (param_3 == '\0') {
    local_68 = 0.8;
  }
  else {
    local_68 = 1.0;
  }
  local_88 = (undefined1 *)0x4d8576;
  cVar5 = FUN_004c3153();
  if (cVar5 == '\0') {
    local_68 = local_68 * 0.5;
  }
  iVar7 = *(int *)(in_ECX + 0x18);
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (iVar7 < iVar1) {
    iVar6 = iVar1 - iVar7;
    iVar1 = iVar7;
  }
  else {
    iVar6 = iVar7 - iVar1;
  }
  local_70 = (float)iVar1;
  local_88 = (undefined1 *)0x0;
  local_9c = (undefined1 *)&local_94;
  fVar2 = local_70 * 0.05 + 0.0;
  fVar3 = local_70 * 0.05 + (float)iVar6 * 0.5;
  puVar4 = (undefined1 *)(local_70 * 0.9);
  local_90 = (undefined1 *)0x0;
  local_98 = local_68;
  local_a0 = 0x3f19999a;
  local_8c = (undefined1 *)fVar3;
  FUN_00476599(local_5c);
  local_a0 = 0x4d862e;
  FUN_0047620f();
  local_98 = (float)puVar4 + fVar3;
  puVar8 = &local_a0;
  local_9c = (undefined1 *)0x0;
  fVar9 = local_68;
  FUN_00476599(&local_58,0x3f666666,&local_a0,local_68);
  FUN_0047620f(puVar8,fVar9);
  local_88 = (undefined1 *)FUN_00476850(local_38);
  local_c = 0;
  local_8c = (undefined1 *)param_1;
  local_90 = (undefined1 *)0x4d868d;
  FUN_0047ce07();
  local_c = 0xffffffff;
  local_88 = (undefined1 *)0x4d869b;
  FUN_004768de();
  local_98 = 7.119678e-39;
  local_94 = fVar2;
  local_90 = (undefined1 *)fVar3;
  local_8c = puVar4;
  local_88 = puVar4;
  FUN_0047d49c();
  fVar2 = fVar2 + 2.0;
  local_90 = local_54;
  fVar9 = (float)puVar4 - 4.0;
  local_88 = (undefined1 *)0x3f800000;
  local_8c = (undefined1 *)local_68;
  local_94 = 7.119777e-39;
  local_8c = (undefined1 *)FUN_0047620f();
  local_9c = (undefined1 *)0x4d872b;
  local_98 = fVar2;
  local_94 = fVar3 + 2.0;
  local_90 = (undefined1 *)fVar9;
  FUN_004dbdca();
  local_8c = (undefined1 *)0x4d8734;
  cVar5 = FUN_004bf38c();
  if (cVar5 == '\0') {
    iVar7 = in_ECX + 0xe0;
  }
  else {
    iVar7 = in_ECX + 0x100;
  }
  local_58 = (undefined1 *)&local_88;
  local_94 = fVar9 * 0.4;
  local_8c = (undefined1 *)0x1;
  local_88 = (undefined1 *)0x24;
  local_98 = fVar3 + 2.0 + fVar9 * 0.3;
  local_9c = (undefined1 *)(fVar9 * 0.3 + fVar2);
  local_a0 = 0x4d87ac;
  local_90 = (undefined1 *)local_94;
  FUN_0047a633();
  local_58 = (undefined1 *)&local_88;
  local_90 = (undefined1 *)&local_88;
  local_8c = (undefined1 *)(local_68 * 0.6);
  local_94 = 7.120059e-39;
  FUN_0047620f();
  local_8c = (undefined1 *)0x4d87db;
  FUN_0047cda7();
  local_90 = (undefined1 *)0x4d87e6;
  local_8c = (undefined1 *)iVar7;
  local_88 = local_50;
  FUN_0047d2ae();
  ExceptionList = local_14;
  return;
}

