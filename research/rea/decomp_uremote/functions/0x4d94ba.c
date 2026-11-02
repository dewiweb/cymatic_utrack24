// rea decompile_all
// name: FUN_004d94ba
// address: 0x4d94ba
// body: available
// range: 0x4d94ba-0x4d9821 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d94ba(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  float unaff_EBX;
  float fVar4;
  int local_3c [9];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005de620;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004d1edf(DAT_00955fd4 ^ (uint)&stack0xffffffa0);
  fVar1 = (float)local_3c[0];
  FUN_004bf468();
  iVar3 = *in_ECX;
  uVar2 = FUN_005b3fb0();
  iVar3 = (**(code **)(iVar3 + 8))(uVar2);
  fVar4 = (float)iVar3;
  iVar3 = *(int *)(*(int *)(param_1 + 0xdc) + 0x8c);
  if (iVar3 == 1) {
    FUN_00478b0d(0,0);
    FUN_00478ba1(fVar4,unaff_EBX);
    FUN_00478ba1(fVar1 - fVar4,unaff_EBX);
    FUN_00478ba1(fVar1,0);
    fVar4 = -4.0;
    fVar1 = fVar1 + 4.0;
  }
  else {
    if (iVar3 == 2) {
      FUN_00478b0d(fVar1,0);
      FUN_00478ba1(0,fVar4);
      FUN_00478ba1(0,unaff_EBX - fVar4);
      FUN_00478ba1(fVar1,unaff_EBX);
      fVar1 = fVar1 + 4.0;
      FUN_00478ba1(fVar1,unaff_EBX + 4.0);
      fVar4 = -4.0;
      goto LAB_004d97d1;
    }
    if (iVar3 != 3) {
      FUN_00478b0d(0,unaff_EBX);
      FUN_00478ba1(fVar4,0);
      FUN_00478ba1(fVar1 - fVar4,0);
      FUN_00478ba1(fVar1,unaff_EBX);
      fVar4 = unaff_EBX + 4.0;
      FUN_00478ba1(fVar1 + 4.0,fVar4);
      fVar1 = -4.0;
      goto LAB_004d97d1;
    }
    FUN_00478b0d(0,0);
    FUN_00478ba1(fVar1,fVar4);
    FUN_00478ba1(fVar1,unaff_EBX - fVar4);
    FUN_00478ba1(0,unaff_EBX);
    fVar4 = unaff_EBX + 4.0;
    fVar1 = -4.0;
  }
  FUN_00478ba1(fVar1,fVar4);
  fVar1 = -4.0;
  fVar4 = -4.0;
LAB_004d97d1:
  FUN_00478ba1(fVar1,fVar4);
  FUN_00478e1f();
  uVar2 = FUN_0047a9dd(param_2,local_3c,0x40400000);
  puStack_10 = (undefined1 *)0x0;
  FUN_00478907(uVar2);
  FUN_004f7994();
  ExceptionList = pvStack_18;
  return;
}

