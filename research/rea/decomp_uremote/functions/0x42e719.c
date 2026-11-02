// rea decompile_all
// name: FUN_0042e719
// address: 0x42e719
// body: available
// range: 0x42e719-0x42e9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042e719(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int *unaff_EBX;
  byte *pbVar7;
  size_t _Size;
  int local_18;
  int local_10;
  int local_c;
  short local_8 [2];
  
  local_c = 0;
  if ((char)unaff_EBX[0x17] == '\0') {
    pbVar6 = (byte *)unaff_EBX[0x13];
    pbVar4 = pbVar6 + unaff_EBX[0x14];
    pbVar7 = pbVar6;
    do {
      while (((((*pbVar6 != 0x65 || (pbVar4 <= pbVar6 + 9)) || (pbVar6[1] != 0x65)) ||
              ((pbVar6[2] != 0x78 || (pbVar6[3] != 0x65)))) || (pbVar6[4] != 99))) {
        pbVar6 = pbVar6 + 1;
        if (pbVar4 <= pbVar6) {
          return 3;
        }
      }
      pbVar6 = pbVar6 + 9;
      *unaff_EBX = (int)pbVar7;
      unaff_EBX[2] = (int)pbVar6;
      while (pbVar7 < pbVar6) {
        if ((*pbVar7 == 0x65) && (iVar2 = _strncmp((char *)pbVar7,"eexec",5), iVar2 == 0)) {
          unaff_EBX[2] = unaff_EBX[0x13] + unaff_EBX[0x14];
          (*(code *)unaff_EBX[8])();
          pbVar7 = (byte *)*unaff_EBX;
          if (pbVar6 <= pbVar7) {
            return 3;
          }
          goto LAB_0042e8ad;
        }
        (*(code *)unaff_EBX[8])();
        if (unaff_EBX[3] != 0) break;
        (*(code *)unaff_EBX[7])();
        pbVar7 = (byte *)*unaff_EBX;
      }
      pbVar7 = (byte *)unaff_EBX[0x13];
      pbVar4 = pbVar7 + unaff_EBX[0x14];
    } while( true );
  }
  FUN_004d021d();
  unaff_EBX[0x16] = 0;
  while( true ) {
    local_c = FUN_0042e4d2(local_8,&local_10);
    if (local_c != 0) {
      return local_c;
    }
    if (local_8[0] != -0x7ffe) break;
    unaff_EBX[0x16] = unaff_EBX[0x16] + local_10;
    local_c = FUN_00411095(local_10);
    if (local_c != 0) {
      return local_c;
    }
  }
  if (unaff_EBX[0x16] == 0) {
    return 3;
  }
  local_c = FUN_0041106d();
  if (local_c != 0) {
    return local_c;
  }
  iVar2 = FUN_00411912(unaff_EBX[0x16],&local_c);
  unaff_EBX[0x15] = iVar2;
  if (local_c != 0) {
    return local_c;
  }
  unaff_EBX[0x16] = 0;
  while ((iVar3 = FUN_0042e4d2(local_8,&local_10), iVar2 = local_10, iVar3 == 0 &&
         (local_8[0] == -0x7ffe))) {
    iVar3 = FUN_004110b4(unaff_EBX[0x16] + unaff_EBX[0x15],local_10);
    if (iVar3 != 0) {
      return iVar3;
    }
    unaff_EBX[0x16] = unaff_EBX[0x16] + iVar2;
    local_c = 0;
  }
  local_c = 0;
  goto LAB_0042e9ae;
  while (pbVar7 = pbVar7 + 1, pbVar7 < pbVar6) {
LAB_0042e8ad:
    bVar1 = *pbVar7;
    if ((((bVar1 != 0x20) && (bVar1 != 9)) && (bVar1 != 0xd)) && (bVar1 != 10)) break;
  }
  if (pbVar6 <= pbVar7) {
    return 3;
  }
  iVar2 = unaff_EBX[0x13];
  _Size = (iVar2 - (int)pbVar7) + unaff_EBX[0x14];
  if (*(char *)((int)unaff_EBX + 0x5d) == '\0') {
    unaff_EBX[0x13] = 0;
    unaff_EBX[0x14] = 0;
    *(undefined1 *)((int)unaff_EBX + 0x5e) = 1;
    unaff_EBX[0x15] = iVar2;
  }
  else {
    iVar2 = FUN_00411912(_Size + 1,&local_c);
    unaff_EBX[0x15] = iVar2;
    if (local_c != 0) {
      return local_c;
    }
  }
  unaff_EBX[0x16] = _Size;
  uVar5 = (uint)*pbVar7;
  if ((((((uVar5 - 0x30 < 10) || (uVar5 - 0x61 < 6)) || (uVar5 - 0x41 < 6)) &&
       (((uVar5 = (uint)pbVar7[1], uVar5 - 0x30 < 10 || (uVar5 - 0x61 < 6)) || (uVar5 - 0x41 < 6))))
      && (((uVar5 = (uint)pbVar7[2], uVar5 - 0x30 < 10 || (uVar5 - 0x61 < 6)) || (uVar5 - 0x41 < 6))
         )) && (((uVar5 = (uint)pbVar7[3], uVar5 - 0x30 < 10 || (uVar5 - 0x61 < 6)) ||
                (uVar5 - 0x41 < 6)))) {
    *unaff_EBX = (int)pbVar7;
    (**(code **)(*(int *)(param_1 + 4) + 0x18))();
    unaff_EBX[0x16] = local_18;
    *(undefined1 *)(local_18 + unaff_EBX[0x15]) = 0;
  }
  else {
    _memmove((void *)unaff_EBX[0x15],pbVar7,_Size);
  }
LAB_0042e9ae:
  (**(code **)(param_1 + 0x10))(unaff_EBX[0x15],unaff_EBX[0x16],0xd971);
  if ((uint)unaff_EBX[0x16] < 4) {
    return 3;
  }
  *(undefined1 *)unaff_EBX[0x15] = 0x20;
  *(undefined1 *)(unaff_EBX[0x15] + 1) = 0x20;
  *(undefined1 *)(unaff_EBX[0x15] + 2) = 0x20;
  *(undefined1 *)(unaff_EBX[0x15] + 3) = 0x20;
  iVar2 = unaff_EBX[0x15];
  unaff_EBX[1] = iVar2;
  *unaff_EBX = iVar2;
  unaff_EBX[2] = unaff_EBX[0x16] + iVar2;
  return local_c;
}

