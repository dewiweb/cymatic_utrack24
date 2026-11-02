// rea decompile_all
// name: FUN_00445529
// address: 0x445529
// body: available
// range: 0x445529-0x44561f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445529(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(in_ECX + 0x84) != 0) {
    iVar3 = 0;
    if (0 < *(int *)(in_ECX + 0x84)) {
      do {
        uVar2 = param_2;
        FUN_005b3fb0(param_2);
        uVar4 = 0;
        uVar1 = FUN_005b3fb0(0);
        FUN_004c09cc(uVar1,uVar4,uVar2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_ECX + 0x84));
    }
    FUN_005b3fb0(param_2);
    FUN_004c0be5(param_2);
  }
  FUN_0044bfc5();
  FUN_0043dbda(in_ECX);
  uVar2 = FUN_005b3fb0();
  uVar1 = FUN_005b3fb0(uVar2);
  FUN_004c09cc(0,uVar1,uVar2);
  uVar2 = FUN_005b3fb0();
  iVar3 = FUN_00440367(uVar2);
  *(float *)(in_ECX + 0x208) = (float)iVar3 * 0.3;
  return;
}

