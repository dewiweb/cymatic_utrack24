// rea decompile_all
// name: FUN_0046c79f
// address: 0x46c79f
// body: available
// range: 0x46c79f-0x46c985 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c79f(int param_1)

{
  int iVar1;
  int in_EAX;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  int unaff_EDI;
  int local_8;
  
  local_8 = 0;
  if (in_ECX[0x21] < 1) {
    uVar2 = in_EAX + 5;
  }
  else {
    if ((in_EAX != 0) && (*(int *)(*in_ECX + 0x2c) == 2)) {
      FUN_0046cd39();
    }
    FUN_0046bb7c(in_ECX + 0x2c6);
    FUN_0046bb7c(in_ECX + 0x2c9);
    local_8 = FUN_0046c2c9();
    uVar3 = in_ECX[0x5aa] + 10U >> 3;
    uVar2 = in_ECX[0x5ab] + 10U >> 3;
    if (uVar3 < uVar2) goto LAB_0046c810;
  }
  uVar3 = uVar2;
LAB_0046c810:
  if ((uVar3 < in_EAX + 4U) || (param_1 == 0)) {
    if ((in_ECX[0x22] == 4) || (uVar2 == uVar3)) {
      iVar1 = in_ECX[0x5af];
      if (iVar1 < 0xe) {
        *(ushort *)(in_ECX + 0x5ae) =
             *(ushort *)(in_ECX + 0x5ae) | (ushort)(unaff_EDI + 2 << ((byte)iVar1 & 0x1f));
        in_ECX[0x5af] = iVar1 + 3;
      }
      else {
        *(ushort *)(in_ECX + 0x5ae) =
             *(ushort *)(in_ECX + 0x5ae) | (ushort)(unaff_EDI + 2 << ((byte)iVar1 & 0x1f));
        *(char *)(in_ECX[2] + in_ECX[5]) = (char)in_ECX[0x5ae];
        in_ECX[5] = in_ECX[5] + 1;
        *(undefined1 *)(in_ECX[5] + in_ECX[2]) = *(undefined1 *)((int)in_ECX + 0x16b9);
        iVar1 = in_ECX[0x5af];
        in_ECX[5] = in_ECX[5] + 1;
        in_ECX[0x5af] = iVar1 + -0xd;
        *(ushort *)(in_ECX + 0x5ae) = (ushort)(unaff_EDI + 2) >> (0x10U - (char)iVar1 & 0x1f);
      }
      FUN_0046c986(&DAT_00601e20,&DAT_006022a0);
    }
    else {
      iVar1 = in_ECX[0x5af];
      if (iVar1 < 0xe) {
        *(ushort *)(in_ECX + 0x5ae) =
             *(ushort *)(in_ECX + 0x5ae) | (ushort)(unaff_EDI + 4 << ((byte)iVar1 & 0x1f));
        in_ECX[0x5af] = iVar1 + 3;
      }
      else {
        *(ushort *)(in_ECX + 0x5ae) =
             *(ushort *)(in_ECX + 0x5ae) | (ushort)(unaff_EDI + 4 << ((byte)iVar1 & 0x1f));
        *(char *)(in_ECX[2] + in_ECX[5]) = (char)in_ECX[0x5ae];
        in_ECX[5] = in_ECX[5] + 1;
        *(undefined1 *)(in_ECX[5] + in_ECX[2]) = *(undefined1 *)((int)in_ECX + 0x16b9);
        iVar1 = in_ECX[0x5af];
        in_ECX[5] = in_ECX[5] + 1;
        in_ECX[0x5af] = iVar1 + -0xd;
        *(ushort *)(in_ECX + 0x5ae) = (ushort)(unaff_EDI + 4) >> (0x10U - (char)iVar1 & 0x1f);
      }
      FUN_0046c32a(in_ECX[0x2c7] + 1,in_ECX[0x2ca] + 1,local_8 + 1);
      FUN_0046c986(in_ECX + 0x25,in_ECX + 0x262);
    }
  }
  else {
    FUN_0046c560(param_1);
  }
  FUN_0046b824();
  if (unaff_EDI != 0) {
    FUN_0046ce07();
  }
  return;
}

