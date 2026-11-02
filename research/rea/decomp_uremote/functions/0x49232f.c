// rea decompile_all
// name: FUN_0049232f
// address: 0x49232f
// body: available
// range: 0x49232f-0x4923e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049232f(void)

{
  char cVar1;
  uint uVar2;
  int in_EAX;
  short sVar3;
  short sVar4;
  
  if ((*(byte *)(in_EAX + 0x10b) & 4) == 0) {
    *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) & 0xff7fffff;
    *(uint *)(in_EAX + 0x2c) = *(uint *)(in_EAX + 0x2c) & 0xffffdfff;
    if (*(short *)(in_EAX + 0x104) == 0) {
      *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) & 0xfffffe7f;
    }
  }
  uVar2 = *(uint *)(in_EAX + 0x30);
  if ((((uVar2 & 0x100) != 0) && ((uVar2 & 0x1000) != 0)) && ((*(byte *)(in_EAX + 0x10b) & 2) == 0))
  {
    sVar3 = *(short *)(in_EAX + 0x124);
    sVar4 = *(short *)(in_EAX + 0x174);
    cVar1 = *(char *)(in_EAX + 0x10c);
    if (cVar1 == '\x01') {
      sVar3 = sVar3 * 0xff;
      sVar4 = sVar4 * 0xff;
    }
    else if (cVar1 == '\x02') {
      sVar3 = sVar3 * 0x55;
      sVar4 = sVar4 * 0x55;
    }
    else if (cVar1 == '\x04') {
      sVar3 = sVar3 * 0x11;
      sVar4 = sVar4 * 0x11;
    }
    *(short *)(in_EAX + 0x122) = sVar3;
    *(short *)(in_EAX + 0x120) = sVar3;
    *(short *)(in_EAX + 0x11e) = sVar3;
    if ((uVar2 & 0x2000000) == 0) {
      *(short *)(in_EAX + 0x172) = sVar4;
      *(short *)(in_EAX + 0x170) = sVar4;
      *(short *)(in_EAX + 0x16e) = sVar4;
    }
  }
  return;
}

