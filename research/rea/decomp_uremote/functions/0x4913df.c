// rea decompile_all
// name: FUN_004913df
// address: 0x4913df
// body: available
// range: 0x4913df-0x49146b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004913df(int param_1)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_ESI;
  
  uVar1 = *(uint *)(in_EAX + 0xd0);
  iVar4 = 0x18;
  iVar2 = 0;
  do {
    uVar5 = uVar1 >> ((byte)iVar4 & 0x1f);
    iVar4 = iVar4 + -8;
    uVar6 = uVar5 & 0xff;
    if ((uVar6 - 0x41 < 0x3a) && ((uVar6 < 0x5b || (0x60 < uVar6)))) {
      *(char *)(iVar2 + unaff_ESI) = (char)uVar5;
      iVar3 = iVar2;
    }
    else {
      *(undefined1 *)(iVar2 + unaff_ESI) = 0x5b;
      *(char *)(iVar2 + 1 + unaff_ESI) = "0123456789ABCDEF"[(int)uVar6 >> 4];
      *(char *)(iVar2 + 2 + unaff_ESI) = "0123456789ABCDEF"[uVar5 & 0xf];
      iVar3 = iVar2 + 3;
      *(undefined1 *)(iVar3 + unaff_ESI) = 0x5d;
    }
    iVar2 = iVar3 + 1;
  } while (-1 < iVar4);
  if (param_1 != 0) {
    *(undefined1 *)(iVar2 + unaff_ESI) = 0x3a;
    iVar4 = 0;
    *(undefined1 *)(iVar3 + 2 + unaff_ESI) = 0x20;
    iVar2 = iVar3 + 3;
    do {
      if (*(char *)(iVar4 + param_1) == '\0') break;
      *(char *)(iVar2 + unaff_ESI) = *(char *)(iVar4 + param_1);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xc3);
  }
  *(undefined1 *)(iVar2 + unaff_ESI) = 0;
  return;
}

