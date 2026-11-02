// rea decompile_all
// name: FUN_0042948b
// address: 0x42948b
// body: available
// range: 0x42948b-0x429652 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042948b(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EBX;
  undefined4 *puVar4;
  uint local_8;
  
  *unaff_EBX = param_1;
  unaff_EBX[1] = in_EAX;
  if (in_EAX != 0) {
    unaff_EBX[99] = *(undefined4 *)(in_EAX + 0x74);
    unaff_EBX[100] = *(undefined4 *)(in_EAX + 0x78);
    unaff_EBX[0x66] = *(undefined4 *)(in_EAX + 0x80);
    unaff_EBX[0x67] = *(undefined4 *)(in_EAX + 0x84);
    unaff_EBX[0x65] = *(undefined4 *)(in_EAX + 0x7c);
    unaff_EBX[0x68] = *(undefined4 *)(in_EAX + 0x88);
    puVar3 = (undefined4 *)(in_EAX + 0x48);
    puVar2 = unaff_EBX + 0x3d;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar3 = (undefined4 *)(in_EAX + 0x2c);
    puVar2 = unaff_EBX + 0x36;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
    unaff_EBX[0x69] = *(undefined4 *)(in_EAX + 0x8c);
    unaff_EBX[0x6a] = *(undefined4 *)(in_EAX + 0x90);
    puVar3 = unaff_EBX + 0x6f;
    puVar2 = (undefined4 *)(in_EAX + 0x94);
    iVar1 = 3;
    do {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar3 = (undefined4 *)(in_EAX + 0xac);
    puVar2 = unaff_EBX + 0x47;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
    unaff_EBX[0x5f] = *(undefined4 *)(in_EAX + 0xf0);
    unaff_EBX[0x60] = *(undefined4 *)(in_EAX + 0xf4);
    *(undefined2 *)(unaff_EBX + 0x75) = *(undefined2 *)(in_EAX + 0xf8);
    unaff_EBX[0x76] = *(undefined4 *)(in_EAX + 0xfc);
    puVar3 = (undefined4 *)(in_EAX + 0x100);
    puVar2 = unaff_EBX + 0x2d;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
    _memset(unaff_EBX + 9,0,0x24);
    puVar3 = unaff_EBX + 9;
    puVar2 = unaff_EBX + 0x12;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar3 = unaff_EBX + 9;
    puVar2 = unaff_EBX + 0x1b;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  local_8 = unaff_EBX[5];
  iVar1 = FUN_00429450(&local_8,4);
  unaff_EBX[5] = local_8;
  if (iVar1 == 0) {
    local_8 = unaff_EBX[0x61];
    iVar1 = FUN_00429450(&local_8,1);
    unaff_EBX[0x61] = local_8 & 0xffff;
    if (iVar1 == 0) {
      *(undefined2 *)(unaff_EBX + 0x26) = 0;
      *(undefined2 *)((int)unaff_EBX + 0x9a) = 0;
      puVar3 = unaff_EBX + 0x24;
      puVar2 = puVar3;
      puVar4 = unaff_EBX + 0x12;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar2 = puVar3;
      puVar4 = unaff_EBX + 0x1b;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar2 = unaff_EBX + 9;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar2 = puVar2 + 1;
      }
      *(undefined1 *)(unaff_EBX + 0x7a) = 0;
      iVar1 = 0;
    }
  }
  return iVar1;
}

