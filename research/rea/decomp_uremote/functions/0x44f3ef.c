// rea decompile_all
// name: FUN_0044f3ef
// address: 0x44f3ef
// body: available
// range: 0x44f3ef-0x44f660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044f3ef(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PNG_Image *pPVar7;
  undefined4 uVar8;
  undefined1 **ppuStack_5c;
  PNG_Image *pPStack_58;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e09ad;
  local_14 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_14;
  iStack_50 = 0x44f424;
  FUN_0044bfc5();
  iStack_50 = 0x44f429;
  iStack_50 = FUN_0044bfc5();
  iStack_50 = iStack_50 + 0x84;
  local_30 = (undefined1 *)&iStack_50;
  iStack_54 = 0x44f43d;
  FUN_004d076d();
  iStack_54 = 0x44f447;
  FUN_0047d23a();
  iStack_50 = 0x44f44c;
  FUN_0047cd0e();
  iStack_50 = 2;
  iStack_54 = 0x44f453;
  FUN_0047d907();
  iStack_54 = 0x44f458;
  iVar2 = FUN_0044bfc5();
  local_2c = *(undefined4 *)(iVar2 + 0x18);
  uStack_28 = *(undefined4 *)(iVar2 + 0x1c);
  uStack_24 = *(undefined4 *)(iVar2 + 0x20);
  fStack_20 = *(float *)(iVar2 + 0x24);
  iStack_54 = 0x44f47f;
  FUN_004c6ae2();
  puStack_10 = (undefined1 *)0x0;
  if (76.0 < fStack_20) {
    if (152.0 < fStack_20) {
      iStack_54 = 0x3468;
      pPStack_58 = &PNG_007f17e8;
    }
    else {
      iStack_54 = 0xf95;
      pPStack_58 = &PNG_007f54f0;
    }
  }
  else {
    iStack_54 = 0x894;
    pPStack_58 = &PNG_007f4c58;
  }
  ppuStack_5c = &puStack_38;
  FUN_0047ed0f();
  iStack_54 = 0x44f4df;
  FUN_0049f5e8();
  iStack_54 = 0x44f4e8;
  FUN_004c4d7a();
  iStack_54 = 0x44f4f1;
  iStack_54 = FUN_0047e371();
  pPStack_58 = (PNG_Image *)0x44f4fb;
  pPStack_58 = (PNG_Image *)FUN_0047e366();
  ppuStack_5c = (undefined1 **)0x0;
  uVar8 = 0;
  uVar3 = FUN_005b3fb0(0);
  uVar4 = FUN_005b3fb0(uVar3);
  uVar5 = FUN_005b3fb0(uVar4);
  uVar6 = FUN_005b3fb0(uVar5);
  FUN_0047d9b4(param_1,uVar6,uVar5,uVar4,uVar3,uVar8);
  iStack_54 = 0x44f537;
  FUN_0047cd1a();
  iStack_54 = 0x44f53c;
  iStack_54 = FUN_0044bfc5();
  iStack_54 = iStack_54 + 0x3c;
  pPStack_58 = (PNG_Image *)0x44f545;
  FUN_0047ceaa();
  pPStack_58 = (PNG_Image *)0x44f54a;
  iVar2 = FUN_0044bfc5();
  pPStack_58 = (PNG_Image *)(iVar2 + 0xa4);
  puStack_38 = (undefined1 *)&pPStack_58;
  ppuStack_5c = (undefined1 **)0x44f55e;
  FUN_004d076d();
  ppuStack_5c = (undefined1 **)0x44f565;
  FUN_0047cda7();
  pPStack_58 = (PNG_Image *)0x44f56a;
  iVar2 = FUN_0044bfc5();
  puStack_38 = (undefined1 *)(*(float *)(iVar2 + 0x20) + *(float *)(iVar2 + 0x18));
  pPStack_58 = (PNG_Image *)0x44f57b;
  iVar2 = FUN_0044bfc5();
  puStack_3c = *(undefined4 **)(iVar2 + 0x18);
  pPStack_58 = (PNG_Image *)0x44f591;
  iVar2 = FUN_005b3fb0();
  pPStack_58 = (PNG_Image *)&puStack_3c;
  ppuStack_5c = (undefined1 **)0x44f5a2;
  FUN_0046537e();
  pPStack_58 = (PNG_Image *)0x1;
  puStack_38 = (undefined1 *)&ppuStack_5c;
  local_14._0_1_ = 1;
  ppuStack_5c = (undefined1 **)0x21;
  FUN_0047d02d(param_1,&puStack_3c,iVar2,*(undefined4 *)(iStack_34 + 0x94),
               *(int *)(iStack_34 + 0x90) - iVar2,*(undefined4 *)(iStack_34 + 0x9c));
  local_14 = (void *)((uint)local_14._1_3_ << 8);
  pPStack_58 = (PNG_Image *)0x44f5eb;
  FUN_004652d6();
  puStack_3c = *(undefined4 **)(iStack_34 + 0x18);
  piVar1 = (int *)(iStack_34 + 0x1c);
  iStack_34 = *(int *)(iStack_34 + 0x2dfc);
  pPVar7 = (PNG_Image *)(*piVar1 - iStack_34);
  pPStack_58 = (PNG_Image *)0x44f60e;
  FUN_0047e371();
  ppuStack_5c = (undefined1 **)0x44f614;
  pPStack_58 = pPVar7;
  iVar2 = FUN_00440367();
  pPStack_58 = (PNG_Image *)(iVar2 + -0x14);
  ppuStack_5c = (undefined1 **)0x44f620;
  FUN_0047e366();
  ppuStack_5c = (undefined1 **)puStack_3c;
  iVar2 = FUN_00440367();
  ppuStack_5c = (undefined1 **)(iVar2 + -0x14);
  FUN_0047d9b4(param_1,0,iStack_34,puStack_3c,pPVar7,10,10);
  pPStack_58 = (PNG_Image *)0x44f64c;
  FUN_004c4d7a();
  ExceptionList = pvStack_1c;
  return;
}

