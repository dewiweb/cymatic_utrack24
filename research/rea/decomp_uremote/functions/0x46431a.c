// rea decompile_all
// name: FUN_0046431a
// address: 0x46431a
// body: available
// range: 0x46431a-0x46437e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046431a(void)

{
  uint *in_EAX;
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_004642fe((uint)in_EAX ^ _DAT_0095db50,(int)in_EAX >> 0x1f ^ _DAT_0095db54);
  uVar1 = FUN_00467ec4();
  FUN_004642fe(uVar1,0);
  uVar2 = FUN_0046d498();
  FUN_004642fe(uVar2);
  uVar2 = FUN_0046d48c();
  FUN_004642fe(uVar2);
  uVar2 = FUN_00467e7a();
  FUN_004642fe(uVar2);
  _DAT_0095db50 = _DAT_0095db50 ^ *in_EAX;
  _DAT_0095db54 = _DAT_0095db54 ^ in_EAX[1];
  return;
}

