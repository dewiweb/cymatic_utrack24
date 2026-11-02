// rea decompile_all
// name: FUN_0044aba7
// address: 0x44aba7
// body: available
// range: 0x44aba7-0x44aee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044aba7(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  float *pfStack_54;
  undefined1 **ppuStack_50;
  uint uStack_4c;
  undefined1 *local_34;
  float local_30;
  int local_2c;
  undefined1 *local_28;
  float fStack_24;
  undefined1 *puStack_20;
  undefined4 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e0b44;
  local_14 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_14;
  ppuStack_50 = (undefined1 **)0x44abde;
  iVar3 = FUN_0044bfc5();
  ppuStack_50 = (undefined1 **)(iVar3 + 0x84);
  local_1c = &ppuStack_50;
  pfStack_54 = (float *)0x44abf2;
  FUN_004d076d();
  pfStack_54 = (float *)0x44abfa;
  FUN_0047d23a();
  local_34 = (undefined1 *)(*(int *)(*(int *)(in_ECX + 0x78) + 0x7c) + 0x1e0);
  ppuStack_50 = (undefined1 **)0x44ac0e;
  FUN_0044bfc5();
  ppuStack_50 = (undefined1 **)0x44ac19;
  FUN_0045ef8e();
  ppuStack_50 = (undefined1 **)0x44ac24;
  cVar2 = FUN_00443343();
  if (cVar2 == '\0') {
    ppuStack_50 = &local_28;
    pfStack_54 = (float *)0x44ae61;
    FUN_0046537e();
    local_1c = &ppuStack_50;
    local_c = 5;
    pfStack_54 = (float *)0x44ae7a;
    FUN_004d076d();
    pfStack_54 = (float *)0x44ae81;
    FUN_0047cda7();
    ppuStack_50 = (undefined1 **)(in_ECX + 0x88);
    pfStack_54 = (float *)0x44ae8f;
    FUN_0047ceaa();
    ppuStack_50 = (undefined1 **)0x3f800000;
    pfStack_54 = (float *)0x2;
    local_1c = &uStack_58;
    uStack_58 = 0x24;
    puStack_5c = *(undefined4 **)(in_ECX + 0x7c);
    FUN_0047d12a(0,0,*(undefined4 *)(in_ECX + 0x18));
    goto LAB_0044aeba;
  }
  uVar1 = *(uint *)(local_34 + 0x44);
  if (10 < uVar1) goto switchD_0044ac43_caseD_9;
  ppuStack_50 = (undefined1 **)(uint)(&switchD_0044ac43::switchdataD_0044af03)[uVar1];
  switch(uVar1) {
  default:
    ppuStack_50 = (undefined1 **)0x44ad31;
    cVar2 = FUN_0045f710();
    if (cVar2 == '\0') {
      pfStack_54 = (float *)0x44ad47;
      FUN_0044af0e();
    }
    else {
      pfStack_54 = (float *)0x44ad3d;
      FUN_0044b3c9();
    }
    goto switchD_0044ac43_caseD_9;
  case 3:
  case 6:
    local_2c = *(int *)(in_ECX + 0x1c) / 2;
    local_30 = (float)local_2c;
    local_1c = &ppuStack_50;
    pfStack_54 = (float *)0x44ad71;
    FUN_004d076d();
    pfStack_54 = (float *)0x44ad78;
    FUN_0047cda7();
    ppuStack_50 = (undefined1 **)(in_ECX + 0x88);
    pfStack_54 = (float *)0x44ad86;
    FUN_0047ceaa();
    pfStack_54 = (float *)0x3f800000;
    uStack_58 = 4;
    puStack_20 = (undefined1 *)&puStack_5c;
    puStack_5c = (undefined4 *)0x24;
    local_28 = *(undefined1 **)(in_ECX + 0x18);
    puStack_20 = (undefined1 *)FUN_005b3fb0();
    FUN_0047d12a(0,0,local_28,puStack_20);
    pfStack_54 = &fStack_24;
    uStack_58 = 0x44add2;
    FUN_0047cef9();
    puStack_10 = (undefined1 *)0x3;
    uStack_58 = 0x44ade0;
    pfStack_54 = (float *)(in_ECX + 0xa0);
    FUN_0049fa7b();
    puStack_10 = (undefined1 *)0xffffffff;
    pfStack_54 = (float *)0x44adf0;
    FUN_004c4d7a();
    fStack_24 = local_30 + 0.0;
    ppuStack_50 = *(undefined1 ***)(local_34 + 0xa4);
    pfStack_54 = (float *)&local_2c;
    uStack_58 = 0x44ae12;
    FUN_0044a500();
    local_c = 4;
    ppuStack_50 = (undefined1 **)0x3f800000;
    pfStack_54 = (float *)0x1;
    local_28 = (undefined1 *)&uStack_58;
    uStack_58 = 0x24;
    uVar5 = *(undefined4 *)(in_ECX + 0x18);
    puStack_5c = local_1c;
    uVar4 = FUN_005b3fb0(uVar5);
    FUN_0047d12a(0,uVar4,uVar5);
    goto LAB_0044aeba;
  case 7:
    ppuStack_50 = &local_34;
    pfStack_54 = (float *)0x44acc3;
    FUN_0046537e();
    local_1c = &ppuStack_50;
    local_c = 1;
    pfStack_54 = (float *)0x44acdc;
    FUN_004d076d();
    pfStack_54 = (float *)0x44ace3;
    FUN_0047cda7();
    ppuStack_50 = (undefined1 **)(in_ECX + 0x88);
    pfStack_54 = (float *)0x44acf1;
    FUN_0047ceaa();
    puStack_5c = *(undefined4 **)(in_ECX + 0x1c);
    uVar5 = *(undefined4 *)(in_ECX + 0x18);
    goto LAB_0044aca0;
  case 8:
    ppuStack_50 = &local_34;
    pfStack_54 = (float *)0x44ac59;
    FUN_0046537e();
    local_c = 0;
    break;
  case 9:
    goto switchD_0044ac43_caseD_9;
  case 10:
    ppuStack_50 = &local_34;
    pfStack_54 = (float *)0x44ad1f;
    FUN_0046537e();
    local_c = 2;
  }
  local_1c = &ppuStack_50;
  pfStack_54 = (float *)0x44ac6f;
  FUN_004d076d();
  pfStack_54 = (float *)0x44ac76;
  FUN_0047cda7();
  ppuStack_50 = (undefined1 **)(in_ECX + 0x88);
  pfStack_54 = (float *)0x44ac84;
  FUN_0047ceaa();
  puStack_5c = *(undefined4 **)(in_ECX + 0x7c);
  uVar5 = *(undefined4 *)(in_ECX + 0x18);
LAB_0044aca0:
  local_1c = &uStack_58;
  ppuStack_50 = (undefined1 **)0x3f800000;
  pfStack_54 = (float *)0x2;
  uStack_58 = 0x24;
  FUN_0047d12a(0,0,uVar5);
LAB_0044aeba:
  local_c = 0xffffffff;
  ppuStack_50 = (undefined1 **)0x44aec4;
  FUN_004652d6();
switchD_0044ac43_caseD_9:
  ppuStack_50 = (undefined1 **)0x44aed3;
  FUN_0045efa9();
  ExceptionList = local_14;
  return;
}

