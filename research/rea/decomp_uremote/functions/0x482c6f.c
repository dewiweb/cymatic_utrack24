// rea decompile_all
// name: FUN_00482c6f
// address: 0x482c6f
// body: available
// range: 0x482c6f-0x483010 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482c6f(void)

{
  int *in_EAX;
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (in_EAX[5] != 100) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x14;
    *(int *)(*in_EAX + 0x18) = in_EAX[5];
    (**(code **)*in_EAX)();
  }
  if (in_EAX[0x11] == 0) {
    iVar1 = (**(code **)in_EAX[1])();
    in_EAX[0x11] = iVar1;
  }
  in_EAX[0xe] = 8;
  FUN_00482b9d();
  FUN_00482c1b();
  piVar2 = in_EAX + 0x22;
  iVar1 = 0x10;
  do {
    *(undefined1 *)(piVar2 + -4) = 0;
    *(undefined1 *)piVar2 = 1;
    *(undefined1 *)(piVar2 + 4) = 5;
    piVar2 = (int *)((int)piVar2 + 1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  in_EAX[0x2b] = 0;
  in_EAX[0x2a] = 0;
  *(undefined1 *)(in_EAX + 0x2c) = 0;
  *(undefined1 *)((int)in_EAX + 0xb1) = 0;
  *(undefined1 *)((int)in_EAX + 0xb2) = 0;
  if (8 < in_EAX[0xe]) {
    *(undefined1 *)((int)in_EAX + 0xb2) = 1;
  }
  *(undefined1 *)((int)in_EAX + 0xb3) = 0;
  in_EAX[0x2d] = 0;
  in_EAX[0x2e] = 0;
  in_EAX[0x2f] = 0;
  in_EAX[0x30] = 0;
  *(undefined1 *)((int)in_EAX + 199) = 0;
  *(undefined1 *)((int)in_EAX + 0xc5) = 1;
  *(undefined1 *)((int)in_EAX + 0xc6) = 1;
  *(undefined2 *)(in_EAX + 0x32) = 1;
  *(undefined2 *)((int)in_EAX + 0xca) = 1;
  iVar1 = in_EAX[10];
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if (iVar1 == 1) {
    iVar1 = 1;
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    iVar1 = 3;
  }
  else if (iVar1 == 4) {
    iVar1 = 4;
  }
  else {
    if (iVar1 != 5) {
      *(undefined4 *)(*in_EAX + 0x14) = 9;
      (**(code **)*in_EAX)();
      return;
    }
    iVar1 = 5;
  }
  if (in_EAX[5] != 100) {
    *(undefined4 *)(*in_EAX + 0x14) = 0x14;
    *(int *)(*in_EAX + 0x18) = in_EAX[5];
    (**(code **)*in_EAX)();
  }
  in_EAX[0x10] = iVar1;
  *(undefined1 *)(in_EAX + 0x31) = 0;
  *(undefined1 *)(in_EAX + 0x33) = 0;
  if (iVar1 == 0) {
    iVar1 = in_EAX[9];
    in_EAX[0xf] = iVar1;
    if ((iVar1 < 1) || (10 < iVar1)) {
      *(undefined4 *)(*in_EAX + 0x14) = 0x1a;
      *(int *)(*in_EAX + 0x18) = in_EAX[0xf];
      *(undefined4 *)(*in_EAX + 0x1c) = 10;
      (**(code **)*in_EAX)();
    }
    iVar1 = 0;
    if (in_EAX[0xf] < 1) {
      return;
    }
    iVar3 = 0;
    do {
      piVar2 = (int *)(in_EAX[0x11] + iVar3);
      *piVar2 = iVar1;
      iVar1 = iVar1 + 1;
      piVar2[2] = 1;
      piVar2[3] = 1;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 0;
      iVar3 = iVar3 + 0x54;
    } while (iVar1 < in_EAX[0xf]);
    return;
  }
  if (iVar1 == 1) {
    *(undefined1 *)(in_EAX + 0x31) = 1;
    in_EAX[0xf] = 1;
    puVar4 = (undefined4 *)in_EAX[0x11];
    *puVar4 = 1;
  }
  else if (iVar1 == 2) {
    puVar4 = (undefined4 *)in_EAX[0x11];
    in_EAX[0xf] = 3;
    *(undefined1 *)(in_EAX + 0x33) = 1;
    *puVar4 = 0x52;
    puVar4[2] = 1;
    puVar4[3] = 1;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    iVar1 = in_EAX[0x11];
    *(undefined4 *)(iVar1 + 0x54) = 0x47;
    *(undefined4 *)(iVar1 + 0x5c) = 1;
    *(undefined4 *)(iVar1 + 0x60) = 1;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    puVar4 = (undefined4 *)(in_EAX[0x11] + 0xa8);
    *puVar4 = 0x42;
  }
  else {
    if (iVar1 == 3) {
      puVar4 = (undefined4 *)in_EAX[0x11];
      in_EAX[0xf] = 3;
      *(undefined1 *)(in_EAX + 0x31) = 1;
      *puVar4 = 1;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[2] = 2;
      puVar4[3] = 2;
      iVar1 = in_EAX[0x11];
      *(undefined4 *)(iVar1 + 0x54) = 2;
      *(undefined4 *)(iVar1 + 0x5c) = 1;
      *(undefined4 *)(iVar1 + 0x60) = 1;
      *(undefined4 *)(iVar1 + 100) = 1;
      *(undefined4 *)(iVar1 + 0x68) = 1;
      *(undefined4 *)(iVar1 + 0x6c) = 1;
      iVar1 = in_EAX[0x11];
      *(undefined4 *)(iVar1 + 0xa8) = 3;
      *(undefined4 *)(iVar1 + 0xb0) = 1;
      *(undefined4 *)(iVar1 + 0xb4) = 1;
      *(undefined4 *)(iVar1 + 0xb8) = 1;
      *(undefined4 *)(iVar1 + 0xbc) = 1;
      *(undefined4 *)(iVar1 + 0xc0) = 1;
      return;
    }
    if (iVar1 != 4) {
      if (iVar1 != 5) {
        *(undefined4 *)(*in_EAX + 0x14) = 10;
        (**(code **)*in_EAX)();
        return;
      }
      puVar4 = (undefined4 *)in_EAX[0x11];
      in_EAX[0xf] = 4;
      *(undefined1 *)(in_EAX + 0x33) = 1;
      *puVar4 = 1;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[2] = 2;
      puVar4[3] = 2;
      iVar1 = in_EAX[0x11];
      *(undefined4 *)(iVar1 + 0x5c) = 1;
      *(undefined4 *)(iVar1 + 0x60) = 1;
      *(undefined4 *)(iVar1 + 100) = 1;
      *(undefined4 *)(iVar1 + 0x68) = 1;
      *(undefined4 *)(iVar1 + 0x6c) = 1;
      *(undefined4 *)(iVar1 + 0x54) = 2;
      iVar1 = in_EAX[0x11];
      *(undefined4 *)(iVar1 + 0xa8) = 3;
      *(undefined4 *)(iVar1 + 0xb0) = 1;
      *(undefined4 *)(iVar1 + 0xb4) = 1;
      *(undefined4 *)(iVar1 + 0xb8) = 1;
      *(undefined4 *)(iVar1 + 0xbc) = 1;
      *(undefined4 *)(iVar1 + 0xc0) = 1;
      iVar1 = in_EAX[0x11];
      puVar4 = (undefined4 *)(iVar1 + 0xfc);
      *puVar4 = 4;
      *(undefined4 *)(iVar1 + 0x104) = 2;
      *(undefined4 *)(iVar1 + 0x108) = 2;
      goto LAB_00482faa;
    }
    puVar4 = (undefined4 *)in_EAX[0x11];
    in_EAX[0xf] = 4;
    *(undefined1 *)(in_EAX + 0x33) = 1;
    *puVar4 = 0x43;
    puVar4[2] = 1;
    puVar4[3] = 1;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    iVar1 = in_EAX[0x11];
    *(undefined4 *)(iVar1 + 0x54) = 0x4d;
    *(undefined4 *)(iVar1 + 0x5c) = 1;
    *(undefined4 *)(iVar1 + 0x60) = 1;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    iVar1 = in_EAX[0x11];
    *(undefined4 *)(iVar1 + 0xa8) = 0x59;
    *(undefined4 *)(iVar1 + 0xb0) = 1;
    *(undefined4 *)(iVar1 + 0xb4) = 1;
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0;
    *(undefined4 *)(iVar1 + 0xc0) = 0;
    puVar4 = (undefined4 *)(in_EAX[0x11] + 0xfc);
    *puVar4 = 0x4b;
  }
  puVar4[2] = 1;
  puVar4[3] = 1;
LAB_00482faa:
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  return;
}

