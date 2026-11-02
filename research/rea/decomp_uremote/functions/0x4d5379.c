// rea decompile_all
// name: FUN_004d5379
// address: 0x4d5379
// body: available
// range: 0x4d5379-0x4d5505 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d5379(undefined4 param_1,int param_2,undefined4 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_14;
  
  FUN_0044dd00(0x41800000,*(undefined4 *)(param_2 + 8));
  uStack_14 = FUN_004a8e4a();
  uVar8 = uStack_14 | 1;
  uStack_14 = uStack_14 | 1;
  iVar4 = FUN_005b3fb0();
  iVar5 = FUN_005b3fb0();
  iVar6 = FUN_005b3fb0();
  iVar7 = FUN_005b3fb0();
  iVar7 = (int)(iVar6 - uVar8) / 2 + iVar7;
  FUN_0047604f();
  FUN_0047cda7();
  FUN_0047d187(iVar7,uVar8);
  FUN_0047604f();
  FUN_0047cda7();
  FUN_0047d353(param_1,iVar7,uVar8,uVar8);
  fVar1 = (float)((int)uVar8 / 2);
  fVar2 = ((float)(int)uStack_14 - (fVar1 + 1.0)) * 0.5;
  fVar3 = (float)((int)(iVar4 - uVar8) / 2 + iVar5);
  FUN_0047d1b5(param_1,fVar3 + fVar2,(float)iVar7 + fVar1,fVar1 + 1.0);
  if (param_4 == '\0') {
    FUN_0047d1b5(param_1,fVar3 + fVar1,(float)iVar7 + fVar2,0x3f800000);
  }
  return;
}

