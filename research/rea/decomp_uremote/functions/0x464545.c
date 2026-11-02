// rea decompile_all
// name: FUN_00464545
// address: 0x464545
// body: available
// range: 0x464545-0x4645b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00464545(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  sbyte sVar3;
  uint uVar4;
  int *unaff_EDI;
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  uVar1 = in_EAX & 7;
  uVar4 = in_EAX >> 3;
  local_c = 0;
  local_8 = 6;
  do {
    if ((uint)unaff_EDI[1] <= uVar4) {
      return local_10;
    }
    iVar2 = FUN_004706a0(local_8);
    local_8 = local_8 - iVar2;
    sVar3 = (sbyte)uVar1;
    uVar1 = 0;
    local_10 = local_10 |
               (((0xff >> (8U - (char)iVar2 & 0x1f)) << sVar3 & (int)*(char *)(*unaff_EDI + uVar4))
               >> sVar3) << ((byte)local_c & 0x1f);
    uVar4 = uVar4 + 1;
    local_c = local_c + iVar2;
  } while (local_8 != 0);
  return local_10;
}

