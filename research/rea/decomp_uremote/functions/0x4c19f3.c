// rea decompile_all
// name: FUN_004c19f3
// address: 0x4c19f3
// body: available
// range: 0x4c19f3-0x4c1bbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c19f3(undefined4 *param_1,char param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 unaff_EBX;
  float10 fVar3;
  float fVar4;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_64 [4];
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [24];
  int iStack_40;
  int iStack_3c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005da0fe;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004c0ab9(DAT_00955fd4 ^ (uint)&stack0xffffff88);
  if (*(int *)(in_ECX + 0x3c) == 0) {
    if ((*(char *)(in_ECX + 0x6c) == '\0') || (param_2 != '\0')) {
      FUN_004c185c();
    }
    else if (*(char *)(in_ECX + 0x6c) != -1) {
      fVar3 = (float10)FUN_004c1582();
      FUN_0047cd87((float)fVar3);
      FUN_004c185c();
      FUN_0047cda0();
    }
  }
  else {
    fVar3 = (float10)(**(code **)(*(int *)*param_1 + 0x10))();
    fVar4 = (float)fVar3;
    fStack_68 = fVar4;
    FUN_004c2047(auStack_58);
    FUN_004f81d3(fVar4);
    bVar1 = *(byte *)(in_ECX + 0x68) >> 2;
    FUN_0047e303(auStack_64,((bVar1 & 1) == 0) + '\x01',iStack_40,iStack_3c,~bVar1 & 1);
    uStack_c = 0;
    FUN_0047cc87();
    uStack_c = CONCAT31(uStack_c._1_3_,1);
    fStack_60 = (float)iStack_3c / (float)*(int *)(in_ECX + 0x1c);
    fStack_5c = (float)iStack_40 / (float)*(int *)(in_ECX + 0x18);
    uVar2 = FUN_00477435(fStack_5c,fStack_60);
    FUN_0047cd79(uVar2);
    FUN_004c185c();
    puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
    FUN_0047cca3();
    FUN_0047cd0e();
    fStack_60 = 1.0 / fStack_6c;
    uVar2 = FUN_0047745f(fStack_60);
    FUN_0047cd79(uVar2);
    if (param_2 == '\0') {
      fVar3 = (float10)FUN_004c1582();
    }
    else {
      fVar3 = (float10)1;
    }
    fStack_68 = (float)fVar3;
    (**(code **)**(undefined4 **)(in_ECX + 0x3c))(&fStack_6c,param_1,unaff_EBX,fStack_68);
    FUN_0047cd1a();
    FUN_004c4d7a();
  }
  ExceptionList = local_14;
  return;
}

