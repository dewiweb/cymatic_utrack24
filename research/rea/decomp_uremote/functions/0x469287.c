// rea decompile_all
// name: FUN_00469287
// address: 0x469287
// body: available
// range: 0x469287-0x46936a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00469287(void)

{
  uint _Size;
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  int *unaff_EDI;
  uint local_8;
  
  _Size = unaff_EDI[0xb];
  while( true ) {
    iVar3 = (unaff_EDI[0xf] - unaff_EDI[0x1d]) - unaff_EDI[0x1b];
    if ((_Size - 0x106) + unaff_EDI[0xb] <= (uint)unaff_EDI[0x1b]) {
      _memcpy((void *)unaff_EDI[0xe],(void *)(unaff_EDI[0xe] + _Size),_Size);
      local_8 = unaff_EDI[0x13];
      unaff_EDI[0x1c] = unaff_EDI[0x1c] - _Size;
      unaff_EDI[0x1b] = unaff_EDI[0x1b] - _Size;
      unaff_EDI[0x17] = unaff_EDI[0x17] - _Size;
      puVar1 = (ushort *)(unaff_EDI[0x11] + local_8 * 2);
      do {
        puVar1 = puVar1 + -1;
        local_8 = local_8 + -1;
        *puVar1 = ~-(ushort)(*puVar1 < _Size) & *puVar1 - (short)_Size;
      } while (local_8 != 0);
      puVar1 = (ushort *)(unaff_EDI[0x10] + _Size * 2);
      local_8 = _Size;
      do {
        puVar1 = puVar1 + -1;
        local_8 = local_8 - 1;
        *puVar1 = ~-(ushort)(*puVar1 < _Size) & *puVar1 - (short)_Size;
      } while (local_8 != 0);
      iVar3 = iVar3 + _Size;
    }
    if (*(int *)(*unaff_EDI + 4) == 0) break;
    iVar3 = FUN_00468fd6(unaff_EDI[0x1d] + unaff_EDI[0x1b] + unaff_EDI[0xe],iVar3);
    unaff_EDI[0x1d] = unaff_EDI[0x1d] + iVar3;
    if (2 < (uint)unaff_EDI[0x1d]) {
      uVar2 = (uint)*(byte *)(unaff_EDI[0x1b] + unaff_EDI[0xe]);
      unaff_EDI[0x12] = uVar2;
      unaff_EDI[0x12] =
           (uVar2 << ((byte)unaff_EDI[0x16] & 0x1f) ^
           (uint)((byte *)(unaff_EDI[0x1b] + unaff_EDI[0xe]))[1]) & unaff_EDI[0x15];
    }
    if (0x105 < (uint)unaff_EDI[0x1d]) {
      return;
    }
    if (*(int *)(*unaff_EDI + 4) == 0) {
      return;
    }
  }
  return;
}

