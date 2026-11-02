// rea decompile_all
// name: FUN_00444287
// address: 0x444287
// body: available
// range: 0x444287-0x4443eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00444287(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 uVar7;
  
  iVar2 = FUN_0044bfc5();
  iVar2 = *(int *)(iVar2 + 8);
  FUN_0044bfc5();
  uVar3 = FUN_005b3fb0();
  FUN_004c0be5(uVar3);
  iVar4 = FUN_005b3fb0();
  *(int *)(in_ECX + 0x138) = iVar4;
  iVar5 = FUN_005b3fb0();
  *(int *)(in_ECX + 0x13c) = iVar5;
  *(int *)(in_ECX + 0x140) = iVar5 - iVar4;
  bVar1 = (float)(iVar5 - iVar4) < (float)iVar2 * 3.0;
  *(bool *)(in_ECX + 0x14c) = bVar1;
  if (bVar1) {
    uVar3 = FUN_005b3fb0();
    FUN_004c0be5(uVar3);
    iVar2 = FUN_005b3fb0();
    *(int *)(in_ECX + 0x138) = iVar2;
    iVar4 = FUN_005b3fb0();
    *(int *)(in_ECX + 0x13c) = iVar4;
    *(int *)(in_ECX + 0x140) = iVar4 - iVar2;
    FUN_004c0e0e(0);
  }
  else {
    FUN_004c0e0e(1);
    FUN_004443ec();
    (**(code **)(*(int *)(in_ECX + 0x150) + 0x28))(1);
  }
  FUN_0043d3ae(in_ECX);
  uVar3 = *(undefined4 *)(in_ECX + 0x140);
  FUN_005b3fb0(uVar3);
  uVar7 = *(undefined4 *)(in_ECX + 0x138);
  uVar6 = FUN_005b3fb0(uVar7);
  FUN_004c09cc(uVar6,uVar7,uVar3);
  FUN_00444417();
  return;
}

