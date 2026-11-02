// rea decompile_all
// name: FUN_004daa9e
// address: 0x4daa9e
// body: available
// range: 0x4daa9e-0x4dab6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004daa9e(undefined4 param_1,undefined4 param_2,float param_3,float param_4)

{
  int iVar1;
  int *in_ECX;
  float local_34;
  undefined1 *local_1c [2];
  undefined4 uStack_14;
  
  local_34 = 7.132573e-39;
  FUN_004c3153();
  local_1c[0] = (undefined1 *)&local_34;
  FUN_004c1e29(local_1c);
  FUN_00476237();
  FUN_0047cda7();
  local_34 = param_3;
  iVar1 = FUN_00440367();
  local_34 = (float)iVar1 * 0.65;
  FUN_0047ceb8();
  local_34 = param_4;
  (**(code **)(*in_ECX + 0x10))();
  FUN_0047d12a(3,local_1c[0],(int)((float)iVar1 * 0.65) + -5,uStack_14);
  return;
}

