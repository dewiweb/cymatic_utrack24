// rea decompile_all
// name: FUN_00498d6a
// address: 0x498d6a
// body: available
// range: 0x498d6a-0x498e1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00498d6a(int param_1,uint param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7)

{
  byte bVar1;
  uint uVar2;
  uint *unaff_ESI;
  uint unaff_EDI;
  
  if ((param_1 != 0) && (unaff_ESI != (uint *)0x0)) {
    *(undefined1 *)((int)unaff_ESI + 0x1b) = param_7;
    unaff_ESI[1] = param_2;
    *(undefined1 *)(unaff_ESI + 6) = param_3;
    *(undefined1 *)((int)unaff_ESI + 0x1a) = param_6;
    *unaff_ESI = unaff_EDI;
    *(undefined1 *)((int)unaff_ESI + 0x19) = param_4;
    *(undefined1 *)(unaff_ESI + 7) = param_5;
    FUN_0049065b(param_2,param_3,param_4,param_5,param_6,param_7);
    bVar1 = *(byte *)((int)unaff_ESI + 0x19);
    if ((bVar1 == 3) || ((bVar1 & 2) == 0)) {
      *(undefined1 *)((int)unaff_ESI + 0x1d) = 1;
    }
    else {
      *(undefined1 *)((int)unaff_ESI + 0x1d) = 3;
    }
    if ((bVar1 & 4) != 0) {
      *(char *)((int)unaff_ESI + 0x1d) = *(char *)((int)unaff_ESI + 0x1d) + '\x01';
    }
    bVar1 = (char)unaff_ESI[6] * *(char *)((int)unaff_ESI + 0x1d);
    *(byte *)((int)unaff_ESI + 0x1e) = bVar1;
    if (0x1fffff8e < unaff_EDI) {
      unaff_ESI[3] = 0;
      return;
    }
    if (bVar1 < 8) {
      uVar2 = bVar1 * unaff_EDI + 7 >> 3;
    }
    else {
      uVar2 = (bVar1 >> 3) * unaff_EDI;
    }
    unaff_ESI[3] = uVar2;
  }
  return;
}

