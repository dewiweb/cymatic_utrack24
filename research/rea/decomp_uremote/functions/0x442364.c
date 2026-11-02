// rea decompile_all
// name: FUN_00442364
// address: 0x442364
// body: available
// range: 0x442364-0x4424fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442364(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(in_ECX + 0x1c);
  iVar3 = *(int *)(in_ECX + 0x18);
  fVar5 = (float10)FUN_0044230b();
  fVar5 = (float10)FUN_0043d2e1((float)iVar2,(float)((float10)(iVar3 * iVar2) / fVar5));
  fVar1 = (float)fVar5;
  FUN_0043d2e1(fVar1 * 0.14,
               (((float)*(int *)(in_ECX + 0x18) - fVar1 * 1.5 * 3.0) - fVar1 * 2.0 * 2.0) * 0.25);
  FUN_005b3fb0();
  uVar7 = *(undefined4 *)(in_ECX + 0x1c);
  uVar6 = 0;
  uVar4 = FUN_005b3fb0(0,uVar7);
  FUN_004c09cc(uVar4,uVar6,uVar7);
  uVar7 = *(undefined4 *)(in_ECX + 0x1c);
  uVar6 = 0;
  uVar4 = FUN_005b3fb0(0,uVar7);
  FUN_004c09cc(uVar4,uVar6,uVar7);
  uVar7 = *(undefined4 *)(in_ECX + 0x1c);
  uVar6 = 0;
  uVar4 = FUN_005b3fb0(0,uVar7);
  FUN_004c09cc(uVar4,uVar6,uVar7);
  FUN_005b3fb0();
  uVar7 = *(undefined4 *)(in_ECX + 0x1c);
  uVar6 = 0;
  uVar4 = FUN_005b3fb0(0,uVar7);
  FUN_004c09cc(uVar4,uVar6,uVar7);
  uVar7 = *(undefined4 *)(in_ECX + 0x1c);
  uVar6 = 0;
  uVar4 = FUN_005b3fb0(0,uVar7);
  FUN_004c09cc(uVar4,uVar6,uVar7);
  return;
}

