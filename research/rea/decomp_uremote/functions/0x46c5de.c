// rea decompile_all
// name: FUN_0046c5de
// address: 0x46c5de
// body: available
// range: 0x46c5de-0x46c79e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c5de(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0x16bc);
  *(ushort *)(in_EAX + 0x16b8) = *(ushort *)(in_EAX + 0x16b8) | (ushort)(2 << ((byte)iVar1 & 0x1f));
  if (iVar1 < 0xe) {
    *(int *)(in_EAX + 0x16bc) = iVar1 + 3;
  }
  else {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    iVar1 = *(int *)(in_EAX + 0x16bc);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16bc) = iVar1 + -0xd;
    *(ushort *)(in_EAX + 0x16b8) = 2 >> (0x10U - (char)iVar1 & 0x1f);
  }
  iVar1 = *(int *)(in_EAX + 0x16bc);
  *(ushort *)(in_EAX + 0x16b8) = *(ushort *)(in_EAX + 0x16b8) | (ushort)(0 << ((byte)iVar1 & 0x1f));
  if (iVar1 < 10) {
    *(int *)(in_EAX + 0x16bc) = iVar1 + 7;
  }
  else {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    iVar1 = *(int *)(in_EAX + 0x16bc);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16bc) = iVar1 + -9;
    *(ushort *)(in_EAX + 0x16b8) = 0 >> (0x10U - (char)iVar1 & 0x1f);
  }
  iVar2 = FUN_0046cd9a();
  iVar1 = *(int *)(iVar2 + 0x16bc);
  if ((*(int *)(iVar2 + 0x16b4) - iVar1) + 0xb < 9) {
    *(ushort *)(iVar2 + 0x16b8) = *(ushort *)(iVar2 + 0x16b8) | (ushort)(2 << ((byte)iVar1 & 0x1f));
    if (iVar1 < 0xe) {
      *(int *)(iVar2 + 0x16bc) = iVar1 + 3;
    }
    else {
      *(undefined1 *)(*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x14)) =
           *(undefined1 *)(iVar2 + 0x16b8);
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      *(undefined1 *)(*(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 8)) =
           *(undefined1 *)(iVar2 + 0x16b9);
      iVar1 = *(int *)(iVar2 + 0x16bc);
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      *(int *)(iVar2 + 0x16bc) = iVar1 + -0xd;
      *(ushort *)(iVar2 + 0x16b8) = 2 >> (0x10U - (char)iVar1 & 0x1f);
    }
    iVar1 = *(int *)(iVar2 + 0x16bc);
    *(ushort *)(iVar2 + 0x16b8) = *(ushort *)(iVar2 + 0x16b8) | (ushort)(0 << ((byte)iVar1 & 0x1f));
    if (iVar1 < 10) {
      *(int *)(iVar2 + 0x16bc) = iVar1 + 7;
    }
    else {
      *(undefined1 *)(*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x14)) =
           *(undefined1 *)(iVar2 + 0x16b8);
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      *(undefined1 *)(*(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 8)) =
           *(undefined1 *)(iVar2 + 0x16b9);
      iVar1 = *(int *)(iVar2 + 0x16bc);
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      *(int *)(iVar2 + 0x16bc) = iVar1 + -9;
      *(ushort *)(iVar2 + 0x16b8) = 0 >> (0x10U - (char)iVar1 & 0x1f);
    }
    iVar2 = FUN_0046cd9a();
  }
  *(undefined4 *)(iVar2 + 0x16b4) = 7;
  return;
}

