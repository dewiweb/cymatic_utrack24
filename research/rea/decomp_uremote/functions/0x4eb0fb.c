// rea decompile_all
// name: FUN_004eb0fb
// address: 0x4eb0fb
// body: available
// range: 0x4eb0fb-0x4eb168 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb0fb(undefined4 param_1)

{
  char cVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined4 uStack_2c;
  float fStack_28;
  undefined1 local_18 [20];
  
  cVar1 = FUN_004e97e8();
  if (cVar1 == '\0') {
    FUN_004eb320(param_1);
  }
  else {
    (**(code **)(*(int *)(in_EAX + 0x70) + 0x1c))(local_18);
    FUN_0043bc2d();
    uVar2 = FUN_004ec244(uStack_2c,fStack_28 - 1.0);
    FUN_004eb080(in_EAX,uVar2,param_1);
  }
  return;
}

