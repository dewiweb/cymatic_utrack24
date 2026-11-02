// rea decompile_all
// name: FUN_0042e370
// address: 0x42e370
// body: available
// range: 0x42e370-0x42e442 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e370(void)

{
  HMIDIIN pHVar1;
  MMRESULT MVar2;
  int *in_ECX;
  LPMIDIHDR pmh;
  double in_XMM0_Qa;
  LARGE_INTEGER local_10;
  int local_8;
  
  if ((*in_ECX != 0) && ((char)in_ECX[10] == '\0')) {
    FUN_00432b30(in_ECX);
    pmh = (LPMIDIHDR)(in_ECX + 0xe);
    local_8 = 0x20;
    do {
      pHVar1 = (HMIDIIN)*in_ECX;
      _memset(pmh,0,0x40);
      pmh->dwBufferLength = 0x100;
      pmh->lpData = (LPSTR)(pmh + 1);
      midiInPrepareHeader(pHVar1,pmh,0x40);
      pHVar1 = (HMIDIIN)*in_ECX;
      pmh->dwBytesRecorded = 0;
      midiInAddBuffer(pHVar1,pmh,0x40);
      pmh = pmh + 5;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    QueryPerformanceCounter(&local_10);
    FUN_006f5730();
    *(double *)(in_ECX + 0xc) = in_XMM0_Qa * _DAT_00c8a910;
    MVar2 = midiInStart((HMIDIIN)*in_ECX);
    if (MVar2 == 0) {
      in_ECX[8] = 0;
      *(undefined1 *)(in_ECX + 9) = 0;
      in_ECX[6] = 0;
      in_ECX[7] = 0;
      *(undefined1 *)(in_ECX + 10) = 1;
      return;
    }
    FUN_0042e520();
  }
  return;
}

