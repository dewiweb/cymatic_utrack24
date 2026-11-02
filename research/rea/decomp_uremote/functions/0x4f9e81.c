// rea decompile_all
// name: FUN_004f9e81
// address: 0x4f9e81
// body: available
// range: 0x4f9e81-0x4f9eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9e81(undefined4 param_1,undefined4 param_2)

{
  int *in_EAX;
  int iVar1;
  undefined1 local_10 [12];
  
  FUN_004c4e62();
  iVar1 = FUN_004c5088();
  in_EAX[0x28] = iVar1;
  FUN_00467eb1(local_10);
  FUN_00467e6f();
  FUN_004c06f2(1);
  (**(code **)(*in_EAX + 0x28))(1);
  FUN_004c0c77(in_EAX,param_1,param_2);
  (**(code **)(*in_EAX + 0x30))(0x100,0);
  FUN_004c052f(0);
  return;
}

