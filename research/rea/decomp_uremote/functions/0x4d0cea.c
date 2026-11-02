// rea decompile_all
// name: FUN_004d0cea
// address: 0x4d0cea
// body: available
// range: 0x4d0cea-0x4d0d36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0cea(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  
  iVar4 = thunk_FUN_004c1d58();
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  iVar4 = *(int *)(iVar4 + 0x30);
  uVar2 = *(undefined4 *)(in_ECX + 0x18);
  uVar5 = FUN_004c32c9(in_ECX);
  uVar5 = uVar5 & 0xff;
  uVar3 = FUN_004c3305(in_ECX);
  (**(code **)(iVar4 + 4))(param_1,uVar2,uVar1,uVar3,uVar5);
  return;
}

