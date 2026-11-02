// rea decompile_all
// name: FUN_00541300
// address: 0x541300
// body: available
// range: 0x541300-0x5413c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00541300(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  FUN_0054f6b0();
  *(undefined1 *)(in_ECX + -0x26) = 1;
  *(undefined2 *)(in_ECX + -0x2c) = param_2;
  *(undefined2 *)(in_ECX + -0x2a) = param_3;
  *(undefined2 *)(in_ECX + -0x28) = param_4;
  (**(code **)(*(int *)(*(int *)(in_ECX + -0x30) + 0x28 +
                       *(int *)(*(int *)(*(int *)(in_ECX + -0x30) + 0x28) + 0xc)) + 0x18))();
  iVar1 = *(int *)(in_ECX + -0x30);
  uVar2 = FUN_00503c30(param_1,0xfffe);
  (**(code **)(*(int *)(iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc)) + 0x1c))(uVar2);
  FUN_0054f6f0();
  return;
}

