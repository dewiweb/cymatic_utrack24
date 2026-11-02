// rea decompile_all
// name: FUN_00568dc0
// address: 0x568dc0
// body: available
// range: 0x568dc0-0x568e94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_00568dc0(int *param_1)

{
  byte bVar1;
  char cVar2;
  int *in_ECX;
  int iVar3;
  
  *param_1 = 0;
  cVar2 = FUN_00558fe0();
  if (cVar2 != '\0') {
    cVar2 = FUN_00558fe0();
    if (cVar2 != '\0') {
      bVar1 = 1;
      goto LAB_00568e06;
    }
  }
  bVar1 = 0;
LAB_00568e06:
  if ((*(byte *)((int)in_ECX + 0xfe) >> 2 & 1) != bVar1) {
    *(byte *)((int)in_ECX + 0xfe) = *(byte *)((int)in_ECX + 0xfe) & 0xfb | bVar1 << 2;
    cVar2 = (**(code **)(*in_ECX + 0x34))(bVar1);
    if (cVar2 == '\0') {
      iVar3 = 2 - (uint)(bVar1 != 0);
      if (*param_1 < iVar3) {
        *param_1 = iVar3;
      }
    }
  }
  return bVar1;
}

