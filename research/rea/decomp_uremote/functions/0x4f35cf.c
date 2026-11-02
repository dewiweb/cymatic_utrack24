// rea decompile_all
// name: FUN_004f35cf
// address: 0x4f35cf
// body: available
// range: 0x4f35cf-0x4f364f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f35cf(undefined4 param_1)

{
  int in_EAX;
  UINT UVar1;
  uint in_ECX;
  uint uCode;
  uint uVar2;
  
  FUN_004f1b01();
  uCode = in_EAX >> 0x10 & 0xff;
  uVar2 = in_ECX;
  if (in_ECX - 0x30 < 10) {
    if ((0x46 < uCode) &&
       ((uCode < 0x4a || ((0x4a < uCode && ((uCode < 0x4e || ((0x4e < uCode && (uCode < 0x53))))))))
       )) {
      uVar2 = in_ECX + 0x10030;
    }
  }
  else {
    UVar1 = MapVirtualKeyW(uCode,1);
    UVar1 = MapVirtualKeyW(UVar1,2);
    if ((UVar1 & 0xffff) != 0) {
      uVar2 = UVar1 & 0xffff;
    }
    if ((in_ECX < 0x20) && (((byte)DAT_0095db30 & 6) != 0)) {
      in_ECX = 0;
    }
  }
  FUN_004ed781(param_1,uVar2,in_ECX);
  return;
}

