// rea decompile_all
// name: FUN_0042afef
// address: 0x42afef
// body: available
// range: 0x42afef-0x42b09d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042afef(void)

{
  char cVar1;
  ushort uVar2;
  uint *in_EAX;
  int in_ECX;
  int iVar3;
  undefined1 local_34 [16];
  int local_24;
  undefined4 local_10;
  undefined4 local_c;
  short local_8;
  
  if (*in_EAX < 2) {
    cVar1 = FUN_0042ad5d(&local_10,&local_c,local_34);
    if (cVar1 == '\0') {
      if (*(short *)(in_ECX + 0x15c) == 0) {
        uVar2 = *(ushort *)(in_ECX + 0x74);
      }
      else if ((*(short *)(in_ECX + 0x15c) == 1) && (0 < *(short *)(in_ECX + 0x76))) {
        uVar2 = *(short *)(*(int *)(in_ECX + 0x88) + -2 + *(short *)(in_ECX + 0x76) * 2) + 1;
      }
      else {
        uVar2 = 0;
      }
      iVar3 = 0;
      if (uVar2 != 0) {
        do {
          if ((local_24 != *(int *)(in_ECX + 0x7c)) || (local_8 != (short)iVar3)) {
            FUN_0042ae1f(iVar3,local_10,local_c,0);
          }
          iVar3 = iVar3 + 1;
        } while ((ushort)iVar3 < uVar2);
      }
    }
  }
  else if (*(char *)(in_ECX + 0x231) != '\0') {
    *(undefined4 *)(in_ECX + 0xc) = 0x86;
  }
  return;
}

