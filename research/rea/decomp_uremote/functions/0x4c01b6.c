// rea decompile_all
// name: FUN_004c01b6
// address: 0x4c01b6
// body: available
// range: 0x4c01b6-0x4c041d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c01b6(uint param_1,undefined4 param_2)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *in_ECX;
  uint uStack_68;
  uint uStack_64;
  undefined1 *puStack_60;
  uint uStack_5c;
  undefined4 uStack_48;
  int *local_38;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  uVar1 = (ushort)uStack_48;
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dedd9;
  local_14 = ExceptionList;
  uStack_5c = DAT_00955fd4 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_14;
  puStack_60 = (undefined1 *)0x4c01eb;
  cVar2 = FUN_004c04c2();
  if (cVar2 == '\0') {
    param_1 = param_1 | 0x80000000;
  }
  else {
    param_1 = param_1 & 0x7fffffff;
  }
  uStack_64 = 0x4c0205;
  piVar5 = (int *)FUN_004ed500();
  if ((piVar5 != (int *)0x0) && (param_1 == piVar5[2])) {
    ExceptionList = local_14;
    return;
  }
  puStack_60 = (undefined1 *)0x4c0225;
  FUN_004f5fb6();
  puStack_60 = local_30;
  local_c = 0;
  uStack_68 = 0x4c0236;
  FUN_004c0827();
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  uStack_48 = (uint)(ushort)uStack_48;
  local_38 = piVar5;
  if (piVar5 != (int *)0x0) {
    local_c = CONCAT31(local_c._1_3_,1);
    puStack_60 = (undefined1 *)0x4c0279;
    uVar3 = (**(code **)(*piVar5 + 0x3c))();
    puStack_60 = (undefined1 *)0x4c0284;
    uVar4 = (**(code **)(*piVar5 + 0x34))();
    uStack_48 = CONCAT13(uVar4,CONCAT12(uVar3,uVar1));
    puStack_60 = (undefined1 *)0x4c0296;
    puVar6 = (undefined4 *)FUN_004edcf4();
    local_28 = *puVar6;
    local_24 = puVar6[1];
    local_20 = puVar6[2];
    local_1c = puVar6[3];
    puStack_60 = (undefined1 *)0x4c02bb;
    (**(code **)(*piVar5 + 0x80))();
    *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xfe;
    uStack_68 = 0x4c02ca;
    FUN_004c4e62();
    uStack_64 = 0x4c02d2;
    FUN_004c4fe6();
    uStack_64 = 0x4c02d9;
    FUN_004c12e0();
    uStack_64 = 0;
    uStack_68 = 0x4c02e4;
    cVar2 = FUN_004f5fce();
    if (cVar2 != '\0') {
      puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
      uStack_64 = 1;
      uStack_68 = 0x4c02f5;
      (**(code **)*piVar5)();
      goto LAB_004c0400;
    }
    local_38 = (int *)&uStack_68;
    uStack_64 = local_2c;
    FUN_004c0bf7();
    puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
    uStack_64 = 1;
    uStack_68 = 0x4c031f;
    (**(code **)*piVar5)();
  }
  if (in_ECX[3] != 0) {
    uStack_64 = 0x4c032c;
    FUN_004c107a();
  }
  puStack_60 = (undefined1 *)0x0;
  uStack_64 = 0x4c0337;
  cVar2 = FUN_004f5fe9();
  if (cVar2 != '\0') {
    puStack_60 = (undefined1 *)param_2;
    uStack_64 = param_1;
    *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 1;
    uStack_68 = 0x4c0353;
    piVar5 = (int *)(**(code **)(*in_ECX + 0xac))();
    uStack_68 = 0x4c035a;
    FUN_004c4e62();
    uStack_68 = 0x4c0363;
    FUN_004c4fc1();
    in_ECX[5] = local_2c;
    in_ECX[4] = (int)local_38;
    uStack_68 = 0x4c0374;
    FUN_004ed554();
    if (-1 < (int)uStack_48) {
      uStack_68 = uStack_48;
      (**(code **)(*piVar5 + 0x84))();
    }
    uStack_68 = (uint)(*(byte *)(in_ECX + 0x1a) >> 1 & 1);
    (**(code **)(*piVar5 + 8))();
    uStack_64 = 0x4c03a2;
    piVar5 = (int *)FUN_004ed500();
    if (piVar5 != (int *)0x0) {
      if (uStack_48._2_1_ != '\0') {
        puStack_60 = (undefined1 *)0x1;
        uStack_64 = 0x4c03b9;
        (**(code **)(*piVar5 + 0x38))();
        puStack_60 = (undefined1 *)0x4c03c4;
        FUN_004edcdc();
      }
      if (uStack_48._3_1_ != '\0') {
        puStack_60 = (undefined1 *)0x1;
        uStack_64 = 0x4c03d4;
        (**(code **)(*piVar5 + 0x30))();
      }
      puStack_60 = (undefined1 *)0x4c03db;
      cVar2 = FUN_004c079b();
      if (cVar2 != '\0') {
        puStack_60 = (undefined1 *)0x1;
        uStack_64 = 0x4c03e8;
        (**(code **)(*piVar5 + 0x54))();
      }
      puStack_60 = (undefined1 *)0x4c03f3;
      FUN_004eda3e();
      uStack_64 = 0x4c03f9;
      FUN_004c1613();
      puStack_60 = (undefined1 *)0x4c0400;
      FUN_004c12e0();
    }
  }
LAB_004c0400:
  puStack_60 = (undefined1 *)0x4c0409;
  FUN_00474d0f();
  ExceptionList = local_14;
  return;
}

