// rea decompile_all
// name: FUN_00488115
// address: 0x488115
// body: available
// range: 0x488115-0x488300 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00488115(void)

{
  char cVar1;
  int iVar2;
  uint in_EAX;
  int in_ECX;
  int iVar3;
  int *unaff_ESI;
  char *unaff_EDI;
  
  iVar3 = in_EAX + in_ECX;
  if ((((in_EAX < 0xe) || (*unaff_EDI != 'J')) || (unaff_EDI[1] != 'F')) ||
     (((unaff_EDI[2] != 'I' || (unaff_EDI[3] != 'F')) || (unaff_EDI[4] != '\0')))) {
    if (((in_EAX < 6) || (*unaff_EDI != 'J')) ||
       ((unaff_EDI[1] != 'F' ||
        (((unaff_EDI[2] != 'X' || (unaff_EDI[3] != 'X')) || (unaff_EDI[4] != '\0')))))) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x4d;
    }
    else {
      cVar1 = unaff_EDI[5];
      if (cVar1 == '\x10') {
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x6c;
      }
      else if (cVar1 == '\x11') {
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x6d;
      }
      else {
        if (cVar1 != '\x13') {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x59;
          *(uint *)(*unaff_ESI + 0x18) = (uint)(byte)unaff_EDI[5];
          *(int *)(*unaff_ESI + 0x1c) = iVar3;
          goto LAB_004882f8;
        }
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x6e;
      }
    }
  }
  else {
    *(undefined1 *)(unaff_ESI + 0x40) = 1;
    *(char *)((int)unaff_ESI + 0x101) = unaff_EDI[5];
    *(char *)((int)unaff_ESI + 0x102) = unaff_EDI[6];
    *(char *)((int)unaff_ESI + 0x103) = unaff_EDI[7];
    *(ushort *)(unaff_ESI + 0x41) = (ushort)(byte)unaff_EDI[8] * 0x100 + (ushort)(byte)unaff_EDI[9];
    *(ushort *)((int)unaff_ESI + 0x106) =
         (ushort)(byte)unaff_EDI[10] * 0x100 + (ushort)(byte)unaff_EDI[0xb];
    if (*(char *)((int)unaff_ESI + 0x101) != '\x01') {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x77;
      *(uint *)(*unaff_ESI + 0x18) = (uint)*(byte *)((int)unaff_ESI + 0x101);
      *(uint *)(*unaff_ESI + 0x1c) = (uint)*(byte *)((int)unaff_ESI + 0x102);
      (**(code **)(*unaff_ESI + 4))();
    }
    iVar2 = *unaff_ESI;
    *(uint *)(iVar2 + 0x18) = (uint)*(byte *)((int)unaff_ESI + 0x101);
    *(uint *)(iVar2 + 0x1c) = (uint)*(byte *)((int)unaff_ESI + 0x102);
    *(uint *)(iVar2 + 0x20) = (uint)*(ushort *)(unaff_ESI + 0x41);
    *(uint *)(iVar2 + 0x24) = (uint)*(ushort *)((int)unaff_ESI + 0x106);
    *(uint *)(iVar2 + 0x28) = (uint)*(byte *)((int)unaff_ESI + 0x103);
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x57;
    (**(code **)(*unaff_ESI + 4))();
    if (unaff_EDI[0xc] != '\0' || unaff_EDI[0xd] != '\0') {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x5a;
      *(uint *)(*unaff_ESI + 0x18) = (uint)(byte)unaff_EDI[0xc];
      *(uint *)(*unaff_ESI + 0x1c) = (uint)(byte)unaff_EDI[0xd];
      (**(code **)(*unaff_ESI + 4))();
    }
    iVar3 = iVar3 + -0xe;
    if (iVar3 == (uint)(byte)unaff_EDI[0xc] * (uint)(byte)unaff_EDI[0xd] * 3) {
      return;
    }
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x58;
  }
  *(int *)(*unaff_ESI + 0x18) = iVar3;
LAB_004882f8:
  (**(code **)(*unaff_ESI + 4))();
  return;
}

