// rea decompile_all
// name: FUN_004de57a
// address: 0x4de57a
// body: available
// range: 0x4de57a-0x4de857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004de57a(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  undefined4 in_stack_00000028;
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  undefined *puStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 *puStack_70;
  double dStack_6c;
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [36];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005de502;
  local_14 = ExceptionList;
  uStack_94 = DAT_00955fd4 ^ (uint)&stack0xffffff70;
  ExceptionList = &local_14;
  uStack_98 = in_stack_00000028;
  puStack_9c = (undefined *)0x4de5b2;
  iVar5 = (**(code **)(*in_ECX + 0x10))();
  fVar1 = (float)(iVar5 + -2);
  puStack_9c = (undefined *)0x0;
  puStack_a0 = (undefined1 *)0x1001310;
  puStack_a4 = auStack_7c;
  fStack_a8 = 7.15378e-39;
  FUN_004c1e29();
  puStack_9c = (undefined *)0x4de5db;
  cVar4 = FUN_004c3153();
  puStack_9c = (undefined *)((-(uint)(cVar4 != '\0') & 0xa000000) + 0x9000000);
  puStack_70 = (undefined1 *)&puStack_9c;
  puStack_a0 = (undefined1 *)0x4de5fa;
  FUN_0047604f();
  puStack_a0 = auStack_74;
  puStack_a4 = (undefined1 *)0x4de608;
  FUN_0047627a();
  puStack_a0 = (undefined1 *)0x4de619;
  puStack_70 = (undefined1 *)&puStack_9c;
  FUN_0047604f();
  puStack_a0 = auStack_78;
  puStack_a4 = (undefined1 *)0x4de623;
  FUN_0047627a();
  puStack_9c = (undefined *)0x4de62c;
  FUN_0047888f();
  puStack_10 = (undefined1 *)0x0;
  puStack_9c = (undefined *)0x4de63a;
  cVar4 = FUN_004e7d3f();
  puStack_9c = (undefined *)0x0;
  fVar2 = fVar1 * 0.5;
  puStack_70 = (undefined1 *)&fStack_a8;
  dStack_6c = (double)fVar2;
  if (cVar4 == '\0') {
    fVar3 = ((float)param_4 * 0.5 + (float)param_2) - fVar2;
    puStack_a0 = (undefined1 *)0x0;
    puStack_a4 = (undefined1 *)(fVar3 + fVar1);
    fStack_ac = 7.15431e-39;
    fVar6 = (float10)FUN_004d076d();
    puStack_70 = (undefined1 *)&uStack_b4;
    fStack_ac = (float)fVar6;
    puStack_b0 = (undefined1 *)fVar3;
    FUN_004d076d();
    puStack_9c = (undefined *)FUN_00476850(auStack_3c);
    puStack_a0 = (undefined1 *)param_1;
    puStack_10._0_1_ = 2;
    puStack_a4 = (undefined1 *)0x4de788;
    FUN_0047ce07();
    puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
    puStack_9c = (undefined *)0x4de798;
    FUN_004768de();
    puStack_a0 = (undefined1 *)((float)param_5 + fVar1);
    fStack_a8 = (float)param_3 - (float)dStack_6c;
    puStack_a4 = (undefined1 *)fVar1;
    puStack_70 = (undefined1 *)fStack_a8;
  }
  else {
    fVar2 = ((float)param_5 * 0.5 + (float)param_3) - fVar2;
    puStack_a0 = (undefined1 *)(fVar2 + fVar1);
    puStack_a4 = (undefined1 *)0x0;
    fStack_ac = 7.154042e-39;
    puStack_70 = (undefined1 *)&fStack_a8;
    fVar6 = (float10)FUN_004d076d();
    puStack_70 = (undefined1 *)&uStack_b4;
    puStack_b0 = (undefined1 *)(float)fVar6;
    fStack_ac = fVar2;
    FUN_004d076d();
    puStack_9c = (undefined *)FUN_00476850(auStack_3c);
    puStack_a0 = (undefined1 *)param_1;
    puStack_10._0_1_ = 1;
    puStack_a4 = (undefined1 *)0x4de6c9;
    FUN_0047ce07();
    puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
    puStack_9c = (undefined *)0x4de6d9;
    FUN_004768de();
    fVar3 = (float)param_2 - (float)dStack_6c;
    fStack_a8 = fVar2;
    puStack_a4 = (undefined1 *)((float)param_4 + fVar1);
    puStack_a0 = (undefined1 *)fVar1;
    puStack_70 = (undefined1 *)fVar3;
  }
  puStack_9c = (undefined *)0x40a00000;
  puStack_b0 = auStack_5c;
  uStack_b4 = 0x4de7e4;
  fStack_ac = fVar3;
  FUN_0047932d();
  puStack_9c = &DAT_0095d798;
  puStack_a0 = auStack_5c;
  puStack_a4 = (undefined1 *)0x4de7f4;
  FUN_0047d2ae();
  puStack_70 = (undefined1 *)&puStack_9c;
  puStack_a4 = (undefined1 *)&puStack_9c;
  puStack_a0 = (undefined1 *)0x3f000000;
  fStack_a8 = 7.15458e-39;
  FUN_004765bf();
  puStack_a0 = (undefined1 *)0x4de816;
  FUN_0047cda7();
  puStack_9c = &DAT_0095d798;
  puStack_a0 = (undefined1 *)0x3f000000;
  puStack_a4 = (undefined1 *)0x4de82a;
  puStack_a0 = (undefined1 *)FUN_0047badf();
  puStack_a4 = auStack_5c;
  fStack_a8 = 7.154636e-39;
  FUN_0047d2d0();
  puStack_9c = (undefined *)0x4de840;
  FUN_004f7994();
  ExceptionList = pvStack_18;
  return;
}

