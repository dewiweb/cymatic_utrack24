// rea decompile_all
// name: FUN_004761ad
// address: 0x4761ad
// body: available
// range: 0x4761ad-0x4761f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004761ad(void)

{
  byte *in_EAX;
  undefined4 *in_ECX;
  uint uVar1;
  byte bVar2;
  
  *(undefined4 *)in_EAX = *in_ECX;
  uVar1 = (uint)in_EAX[3];
  if (uVar1 < 0xff) {
    bVar2 = 0;
    if (uVar1 == 0) {
      *in_EAX = 0;
      in_EAX[1] = 0;
    }
    else {
      *in_EAX = (byte)(*in_EAX * uVar1 + 0x7f >> 8);
      in_EAX[1] = (byte)(in_EAX[1] * uVar1 + 0x7f >> 8);
      bVar2 = (byte)(in_EAX[2] * uVar1 + 0x7f >> 8);
    }
    in_EAX[2] = bVar2;
  }
  return;
}

