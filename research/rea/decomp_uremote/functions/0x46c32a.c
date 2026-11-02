// rea decompile_all
// name: FUN_0046c32a
// address: 0x46c32a
// body: available
// range: 0x46c32a-0x46c55f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c32a(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  
  iVar3 = *(int *)(in_EAX + 0x16bc);
  if (iVar3 < 0xc) {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_1 + -0x101 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16bc) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_1 + -0x101 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    iVar3 = *(int *)(in_EAX + 0x16bc);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16bc) = iVar3 + -0xb;
    *(ushort *)(in_EAX + 0x16b8) = (ushort)(param_1 + -0x101) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_EAX + 0x16bc);
  if (iVar3 < 0xc) {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_2 + -1 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16bc) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_2 + -1 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    iVar3 = *(int *)(in_EAX + 0x16bc);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16bc) = iVar3 + -0xb;
    *(ushort *)(in_EAX + 0x16b8) = (ushort)(param_2 + -1) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_EAX + 0x16bc);
  if (iVar3 < 0xd) {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_3 + -4 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16bc) = iVar3 + 4;
  }
  else {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | (ushort)(param_3 + -4 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    iVar3 = *(int *)(in_EAX + 0x16bc);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16bc) = iVar3 + -0xc;
    *(ushort *)(in_EAX + 0x16b8) = (ushort)(param_3 + -4) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = *(int *)(in_EAX + 0x16bc);
      if (iVar2 < 0xe) {
        *(ushort *)(in_EAX + 0x16b8) =
             *(ushort *)(in_EAX + 0x16b8) |
             *(short *)(in_EAX + 0xa7e + (uint)(byte)(&DAT_005ffc54)[iVar3] * 4) <<
             ((byte)iVar2 & 0x1f);
        *(int *)(in_EAX + 0x16bc) = iVar2 + 3;
      }
      else {
        uVar1 = *(ushort *)(in_EAX + 0xa7e + (uint)(byte)(&DAT_005ffc54)[iVar3] * 4);
        *(ushort *)(in_EAX + 0x16b8) = *(ushort *)(in_EAX + 0x16b8) | uVar1 << ((byte)iVar2 & 0x1f);
        *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
             *(undefined1 *)(in_EAX + 0x16b8);
        *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
        *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
             *(undefined1 *)(in_EAX + 0x16b9);
        iVar2 = *(int *)(in_EAX + 0x16bc);
        *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
        *(int *)(in_EAX + 0x16bc) = iVar2 + -0xd;
        *(ushort *)(in_EAX + 0x16b8) = uVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  FUN_0046be2f();
  FUN_0046be2f();
  return;
}

