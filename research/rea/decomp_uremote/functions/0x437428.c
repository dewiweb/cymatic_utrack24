// rea decompile_all
// name: FUN_00437428
// address: 0x437428
// body: available
// range: 0x437428-0x43773c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00437428(void)

{
  byte bVar1;
  undefined4 uVar2;
  int *in_EAX;
  undefined4 *puVar3;
  int iVar4;
  
  if (((in_EAX == (int *)0x0) || (puVar3 = (undefined4 *)in_EAX[7], puVar3 == (undefined4 *)0x0)) ||
     (*in_EAX == 0)) {
LAB_0043764a:
    return -2;
  }
  iVar4 = -5;
LAB_0043763d:
  switch(*puVar3) {
  case 0:
    if (in_EAX[1] == 0) {
      return iVar4;
    }
    iVar4 = 0;
    in_EAX[2] = in_EAX[2] + 1;
    in_EAX[1] = in_EAX[1] + -1;
    *(uint *)(in_EAX[7] + 4) = (uint)*(byte *)*in_EAX;
    puVar3 = (undefined4 *)in_EAX[7];
    uVar2 = puVar3[1];
    *in_EAX = *in_EAX + 1;
    if (((byte)uVar2 & 0xf) == 8) {
      if (((uint)puVar3[1] >> 4) + 8 <= (uint)puVar3[4]) {
        *puVar3 = 1;
        goto switchD_00437456_caseD_1;
      }
      *puVar3 = 0xd;
      in_EAX[6] = (int)"invalid window size";
    }
    else {
      *puVar3 = 0xd;
      in_EAX[6] = (int)"unknown compression method";
    }
    goto LAB_00437630;
  case 1:
switchD_00437456_caseD_1:
    if (in_EAX[1] == 0) {
      return iVar4;
    }
    puVar3 = (undefined4 *)in_EAX[7];
    iVar4 = 0;
    in_EAX[2] = in_EAX[2] + 1;
    in_EAX[1] = in_EAX[1] + -1;
    bVar1 = *(byte *)*in_EAX;
    *in_EAX = (int)((byte *)*in_EAX + 1);
    if ((puVar3[1] * 0x100 + (uint)bVar1) % 0x1f != 0) {
      *puVar3 = 0xd;
      in_EAX[6] = (int)"incorrect header check";
      goto LAB_00437630;
    }
    if ((bVar1 & 0x20) != 0) {
      *(undefined4 *)in_EAX[7] = 2;
      goto switchD_00437456_caseD_2;
    }
    *puVar3 = 7;
    break;
  case 2:
switchD_00437456_caseD_2:
    if (in_EAX[1] == 0) {
      return iVar4;
    }
    iVar4 = 0;
    in_EAX[2] = in_EAX[2] + 1;
    in_EAX[1] = in_EAX[1] + -1;
    *(uint *)(in_EAX[7] + 8) = (uint)*(byte *)*in_EAX << 0x18;
    *in_EAX = *in_EAX + 1;
    *(undefined4 *)in_EAX[7] = 3;
  case 3:
    goto switchD_00437456_caseD_3;
  case 4:
    goto switchD_00437456_caseD_4;
  case 5:
    goto switchD_00437456_caseD_5;
  case 6:
    *(undefined4 *)in_EAX[7] = 0xd;
    in_EAX[6] = (int)"need dictionary";
    *(undefined4 *)(in_EAX[7] + 4) = 0;
    return -2;
  case 7:
    iVar4 = FUN_00436ad8(*(undefined4 *)(in_EAX[7] + 0x14),iVar4);
    if (iVar4 == -3) {
      *(undefined4 *)in_EAX[7] = 0xd;
      *(undefined4 *)(in_EAX[7] + 4) = 0;
      iVar4 = -3;
    }
    else {
      if (iVar4 != 1) {
        return iVar4;
      }
      iVar4 = 0;
      FUN_004369fd();
      puVar3 = (undefined4 *)in_EAX[7];
      if (puVar3[3] == 0) {
        *puVar3 = 8;
        goto switchD_00437456_caseD_8;
      }
      *puVar3 = 0xc;
    }
    break;
  case 8:
switchD_00437456_caseD_8:
    if (in_EAX[1] == 0) {
      return iVar4;
    }
    iVar4 = 0;
    in_EAX[2] = in_EAX[2] + 1;
    in_EAX[1] = in_EAX[1] + -1;
    *(uint *)(in_EAX[7] + 8) = (uint)*(byte *)*in_EAX << 0x18;
    *in_EAX = *in_EAX + 1;
    *(undefined4 *)in_EAX[7] = 9;
  case 9:
    if (in_EAX[1] == 0) {
      return iVar4;
    }
    iVar4 = 0;
    in_EAX[2] = in_EAX[2] + 1;
    in_EAX[1] = in_EAX[1] + -1;
    *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x10000;
    *in_EAX = *in_EAX + 1;
    *(undefined4 *)in_EAX[7] = 10;
  case 10:
    goto switchD_00437456_caseD_a;
  case 0xb:
    goto switchD_00437456_caseD_b;
  case 0xc:
    goto LAB_0043764a;
  case 0xd:
    return -3;
  default:
    goto LAB_0043764a;
  }
LAB_0043763a:
  puVar3 = (undefined4 *)in_EAX[7];
  goto LAB_0043763d;
switchD_00437456_caseD_a:
  if (in_EAX[1] == 0) {
    return iVar4;
  }
  iVar4 = 0;
  in_EAX[2] = in_EAX[2] + 1;
  in_EAX[1] = in_EAX[1] + -1;
  *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x100;
  *in_EAX = *in_EAX + 1;
  *(undefined4 *)in_EAX[7] = 0xb;
switchD_00437456_caseD_b:
  if (in_EAX[1] == 0) {
    return iVar4;
  }
  in_EAX[2] = in_EAX[2] + 1;
  in_EAX[1] = in_EAX[1] + -1;
  *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX;
  puVar3 = (undefined4 *)in_EAX[7];
  *in_EAX = *in_EAX + 1;
  if (puVar3[1] == puVar3[2]) {
    *(undefined4 *)in_EAX[7] = 0xc;
LAB_0043764a:
    return 1;
  }
  *puVar3 = 0xd;
  in_EAX[6] = (int)"incorrect data check";
LAB_00437630:
  iVar4 = 0;
  *(undefined4 *)(in_EAX[7] + 4) = 5;
  goto LAB_0043763a;
switchD_00437456_caseD_3:
  if (in_EAX[1] == 0) {
    return iVar4;
  }
  iVar4 = 0;
  in_EAX[2] = in_EAX[2] + 1;
  in_EAX[1] = in_EAX[1] + -1;
  *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x10000;
  *in_EAX = *in_EAX + 1;
  *(undefined4 *)in_EAX[7] = 4;
switchD_00437456_caseD_4:
  if (in_EAX[1] == 0) {
    return iVar4;
  }
  iVar4 = 0;
  in_EAX[2] = in_EAX[2] + 1;
  in_EAX[1] = in_EAX[1] + -1;
  *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x100;
  *in_EAX = *in_EAX + 1;
  *(undefined4 *)in_EAX[7] = 5;
switchD_00437456_caseD_5:
  if (in_EAX[1] != 0) {
    in_EAX[2] = in_EAX[2] + 1;
    in_EAX[1] = in_EAX[1] + -1;
    *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX;
    *in_EAX = *in_EAX + 1;
    in_EAX[0xc] = ((undefined4 *)in_EAX[7])[2];
    *(undefined4 *)in_EAX[7] = 6;
    return 2;
  }
  return iVar4;
}

